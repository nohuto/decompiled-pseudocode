/*
 * XREFs of ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@IEAAX_KPEAGI0PEAX@Z @ 0x1403FBDE4
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1403B4088 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 *     ?EmitSleepStudyVidMmEvictionDataEvents@DripsBlockerTrackingHelper@@IEAAX_KIPEA_K@Z @ 0x1403B5810 (-EmitSleepStudyVidMmEvictionDataEvents@DripsBlockerTrackingHelper@@IEAAX_KIPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        unsigned __int16 *a3,
        int a4,
        ULONGLONG Value,
        LPCGUID ActivityId)
{
  const GUID *v6; // rbx
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD *v11; // [rsp+50h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v13; // [rsp+68h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-98h]
  const GUID *v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  int *v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  unsigned __int16 *v19; // [rsp+98h] [rbp-70h]
  int v20; // [rsp+A0h] [rbp-68h]
  int v21; // [rsp+A4h] [rbp-64h]
  struct _UNICODE_STRING *p_String; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  _OWORD *v24; // [rsp+B8h] [rbp-50h]
  int v25; // [rsp+C0h] [rbp-48h]
  int v26; // [rsp+C4h] [rbp-44h]
  __int64 *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  _OWORD v29[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-10h]
  __int16 v31; // [rsp+100h] [rbp-8h]
  __int64 v32; // [rsp+130h] [rbp+28h] BYREF
  int v33; // [rsp+140h] [rbp+38h] BYREF

  v33 = a4;
  v32 = a2;
  v6 = ActivityId;
  v30 = 0LL;
  v31 = 0;
  String.Buffer = (wchar_t *)2752512;
  v11 = v29;
  memset(v29, 0, sizeof(v29));
  if ( RtlInt64ToUnicodeString(Value, 0xAu, (PUNICODE_STRING)&String.Buffer) < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 66;
  }
  else
  {
    LOBYTE(v8) = v32;
    UserData.Ptr = (ULONGLONG)&v8;
    v13 = &v9;
    v17 = &v33;
    v20 = 2 * v33;
    v9 = 1;
    p_String = &String;
    v24 = v11;
    v25 = 2 * ((LOWORD(String.Buffer) >> 1) + 1);
    v27 = &v32;
    *(_DWORD *)&String.Length = (LOWORD(String.Buffer) >> 1) + 1;
    *(_QWORD *)&UserData.Size = 1LL;
    v21 = 0;
    v26 = 0;
    v14 = 4LL;
    v15 = v6;
    v16 = 16LL;
    v18 = 4LL;
    v19 = a3;
    v23 = 4LL;
    v28 = 8LL;
    EtwWrite(SLEEPSTUDY_ETW_PROVIDER_Context[0], &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, v6, 8u, &UserData);
  }
}
