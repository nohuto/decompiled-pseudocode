/*
 * XREFs of ?AdapterVerifierOption@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1400A6A0C
 * Callers:
 *     VidMmAdapterVerifierOption @ 0x14004D430 (VidMmAdapterVerifierOption.c)
 * Callees:
 *     ?SetVerifierOption@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEBT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1400A6B1C (-SetVerifierOption@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEBT_D3DKMT_ADAPTE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AdapterVerifierOption(
        VIDMM_GLOBAL *this,
        enum _D3DKMT_VERIFIER_OPTION_MODE a2,
        enum _D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE a3,
        union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *a4)
{
  unsigned int v5; // r8d
  int v6; // r10d
  int v7; // r10d

  v5 = 0;
  if ( a2 )
    return VIDMM_GLOBAL::SetVerifierOption(this, a3, a4);
  v6 = a3 - 1000;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        a4->VidMmTrimInterval.MinimumTrimInterval = *((_QWORD *)this + 879);
      else
        return (unsigned int)-1073741811;
    }
    else
    {
      *(_OWORD *)&a4->VidMmFlags.0 = *((_OWORD *)this + 437);
      *(_OWORD *)&a4->VidMmTrimInterval.IdleTrimInterval = *((_OWORD *)this + 438);
      a4[1].VidMmTrimInterval.MaximumTrimInterval = *((_QWORD *)this + 878);
    }
  }
  else
  {
    a4->VidMmFlags.Value = *((_DWORD *)this + 1746);
  }
  return v5;
}
