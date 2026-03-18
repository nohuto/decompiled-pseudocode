/*
 * XREFs of NtDxgkDisplayPortOperation @ 0x140077020
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z @ 0x1400A5344 (-SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z @ 0x1401ACEA0 (-DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z.c)
 *     ?DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z @ 0x1401AD170 (-DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z.c)
 *     ?DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z @ 0x1401AD440 (-DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z.c)
 *     ?DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z @ 0x1401AF5A8 (-DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z.c)
 *     ?DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z @ 0x1401B0544 (-DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z.c)
 */

__int64 __fastcall NtDxgkDisplayPortOperation(char *Src)
{
  struct DXGADAPTER *v2; // r14
  int v3; // r13d
  struct _DXGKARG_QUERYDPCAPS *v4; // rax
  struct _DXGKARG_QUERYDPCAPS *v5; // rsi
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // rcx
  unsigned int DPCaps; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // r9d
  int v23; // eax
  unsigned __int64 v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  char v30[8]; // [rsp+50h] [rbp-128h] BYREF
  int v31; // [rsp+58h] [rbp-120h] BYREF
  __int64 v32; // [rsp+60h] [rbp-118h]
  char v33; // [rsp+68h] [rbp-110h]
  struct _DXGKARG_QUERYDPCAPS *v34; // [rsp+70h] [rbp-108h] BYREF
  __int64 v35; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v36; // [rsp+80h] [rbp-F8h] BYREF
  struct DXGADAPTER *v37[2]; // [rsp+88h] [rbp-F0h] BYREF
  struct _LUID v38[2]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v39[144]; // [rsp+B0h] [rbp-C8h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2213;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2213);
  v30[0] = 0;
  if ( ((int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, v30) < 0 || !v30[0])
    && ((int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, v30) < 0 || !v30[0]) )
  {
    goto LABEL_100;
  }
  *(_OWORD *)&v38[0].LowPart = 0LL;
  RtlCopyFromUser(v38, Src, 0x10uLL);
  v37[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v37, &v38[1]);
  v2 = v37[0];
  if ( !v37[0] )
  {
    WdLogSingleEntry3(2LL, v38[1].HighPart, v38[1].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 81;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      v38[1].HighPart,
      v38[1].LowPart,
      -1073741811LL,
      0LL,
      0LL);
LABEL_96:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v37, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v3 = v38[0].HighPart - 16;
  if ( (unsigned int)(v38[0].HighPart - 17) > 0xFFF )
  {
    WdLogSingleEntry2(3LL, (int)v38[0].LowPart, (unsigned int)v38[0].HighPart);
    WdLogGlobalForLineNumber = 89;
    goto LABEL_96;
  }
  v4 = (struct _DXGKARG_QUERYDPCAPS *)operator new[](v3, 0x4B677844u, 256LL);
  v5 = v4;
  v34 = v4;
  if ( !v4 )
  {
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v34);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v37, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    return 3221225495LL;
  }
  RtlCopyFromUser(v4, Src + 16, v3);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v2, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, v38[1].HighPart, v38[1].LowPart);
    WdLogGlobalForLineNumber = 115;
