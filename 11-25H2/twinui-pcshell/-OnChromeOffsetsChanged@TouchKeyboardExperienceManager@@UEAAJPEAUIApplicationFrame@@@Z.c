/*
 * XREFs of ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18001E410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18001DE08 (--1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18001E320 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001E768 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?StartActivity@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18001E824 (-StartActivity@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001EF84 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001F080 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1801AF89C (-Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_29414a9ca6597666cdb35e84f817c693___ @ 0x180458F70 (Windows--Internal--ComTaskPool--QueueTask__lambda_29414a9ca6597666cdb35e84f817c693___.c)
 *     _lambda_29414a9ca6597666cdb35e84f817c693_::_lambda_29414a9ca6597666cdb35e84f817c693_ @ 0x18045B64C (_lambda_29414a9ca6597666cdb35e84f817c693_--_lambda_29414a9ca6597666cdb35e84f817c693_.c)
 *     _lambda_29414a9ca6597666cdb35e84f817c693_::__lambda_29414a9ca6597666cdb35e84f817c693_ @ 0x18045C1F8 (_lambda_29414a9ca6597666cdb35e84f817c693_--__lambda_29414a9ca6597666cdb35e84f817c693_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TouchKeyboardExperienceManager::OnChromeOffsetsChanged(
        RTL_SRWLOCK *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // rbx
  char *Ptr; // rsi
  char *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 *v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  int v18; // [rsp+28h] [rbp-E0h]
  int v19; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v25[352]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v24,
    "OnApplicationChromeOffsetsChanged");
  *(_QWORD *)v24 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)v24);
  v4 = 0LL;
  v22 = 0LL;
  AcquireSRWLockShared(this + 38);
  v23 = this + 38;
  Ptr = (char *)this[39].Ptr;
  v6 = (char *)this[40].Ptr;
  while ( Ptr != v6
       && ((unsigned __int8)std::_Atomic_storage<bool,1>::load(*(_QWORD *)Ptr + 32LL)
        || !*(_BYTE *)(v7 + 33)
        || !*(_QWORD *)(v7 + 56)
        || *(_DWORD *)(**(_QWORD **)(v7 + 48) + 16LL) == -1
        || *(_DWORD *)(v7 + 104) == -1
        || (*(unsigned int (__fastcall **)(_QWORD, struct IApplicationFrame *))(**(_QWORD **)(*(_QWORD *)Ptr + 8LL)
                                                                              + 24LL))(
             *(_QWORD *)(*(_QWORD *)Ptr + 8LL),
             a2) != 1) )
    Ptr += 16;
  if ( Ptr == this[40].Ptr )
  {
    if ( this != (RTL_SRWLOCK *)-304LL )
      ReleaseSRWLockShared(this + 38);
    TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::Stop(
      (TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)v24,
      L"appFrameWrapper was not found");
    v11 = -2147023728;
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)Ptr + 8LL);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v4 = v8;
      v22 = v8;
    }
    if ( this != (RTL_SRWLOCK *)-304LL )
      ReleaseSRWLockShared(this + 38);
    v20 = 0LL;
    v21 = &v20;
    v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v21);
    v10 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)&this[-15], v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE75,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10,
        v18);
      v17 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    else
    {
      v23 = this - 15;
      v21 = (__int64 *)a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 8LL))(a2);
      v12 = lambda_29414a9ca6597666cdb35e84f817c693_::_lambda_29414a9ca6597666cdb35e84f817c693_(
              (unsigned int)v25,
              (unsigned int)&v21,
              (unsigned int)&v20,
              (unsigned int)&v23,
              (__int64)v24);
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_29414a9ca6597666cdb35e84f817c693___(
              v14,
              v13,
              HIDWORD(this[106].Ptr),
              v12);
      lambda_29414a9ca6597666cdb35e84f817c693_::__lambda_29414a9ca6597666cdb35e84f817c693_(v25);
      if ( (v11 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE94,
          (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)v11,
          v19);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
        TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::~OnApplicationChromeOffsetsChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)v24);
        return v11;
      }
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)a2 + 16LL))(a2);
      v15 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v11 = 0;
    }
  }
  *(_QWORD *)v24 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(v24);
  return v11;
}
