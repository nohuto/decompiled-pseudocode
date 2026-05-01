/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800B3780
 * Callers:
 *     _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x1800B2DC8 (_lambda_31520e38682400c193ecfa4924368fd9_--operator().c)
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x1800B3094 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800B3728 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x180169900 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x1801AC4F8 (_lambda_201adf67891f12ccd8a16b46f471aeff_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801F4628 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18032A41C (-ContinueOnCurrentThread@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$.c)
 *     _lambda_a7727f50da9d713bf735f2c71ec0999f_::operator() @ 0x1803448E0 (_lambda_a7727f50da9d713bf735f2c71ec0999f_--operator().c)
 *     _lambda_6bf0006fd05f45de9a9646c33bcd493f_::operator() @ 0x1803AED50 (_lambda_6bf0006fd05f45de9a9646c33bcd493f_--operator().c)
 *     _lambda_db605a5d8bd7eecf6dbd275f52e09d94_::operator() @ 0x1803AF53C (_lambda_db605a5d8bd7eecf6dbd275f52e09d94_--operator().c)
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::operator() @ 0x18046A0E4 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x180600D14 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800EB9A4 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memcpy_s_1 @ 0x18010BCA0 (memcpy_s_1.c)
 */

// Hidden C++ exception states: #wind=1
wil::ActivityThreadWatcher *__fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(
        wil::ActivityThreadWatcher *this,
        struct wil::details::IFailureCallback *a2,
        const struct wil::details::StoredCallContextInfo *a3)
{
  _WORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // r8
  DWORD CurrentThreadId; // r14d
  unsigned __int64 v10; // rbp
  __int64 i; // rcx
  _QWORD *v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  HANDLE ProcessHeap; // rax
  void *v17; // rax
  char *v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // rax

  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = *(_DWORD *)a3;
  *((_QWORD *)this + 1) = *((_QWORD *)a3 + 1);
  v5 = (_WORD *)*((_QWORD *)a3 + 2);
  if ( *((_BYTE *)a3 + 24) )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v5[v14] );
    if ( v14 )
    {
      v15 = 2 * v14 + 2;
      ProcessHeap = GetProcessHeap();
      v17 = HeapAlloc(ProcessHeap, 0, v15);
      *((_QWORD *)this + 2) = v17;
      if ( v17 )
      {
        *((_BYTE *)this + 24) = 1;
        memcpy_s_1(v17, v15, v5, v15);
      }
    }
  }
  else
  {
    *((_QWORD *)this + 2) = v5;
  }
  v6 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = this;
  v7 = wil::details::g_pThreadFailureCallbacks;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    CurrentThreadId = GetCurrentThreadId();
    v10 = CurrentThreadId % 0xAuLL;
    for ( i = *(_QWORD *)(v7 + 8 * v10); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == CurrentThreadId )
      {
        v12 = (_QWORD *)(i + 16);
        goto LABEL_9;
      }
    }
    v18 = (char *)wil::details::ProcessHeapAlloc(0, 0x18uLL, v8);
    v19 = (signed __int64)v18;
    if ( v18 )
    {
      *(_DWORD *)v18 = CurrentThreadId;
      *((_DWORD *)v18 + 1) = 0;
      *((_QWORD *)v18 + 1) = 0LL;
      v12 = v18 + 16;
      *((_QWORD *)v18 + 2) = 0LL;
      do
      {
        v20 = *(_QWORD *)(v7 + 8 * v10);
        *(_QWORD *)(v19 + 8) = v20;
      }
      while ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8 * v10), v19, v20) );
    }
    else
    {
      v12 = 0LL;
    }
LABEL_9:
    *v6 = v12;
    if ( v12 )
    {
      *((_QWORD *)this + 6) = *v12;
      *v12 = v6;
      *((_DWORD *)this + 14) = GetCurrentThreadId();
    }
  }
  return this;
}
