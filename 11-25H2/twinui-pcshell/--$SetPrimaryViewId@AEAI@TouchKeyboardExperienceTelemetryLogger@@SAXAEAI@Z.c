/*
 * XREFs of ??$SetPrimaryViewId@AEAI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI@Z @ 0x1801B3894
 * Callers:
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1801B3830 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::SetPrimaryViewId<unsigned int &>(int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  const struct _tlgProvider_t *v3; // rcx
  int v4; // eax
  _DWORD v6[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  _DWORD *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  __int64 *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  v2 = TouchKeyboardExperienceTraceLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 5u && (*((_BYTE *)v2 + 16) & 0x10) != 0 && (*((_QWORD *)v2 + 3) & 0x10LL) == *((_QWORD *)v2 + 3) )
  {
    v4 = *a1;
    v18 = 0;
    v15 = 0;
    v6[0] = v4;
    v16 = &v7;
    v13 = v6;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v3 + 1);
    v14 = 4;
    v7 = 0x1000000LL;
    v17 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 16LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v10 = &unk_1807D11F8;
    UserData.Reserved = 2;
    v11 = 51;
    v12 = 1;
    v6[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v2) = EventWriteTransfer(*((_QWORD *)v3 + 4), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v2;
}
