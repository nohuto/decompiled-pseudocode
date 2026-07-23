/*
 * XREFs of IommupHvFlushDomainTbs @ 0x140475588
 * Callers:
 *     HalpIommuFlushDomainTbs @ 0x140474AD8 (HalpIommuFlushDomainTbs.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IommupHvFlushDomainTbs(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  BOOL v4; // r14d
  KIRQL v5; // r12
  __int64 *v6; // rbx
  char v7; // r15
  __int64 v8; // rdx
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( qword_140FBB600 && qword_140FBB4D8 && a3 )
  {
    v4 = a2 + a3 - 1 >= a2;
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v6 = *(__int64 **)(a1 + 72);
    v7 = 0;
    while ( v6 != (__int64 *)(a1 + 72) )
    {
      v8 = *((unsigned int *)v6 + 4);
      if ( (_DWORD)v8 )
      {
        guard_dispatch_icall_no_overrides(0LL, v8);
      }
      else if ( !v7 )
      {
        LODWORD(v9) = *(_DWORD *)(a1 + 48);
        BYTE4(v9) = 1;
        guard_dispatch_icall_no_overrides(&v9, v4);
        v7 = 1;
      }
      v6 = (__int64 *)*v6;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 88), v5);
  }
}
