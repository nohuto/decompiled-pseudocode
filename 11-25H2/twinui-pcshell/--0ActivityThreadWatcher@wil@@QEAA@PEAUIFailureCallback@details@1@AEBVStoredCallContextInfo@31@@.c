/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D4D68
 * Callers:
 *     _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x1800D43C0 (_lambda_31520e38682400c193ecfa4924368fd9_--operator().c)
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x1800D4688 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800D4D10 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x1801B8E58 (_lambda_201adf67891f12ccd8a16b46f471aeff_--operator().c)
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x1801F7450 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801FF24C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18032CFB4 (-ContinueOnCurrentThread@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$.c)
 *     _lambda_78435879237a5598503e840a3e952968_::operator() @ 0x1803A594C (_lambda_78435879237a5598503e840a3e952968_--operator().c)
 *     _lambda_be0595b4d9b1029e6cb699cd383e8153_::operator() @ 0x1803A5F2C (_lambda_be0595b4d9b1029e6cb699cd383e8153_--operator().c)
 *     _lambda_6fd8c80f4e8205d0daf1b865183c59df_::operator() @ 0x18045DC98 (_lambda_6fd8c80f4e8205d0daf1b865183c59df_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BB040 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1805DC0C0 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800D37C8 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memcpy_s_1 @ 0x1800F3110 (memcpy_s_1.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(
        wil::ActivityThreadWatcher *this,
        struct wil::details::IFailureCallback *a2,
        const struct wil::details::StoredCallContextInfo *a3)
{
  _WORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  DWORD CurrentThreadId; // r14d
  unsigned __int64 v9; // rbp
  __int64 i; // rcx
  _QWORD *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  HANDLE ProcessHeap; // rax
  void *v16; // rax
  char *v17; // rax
  signed __int64 v18; // rdx
  signed __int64 v19; // rax

  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = *(_DWORD *)a3;
  *((_QWORD *)this + 1) = *((_QWORD *)a3 + 1);
  v5 = (_WORD *)*((_QWORD *)a3 + 2);
  if ( *((_BYTE *)a3 + 24) )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v5[v13] );
    if ( v13 )
    {
      v14 = 2 * v13 + 2;
      ProcessHeap = GetProcessHeap();
      v16 = HeapAlloc(ProcessHeap, 0, v14);
      *((_QWORD *)this + 2) = v16;
      if ( v16 )
      {
        *((_BYTE *)this + 24) = 1;
        memcpy_s_1(v16, v14, v5, v14);
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
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_21;
  CurrentThreadId = GetCurrentThreadId();
  v9 = CurrentThreadId % 0xAuLL;
  for ( i = *(_QWORD *)(v7 + 8 * v9); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == CurrentThreadId )
    {
      v11 = (_QWORD *)(i + 16);
      goto LABEL_9;
    }
  }
  v17 = (char *)wil::details::ProcessHeapAlloc(0, 0x18uLL);
  v18 = (signed __int64)v17;
  if ( v17 )
  {
    *(_DWORD *)v17 = CurrentThreadId;
    *((_DWORD *)v17 + 1) = 0;
    *((_QWORD *)v17 + 1) = 0LL;
    v11 = v17 + 16;
    *((_QWORD *)v17 + 2) = 0LL;
    do
    {
      v19 = *(_QWORD *)(v7 + 8 * v9);
      *(_QWORD *)(v18 + 8) = v19;
    }
    while ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8 * v9), v18, v19) );
  }
  else
  {
LABEL_21:
    v11 = 0LL;
  }
LABEL_9:
  *v6 = v11;
  if ( v11 )
  {
    *((_QWORD *)this + 6) = *v11;
    *v11 = v6;
    *((_DWORD *)this + 14) = GetCurrentThreadId();
  }
  return this;
}
