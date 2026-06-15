/*
 * XREFs of ?UpdateVolume@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAH1@Z @ 0x180010C60
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     atexit @ 0x18002FCC4 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180037AB8 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

int __fastcall CApplication::UpdateVolume(__int64 a1, int a2, BOOL *a3, _DWORD *a4)
{
  int v5; // edx
  BOOL v8; // r12d
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // r10
  const wchar_t *v13; // rdx
  const wchar_t *v14; // r8
  int v15; // ecx
  __int64 v16; // rcx
  _BYTE *v17; // r9
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  int v21; // ecx
  int v22; // ecx
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  void *v28; // [rsp+68h] [rbp-39h]
  int v29; // [rsp+70h] [rbp-31h]
  int v30; // [rsp+74h] [rbp-2Dh]
  _BYTE *v31; // [rsp+78h] [rbp-29h]
  int v32; // [rsp+80h] [rbp-21h]
  int v33; // [rsp+84h] [rbp-1Dh]
  LPVOID *p_Context; // [rsp+88h] [rbp-19h]
  __int64 v35; // [rsp+90h] [rbp-11h]
  const wchar_t *v36; // [rsp+98h] [rbp-9h]
  int v37; // [rsp+A0h] [rbp-1h]
  int v38; // [rsp+A4h] [rbp+3h]
  const wchar_t *v39; // [rsp+A8h] [rbp+7h]
  int v40; // [rsp+B0h] [rbp+Fh]
  int v41; // [rsp+B4h] [rbp+13h]

  v5 = *(_DWORD *)(a1 + 216);
  v8 = v5 != a2;
  LODWORD(v10) = a2 == 0;
  v11 = v10 ^ (v5 == 0);
  if ( v5 != a2 )
  {
    Context = 0LL;
    fPending = 0;
    if ( InitOnceBeginInitialize(
           &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      *(_QWORD *)&EventDescriptor.Id = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1800688A0;
      qword_1800688A0 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
      qword_1800688A8 = 0LL;
      byte_1800688B0 = 0;
      dword_1800688B4 = 0;
      qword_1800688B8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&EventDescriptor);
    }
    LODWORD(v10) = (_DWORD)Context;
    v12 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v12 > 4u )
    {
      LODWORD(v10) = *(_DWORD *)(v12 + 16);
      if ( (v10 & 0x20000) != 0 )
      {
        v10 = *(_QWORD *)(v12 + 24) & 0x20000LL;
        if ( v10 == *(_QWORD *)(v12 + 24) )
        {
          v13 = L"Unknown level";
          if ( a2 )
          {
            if ( a2 == 1 )
            {
              v14 = L"SNDLVL_Low";
            }
            else if ( a2 == 2 )
            {
              v14 = L"SNDLVL_Full";
            }
            else
            {
              v14 = L"Unknown level";
            }
          }
          else
          {
            v14 = L"SNDLVL_Muted";
          }
          v15 = *(_DWORD *)(a1 + 216);
          if ( v15 )
          {
            v22 = v15 - 1;
            if ( v22 )
            {
              if ( v22 == 1 )
                v13 = L"SNDLVL_Full";
            }
            else
            {
              v13 = L"SNDLVL_Low";
            }
          }
          else
          {
            v13 = L"SNDLVL_Muted";
          }
          v16 = -1LL;
          v17 = *(_BYTE **)(a1 + 24);
          Context = *(LPVOID *)(a1 + 696);
          v18 = -1LL;
          do
            v19 = v14[++v18] == 0;
          while ( !v19 );
          v39 = v14;
          v40 = 2 * v18 + 2;
          v20 = -1LL;
          v41 = 0;
          do
            v19 = v13[++v20] == 0;
          while ( !v19 );
          v36 = v13;
          v37 = 2 * v20 + 2;
          p_Context = &Context;
          v38 = 0;
          v35 = 8LL;
          if ( v17 )
          {
            do
              v19 = *(_WORD *)&v17[2 * v16++ + 2] == 0;
            while ( !v19 );
            v21 = 2 * v16 + 2;
          }
          else
          {
            v17 = byte_180056CEC;
            v21 = 2;
          }
          *(_DWORD *)&EventDescriptor.Level = 4;
          UserData.Ptr = *(_QWORD *)(v12 + 8);
          v32 = v21;
          v31 = v17;
          v33 = 0;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          EventDescriptor.Keyword = 0x20000LL;
          UserData.Size = *(unsigned __int16 *)UserData.Ptr;
          v28 = &unk_18005A30F;
          UserData.Reserved = 2;
          v29 = 77;
          v30 = 1;
          fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          LODWORD(v10) = EventWriteTransfer(*(_QWORD *)(v12 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
        }
      }
    }
  }
  if ( a3 )
    *a3 = v8;
  if ( a4 )
    *a4 = v11;
  *(_DWORD *)(a1 + 216) = a2;
  return v10;
}
