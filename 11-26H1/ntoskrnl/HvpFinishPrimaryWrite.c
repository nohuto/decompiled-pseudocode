/*
 * XREFs of HvpFinishPrimaryWrite @ 0x140AAACE8
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x140AAAADC (HvWriteHivePrimaryFile.c)
 * Callees:
 *     CmpLogEvent @ 0x1408B67A4 (CmpLogEvent.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, char a2, unsigned __int8 a3, char a4)
{
  _DWORD *v4; // rdi
  char v5; // r14
  int v6; // esi
  int v7; // ebp
  __int64 result; // rax
  __int64 v11; // rcx

  v4 = (_DWORD *)(a1 + 4232);
  v5 = 0;
  v6 = a3;
  v7 = *(_DWORD *)(a1 + 160) & 0x100;
  if ( (a2 == (v7 != 0) || ((*v4 >> 1) & 1) != a3) && !a4 )
  {
    CmpLockRegistry(a1);
    HvLockHiveFlusherExclusive(a1);
    v5 = 1;
  }
  if ( a2 )
  {
    if ( v7 )
      *(_DWORD *)(a1 + 160) &= ~0x100u;
  }
  else if ( !v7 )
  {
    CmpLogEvent(&REG_EVENT_FLUSH_IO_FAIL, -1073741491, (unsigned __int16 *)(a1 + 1848));
    *(_DWORD *)(a1 + 160) |= 0x100u;
  }
  result = (*v4 >> 1) & 1;
  if ( (_DWORD)result != v6 )
  {
    result = *v4 ^ ((unsigned __int8)*v4 ^ (unsigned __int8)(2 * v6)) & 2u;
    *v4 = result;
  }
  if ( v5 )
  {
    HvUnlockHiveFlusherExclusive(a1);
    return CmpUnlockRegistry(v11);
  }
  return result;
}
