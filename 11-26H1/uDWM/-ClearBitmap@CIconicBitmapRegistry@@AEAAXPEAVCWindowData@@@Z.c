/*
 * XREFs of ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18001995C
 * Callers:
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001935C (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001AA84 (-WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180068EC0 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006DC2C (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800718B8 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18007E8F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

void __fastcall CIconicBitmapRegistry::ClearBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  CWindowIconic *v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 i; // r9
  __int64 v8; // rdx
  CBaseObject *v9; // rcx

  if ( (unsigned __int64)a2 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v5 = *((_DWORD *)this + 10);
    v6 = 0LL;
    for ( i = *((_QWORD *)this + 2); (unsigned int)v6 < v5; v6 = (unsigned int)(v6 + 1) )
    {
      if ( a2 == *(struct CWindowData **)(i + 8 * v6) )
        break;
    }
    if ( (unsigned int)v6 >= v5 )
    {
      if ( !*((_QWORD *)a2 + 54) )
        return;
    }
    else
    {
      if ( (unsigned int)v6 < v5 - 1 )
      {
        do
        {
          v8 = (unsigned int)(v6 + 1);
          *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8 * v8);
          v6 = v8;
        }
        while ( (unsigned int)v8 < *((_DWORD *)this + 10) - 1 );
      }
      --*((_DWORD *)this + 10);
    }
    v9 = (CBaseObject *)*((_QWORD *)a2 + 54);
    if ( v9 )
      CBaseObject::Release(v9);
    v4 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    *((_QWORD *)a2 + 54) = 0LL;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v9, &UdwmManageIconicThumbnail_Info, 2LL);
  }
  else
  {
    v4 = (CWindowIconic *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 88) = 0;
  }
  if ( v4 )
    CWindowIconic::SetBitmap(v4, 0LL, 0, 1);
}
