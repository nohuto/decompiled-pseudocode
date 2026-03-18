/*
 * XREFs of ?SetVerifierOption@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEBT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1400A6B1C
 * Callers:
 *     ?AdapterVerifierOption@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1400A6A0C (-AdapterVerifierOption@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERI.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetVerifierOption(
        VIDMM_GLOBAL *this,
        enum _D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE a2,
        const union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *a3)
{
  unsigned int v6; // edi
  int v7; // esi
  int v8; // esi
  unsigned int MaximumTrimInterval; // eax
  unsigned int MaximumTrimInterval_high; // ecx
  UINT64 v11; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v13,
    (struct DXGPUSHLOCKFAST *)(*(_QWORD *)this + 160LL),
    1);
  v6 = 0;
  v7 = a2 - 1000;
  if ( !v7 )
  {
    *((_DWORD *)this + 1746) = a3->VidMmFlags.Value;
    goto LABEL_24;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    MaximumTrimInterval = a3[1].VidMmTrimInterval.MaximumTrimInterval;
    if ( MaximumTrimInterval )
    {
      if ( MaximumTrimInterval >= 0x64 )
        goto LABEL_12;
      MaximumTrimInterval_high = HIDWORD(a3[1].VidMmTrimInterval.MaximumTrimInterval);
      if ( !MaximumTrimInterval_high )
        goto LABEL_12;
      if ( MaximumTrimInterval_high >= 0x64 )
        goto LABEL_12;
      if ( MaximumTrimInterval <= MaximumTrimInterval_high )
        goto LABEL_12;
      if ( !a3->VidMmTrimInterval.IdleTrimInterval )
        goto LABEL_12;
      if ( !a3[1].VidMmTrimInterval.MinimumTrimInterval )
        goto LABEL_12;
      v11 = a3->VidMmTrimInterval.MaximumTrimInterval;
      if ( !v11 || !a3->VidMmTrimInterval.MinimumTrimInterval || v11 < a3->VidMmTrimInterval.MinimumTrimInterval )
        goto LABEL_12;
    }
    else if ( HIDWORD(a3[1].VidMmTrimInterval.MaximumTrimInterval)
           || a3->VidMmTrimInterval.IdleTrimInterval
           || a3[1].VidMmTrimInterval.MinimumTrimInterval
           || a3->VidMmTrimInterval.MaximumTrimInterval
           || a3->VidMmTrimInterval.MinimumTrimInterval )
    {
      goto LABEL_12;
    }
    *((_OWORD *)this + 437) = *(_OWORD *)&a3->VidMmFlags.0;
    *((_OWORD *)this + 438) = *(_OWORD *)&a3->VidMmTrimInterval.IdleTrimInterval;
    *((_QWORD *)this + 878) = a3[1].VidMmTrimInterval.MaximumTrimInterval;
    goto LABEL_24;
  }
  if ( v8 != 1 || (a3->VidMmTrimInterval.MinimumTrimInterval & 0xFFF00000000LL) != 0 )
  {
LABEL_12:
    v6 = -1073741811;
    goto LABEL_24;
  }
  *((_QWORD *)this + 879) = a3->VidMmTrimInterval.MinimumTrimInterval;
LABEL_24:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v13);
  return v6;
}
