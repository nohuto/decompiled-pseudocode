/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1404121A4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x14006E6E4 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1401A08E8 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1401A2A70 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AAC0 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x14038FCD0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(struct DXGADAPTER *this, struct ADAPTER_DISPLAY **a2)
{
  _BOOL8 v4; // rcx
  bool v5; // zf
  const wchar_t *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  const wchar_t *v11; // r9
  char *v12; // rax
  ADAPTER_DISPLAY *v13; // rax
  struct ADAPTER_DISPLAY *v14; // rdi
  __int64 v15; // rdx
  int v16; // esi
  _DWORD *v18; // rsi
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]

  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4456;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 4456LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4457;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_ppDisplayCore != NULL", 4457LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 77)
    || !*((_QWORD *)this + 78)
    || !*((_QWORD *)this + 79)
    || !*((_QWORD *)this + 81)
    || !*((_QWORD *)this + 82) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(this)
    || !*((_QWORD *)this + 83) && *((int *)this + 761) < 2200
    || !*((_QWORD *)this + 70)
    || !*((_QWORD *)this + 71) )
  {
    if ( *((int *)this + 761) < 1200 && (*((_DWORD *)this + 111) & 0x10) == 0 )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v6 = L"Miniport did not provide required DDIs on adapter 0x%I64x (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 4585;
      goto LABEL_89;
    }
    if ( *((_QWORD *)this + 77)
      || *((_QWORD *)this + 78)
      || *((_QWORD *)this + 79)
      || *((_QWORD *)this + 80)
      || *((_QWORD *)this + 81)
      || *((_QWORD *)this + 82)
      || *((_QWORD *)this + 83)
      || *((_QWORD *)this + 69)
      || *((_QWORD *)this + 70)
      || *((_QWORD *)this + 71)
      || *((_QWORD *)this + 85)
      || *((_QWORD *)this + 84)
      || *((_QWORD *)this + 99)
      || *((_QWORD *)this + 145)
      || *((_QWORD *)this + 146)
      || *((_QWORD *)this + 147)
      || *((_QWORD *)this + 148) )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v6 = L"Not all the display relevant DDIs on adapter 0x%I64x are NULL (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 4550;
      goto LABEL_89;
    }
    v18 = (_DWORD *)((char *)this + 1900);
    if ( *((_DWORD *)this + 474) || *v18 )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 474), (unsigned int)*v18, -1073741735LL);
      v20 = (unsigned int)*v18;
      v19 = *((unsigned int *)this + 474);
      WdLogGlobalForLineNumber = 4560;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Number of VidPn Source 0x%I64x or Target 0x%I64x are not 0 on render only adapter 0x%I64x (Status = 0x%I64x).",
        v19,
        v20,
        -1073741735LL,
        0LL,
        0LL);
      return 3221225561LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
    WdLogGlobalForLineNumber = 4571;
LABEL_86:
    *a2 = 0LL;
    return 0LL;
  }
  if ( *((_QWORD *)this + 396) )
  {
    if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) )
      v5 = *((_QWORD *)this + 129) == 0LL;
    else
      v5 = *((_QWORD *)this + 80) == 0LL;
    if ( v5 || !*((_QWORD *)this + 85) || !*((_QWORD *)this + 69) && *((int *)this + 761) < 1200 )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v6 = L"Not all the display relevant DDIs for full WDDM on adapter 0x%I64x are implemented 0x%I64x).";
      WdLogGlobalForLineNumber = 4488;
LABEL_89:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, (__int64)this, -1073741735LL, 0LL, 0LL, 0LL);
      return 3221225561LL;
    }
  }
  else
  {
    if ( !*((_QWORD *)this + 104) )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v6 = L"Not all the display only relevant DDIs on adapter 0x%I64x are implemented (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 4503;
      goto LABEL_89;
    }
    v4 = *((_QWORD *)this + 87) == 0LL;
    if ( (*((_QWORD *)this + 85) == 0LL) != v4 )
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v6 = L"Either both GetScanLine & ControlInterrupts must be implemented or neither, on adapter 0x%I64x are implemente"
            "d (Status = 0x%I64x).";
      WdLogGlobalForLineNumber = 4515;
      goto LABEL_89;
    }
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, a2) + 24) = this;
  WdLogGlobalForLineNumber = 4522;
  if ( *((int *)this + 761) >= 1200 && !*((_DWORD *)this + 474) && !*((_DWORD *)this + 475) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = this;
    WdLogGlobalForLineNumber = 4599;
    goto LABEL_86;
  }
  v9 = *((_DWORD *)this + 474);
  if ( !v9 || v9 > 0x10 )
  {
    WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 474));
    v10 = *((unsigned int *)this + 474);
    v11 = L"Adapter 0x%I64x: Incorrect number of outputs 0x%I64x";
    WdLogGlobalForLineNumber = 4609;
    goto LABEL_61;
  }
  if ( !*((_DWORD *)this + 475) )
  {
    WdLogSingleEntry2(2LL, this, 0LL);
    v10 = *((unsigned int *)this + 475);
    v11 = L"Adapter 0x%I64x: Incorrect number of targets 0x%I64x";
    WdLogGlobalForLineNumber = 4617;
LABEL_61:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, (__int64)this, v10, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( *((_BYTE *)this + 3056) && *((int *)this + 694) >= 4608 && (!*((_BYTE *)this + 2976) || !*((_BYTE *)this + 2977)) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4630;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 display features.",
      4630LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)this + 84) )
    *((_QWORD *)this + 84) = W32kStub_UserRemoveWindowedSwapChain;
  if ( !*((_QWORD *)this + 99) )
    *((_QWORD *)this + 99) = ADAPTER_DISPLAY::DefaultDdiSetDisplayPrivateDriverFormat;
  if ( !*((_QWORD *)this + 136) )
    *((_QWORD *)this + 136) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)this + 146) )
    *((_QWORD *)this + 146) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)this + 147) )
    *((_QWORD *)this + 147) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)this + 148) )
    *((_QWORD *)this + 148) = W32kStub_GreSfmOpenTokenEvent;
  v12 = (char *)operator new(0x410uLL, 0x4B677844u, 64LL);
  if ( v12 && (v13 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v12, this), (v14 = v13) != 0LL) )
  {
    v16 = ADAPTER_DISPLAY::Initialize(v13);
    if ( v16 >= 0 )
    {
      WdLogSingleEntry2(4LL, v14, this);
      WdLogGlobalForLineNumber = 4692;
      *a2 = v14;
    }
    else
    {
      ADAPTER_DISPLAY::Destroy((ADAPTER_DISPLAY **)v14, v15);
      ADAPTER_DISPLAY::`scalar deleting destructor'(v14);
    }
    return (unsigned int)v16;
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 4676;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating ADAPTER_DISPLAY class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
