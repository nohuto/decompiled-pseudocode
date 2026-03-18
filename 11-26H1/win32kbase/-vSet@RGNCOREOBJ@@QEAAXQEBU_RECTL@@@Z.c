/*
 * XREFs of ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14013472C
 * Callers:
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140045580 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     CddEngCreateRectRgn @ 0x1401345C0 (CddEngCreateRectRgn.c)
 *     ??$GrepSetRectRgn@$0A@VRGNCOREOBJ@@@@YAHAEAVRGNCOREOBJ@@HHHH@Z @ 0x140134678 (--$GrepSetRectRgn@$0A@VRGNCOREOBJ@@@@YAHAEAVRGNCOREOBJ@@HHHH@Z.c)
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x14019FAAC (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNCOREOBJ::vSet(RGNCOREOBJ *this, const struct _RECTL *const a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbx
  struct SCAN *pScan; // rax
  _DWORD *v7; // r8
  struct SCAN *v8; // rdx
  __int64 v9; // rax

  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v3 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
    v4 = *(_QWORD *)this;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 136LL))(*(_QWORD *)this);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v3 + 176))(v4) )
      GrepCaptureLiveMemoryDump(400LL, 64LL, v4, 0LL, 0LL, 0);
  }
  else if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    RGNCOREOBJ::vSet(this);
  }
  else
  {
    v5 = *(_QWORD *)this;
    *(struct _RECTL *)(v5 + 28) = *a2;
    if ( (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)v5) == 56 )
    {
      pScan = REGION_CORE::get_pScan((REGION_CORE *)v5);
      *((_DWORD *)pScan + 2) = a2->top;
      v7 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
      v7[1] = a2->top;
      v7[2] = a2->bottom;
      v7[3] = a2->left;
      v7[4] = a2->right;
      *(_DWORD *)((char *)v7 + (unsigned int)(4 * *v7 + 16) + 4) = a2->bottom;
    }
    else
    {
      REGION_CORE::set_sizeScan((REGION_CORE *)v5, 0x38u);
      *(_DWORD *)(v5 + 24) = 3;
      v8 = REGION_CORE::get_pScan((REGION_CORE *)v5);
      *(_DWORD *)v8 = 0;
      *((_DWORD *)v8 + 1) = 0x80000000;
      *((_DWORD *)v8 + 2) = a2->top;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 4) = 2;
      *((_DWORD *)v8 + 5) = a2->top;
      *((_DWORD *)v8 + 6) = a2->bottom;
      *((_DWORD *)v8 + 7) = a2->left;
      *((_DWORD *)v8 + 8) = a2->right;
      *((_DWORD *)v8 + 9) = 2;
      v9 = (unsigned int)(4 * *((_DWORD *)v8 + 4) + 16);
      *(_DWORD *)((char *)v8 + v9 + 16) = 0;
      *(_DWORD *)((char *)v8 + (unsigned int)v9 + 20) = a2->bottom;
      *(_QWORD *)((char *)v8 + (unsigned int)v9 + 24) = 0x7FFFFFFFLL;
    }
  }
}
