/*
 * XREFs of ??$?0V_lambda_a02b962ba123cadce7fe124e9cd07393_@@@?$CTaskWrapper@V_lambda_a02b962ba123cadce7fe124e9cd07393_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_a02b962ba123cadce7fe124e9cd07393_@@@Z @ 0x1806839F8
 * Callers:
 *     ??$QueueTask@V_lambda_a02b962ba123cadce7fe124e9cd07393_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_a02b962ba123cadce7fe124e9cd07393_@@@Z @ 0x1802B4A90 (--$QueueTask@V_lambda_a02b962ba123cadce7fe124e9cd07393_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_a02b962ba123cadce7fe124e9cd07393_>::CTaskWrapper<_lambda_a02b962ba123cadce7fe124e9cd07393_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_a02b962ba123cadce7fe124e9cd07393_>::`vftable';
  return a1;
}
