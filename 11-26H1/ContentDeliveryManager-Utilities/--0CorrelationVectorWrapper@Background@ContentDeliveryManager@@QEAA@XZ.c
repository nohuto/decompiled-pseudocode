/*
 * XREFs of ??0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004B998
 * Callers:
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@XZ @ 0x180049BC8 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA-AV-$shared_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029964 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x180046238 (--$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z.c)
 *     ??4?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004D3F0 (--4-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800599E8 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
ContentDeliveryManager::Background::CorrelationVectorWrapper *__fastcall ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper(
        ContentDeliveryManager::Background::CorrelationVectorWrapper *this)
{
  _BYTE *v2; // rax
  __int64 v3; // rbx
  UUID v5; // [rsp+20h] [rbp-38h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)this = 0LL;
  v2 = operator new(0x90uLL);
  v3 = (__int64)v2;
  *(_QWORD *)&Uuid.Data1 = v2;
  if ( v2 )
  {
    v2[130] = 65;
    Uuid = 0LL;
    UuidCreate(&Uuid);
    v5 = Uuid;
    TraceLoggingCorrelationVector::CreateCvFromGuid<12>(v3, (__int128 *)&v5);
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)&Uuid.Data1 = v3;
  std::unique_ptr<TraceLoggingCorrelationVector>::operator=(this, &Uuid);
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>((void **)&Uuid);
  TraceLoggingCorrelationVector::ToStringImpl(
    *(TraceLoggingCorrelationVector **)this,
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)this + 136LL), 0LL),
    (char *)this + 8);
  return this;
}
