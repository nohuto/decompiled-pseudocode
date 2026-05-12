/*
 * XREFs of NvmeInitializePerfOpts @ 0x140059A30
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     NvmeControllerInitializePerfOptions @ 0x1400F6850 (NvmeControllerInitializePerfOptions.c)
 * Callees:
 *     McTemplateK0qqdqqqq_EtwWriteTransfer @ 0x14005EE44 (McTemplateK0qqdqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall NvmeInitializePerfOpts(__int64 a1, char a2, int *a3)
{
  unsigned int v4; // edi
  int v7; // esi
  int v8; // edx
  int *v9; // r15
  int v10; // ecx
  int *v11; // rcx

  v4 = 0;
  v7 = 0;
  if ( !a3 )
    goto LABEL_21;
  if ( (*(_BYTE *)(a1 + 144) & 0x20) == 0 )
  {
    v4 = -1056964607;
    goto LABEL_22;
  }
  v8 = *a3;
  if ( (unsigned int)*a3 < 8 )
    goto LABEL_21;
  v9 = a3 + 2;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
  {
    McTemplateK0qqdqqqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterInitPerfConfigData,
      1024,
      v8,
      a3[1],
      *v9,
      a3[3],
      a3[4],
      a3[5],
      a3[6]);
    v8 = *a3;
  }
  v10 = (*(_BYTE *)(a1 + 144) & 1) != 0 ? 1536 : 2383;
  if ( v8 != 8 || (unsigned int)a3[1] < 0x28 )
  {
    if ( !a2 )
      goto LABEL_21;
    *a3 = 8;
    a3[1] = 40;
LABEL_20:
    *v9 = v10;
    v7 = v10;
    goto LABEL_22;
  }
  if ( a2 )
    goto LABEL_20;
  if ( (~v10 & *v9) != 0 )
  {
LABEL_21:
    v4 = -1056964602;
    goto LABEL_22;
  }
  if ( (*v9 & 0x200) != 0 )
  {
    *(_DWORD *)(a1 + 992) |= 1u;
    v11 = a3 + 2;
    v7 = 512;
  }
  else
  {
    v11 = a3 + 2;
  }
  if ( (a3[2] & 0x400) != 0 )
  {
    *(_DWORD *)(a1 + 992) |= 2u;
    v9 = v11;
    v7 |= 0x400u;
  }
  if ( (*v9 & 0x800) != 0 )
  {
    *(_DWORD *)(a1 + 992) |= 4u;
    v7 |= 0x800u;
  }
LABEL_22:
  if ( v7 != a3[2] )
  {
    if ( (v7 & 0x200) != 0 )
      *(_DWORD *)(a1 + 992) &= ~1u;
    if ( (v7 & 0x400) != 0 )
      *(_DWORD *)(a1 + 992) &= ~2u;
    if ( (v7 & 0x800) != 0 )
      *(_DWORD *)(a1 + 992) &= ~4u;
  }
  return v4;
}
