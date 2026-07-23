/*
 * XREFs of VfTargetEtwUnregister @ 0x140C2F258
 * Callers:
 *     VerifierEtwUnregister @ 0x140C46390 (VerifierEtwUnregister.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1403C1D8C (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1404D6220 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfTargetEtwUnregister(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *i; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  if ( !VfSafeMode )
  {
    v4 = 0;
    v5 = 0LL;
    VfAvlInitializeLockContext((__int64)&v11, 0);
    v6 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v11, a2, 1LL);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 64);
      if ( v7 )
      {
        for ( i = *(_QWORD **)(v7 + 16); i != (_QWORD *)(v7 + 16); i = (_QWORD *)*i )
        {
          v5 = i;
          v9 = (_QWORD *)*i;
          if ( i[2] == a1 )
          {
            v4 = 1;
            if ( (_QWORD *)v9[1] != i || (v10 = (_QWORD *)i[1], (_QWORD *)*v10 != i) )
              __fastfail(3u);
            *v10 = v9;
            v9[1] = v10;
            goto LABEL_16;
          }
        }
        if ( !dword_140F08AA0 && (*(_DWORD *)(v7 + 32) & 1) == 0 && (MmVerifierData & 0x800) != 0 )
          CarReportRuleViolationFromNt(0xC4u, 0xDCuLL, 0LL, 0LL, 0LL, 11, a2);
      }
    }
LABEL_16:
    VfAvlCleanupLockContext((__int64)&v11);
    if ( v4 )
      ExFreePoolWithTag(v5, 0);
  }
}
