/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18029115C
 * Callers:
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801E4BB0 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18001E320 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001E768 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x18001E960 (-StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001EF84 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001F080 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1800A982C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?EnablePreloadForUser@InputAppPreloader@KeyboardHosting@@QEAAXXZ @ 0x1801ECD1C (-EnablePreloadForUser@InputAppPreloader@KeyboardHosting@@QEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6609ff0ab640c01183d8a2076431907a___ @ 0x1802913A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_6609ff0ab640c01183d8a2076431907a___.c)
 *     _lambda_6609ff0ab640c01183d8a2076431907a_::__lambda_6609ff0ab640c01183d8a2076431907a_ @ 0x180291444 (_lambda_6609ff0ab640c01183d8a2076431907a_--__lambda_6609ff0ab640c01183d8a2076431907a_.c)
 *     _lambda_6609ff0ab640c01183d8a2076431907a_::_lambda_6609ff0ab640c01183d8a2076431907a_ @ 0x180291474 (_lambda_6609ff0ab640c01183d8a2076431907a_--_lambda_6609ff0ab640c01183d8a2076431907a_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedShow(__int64 a1, int a2, _OWORD *a3, __int64 a4)
{
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  __int64 *v11; // rax
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  KeyboardHosting::InputAppPreloader *v19; // rcx
  __int64 v20; // rcx
  int v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[42]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v26[432]; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3A8h] [rbp+2A8h]

  v23 = a2;
  v24[1] = (__int64 *)a4;
  v8 = *(_DWORD *)(a4 + 4);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v25,
    (__int64)"OnInputAppRequestedShowActivity_Queued");
  v25[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)v25,
    a2,
    v8);
  if ( a2 == *(_DWORD *)(a1 + 612) )
  {
    *(_DWORD *)(a1 + 616) = 1;
    v9 = 1;
    while ( _InterlockedExchange((volatile __int32 *)(a1 + 840), 1) )
    {
      while ( *(_DWORD *)(a1 + 840) )
      {
        v10 = v9;
        if ( !v9 )
          goto LABEL_7;
        do
        {
          _mm_pause();
          --v10;
        }
        while ( v10 );
        if ( v9 >= 64 )
          v9 = 64;
        else
LABEL_7:
          v9 *= 2;
      }
    }
    *(_OWORD *)(a1 + 844) = *a3;
    _InterlockedExchange((volatile __int32 *)(a1 + 840), 0);
  }
  *(_QWORD *)v22 = 0LL;
  v24[0] = (__int64 *)v22;
  v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v24);
  v12 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>(a1, v11);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v24[0] = (__int64 *)a1;
    v15 = lambda_6609ff0ab640c01183d8a2076431907a_::_lambda_6609ff0ab640c01183d8a2076431907a_(
            v26,
            &v23,
            a3,
            a4,
            v22,
            v24,
            v25);
    v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_6609ff0ab640c01183d8a2076431907a___(
            v17,
            v16,
            *(unsigned int *)(a1 + 972),
            v15);
    lambda_6609ff0ab640c01183d8a2076431907a_::__lambda_6609ff0ab640c01183d8a2076431907a_(v26);
    if ( v13 >= 0 )
    {
      v19 = *(KeyboardHosting::InputAppPreloader **)(a1 + 976);
      if ( v19 )
        KeyboardHosting::InputAppPreloader::EnablePreloadForUser(v19);
      v20 = *(_QWORD *)v22;
      if ( *(_QWORD *)v22 )
      {
        *(_QWORD *)v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x525,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      v18 = *(_QWORD *)v22;
      if ( *(_QWORD *)v22 )
      {
        *(_QWORD *)v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4EC,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    v14 = *(_QWORD *)v22;
    if ( *(_QWORD *)v22 )
    {
      *(_QWORD *)v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v25[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v25);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v25);
  std::vector<Geometry::CRect>::_Tidy(a4 + 32);
  return (unsigned int)v13;
}
