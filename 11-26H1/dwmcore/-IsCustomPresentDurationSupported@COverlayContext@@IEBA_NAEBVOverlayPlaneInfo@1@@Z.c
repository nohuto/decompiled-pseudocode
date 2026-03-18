/*
 * XREFs of ?IsCustomPresentDurationSupported@COverlayContext@@IEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18023CCE4
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@IEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18023B14C (-EnsureIndependentFlipState@COverlayContext@@IEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801044F0 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::IsCustomPresentDurationSupported(
        COverlayContext *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  ULONG v2; // r9d
  __int64 v3; // r8
  struct _EVENT_DATA_DESCRIPTOR *v5; // rax
  const EVENT_DESCRIPTOR *v6; // rdx
  char v7; // [rsp+30h] [rbp-9h] BYREF
  BOOL v8; // [rsp+38h] [rbp-1h] BYREF
  char v9; // [rsp+40h] [rbp+7h] BYREF
  BOOL *v10; // [rsp+50h] [rbp+17h]
  __int64 v11; // [rsp+58h] [rbp+1Fh]
  char *v12; // [rsp+60h] [rbp+27h]
  __int64 v13; // [rsp+68h] [rbp+2Fh]
  char v14; // [rsp+70h] [rbp+37h] BYREF

  v2 = 1;
  v3 = 0x7D6343EB1A1F58D1LL * ((__int64)(*((_QWORD *)this + 1587) - *((_QWORD *)this + 1586)) >> 3);
  if ( (_DWORD)v3 == 1 )
  {
    if ( *((_BYTE *)this + 19353) )
    {
      if ( *((int *)a2 + 87) < 1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
          McTemplateU0qqqq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &CustomDurationRejectPlaneFullscreenTest,
            *((unsigned int *)a2 + 17),
            *((_DWORD *)a2 + 18),
            *((_DWORD *)a2 + 19),
            *((_DWORD *)a2 + 20));
        return 0;
      }
      return 1;
    }
    if ( !*((_BYTE *)this + 19052) )
      return 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
    {
      v5 = (struct _EVENT_DATA_DESCRIPTOR *)&v14;
      v6 = (const EVENT_DESCRIPTOR *)&CustomDurationRejectDesktopPlaneEnabledTest;
LABEL_12:
      McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, v6, v3, v2, v5);
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
  {
    v13 = 1LL;
    v2 = 3;
    v7 = v3;
    v11 = 4LL;
    v6 = (const EVENT_DESCRIPTOR *)&CustomDurationRejectMonitorConfiguration;
    v8 = *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL;
    v10 = &v8;
    v12 = &v7;
    v5 = (struct _EVENT_DATA_DESCRIPTOR *)&v9;
    goto LABEL_12;
  }
  return 0;
}
