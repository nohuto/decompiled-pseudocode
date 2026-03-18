/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x14005B070
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x14005B03C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140002748 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140040548 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 *     TakeTelemetryAssertsLock @ 0x14005B578 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  __int64 **v2; // rcx
  __int64 *v3; // rax
  __int64 *v4; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v6; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int16 v12; // cx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  unsigned __int64 v15; // rcx
  unsigned int v16; // ebx
  int v17; // r12d
  int v18; // r13d
  struct _FAST_MUTEX *v19; // rcx
  int v20; // edi
  KIRQL CurrentIrql; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // r8
  char v26; // al
  const GUID *v27; // r8
  ULONG v28; // r10d
  __int64 **v29; // rcx
  __int64 *v30; // rax
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v33; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-A4h] BYREF
  int v35; // [rsp+68h] [rbp-A0h] BYREF
  int v36; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v37; // [rsp+70h] [rbp-98h] BYREF
  int v38; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v40; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v41; // [rsp+80h] [rbp-88h] BYREF
  int v42; // [rsp+84h] [rbp-84h] BYREF
  int v43; // [rsp+88h] [rbp-80h] BYREF
  int v44; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+98h] [rbp-70h] BYREF
  int *v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  int *v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h]
  int *v50; // [rsp+D8h] [rbp-30h]
  __int64 v51; // [rsp+E0h] [rbp-28h]
  int *v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  _BYTE v54[16]; // [rsp+F8h] [rbp-10h] BYREF
  int *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  int *v57; // [rsp+118h] [rbp+10h]
  __int64 v58; // [rsp+120h] [rbp+18h]
  int *v59; // [rsp+128h] [rbp+20h]
  __int64 v60; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+138h] [rbp+30h] BYREF
  int *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  int *v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  int *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  int *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  _BYTE v70[16]; // [rsp+198h] [rbp+90h] BYREF
  int *v71; // [rsp+1A8h] [rbp+A0h]
  __int64 v72; // [rsp+1B0h] [rbp+A8h]
  int *v73; // [rsp+1B8h] [rbp+B0h]
  __int64 v74; // [rsp+1C0h] [rbp+B8h]
  int *v75; // [rsp+1C8h] [rbp+C0h]
  __int64 v76; // [rsp+1D0h] [rbp+C8h]
  _BYTE v77[16]; // [rsp+1D8h] [rbp+D0h] BYREF

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0)
    && !(unsigned int)((__int64 (*)(void))TakeTelemetryAssertsLock)() )
  {
    v2 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v3 = *v2;
      v2 = (__int64 **)v3;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v3 )
        break;
      v4 = v3 - 4;
      if ( *(v3 - 4) == a1 )
        goto LABEL_11;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v4 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_36;
    v6 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v4[2] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    v4[1] = ((__int64)((unsigned __int128)(v6 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v6 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v8 = v4 + 4;
    v9 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v8 = g_MicrosoftTelemetryAssertsTriggeredList;
    v4[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v9 + 8) = v8;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v4 + 4);
LABEL_11:
    ++*((_DWORD *)v4 + 4);
    ++*((_DWORD *)v4 + 5);
    v10 = MEMORY[0xFFFFF78000000320];
    v11 = v10 * KeQueryTimeIncrement() / 10000;
    if ( (unsigned __int64)(v11 - v4[1]) <= 0xEA60 )
    {
LABEL_36:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v12 = *(_WORD *)(MEMORY[0x14000003C] + 0x140000018LL);
    if ( v12 == 267 || v12 == 523 )
    {
      v13 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000008LL);
      v14 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000050LL);
    }
    else
    {
      v13 = 0;
      v14 = 0;
    }
    if ( a1 < 0x140000000LL || (v15 = 0x140000000LL + v14, v15 <= 0x140000000LL) || a1 > v15 )
      v16 = 0;
    else
      v16 = a1 - 0x40000000;
    v17 = *((_DWORD *)v4 + 4);
    v18 = *((_DWORD *)v4 + 5);
    v19 = g_AssertFastMutex;
    v4[1] = v11;
    v20 = *((_DWORD *)v4 + 6);
    ExReleaseFastMutex(v19);
    if ( (unsigned int)dword_140098040 > 5 && tlgKeywordOn((__int64)&dword_140098040, 0x400000000000LL) )
    {
      v31 = 10;
      v62 = &v31;
      v63 = 4LL;
      v64 = (int *)&v32;
      v32 = v16;
      v66 = (int *)&v33;
      v68 = (int *)&v34;
      v65 = 4LL;
      v33 = v13;
      v67 = 4LL;
      v34 = v14;
      v69 = 4LL;
      tlgCreate1Sz_char((__int64)v70, "<unknown>");
      v35 = v17;
      v71 = &v35;
      v73 = &v36;
      v72 = 4LL;
      v36 = v18;
      v74 = 4LL;
      CurrentIrql = KeGetCurrentIrql();
      v76 = 4LL;
      v37 = CurrentIrql;
      v75 = &v37;
      tlgCreate1Sz_char((__int64)v77, "<unknown>");
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140098040, byte_14007EAB0, 0LL, 0LL, 0xBu, &v61);
    }
    if ( dword_140098078 && !v20 && !KeGetCurrentIrql() )
    {
      v24 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v16, 0LL, v13, v14, 0LL, 0LL, 0);
      if ( (unsigned int)dword_140098040 > 5 )
      {
        v26 = tlgKeywordOn((__int64)&dword_140098040, 0x400000000000LL);
        v25 = 0LL;
        if ( v26 )
        {
          v47 = 4LL;
          v46 = &v38;
          v38 = 10;
          v48 = (int *)&v39;
          v39 = v16;
          v50 = (int *)&v40;
          v49 = 4LL;
          v52 = (int *)&v41;
          v40 = v13;
          v51 = 4LL;
          v41 = v14;
          v53 = 4LL;
          tlgCreate1Sz_char((__int64)v54, "<unknown>");
          v42 = v17;
          v55 = &v42;
          v56 = 4LL;
          v57 = &v43;
          v43 = v18;
          v59 = &v44;
          v58 = 4LL;
          v44 = v24;
          v60 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140098040, byte_14007EBC3, v27, 0LL, v28, &v45);
        }
      }
      if ( !v24 && !(unsigned int)TakeTelemetryAssertsLock(v23, v22, v25) )
      {
        v29 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v30 = *v29;
          v29 = (__int64 **)v30;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v30 )
            goto LABEL_36;
          if ( *(v30 - 4) == a1 )
          {
            ++*((_DWORD *)v30 - 2);
            goto LABEL_36;
          }
        }
      }
    }
  }
}
