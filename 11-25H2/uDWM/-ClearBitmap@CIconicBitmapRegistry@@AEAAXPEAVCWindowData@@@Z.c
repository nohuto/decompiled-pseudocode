/*
 * XREFs of ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180019AD4
 * Callers:
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180019984 (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001A9D4 (-WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180056C28 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18005751C (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x1800791D8 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008F614 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800972A4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 */

void __fastcall CIconicBitmapRegistry::ClearBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  CWindowIconic *v4; // rdi
  __int64 v5; // r10
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // rcx
  CBaseObject *v9; // rcx

  if ( (unsigned __int64)a2 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = 0LL;
    v7 = *((_DWORD *)this + 10);
    if ( v7 )
    {
      do
      {
        if ( a2 == *(struct CWindowData **)(v5 + 8 * v6) )
          break;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < v7 );
    }
    if ( (unsigned int)v6 >= v7 )
    {
      if ( !*((_QWORD *)a2 + 54) )
        return;
    }
    else
    {
      for ( ; (unsigned int)v6 < v7 - 1; v7 = *((_DWORD *)this + 10) )
      {
        v8 = (unsigned int)v6;
        LODWORD(v6) = v6 + 1;
        *(_QWORD *)(v5 + 8 * v8) = *(_QWORD *)(v5 + 8LL * (unsigned int)v6);
      }
      *((_DWORD *)this + 10) = v7 - 1;
    }
    v9 = (CBaseObject *)*((_QWORD *)a2 + 54);
    if ( v9 )
      CBaseObject::Release(v9);
    *((_QWORD *)a2 + 54) = 0LL;
    v4 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v9, &UdwmManageIconicThumbnail_Info, 2LL, *((_QWORD *)a2 + 5));
  }
  else
  {
    v4 = (CWindowIconic *)*((_QWORD *)this + 12);
    *((_BYTE *)this + 88) = 0;
  }
  if ( v4 )
    CWindowIconic::SetBitmap(v4, 0LL, 0, 1);
}
