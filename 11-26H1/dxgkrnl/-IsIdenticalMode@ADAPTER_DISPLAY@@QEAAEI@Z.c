/*
 * XREFs of ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1400701E8
 * Callers:
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1401A3B50 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1403FB6B0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 */

char __fastcall ADAPTER_DISPLAY::IsIdenticalMode(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v3; // rbx
  int CurrentOrientation; // eax
  char v5; // dl
  __int64 v6; // rcx

  v3 = 4024LL * (unsigned int)a2;
  if ( *(_QWORD *)(*((_QWORD *)this + 16) + v3 + 948) != *(_QWORD *)(*((_QWORD *)this + 16) + v3 + 644) )
    return 0;
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(this, a2, 0LL);
  v5 = 1;
  if ( CurrentOrientation != 1 )
    return 0;
  v6 = *((_QWORD *)this + 16);
  if ( *(_DWORD *)(v6 + v3 + 688)
    || *(_DWORD *)(v6 + v3 + 692)
    || *(_DWORD *)(v6 + v3 + 696) != *(_DWORD *)(v6 + v3 + 948)
    || *(_DWORD *)(v6 + v3 + 700) != *(_DWORD *)(v6 + v3 + 952) )
  {
    return 0;
  }
  return v5;
}
