/*
 * XREFs of NvmeControllerGetReadyTimeout @ 0x1400F4AD0
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400D52F4 (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEssentialInitialize @ 0x1400F2C48 (NvmeControllerEssentialInitialize.c)
 * Callees:
 *     NvmeVersionCheck @ 0x1400C6E18 (NvmeVersionCheck.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F958C (NvmeControllerQueryStorMQProperty.c)
 */

__int64 __fastcall NvmeControllerGetReadyTimeout(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r10d
  int v4; // eax
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx
  int v8; // [rsp+40h] [rbp+8h]

  v8 = 0;
  if ( NvmeVersionCheck(a1, 2u, 0) )
  {
    if ( *(_BYTE *)(v2 + 1728) == 1 )
    {
      NvmeControllerQueryStorMQProperty(v2, 104LL, 4LL);
      NvmeControllerQueryStorMQProperty(a1, 20LL, 4LL);
      v4 = 0;
    }
    else
    {
      v8 = *(_DWORD *)(*(_QWORD *)(v2 + 920) + 104LL);
      v4 = *(_DWORD *)(*(_QWORD *)(v2 + 920) + 20LL);
    }
    if ( (v4 & 0x1000000) != 0 )
    {
      LOBYTE(v6) = BYTE2(v8);
      if ( HIWORD(v8) > 0xFFu )
      {
        v3 = HIWORD(v8);
        *(_QWORD *)(a1 + 584) |= 0xFF000000uLL;
        return (unsigned int)(500 * v3);
      }
      v5 = *(unsigned __int8 *)(a1 + 587);
      if ( v5 > HIWORD(v8) )
        goto LABEL_14;
    }
    else
    {
      LOBYTE(v5) = v8;
      if ( (unsigned __int16)v8 > 0xFFu )
      {
        v3 = (unsigned __int16)v8;
        *(_QWORD *)(a1 + 584) |= 0xFF000000uLL;
        return (unsigned int)(500 * v3);
      }
      v6 = *(unsigned __int8 *)(a1 + 587);
      if ( v6 <= (unsigned __int16)v8 )
      {
LABEL_14:
        v3 = (unsigned __int8)v5;
        *(_BYTE *)(a1 + 587) = v5;
        return (unsigned int)(500 * v3);
      }
    }
    LOBYTE(v5) = v6;
    goto LABEL_14;
  }
  return (unsigned int)(500 * v3);
}
