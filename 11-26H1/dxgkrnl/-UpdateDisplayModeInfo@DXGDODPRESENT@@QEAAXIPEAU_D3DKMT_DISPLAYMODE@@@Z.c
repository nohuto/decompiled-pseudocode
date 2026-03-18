/*
 * XREFs of ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402843BC
 * Callers:
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140031434 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 * Callees:
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1402842E4 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 */

void __fastcall DXGDODPRESENT::UpdateDisplayModeInfo(
        DXGDODPRESENT *this,
        unsigned int a2,
        struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v3; // rax
  D3DDDI_RATIONAL RefreshRate; // rdx

  v3 = a2;
  if ( a3->RefreshRate.Numerator == -2 && a3->RefreshRate.Denominator == -2 )
    RefreshRate = (D3DDDI_RATIONAL)0x100000040LL;
  else
    RefreshRate = a3->RefreshRate;
  BLTQUEUE::UpdateDisplayModeInfo((BLTQUEUE *)(*((_QWORD *)this + 1) + 3040 * v3), RefreshRate, a3->Height);
}
