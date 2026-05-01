/*
 * XREFs of _lambda_9edfd80f047b7677be6587876a6c154e_::_lambda_9edfd80f047b7677be6587876a6c154e_ @ 0x18035CB74
 * Callers:
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801536AC (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_9edfd80f047b7677be6587876a6c154e_::_lambda_9edfd80f047b7677be6587876a6c154e_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rcx

  *a1 = a2;
  v4 = *a3;
  a1[1] = *a3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
