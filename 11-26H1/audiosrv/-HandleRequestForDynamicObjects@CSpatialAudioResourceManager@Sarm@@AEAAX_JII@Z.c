/*
 * XREFs of ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1801254A4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_::_Do_call @ 0x180127240 (std--_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_--_Do_call.c)
 * Callees:
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18005CCB0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082D78 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180124D84 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180124F48 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1801282B8 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 *     ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x180128D10 (-LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects(
        PTP_TIMER *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  Sarm::CStreamResource *Stream; // rax
  CSpatialAudioResourceManagerTraceLogger *v10; // rcx
  _QWORD v11[9]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects", 492);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream((Sarm::CSpatialAudioResourceManager *)this, a2);
  if ( Stream )
  {
    v12 = 0LL;
    if ( (int)Sarm::CStreamResource::ProcessDynamicObjectCountChange(Stream, a3, a4, &v12) >= 0 && v12 > 0 )
    {
      CWorkFifo::DelayWorkUntil(this + 38, v12);
      v11[0] = off_1801782C8;
      v11[1] = this;
      v11[2] = a2;
      v11[7] = v11;
      CWorkFifo::ScheduleWorkItem(this + 38, (__int64)v11);
    }
  }
  else
  {
    CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(v10, 0x1F1u, a2);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
}
