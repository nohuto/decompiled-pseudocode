/*
 * XREFs of DifEnumeratePluginData @ 0x140644640
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403C1F60 (RtlEnumerateGenericTableAvl.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403C22D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403C2338 (ViAvlRaiseIrqlSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403C2460 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifEnumeratePluginData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 i; // rbx
  __int64 v9; // r14
  BOOLEAN j; // dl
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]

  v15 = 0LL;
  v16 = 0LL;
  v6 = 0;
  VfAvlInitializeLockContext((__int64)&v15, 0);
  if ( !v7 || !a5 )
    return 3221225485LL;
  ViAvlRaiseIrqlSafe((__int64)&v15);
  for ( i = 0LL; (unsigned int)i < dword_140F09118; i = (unsigned int)(i + 1) )
  {
    v9 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_140F09110, (__int64)&v15);
    for ( j = 1; ; j = 0 )
    {
      v12 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v9 + qword_140F09110), j);
      if ( !v12 || v6 >= a2 )
        break;
      v11 = (_QWORD *)v12[8];
      if ( v11 )
      {
        if ( (_QWORD *)v11[12] != v11 + 12 )
        {
          v14 = *(_OWORD *)(*v11 + 40LL);
          guard_dispatch_icall_no_overrides(v6++, &v14);
        }
      }
    }
    ViAvlReleaseTableLockFromDpcLevel(v9 + qword_140F09110, (__int64)&v15);
  }
  VfAvlCleanupLockContext((__int64)&v15);
  result = 0LL;
  *a5 = v6;
  return result;
}
