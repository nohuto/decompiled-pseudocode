/*
 * XREFs of PfSnLogScenarioDecision @ 0x1409D199C
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 *     PfSnBeginScenario @ 0x1409D16A0 (PfSnBeginScenario.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 */

NTSTATUS __fastcall PfSnLogScenarioDecision(
        ULONG_PTR BugCheckParameter1,
        const WCHAR *a2,
        int a3,
        int a4,
        char a5,
        char a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rdi
  char v12; // r15
  char v13; // r12
  NTSTATUS result; // eax
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21; // [rsp+31h] [rbp-CFh] BYREF
  char v22; // [rsp+32h] [rbp-CEh] BYREF
  char v23; // [rsp+33h] [rbp-CDh] BYREF
  char v24; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v32[4]; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+74h] [rbp-8Ch]
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int16 v35; // [rsp+A8h] [rbp-58h]
  __int16 v36; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  const WCHAR *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  const WCHAR *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  __int16 *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  char *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  char *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  int *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  int *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+160h] [rbp+60h] BYREF
  __int128 *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  char v58[16]; // [rsp+190h] [rbp+90h] BYREF
  char *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  char *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  char *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  int *v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]
  __int64 *v69; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  int v71; // [rsp+270h] [rbp+170h] BYREF

  v71 = a3;
  v8 = a8;
  memset_0(v32, 0, 0x60uLL);
  v12 = a6;
  v13 = a5;
  v25 = 0;
  v26 = 0;
  v20 = 0;
  v21 = 0;
  v27 = 0;
  if ( stru_140E67200.WaitBlock[0].Thread
    && EtwEventEnabled((REGHANDLE)stru_140E67200.WaitBlock[0].Thread, &PfSnEvt_ScenarioDecision_Info) )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a2[v16] );
    v25 = v16;
    v39 = 2 * (unsigned __int16)v16;
    v41 = a2 + 30;
    v43 = &v71;
    v45 = &v26;
    v47 = &v20;
    v49 = &v21;
    v51 = &a7;
    UserData.Ptr = (ULONGLONG)&v25;
    *(_QWORD *)&UserData.Size = 2LL;
    v38 = a2;
    v40 = 0;
    v42 = 4LL;
    v44 = 4LL;
    v26 = a4;
    v46 = 2LL;
    v20 = v13;
    v48 = 1LL;
    v21 = v12;
    v50 = 1LL;
    v52 = 4LL;
    if ( v8 < 0 )
      LODWORD(v17) = -(v8 != -1) - 1;
    else
      v17 = v8 / 0x989680uLL;
    v27 = v17;
    v54 = 4LL;
    v53 = &v27;
    EtwWrite((REGHANDLE)stru_140E67200.WaitBlock[0].Thread, &PfSnEvt_ScenarioDecision_Info, 0LL, 9u, &UserData);
  }
  result = EtwQueryProcessTelemetryInfo(BugCheckParameter1, v32, 0x60uLL, 0LL);
  v15 = 0;
  if ( result != -2147483643 )
    v15 = result;
  v31 = 0LL;
  if ( v15 >= 0 )
  {
    LODWORD(v31) = v33;
    WORD2(v31) = v35;
    WORD3(v31) = v36;
    result = v34;
    *((_QWORD *)&v31 + 1) = v34;
  }
  if ( (unsigned int)dword_140E07398 > 4 && (byte_140E073A8 & 1) != 0 )
  {
    result = qword_140E073B0 & 1;
    if ( (qword_140E073B0 & 1) == qword_140E073B0 )
    {
      v57 = 16LL;
      v56 = &v31;
      tlgCreate1Sz_wchar_t((__int64)v58, a2);
      v59 = &v22;
      v22 = v71;
      v61 = &v28;
      v60 = v18;
      v63 = &v23;
      v64 = v18;
      v65 = &v24;
      v29 = a7;
      v67 = &v29;
      v69 = &v30;
      v66 = v18;
      v28 = a4;
      v62 = v19;
      v23 = v12;
      v24 = v13;
      v68 = v19;
      v30 = v8;
      v70 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07398,
               (unsigned __int8 *)byte_140049D53,
               0LL,
               0LL,
               0xAu,
               &v55);
    }
  }
  return result;
}
