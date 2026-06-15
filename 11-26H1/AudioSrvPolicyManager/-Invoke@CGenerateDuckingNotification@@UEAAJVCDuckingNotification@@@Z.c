/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18003FB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001B868 (--1CDuckingNotification@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180020290 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, __int64 *a2)
{
  char v4; // cl
  __int64 v5; // rax
  const wchar_t *v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  int MediaEvent; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+40h] [rbp-58h] BYREF
  int *v18; // [rsp+60h] [rbp-38h]
  __int64 v19; // [rsp+68h] [rbp-30h]
  __int64 *v20; // [rsp+70h] [rbp-28h]
  __int64 v21; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = *(_BYTE *)(a1 + 25);
  if ( !*(_BYTE *)(a1 + 24) )
  {
    if ( v4 )
    {
      v13 = a2[6];
      v14 = *(_DWORD *)(v13 + 16);
      if ( !v14 )
        goto LABEL_16;
      *(_DWORD *)(v13 + 16) = v14 - 1;
      goto LABEL_11;
    }
LABEL_10:
    if ( a2[4] )
      goto LABEL_16;
    goto LABEL_11;
  }
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
    if ( v5 )
      goto LABEL_16;
    goto LABEL_10;
  }
  if ( v5 )
  {
    v6 = (const wchar_t *)(a2 + 2);
    if ( (unsigned __int64)a2[5] > 7 )
      v6 = *(const wchar_t **)v6;
    if ( !_wcsicoll(v6, *(const wchar_t **)(a1 + 16)) )
    {
      if ( a2[4] )
        ++*(_DWORD *)(a2[6] + 16);
LABEL_11:
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *a2;
      v7 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      if ( *(_DWORD *)v7 > 4u && tlgKeywordOn((__int64)v7, 0x40000LL) )
      {
        v10 = *a2;
        v15 = *((_DWORD *)a2 + 2);
        v20 = &v16;
        v18 = &v15;
        v16 = v10;
        v19 = v8;
        v21 = 8LL;
        tlgWriteTransfer_EventWriteTransfer(v9, byte_18005AF17, 0LL, 0LL, v8, &v17);
      }
      MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
      if ( MediaEvent < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          580LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
          (const char *)(unsigned int)MediaEvent);
    }
  }
LABEL_16:
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)a2);
  return 0LL;
}
