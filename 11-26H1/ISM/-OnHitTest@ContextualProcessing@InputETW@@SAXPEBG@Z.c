/*
 * XREFs of ?OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x1800167B0
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180015E20 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180012278 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18009A4BC (atexit.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall InputETW::ContextualProcessing::OnHitTest(const unsigned __int16 *a1)
{
  __int64 v2; // r10
  __int64 v3; // rax
  int v5; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR Context; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-40h] BYREF
  void *v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+64h] [rbp-24h]
  const unsigned __int16 *v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-18h]
  int v14; // [rsp+74h] [rbp-14h]

  *(_QWORD *)&Context.Id = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&Context)
    && fPending )
  {
    qword_180254858 = 0LL;
    *(_QWORD *)&Context.Id = &qword_180254850;
    byte_180254860 = 0;
    dword_180254864 = 0;
    qword_180254850 = &RawInputProvidersContinuousTracing::`vftable';
    qword_180254868 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180254850, qword_180254868, 0LL);
    InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_180254850);
  }
  v2 = *(_QWORD *)(*(_QWORD *)&Context.Id + 8LL);
  if ( *(_DWORD *)v2 > 4u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    if ( a1 )
    {
      v3 = -1LL;
      while ( a1[++v3] != 0 )
        ;
      v5 = 2 * v3 + 2;
    }
    else
    {
      a1 = &WindowName;
      v5 = 2;
    }
    v13 = v5;
    UserData.Ptr = *(_QWORD *)(v2 + 8);
    v12 = a1;
    v14 = 0;
    *(_QWORD *)&Context.Id = 0x40B000000LL;
    Context.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v9 = &unk_180229B1A;
    UserData.Reserved = 2;
    v10 = 45;
    v11 = 1;
    fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v2 + 32), &Context, 0LL, 0LL, 3u, &UserData);
  }
}
