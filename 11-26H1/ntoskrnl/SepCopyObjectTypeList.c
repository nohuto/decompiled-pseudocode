/*
 * XREFs of SepCopyObjectTypeList @ 0x1405121F0
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCopyObjectTypeList(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v6; // r14
  __int64 Pool2; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int128 v11; // xmm0

  *a3 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
    if ( a2 )
    {
      v9 = Pool2 + 2;
      v10 = a1 - Pool2;
      do
      {
        *(_WORD *)(v9 - 2) = *(_WORD *)(v10 + v9 - 2);
        *(_WORD *)v9 = *(_WORD *)(v10 + v9);
        *(_DWORD *)(v9 + 18) = *(_DWORD *)(v10 + v9 + 18);
        v11 = *(_OWORD *)(v10 + v9 + 2);
        *(_QWORD *)(v9 + 22) = 0LL;
        *(_DWORD *)(v9 + 30) = 0;
        *(_QWORD *)(v9 + 38) = 0LL;
        *(_OWORD *)(v9 + 2) = v11;
        v9 += 48LL;
        --v6;
      }
      while ( v6 );
    }
    *a3 = Pool2;
  }
  return 0LL;
}
