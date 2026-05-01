/*
 * XREFs of ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x18020F390
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___ @ 0x180290A50 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802BC76C (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     _lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::_lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_ @ 0x18030451C (_lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_--_lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetChromeOptions(__int64 a1, unsigned __int64 a2)
{
  int v3; // ecx
  unsigned int v4; // r9d
  unsigned int v5; // r9d
  unsigned __int64 v6; // rax
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  bool v10; // di
  __int64 v11; // rax
  __int64 v12; // xmm1_8
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  _BYTE v16[32]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+10h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+18h] BYREF

  v18 = a2;
  v17 = a2;
  *(_DWORD *)(a1 + 568) |= a2;
  *(_DWORD *)(a1 + 572) = a2 & HIDWORD(a2) | *(_DWORD *)(a1 + 572) & ~(_DWORD)a2;
  if ( (*(_BYTE *)(a1 + 596) & 2) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 576) & a2;
    if ( (v3 & 1) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 580) & 1) != 0 )
      {
        v4 = HIDWORD(a2) | 1;
        HIDWORD(v17) = HIDWORD(a2) | 1;
      }
      else
      {
        v4 = HIDWORD(v18) & 0xFFFFFFFE;
        HIDWORD(v17) = HIDWORD(v18) & 0xFFFFFFFE;
      }
    }
    else
    {
      v4 = HIDWORD(v17);
    }
    if ( (v3 & 0x80u) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 580) & 0x80) != 0 )
        v5 = v4 | 0x80;
      else
        v5 = v4 & 0xFFFFFF7F;
      HIDWORD(v17) = v5;
    }
  }
  v18 = v17;
  if ( (v17 & 4) == 0
    || (v6 = HIDWORD(v17), v7 = *(_BYTE *)(a1 + 566) == 0, *(_BYTE *)(a1 + 567) = (v17 & 0x400000000LL) != 0, v7) )
  {
    LOBYTE(v8) = BYTE4(v18);
  }
  else
  {
    v8 = v6 | 4;
    HIDWORD(v18) = v8;
  }
  if ( (v18 & 0x20) != 0 )
    *(_BYTE *)(a1 + 600) = (v8 & 0x20) != 0;
  LOBYTE(v17) = 0;
  if ( (v18 & 0x40) != 0 )
  {
    v9 = v8 & 0x40;
    v10 = v9 != 0;
    if ( *(_DWORD *)(a1 + 220) == 1 && !v9 )
    {
      CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 216, 3LL);
      LOBYTE(v17) = *(_BYTE *)(a1 + 52);
    }
    *(_BYTE *)(a1 + 564) = v10;
  }
  v11 = lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_::_lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8_(v16, &v18, &v17, a1);
  v12 = *(_QWORD *)(v11 + 16);
  v14 = *(_OWORD *)v11;
  v15 = v12;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_d4f53ba1ca51dbfd4a93d3036b1b4ed8___(a1, &v14);
}