LABEL_19:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v34);
    goto LABEL_96;
  }
  v9 = *((_QWORD *)v2 + 395);
  if ( !v9 )
  {
    WdLogSingleEntry3(2LL, v38[1].HighPart, v38[1].LowPart, -1073741811LL);
    WdLogGlobalForLineNumber = 123;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Non-display adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      v38[1].HighPart,
      v38[1].LowPart,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  if ( !*((_QWORD *)v2 + 182) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v9);
    v10[3] = v38[1].HighPart;
    v10[4] = v38[1].LowPart;
    v10[5] = -1073741637LL;
    WdLogGlobalForLineNumber = 130;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v34);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v37, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3221225659LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, *(_QWORD *)(v9 + 104));
  switch ( v38[0].LowPart )
  {
    case 1u:
      if ( v38[0].HighPart < 0x18u )
      {
        WdLogSingleEntry2(3LL, 1LL, (unsigned int)v38[0].HighPart);
        WdLogGlobalForLineNumber = 143;
        goto LABEL_32;
      }
      DPCaps = ADAPTER_DISPLAY::DdiQueryDPCaps(*((ADAPTER_DISPLAY **)v2 + 395), v5);
      break;
    case 2u:
      if ( v38[0].HighPart < 0x2Cu )
      {
        WdLogSingleEntry2(3LL, 2LL, (unsigned int)v38[0].HighPart);
        WdLogGlobalForLineNumber = 159;
        goto LABEL_32;
      }
      DPCaps = ADAPTER_DISPLAY::DdiGetDPAddress(*((ADAPTER_DISPLAY **)v2 + 395), v5);
      break;
    case 3u:
      if ( v38[0].HighPart < 0x38u )
      {
        WdLogSingleEntry2(3LL, 3LL, (unsigned int)v38[0].HighPart);
        WdLogGlobalForLineNumber = 175;
        goto LABEL_32;
      }
      if ( (*(_DWORD *)v5 & 1) != 0 )
      {
        WdLogSingleEntry2(3LL, 3LL, (unsigned int)v38[0].HighPart);
        WdLogGlobalForLineNumber = 187;
        goto LABEL_32;
      }
      if ( *((_BYTE *)v5 + 12) > 0x10u )
        goto LABEL_32;
      DPCaps = ADAPTER_DISPLAY::DdiDPAuxIoTransmission(*((ADAPTER_DISPLAY **)v2 + 395), v5);
      break;
    case 4u:
      if ( v38[0].HighPart < 0x3Cu )
      {
        WdLogSingleEntry2(3LL, 4LL, (unsigned int)v38[0].HighPart);
        WdLogGlobalForLineNumber = 204;
        goto LABEL_32;
      }
      v20 = *((_DWORD *)v5 + 4);
      if ( v20 + 40 > v3 )
      {
        WdLogSingleEntry2(3LL, 4LL, v20);
        WdLogGlobalForLineNumber = 216;
        goto LABEL_32;
      }
      v21 = *((_DWORD *)v5 + 6);
      if ( v21 > v20 )
      {
        WdLogSingleEntry2(3LL, 4LL, v21);
        WdLogGlobalForLineNumber = 222;
        goto LABEL_32;
      }
      v22 = *((_DWORD *)v5 + 5);
      if ( v22 > v20 )
      {
        WdLogSingleEntry2(3LL, 4LL, v22);
        WdLogGlobalForLineNumber = 228;
        goto LABEL_32;
      }
      v23 = *(_DWORD *)v5;
      v24 = *(unsigned int *)v5;
      if ( (*(_DWORD *)v5 & 1) == 0 && (v23 & 2) == 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 234;
        goto LABEL_32;
      }
      if ( (*(_DWORD *)v5 & 1) != 0 && !v21 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 240;
        goto LABEL_32;
      }
      if ( (v23 & 2) != 0 )
      {
        if ( !v22 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 248;
          goto LABEL_32;
        }
        v25 = *((_DWORD *)v5 + 2);
        if ( v25 != 110 )
        {
          WdLogSingleEntry2(3LL, 4LL, v25);
          WdLogGlobalForLineNumber = 254;
          goto LABEL_32;
        }
      }
      if ( (v24 & 4) != 0 && (v24 & 0x38) != 8 )
      {
        WdLogSingleEntry2(3LL, 4LL, (v24 >> 3) & 7);
        WdLogGlobalForLineNumber = 262;
        goto LABEL_32;
      }
      if ( (v24 & 0x38) > 0x20 )
      {
        WdLogSingleEntry2(3LL, 4LL, (v24 >> 3) & 7);
        WdLogGlobalForLineNumber = 268;
        goto LABEL_32;
      }
      DPCaps = ADAPTER_DISPLAY::DdiDPI2CIoTransmission(*((ADAPTER_DISPLAY **)v2 + 395), v5);
      break;
    case 5u:
      if ( v38[0].HighPart < 0x3Cu )
      {
        WdLogSingleEntry2(3LL, 5LL, (unsigned int)v38[0].HighPart);
        WdLogGlobalForLineNumber = 280;
        goto LABEL_32;
      }
      v13 = *((_DWORD *)v5 + 2);
      if ( v13 + 28 > v3 )
      {
        WdLogSingleEntry2(3LL, 5LL, v13);
        WdLogGlobalForLineNumber = 292;
        goto LABEL_32;
      }
      v14 = *((unsigned int *)v5 + 3);
      if ( (unsigned int)v14 > v13 )
      {
        WdLogSingleEntry2(3LL, 5LL, (unsigned int)v14);
        WdLogGlobalForLineNumber = 298;
        goto LABEL_32;
      }
      v15 = *((_DWORD *)v5 + 4);
      if ( v15 > v13 )
      {
        WdLogSingleEntry2(3LL, 5LL, v15);
        WdLogGlobalForLineNumber = 304;
        goto LABEL_32;
      }
      v36 = 127;
      v16 = SidebandMessageParser((char *)v5 + 28, v14, v12, &v36);
      v17 = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry2(3LL, (int)v38[0].LowPart, v16);
        WdLogGlobalForLineNumber = 317;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v35 + 40));
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v34);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v37, 0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
        return v17;
      }
      if ( v36 >= 2 && v36 != 18 && v36 != 32 && v36 != 34 && v36 != 56 )
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v35 + 40));
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v34);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v37, 0LL);
LABEL_100:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit);
        return 3221225506LL;
      }
      DPCaps = ADAPTER_DISPLAY::DdiDPSBMTransmission(*((ADAPTER_DISPLAY **)v2 + 395), v5);
      break;
    default:
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 340;
LABEL_32:
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v35 + 40));
      goto LABEL_19;
  }
  v26 = DPCaps;
  v36 = DPCaps;
  RtlCopyToUser(Src + 16, v5, v3);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v35 + 40));
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v34);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v37, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit);
  return v26;
}
