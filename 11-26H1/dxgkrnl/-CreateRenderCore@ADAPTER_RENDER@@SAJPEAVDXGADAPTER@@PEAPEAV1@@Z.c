/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1401A609C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x14006E70C (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1401A54C0 (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A6A7C (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A778C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(struct DXGADAPTER *a1, struct ADAPTER_RENDER **a2)
{
  __int64 (__fastcall *v4)(void *const, struct _DXGKARG_CREATEOVERLAY *); // rax
  __int64 (__fastcall *v5)(void *const, const struct _DXGKARG_UPDATEOVERLAY *); // rcx
  __int64 (__fastcall *v6)(void *const, const struct _DXGKARG_FLIPOVERLAY *); // rdx
  __int64 (__fastcall *v7)(void *const); // r8
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  const wchar_t *v11; // r9
  __int64 result; // rax
  __int64 v13; // rax
  const wchar_t *v14; // r9
  int v15; // eax
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  ADAPTER_RENDER *v20; // rax
  ADAPTER_RENDER *v21; // rax
  struct ADAPTER_RENDER *v22; // rdi
  int v23; // esi

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 479;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 479LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 480;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_ppRenderCore != NULL", 480LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_BYTE *)a1 + 209) )
    goto LABEL_145;
  if ( !*((_BYTE *)a1 + 448)
    || !*((_QWORD *)a1 + 58)
    || !*((_QWORD *)a1 + 60)
    || !*((_QWORD *)a1 + 61)
    || !*((_QWORD *)a1 + 90)
    || !*((_QWORD *)a1 + 91)
    || !*((_QWORD *)a1 + 62)
    || !*((_QWORD *)a1 + 66)
    || !*((_QWORD *)a1 + 67)
    || !*((_QWORD *)a1 + 68)
    || !*((_QWORD *)a1 + 72)
    || !*((_QWORD *)a1 + 73)
    || !*((_QWORD *)a1 + 76) && *((int *)a1 + 761) < 2000
    || !*((_QWORD *)a1 + 87) && (*((_DWORD *)a1 + 754) & 8) == 0
    || !*((_QWORD *)a1 + 89)
    || !*((_QWORD *)a1 + 75) && !*((_QWORD *)a1 + 214)
    || !*((_QWORD *)a1 + 93) )
  {
    if ( *((int *)a1 + 761) >= 1200 )
    {
      if ( !*((_QWORD *)a1 + 58)
        && !*((_QWORD *)a1 + 60)
        && !*((_QWORD *)a1 + 61)
        && !*((_QWORD *)a1 + 90)
        && !*((_QWORD *)a1 + 91)
        && !*((_QWORD *)a1 + 62)
        && !*((_QWORD *)a1 + 66)
        && !*((_QWORD *)a1 + 67)
        && !*((_QWORD *)a1 + 68)
        && !*((_QWORD *)a1 + 72)
        && !*((_QWORD *)a1 + 73)
        && !*((_QWORD *)a1 + 76)
        && !*((_QWORD *)a1 + 89)
        && !*((_QWORD *)a1 + 93)
        && !*((_QWORD *)a1 + 59)
        && !*((_QWORD *)a1 + 65)
        && !*((_QWORD *)a1 + 92)
        && !*((_QWORD *)a1 + 100)
        && !*((_QWORD *)a1 + 63)
        && !*((_QWORD *)a1 + 64)
        && !*((_QWORD *)a1 + 86)
        && !*((_QWORD *)a1 + 88)
        && !*((_QWORD *)a1 + 94)
        && !*((_QWORD *)a1 + 95)
        && !*((_QWORD *)a1 + 96) )
      {
        WdLogNewEntry5_WdTrace(a1, a2);
        result = 0LL;
        WdLogGlobalForLineNumber = 544;
        *a2 = 0LL;
        return result;
      }
      WdLogSingleEntry0(2LL);
      v13 = 538LL;
      v14 = L"Not all the render relevant DDIs are NULL.";
      goto LABEL_143;
    }
    WdLogSingleEntry0(2LL);
    v13 = 556LL;
    goto LABEL_69;
  }
  WdLogNewEntry5_WdTrace(a1, a2);
  v4 = (__int64 (__fastcall *)(void *const, struct _DXGKARG_CREATEOVERLAY *))*((_QWORD *)a1 + 88);
  WdLogGlobalForLineNumber = 508;
  if ( !v4 )
  {
    *((_QWORD *)a1 + 88) = ADAPTER_RENDER::DefaultDdiCreateOverlay;
    v4 = ADAPTER_RENDER::DefaultDdiCreateOverlay;
  }
  v5 = (__int64 (__fastcall *)(void *const, const struct _DXGKARG_UPDATEOVERLAY *))*((_QWORD *)a1 + 94);
  if ( !v5 )
  {
    *((_QWORD *)a1 + 94) = ADAPTER_RENDER::DefaultDdiUpdateOverlay;
    v5 = ADAPTER_RENDER::DefaultDdiUpdateOverlay;
  }
  v6 = (__int64 (__fastcall *)(void *const, const struct _DXGKARG_FLIPOVERLAY *))*((_QWORD *)a1 + 95);
  if ( !v6 )
  {
    *((_QWORD *)a1 + 95) = ADAPTER_RENDER::DefaultDdiFlipOverlay;
    v6 = ADAPTER_RENDER::DefaultDdiFlipOverlay;
  }
  v7 = (__int64 (__fastcall *)(void *const))*((_QWORD *)a1 + 96);
  if ( !v7 )
  {
    *((_QWORD *)a1 + 96) = ADAPTER_RENDER::DefaultDdiDestroyOverlay;
    v7 = ADAPTER_RENDER::DefaultDdiDestroyOverlay;
  }
  if ( !*((_QWORD *)a1 + 86) )
    *((_QWORD *)a1 + 86) = ADAPTER_RENDER::DefaultDdiStopCapture;
  if ( !*((_QWORD *)a1 + 63) )
    *((_QWORD *)a1 + 63) = ADAPTER_RENDER::DefaultDdiAcquireSwizzlingRange;
  if ( !*((_QWORD *)a1 + 64) )
    *((_QWORD *)a1 + 64) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( v4 != ADAPTER_RENDER::DefaultDdiCreateOverlay )
  {
LABEL_45:
    if ( v7 != ADAPTER_RENDER::DefaultDdiDestroyOverlay
      && v6 != ADAPTER_RENDER::DefaultDdiFlipOverlay
      && v5 != ADAPTER_RENDER::DefaultDdiUpdateOverlay )
    {
      goto LABEL_48;
    }
LABEL_114:
    WdLogSingleEntry0(2LL);
    v13 = 609LL;
    v14 = L"Create, Update, Flip and DestroyOverlay should all be supplied if any one of them is";
    goto LABEL_143;
  }
  if ( v5 != ADAPTER_RENDER::DefaultDdiUpdateOverlay
    || v6 != ADAPTER_RENDER::DefaultDdiFlipOverlay
    || v7 != ADAPTER_RENDER::DefaultDdiDestroyOverlay )
  {
    if ( v4 == ADAPTER_RENDER::DefaultDdiCreateOverlay )
      goto LABEL_114;
    goto LABEL_45;
  }
LABEL_48:
  v8 = *((_DWORD *)a1 + 694);
  if ( (v8 == 4096 || ((v8 - 4608) & 0xFFFFFEFF) == 0)
    && (!*((_QWORD *)a1 + 59) || !*((_QWORD *)a1 + 65) || !*((_QWORD *)a1 + 92)) )
  {
    WdLogSingleEntry0(2LL);
    v13 = 629LL;
    v14 = L"Miniport did not provide required DDIs for WDDM v1.x";
    goto LABEL_143;
  }
  v9 = *((_DWORD *)a1 + 623);
  if ( (v9 & 4) != 0 )
  {
    if ( !*((_QWORD *)a1 + 100) )
    {
      WdLogSingleEntry0(2LL);
      v10 = 638LL;
      v11 = L"Miniport did not provide RenderKm function but reported PresentationCaps.SupportKernelModeCommandBuffer cap";
LABEL_56:
      WdLogGlobalForLineNumber = v10;
LABEL_57:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    if ( *((int *)a1 + 761) < 1105 )
    {
      WdLogSingleEntry1(3LL);
      *((_DWORD *)a1 + 623) &= ~4u;
      v9 = *((_DWORD *)a1 + 623);
      WdLogGlobalForLineNumber = 643;
      *((_QWORD *)a1 + 100) = 0LL;
    }
    if ( (v9 & 0x20000000) != 0 )
    {
      WdLogSingleEntry0(2LL);
      v10 = 650LL;
      v11 = L"Miniport set the NoCacheCoherentApertureMemory cap on non-ARM architecture";
      goto LABEL_56;
    }
  }
  if ( *((_DWORD *)a1 + 621) > 4u )
    *((_DWORD *)a1 + 621) = 4;
  if ( *((_DWORD *)a1 + 620)
    && (*((__int64 (__fastcall **)(void *const, struct _DXGKARG_ACQUIRESWIZZLINGRANGE *))a1 + 63) == ADAPTER_RENDER::DefaultDdiAcquireSwizzlingRange
     || *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))a1 + 64) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
  {
    WdLogSingleEntry0(2LL);
    v13 = 665LL;
LABEL_69:
    v14 = L"Miniport did not provide required DDIs";
LABEL_143:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  v15 = *((_DWORD *)a1 + 626);
  if ( (v15 & 1) != 0 )
  {
    if ( *((int *)a1 + 694) < 0x2000 )
    {
      v16 = *((_DWORD *)a1 + 629);
      if ( !v16 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 676;
        return 3221225485LL;
      }
      v17 = *((_DWORD *)a1 + 74);
      v18 = v17 * v16;
      if ( *((int *)a1 + 761) <= 2400 && v18 > 0x40 )
      {
        WdLogSingleEntry4(3LL, a1, 64LL, v17, *((unsigned int *)a1 + 629));
        WdLogGlobalForLineNumber = 691;
        return 3221225485LL;
      }
      *((_DWORD *)a1 + 760) = v18;
    }
  }
  else
  {
    if ( (v15 & 4) != 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 703;
      return 3221225485LL;
    }
    if ( (v15 & 0x10) != 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 710;
      return 3221225485LL;
    }
    *((_DWORD *)a1 + 629) = 1;
    *((_DWORD *)a1 + 760) = 1;
  }
  if ( *((_BYTE *)a1 + 3056)
    && *((int *)a1 + 694) >= 4608
    && (!*((_DWORD *)a1 + 742)
     || !*((_DWORD *)a1 + 743)
     || !*((_BYTE *)a1 + 2978)
     || (*((_DWORD *)a1 + 754) & 8) == 0
     && ((*((_DWORD *)a1 + 625) & 2) == 0 || (*((_DWORD *)a1 + 111) & 0x10) == 0 && (*((_DWORD *)a1 + 623) & 4) == 0)) )
  {
    WdLogSingleEntry0(2LL);
    v10 = 730LL;
    v11 = L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 render features.";
    goto LABEL_56;
  }
  v19 = *((_DWORD *)a1 + 694);
  if ( v19 >= 0x2000 )
  {
    if ( (*((_DWORD *)a1 + 625) & 2) == 0 && (*((_DWORD *)a1 + 754) & 8) == 0 )
    {
      WdLogSingleEntry1(2LL);
      v10 = *((unsigned int *)a1 + 625);
      v11 = L"Driver reports WDDM version 2.0 or higher but does not support FlipOnVSyncMmIo cap. The caps value is 0x%x";
      WdLogGlobalForLineNumber = 740;
      goto LABEL_57;
    }
    goto LABEL_98;
  }
  if ( v19 >= 4864 )
  {
LABEL_98:
    if ( !*((_QWORD *)a1 + 110) )
    {
      WdLogSingleEntry0(2LL);
      v10 = 752LL;
      v11 = L"Driver reports WDDM 1.3 driver, but does not support node metadata.";
      goto LABEL_56;
    }
    if ( v19 >= 9216 && (*((_DWORD *)a1 + 627) & 0x800) != 0 && (!*((_QWORD *)a1 + 164) || !*((_QWORD *)a1 + 165)) )
    {
      WdLogSingleEntry0(2LL);
      v10 = 767LL;
      v11 = L"Driver reports WDDM 2.4 driver with IoMmuSecureMode support, but does not support Begin/EndExclusiveAccess DDIs.";
      goto LABEL_56;
    }
    if ( v19 >= 12800
      && (*((_DWORD *)a1 + 1292) & 1) != 0
      && (!*((_QWORD *)a1 + 196)
       || !*((_QWORD *)a1 + 197)
       || !*((_QWORD *)a1 + 198)
       || !*((_QWORD *)a1 + 199)
       || !*((_QWORD *)a1 + 200)) )
    {
      WdLogSingleEntry0(2LL);
      v10 = 787LL;
      v11 = L"Driver reports WDDM 3.2 driver with DirtyBitTracking support, but does not support required DDIs.";
      goto LABEL_56;
    }
  }
LABEL_145:
  v20 = (ADAPTER_RENDER *)operator new(0x780uLL, 0x4B677844u, 64LL);
  if ( v20 && (v21 = ADAPTER_RENDER::ADAPTER_RENDER(v20, a1), (v22 = v21) != 0LL) )
  {
    v23 = ADAPTER_RENDER::Initialize(v21);
    if ( v23 >= 0 )
    {
      WdLogSingleEntry2(4LL, v22, a1);
      WdLogGlobalForLineNumber = 820;
      *a2 = v22;
    }
    else
    {
      ADAPTER_RENDER::Destroy(v22);
      ADAPTER_RENDER::`scalar deleting destructor'(v22);
    }
    return (unsigned int)v23;
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 802;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating ADAPTER_RENDER class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
