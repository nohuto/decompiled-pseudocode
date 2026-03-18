/*
 * XREFs of ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x1801E1948
 * Callers:
 *     ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@@Z @ 0x180211550 (-EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@@.c)
 *     ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@@Z @ 0x180289B90 (-EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180139DA4 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CManipulation *__fastcall CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 *v3; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  struct CManipulation *result; // rax
  __int64 v10; // r14
  InteractionSourceManager *v11; // rax
  struct CManipulation *v12; // rdi
  char v13; // bl
  __int64 v14; // r9
  __int64 v15; // r9

  v3 = *(__int64 **)(a1 + 472);
  v7 = *v3;
  (*(void (__fastcall **)(__int64 *))(*v3 + 232))(v3);
  result = (struct CManipulation *)(*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v7 + 208))(v3, v8, a2);
  if ( (_DWORD)result != a3 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 472) + 200LL))(*(_QWORD *)(a1 + 472));
    v11 = (InteractionSourceManager *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 472) + 368LL))(*(_QWORD *)(a1 + 472));
    result = InteractionSourceManager::TryGetActiveManipulation(v11);
    v12 = result;
    if ( v10 )
    {
      if ( result )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CManipulation *))(**(_QWORD **)(a1 + 472) + 264LL))(
                *(_QWORD *)(a1 + 472),
                a2,
                result);
        LOBYTE(v14) = 1;
        LOBYTE(v15) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CManipulation *, __int64))(**(_QWORD **)(a1 + 472)
                                                                                                 + 248LL))(
                        *(_QWORD *)(a1 + 472),
                        a2,
                        v12,
                        v14);
        return (struct CManipulation *)CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
                                         v10,
                                         a2,
                                         a3,
                                         v15,
                                         v13);
      }
    }
  }
  return result;
}
