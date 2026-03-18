/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x140007470
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140097080 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1403AAB80 (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1403AADD0 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1400076D4 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, const struct _D3DKMDT_GAMMA_RAMP *a2)
{
  enum _D3DDDI_GAMMARAMP_TYPE Type; // ecx
  unsigned __int64 SizeFromGammaRampType; // rax
  SIZE_T DataSize; // r8
  void *v7; // rax
  size_t v8; // r8
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  D3DDDI_GAMMARAMP_TYPE v17; // ecx
  const wchar_t *v18; // rax
  __int64 v19; // [rsp+38h] [rbp-30h]
  SIZE_T v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]

  Type = a2->Type;
  if ( a2->Type != D3DDDI_GAMMARAMP_DEFAULT && (unsigned int)(Type - 2) > 3 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 152;
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) == 0 )
      return 3221225485LL;
    v21 = 0LL;
    v20 = 0LL;
    v19 = a2->Type;
    v18 = L"Caller specified gamma ramp has invalid gamma type 0x%I64x.";
    goto LABEL_19;
  }
  SizeFromGammaRampType = GetSizeFromGammaRampType(Type);
  *((_QWORD *)this + 3) = SizeFromGammaRampType;
  DataSize = a2->DataSize;
  if ( SizeFromGammaRampType != DataSize )
  {
    WdLogSingleEntry3(2LL, a2->Type, DataSize, -1073741811LL);
    WdLogGlobalForLineNumber = 166;
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) == 0 )
      return 3221225485LL;
    v17 = a2->Type;
    v21 = -1073741811LL;
    v20 = a2->DataSize;
    v18 = L"GammaRamp size 0x%I64x does not match the gamma ramp type 0x%I64x, returning 0x%I64x";
    v19 = a2->Type;
LABEL_19:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v17, v15, v16, 0, 0, -1, (__int64)v18, v19, v20, v21, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( !SizeFromGammaRampType )
  {
LABEL_7:
    *((_DWORD *)this + 4) = a2->Type;
    return 0LL;
  }
  if ( !a2->Data.pRgb256x3x16 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 177;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (unsigned int)L"Caller specified gamma ramp does not have the gamma table it should have.",
        v10,
        v11,
        0,
        0,
        -1,
        (__int64)L"Caller specified gamma ramp does not have the gamma table it should have.",
        177LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  v7 = (void *)operator new[](SizeFromGammaRampType, 1265072196LL, 256LL);
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = v7;
  if ( v7 )
  {
    memmove(v7, a2->Data.pRgb256x3x16, v8);
    goto LABEL_7;
  }
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 184;
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v13,
        v12,
        v14,
        0,
        1,
        -1,
        (__int64)L"Failed to allocate 0x%I64x byte memory for GAMMA RAMP.",
        *((_QWORD *)this + 3),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return 3221225495LL;
}
