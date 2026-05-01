/*
 * XREFs of CrmLogActivityCoordinatorTelemetry @ 0x18001DFA0
 * Callers:
 *     CrmGlobalsRundown @ 0x18001DCB4 (CrmGlobalsRundown.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18001DE38 (CrmGlobalsRegistrationRundownHelper.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x18001CCD0 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogActivityCoordinatorTelemetry(_QWORD *a1, const wchar_t *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  __int64 v6; // rcx
  ULONGLONG v7; // r10
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v10[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v20; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
  _BYTE v23[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  __int64 *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  __int64 *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  __int64 *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  __int64 *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  __int64 *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  _DWORD *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  __int64 v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  __int64 *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]

  if ( (unsigned __int64)(a3 - *a1) >= 0x430E234000LL )
  {
    *a1 = a3;
    v3 = 1;
    if ( (unsigned int)dword_1800E12E8 > 5
      && (qword_1800E12F8 & 0x400000000004LL) != 0
      && (qword_1800E1300 & 0x400000000004LL) == qword_1800E1300 )
    {
      tlgCreate1Sz_wchar_t((__int64)v23, a2);
      v6 = *(_QWORD *)(v5 + 56);
      v24 = &v11;
      v12 = *(_QWORD *)(v5 + 80);
      v26 = &v12;
      v8 = *(_DWORD *)(v5 + 104);
      v28 = &v8;
      v13 = *(_QWORD *)(v5 + 72);
      v30 = &v13;
      v14 = *(_QWORD *)(v5 + 96);
      v32 = &v14;
      v9 = *(_DWORD *)(v5 + 112);
      v34 = &v9;
      v15 = *(_QWORD *)(v5 + 64);
      v36 = &v15;
      v16 = *(_QWORD *)(v5 + 88);
      v38 = &v16;
      v10[0] = *(_DWORD *)(v5 + 108);
      v40 = v10;
      v42 = v5 + 124;
      v11 = v6;
      v44 = &v17;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800E12F0;
      v25 = 8LL;
      v27 = 8LL;
      v29 = 4LL;
      v31 = 8LL;
      v33 = 8LL;
      v35 = 4LL;
      v37 = 8LL;
      v39 = 8LL;
      v41 = 4LL;
      v43 = 8LL;
      v17 = 0x2000000LL;
      v45 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = v7;
      UserData.Size = *(unsigned __int16 *)off_1800E12F0;
      v20 = &unk_1800CBA0D;
      UserData.Reserved = 2;
      v21 = 267;
      v22 = 1;
      v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800E1308, &EventDescriptor, 0LL, 0LL, 0xEu, &UserData);
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
