/*
 * XREFs of ?FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z @ 0x1800973B8
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800961C8 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294234 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::FireInputPaneShowingEvent_(
        TouchKeyboardExperienceTelemetryLogger *this,
        int a2,
        const struct tagRECT *a3)
{
  const struct _tlgProvider_t *v5; // rax
  LONG bottom; // [rsp+30h] [rbp-69h] BYREF
  LONG right; // [rsp+34h] [rbp-65h] BYREF
  LONG top; // [rsp+38h] [rbp-61h] BYREF
  LONG left; // [rsp+3Ch] [rbp-5Dh] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v11; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v14; // [rsp+70h] [rbp-29h]
  int v15; // [rsp+78h] [rbp-21h]
  int v16; // [rsp+7Ch] [rbp-1Dh]
  __int64 *v17; // [rsp+80h] [rbp-19h]
  __int64 v18; // [rsp+88h] [rbp-11h]
  _DWORD *v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  LONG *p_left; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  LONG *p_top; // [rsp+B0h] [rbp+17h]
  __int64 v24; // [rsp+B8h] [rbp+1Fh]
  LONG *p_right; // [rsp+C0h] [rbp+27h]
  __int64 v26; // [rsp+C8h] [rbp+2Fh]
  LONG *p_bottom; // [rsp+D0h] [rbp+37h]
  __int64 v28; // [rsp+D8h] [rbp+3Fh]

  v5 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v5 > 5u && (*((_BYTE *)v5 + 16) & 0x10) != 0 && (*((_QWORD *)v5 + 3) & 0x10LL) == *((_QWORD *)v5 + 3) )
  {
    bottom = a3->bottom;
    right = a3->right;
    top = a3->top;
    left = a3->left;
    p_bottom = &bottom;
    p_right = &right;
    p_top = &top;
    p_left = &left;
    v19 = v10;
    v17 = &v11;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v5 + 1);
    v18 = 8LL;
    v10[0] = a2;
    v11 = 0x1000000LL;
    v28 = 4LL;
    v26 = 4LL;
    v24 = 4LL;
    v22 = 4LL;
    v20 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v14 = &unk_1807D25C7;
    UserData.Reserved = 2;
    v15 = 95;
    v16 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
}
