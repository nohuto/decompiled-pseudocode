/*
 * XREFs of ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x1800791D8
 * Callers:
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x180092EDC (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180019AD4 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001BAFC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180055D40 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::InvalidateBitmaps(CIconicBitmapRegistry *this, HWND *a2, int a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  int v9; // r9d
  HWND *v10; // rdx
  int v11; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  DWORD v13; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v13 = 0;
  if ( !GetWindowThreadProcessId(a2[5], &v13) || a3 != v13 )
  {
    v5 = -2147024809;
    v9 = -2147024809;
    v12 = 813;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, v9, v12, 0LL);
    return v5;
  }
  if ( a2[54] && CIconicBitmapRegistry::CanAcceptBitmap(this, (struct CWindowData *)a2) )
  {
    *((_BYTE *)a2 + 674) &= 0xEBu;
    if ( a2[61] )
    {
      v11 = CIconicBitmapRegistry::RequestBitmap(this, v10, 1);
      v5 = v11;
      if ( v11 < 0 )
      {
        v12 = 824;
LABEL_12:
        v9 = v11;
        goto LABEL_7;
      }
    }
    else
    {
      CIconicBitmapRegistry::ClearBitmap(this, (struct CWindowData *)v10);
    }
  }
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    if ( *(HWND **)(v7 + 72) == a2 && !*((_BYTE *)this + 89) )
    {
      *((_BYTE *)this + 90) = 0;
      v11 = CIconicBitmapRegistry::RequestBitmap(this, (HWND *)0xFFFFFFFFFFFFFFFFLL, 1);
      v5 = v11;
      if ( v11 < 0 )
      {
        v12 = 836;
        goto LABEL_12;
      }
    }
  }
  return v5;
}
