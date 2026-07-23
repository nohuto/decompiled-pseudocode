/*
 * XREFs of MiActivateCombineBlock @ 0x1402EDA68
 * Callers:
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 */

void __fastcall MiActivateCombineBlock(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 *v11; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 392));
  v4 = a2 + 8;
  v5 = a2[3];
  v6 = a2[6] & 0x1FLL;
  v7 = 16LL * (a2[3] & 0xF);
  v8 = a2[3] & 0xF;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + a1 + 104));
  v9 = 0LL;
  v10 = *(__int64 **)(a1 + 16 * (v8 + 6));
  if ( v10 )
  {
    while ( 1 )
    {
      if ( v5 <= v10[3]
        && (v5 < v10[3]
         || (unsigned int)v6 <= ((_DWORD)v10[6] & 0x1Fu)
         && ((unsigned int)v6 < ((_DWORD)v10[6] & 0x1Fu) || v4 && *v4 < (unsigned __int64)v10[8])) )
      {
        v11 = (__int64 *)*v10;
        if ( !*v10 )
          break;
      }
      else
      {
        v11 = (__int64 *)v10[1];
        if ( !v11 )
        {
          LOBYTE(v9) = 1;
          break;
        }
      }
      v10 = v11;
    }
  }
  RtlAvlInsertNodeEx(a1 + 16 * (v8 + 6), v10, v9, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + a1 + 104));
}
