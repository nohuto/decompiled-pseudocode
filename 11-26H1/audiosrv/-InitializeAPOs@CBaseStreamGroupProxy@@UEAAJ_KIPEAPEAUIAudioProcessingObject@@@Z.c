/*
 * XREFs of ?InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18005B230
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800149BC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180040FD8 (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18005B360 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@-$vec.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CBaseStreamGroupProxy::InitializeAPOs(
        CBaseStreamGroupProxy *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct AudioSrvTelemetryProvider *v7; // rax
  __int64 *v8; // rdx
  __int64 i; // rdi
  __int64 v11[2]; // [rsp+20h] [rbp-128h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-118h] BYREF

  v7 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v7 + 1),
    "StreamGroup_InitializeAPOs",
    0LL);
  v8 = (__int64 *)*((_QWORD *)this + 33);
  if ( *((__int64 **)this + 32) != v8 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
      *((__int64 **)this + 32),
      v8);
    *((_QWORD *)this + 33) = *((_QWORD *)this + 32);
  }
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    v11[0] = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_67309ffa_1e7c_48f2_b96f_9b25b183ba25,
           v11) >= 0 )
    {
      if ( *((_QWORD *)this + 33) == *((_QWORD *)this + 34) )
      {
        std::vector<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy> const &>(
          (char *)this + 256,
          *((_QWORD *)this + 33),
          v11);
      }
      else
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
          *((__int64 **)this + 33),
          v11);
        *((_QWORD *)this + 33) += 8LL;
      }
    }
    if ( v11[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return 0LL;
}
