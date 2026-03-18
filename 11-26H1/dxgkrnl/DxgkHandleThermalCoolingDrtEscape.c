/*
 * XREFs of DxgkHandleThermalCoolingDrtEscape @ 0x140250124
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DpiFdoThermalActiveCooling @ 0x14024F910 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x14024FA90 (DpiFdoThermalPassiveCooling.c)
 */

__int64 __fastcall DxgkHandleThermalCoolingDrtEscape(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r10
  __int64 v4; // r9
  int v5; // eax

  v2 = 0;
  if ( !g_OSTestSigningEnabled )
    return 3221225659LL;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(v3 + 5008);
  if ( !v4 )
    return 3221225659LL;
  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( *(_QWORD *)(v4 + 48) )
        DpiFdoThermalActiveCooling(a1, *(_BYTE *)(a2 + 16));
    }
    else if ( v5 == 2 && *(_QWORD *)(v4 + 56) )
    {
      DpiFdoThermalPassiveCooling(a1, *(_DWORD *)(a2 + 16));
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = 0;
    LOBYTE(v2) = *(_QWORD *)(*(_QWORD *)(v3 + 5008) + 48LL) != 0LL;
    *(_DWORD *)(a2 + 16) = v2;
    *(_DWORD *)(a2 + 16) = v2 | (*(_QWORD *)(*(_QWORD *)(v3 + 5008) + 56LL) != 0LL ? 2 : 0);
  }
  return 0LL;
}
