/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x140057954
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400578F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140057924 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140001008 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x140001040 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14000106C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        int a2,
        _BYTE *a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  unsigned int v6; // esi
  KIRQL v8; // r12
  __int64 **v9; // rdx
  __int64 *v10; // rcx
  __int64 *v11; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v13; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int16 v19; // cx
  unsigned int v20; // r15d
  unsigned int v21; // ebx
  unsigned __int64 v22; // rcx
  unsigned int v23; // r13d
  int v24; // eax
  _BYTE *v25; // r12
  char *v26; // rdi
  char *v27; // r9
  char *v28; // rdx
  KIRQL CurrentIrql; // al
  char *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  char *v33; // r9
  char *v34; // rdx
  KIRQL v35; // al
  char *v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // r12d
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r9
  ULONG v44; // r10d
  __int64 **v45; // rcx
  __int64 *v46; // rax
  unsigned int v47; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v48; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v49; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v50; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-A0h] BYREF
  int v52; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v53; // [rsp+68h] [rbp-98h] BYREF
  int v54; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v55; // [rsp+70h] [rbp-90h]
  unsigned int v56; // [rsp+74h] [rbp-8Ch] BYREF
  int v57; // [rsp+78h] [rbp-88h]
  unsigned int v58; // [rsp+7Ch] [rbp-84h]
  int v59; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v62[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  int *v65; // [rsp+D0h] [rbp-30h]
  __int64 v66; // [rsp+D8h] [rbp-28h]
  unsigned int *v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  int *v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  _BYTE v71[16]; // [rsp+100h] [rbp+0h] BYREF
  int *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  int *v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  int *v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  _BYTE v78[16]; // [rsp+140h] [rbp+40h] BYREF
  unsigned int *v79; // [rsp+150h] [rbp+50h]
  __int64 v80; // [rsp+158h] [rbp+58h]
  int *v81; // [rsp+160h] [rbp+60h]
  __int64 v82; // [rsp+168h] [rbp+68h]
  char v83[16]; // [rsp+170h] [rbp+70h] BYREF

  v6 = 0;
  v61 = a6;
  v58 = a4;
  v60 = a3;
  v57 = a2;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
    v9 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v10 = *v9;
      v9 = (__int64 **)v10;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v10 )
        break;
      v11 = v10 - 4;
      if ( *(v10 - 4) == a1 )
        goto LABEL_10;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v11 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_55;
    v13 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v11[2] = 0LL;
    *((_DWORD *)v11 + 6) = 0;
    v11[1] = ((__int64)((unsigned __int128)(v13 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v13 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v15 = v11 + 4;
    v16 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    v11[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v16 + 8) = v15;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v11 + 4);
LABEL_10:
    ++*((_DWORD *)v11 + 4);
    ++*((_DWORD *)v11 + 5);
    v17 = MEMORY[0xFFFFF78000000320];
    v18 = v17 * KeQueryTimeIncrement() / 10000;
    if ( (unsigned __int64)(v18 - v11[1]) <= 0xEA60 )
    {
LABEL_55:
      KeReleaseSpinLock(&g_AssertSpinLock, v8);
      return;
    }
    v19 = *(_WORD *)(MEMORY[0x14000003C] + 0x140000018LL);
    if ( v19 == 267 || v19 == 523 )
    {
      v20 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000008LL);
      v21 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000050LL);
    }
    else
    {
      v20 = 0;
      v21 = 0;
    }
    if ( a1 >= 0x140000000LL )
    {
      v22 = 0x140000000LL + v21;
      if ( v22 > 0x140000000LL && a1 <= v22 )
        v6 = a1 - 0x40000000;
    }
    v23 = *((_DWORD *)v11 + 4);
    v55 = *((_DWORD *)v11 + 5);
    v24 = *((_DWORD *)v11 + 6);
    v11[1] = v18;
    v54 = v24;
    KeReleaseSpinLock(&g_AssertSpinLock, v8);
    v25 = v60;
    v26 = "<unknown>";
    if ( !v60 )
      v25 = g_ModuleName;
    v60 = v25;
    if ( v57 )
    {
      if ( (unsigned int)dword_140072040 > 5 && tlgKeywordOn((__int64)&dword_140072040, 0x400000000000LL) )
      {
        v59 = 10;
        v63 = &v59;
        v64 = 4LL;
        v65 = (int *)&v56;
        v56 = v6;
        v67 = &v53;
        v28 = "<unknown>";
        v66 = 4LL;
        if ( v27 )
          v28 = v27;
        v69 = (int *)&v47;
        v53 = v20;
        v68 = 4LL;
        v47 = v21;
        v70 = 4LL;
        tlgCreate1Sz_char((__int64)v71, v28);
        v48 = v23;
        v72 = (int *)&v48;
        v49 = v55;
        v74 = (int *)&v49;
        v73 = 4LL;
        v75 = 4LL;
        CurrentIrql = KeGetCurrentIrql();
        v77 = 4LL;
        v50 = CurrentIrql;
        v76 = (int *)&v50;
        tlgCreate1Sz_char((__int64)v78, v25);
        v79 = &v51;
        v52 = a5;
        v81 = &v52;
        v30 = (char *)v61;
        v51 = v58;
        v80 = 4LL;
        if ( !v61 )
          v30 = "<unknown>";
        v82 = 4LL;
        tlgCreate1Sz_char((__int64)v83, v30);
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140072040, byte_1400643DD, v31, v32, 0xEu, v62);
      }
    }
    else if ( (unsigned int)dword_140072040 > 5 && tlgKeywordOn((__int64)&dword_140072040, 0x400000000000LL) )
    {
      v52 = 10;
      v63 = &v52;
      v64 = 4LL;
      v65 = (int *)&v51;
      v51 = v6;
      v67 = &v50;
      v34 = "<unknown>";
      v66 = 4LL;
      if ( v33 )
        v34 = v33;
      v69 = (int *)&v49;
      v50 = v20;
      v68 = 4LL;
      v49 = v21;
      v70 = 4LL;
      tlgCreate1Sz_char((__int64)v71, v34);
      v48 = v23;
      v72 = (int *)&v48;
      v47 = v55;
      v74 = (int *)&v47;
      v73 = 4LL;
      v75 = 4LL;
      v35 = KeGetCurrentIrql();
      v77 = 4LL;
      v53 = v35;
      v76 = (int *)&v53;
      v36 = (char *)v61;
      if ( !v61 )
        v36 = "<unknown>";
      tlgCreate1Sz_char((__int64)v78, v36);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140072040,
        (unsigned __int8 *)dword_14006452D,
        v37,
        v38,
        0xBu,
        v62);
    }
    if ( dword_140072078 && !v54 && !KeGetCurrentIrql() )
    {
      v39 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v6, g_ModuleName, v20, v21, 0LL, 0LL, 0);
      if ( v57 )
      {
        if ( (unsigned int)dword_140072040 > 5 && tlgKeywordOn((__int64)&dword_140072040, 0x400000000000LL) )
        {
          v54 = 10;
          v63 = &v54;
          v64 = 4LL;
          v65 = &v52;
          v67 = &v51;
          v69 = (int *)&v50;
          v52 = v6;
          v66 = 4LL;
          if ( g_ModuleName )
            v26 = (char *)g_ModuleName;
          v51 = v20;
          v68 = 4LL;
          v50 = v21;
          v70 = 4LL;
          tlgCreate1Sz_char((__int64)v71, v26);
          v72 = (int *)&v49;
          v48 = v55;
          v74 = (int *)&v48;
          v76 = (int *)&v47;
          v49 = v23;
          v73 = 4LL;
          v75 = 4LL;
          v47 = v39;
          v77 = 4LL;
          tlgCreate1Sz_char((__int64)v78, v60);
          v53 = v58;
          v79 = &v53;
          v56 = a5;
          v81 = (int *)&v56;
          v80 = 4LL;
          v82 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140072040, byte_140064487, v40, v41, 0xDu, v62);
        }
      }
      else if ( (unsigned int)dword_140072040 > 5 && tlgKeywordOn((__int64)&dword_140072040, 0x400000000000LL) )
      {
        v64 = 4LL;
        v63 = &v54;
        v52 = v6;
        v65 = &v52;
        v54 = 10;
        v67 = &v51;
        v69 = (int *)&v50;
        v66 = 4LL;
        v51 = v20;
        if ( g_ModuleName )
          v26 = (char *)g_ModuleName;
        v68 = 4LL;
        v50 = v21;
        v70 = 4LL;
        tlgCreate1Sz_char((__int64)v71, v26);
        v49 = v23;
        v72 = (int *)&v49;
        v48 = v55;
        v74 = (int *)&v48;
        v76 = (int *)&v47;
        v73 = 4LL;
        v75 = 4LL;
        v47 = v39;
        v77 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140072040,
          (unsigned __int8 *)dword_14006459A,
          v42,
          v43,
          v44,
          v62);
      }
      if ( !v39 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
        v45 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v46 = *v45;
          v45 = (__int64 **)v46;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v46 )
            goto LABEL_55;
          if ( *(v46 - 4) == a1 )
          {
            ++*((_DWORD *)v46 - 2);
            goto LABEL_55;
          }
        }
      }
    }
  }
}
