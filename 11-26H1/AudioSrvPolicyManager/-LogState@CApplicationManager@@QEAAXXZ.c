/*
 * XREFs of ?LogState@CApplicationManager@@QEAAXXZ @ 0x1800216D0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fbe3706c53b5fc888db1b8a6d6b3f032__void_::_Do_call @ 0x18002B560 (std--_Func_impl_no_alloc__lambda_fbe3706c53b5fc888db1b8a6d6b3f032__void_--_Do_call.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     atexit @ 0x18002FCC4 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180037AB8 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::LogState(CApplicationManager *this)
{
  CApplicationManager *v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r10
  _BYTE *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  BOOL v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  union _RTL_RUN_ONCE *v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  _BYTE *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  __int64 *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  BOOL *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  WINBOOL *p_fPending; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]

  v1 = g_ApplicationManager;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v3 = (_QWORD *)*((_QWORD *)v1 + 9);
  if ( v3 )
  {
    do
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      Context = 0LL;
      fPending = 0;
      if ( InitOnceBeginInitialize(
             &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper,
             0,
             &fPending,
             &Context)
        && fPending )
      {
        v17 = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1800688A0;
        qword_1800688A8 = 0LL;
        byte_1800688B0 = 0;
        dword_1800688B4 = 0;
        qword_1800688A0 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
        qword_1800688B8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
        v18 = 0;
        wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&v17);
      }
      v5 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 4) != 0 && (*(_QWORD *)(v5 + 24) & 4LL) == *(_QWORD *)(v5 + 24) )
      {
        fPending = -1;
        v11 = -1;
        v12 = -1;
        v13 = *(_DWORD *)(v4 + 208) != 0;
        v14 = *(_QWORD *)(v4 + 696);
        v6 = *(_BYTE **)(v4 + 24);
        p_fPending = &fPending;
        v35 = 4LL;
        v32 = &v11;
        v33 = 4LL;
        v30 = &v12;
        v31 = 4LL;
        v28 = &v13;
        v29 = 4LL;
        v26 = &v14;
        v27 = 8LL;
        if ( v6 )
        {
          v7 = -1LL;
          do
            ++v7;
          while ( *(_WORD *)&v6[2 * v7] );
          v8 = 2 * v7 + 2;
        }
        else
        {
          v6 = byte_180056CEC;
          v8 = 2;
        }
        v23 = v6;
        v24 = v8;
        v25 = 0;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 4;
        EventDescriptor.Keyword = 4LL;
        UserData.Ptr = *(_QWORD *)(v5 + 8);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v20 = &unk_18005A6D0;
        v21 = 123;
        v22 = 1;
        LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
      }
    }
    while ( v3 );
    v2 = v15;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
