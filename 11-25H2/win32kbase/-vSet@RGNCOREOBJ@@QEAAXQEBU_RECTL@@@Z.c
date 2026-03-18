/*
 * XREFs of ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011470
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140020650 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F310C (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ??$GrepSetRectRgn@$0A@VRGNCOREOBJ@@@@YAHAEAVRGNCOREOBJ@@HHHH@Z @ 0x140116AC8 (--$GrepSetRectRgn@$0A@VRGNCOREOBJ@@@@YAHAEAVRGNCOREOBJ@@HHHH@Z.c)
 *     CddEngCreateRectRgn @ 0x140134F80 (CddEngCreateRectRgn.c)
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140010BD4 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNCOREOBJ::vSet(Win32kRS **this, struct _RECTL *a2)
{
  struct REGION_CORE *v2; // rsi
  Win32kRS *v4; // r14
  struct SCAN *v5; // rdx
  Win32kRS *v6; // rbp
  char *v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  struct SCAN *v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  Win32kRS *v13; // rbx
  unsigned __int64 v14; // rax
  struct SCAN *pScan_mut; // rax

  v2 = qword_1402A10B0;
  if ( qword_1402A10B0 )
  {
    v6 = *this;
    v7 = (char *)qword_1402A10B0 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 2LL);
    v8 = *(_QWORD *)v2;
    (*(void (__fastcall **)(Win32kRS *, struct _RECTL *))(v8 + 176))(v6, a2);
    if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v8 + 216))(v6) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v6, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v7, 2LL);
    KeLeaveCriticalRegion();
  }
  else if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    if ( qword_1402A10B0 )
    {
      Win32kRS::RegionCore_set_to_null_scan(*this, (struct REGION_CORE *)a2);
    }
    else
    {
      v13 = *this;
      v14 = *((_QWORD *)*this + 1);
      *((_QWORD *)*this + 2) = 16LL;
      if ( v14 < 0x10 )
      {
        *((_QWORD *)v13 + 2) = v14;
        RustOnZeroSizedScanCallback();
        v2 = qword_1402A10B0;
      }
      *((_DWORD *)v13 + 6) = 1;
      *(_OWORD *)((char *)v13 + 28) = 0LL;
      if ( v2 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v13, (struct REGION_CORE *)a2);
      else
        pScan_mut = *(struct SCAN **)v13;
      *((_DWORD *)pScan_mut + 1) = 0x80000000;
      *(_DWORD *)pScan_mut = 0;
      *((_QWORD *)pScan_mut + 1) = 0x7FFFFFFFLL;
    }
  }
  else
  {
    v4 = *this;
    *(struct _RECTL *)((char *)*this + 28) = *a2;
    if ( *((_DWORD *)v4 + 4) == 56 )
    {
      v5 = *(struct SCAN **)v4;
      *((_DWORD *)v5 + 2) = a2->top;
      v12 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *(_DWORD *)v5 + 16));
      v12[1] = a2->top;
      v12[2] = a2->bottom;
      v12[3] = a2->left;
      v12[4] = a2->right;
      *(_DWORD *)((char *)v12 + (unsigned int)(4 * *v12 + 16) + 4) = a2->bottom;
    }
    else
    {
      v9 = *((_QWORD *)v4 + 1);
      *((_QWORD *)v4 + 2) = 56LL;
      if ( v9 < 0x38 )
      {
        *((_QWORD *)v4 + 2) = v9;
        RustOnZeroSizedScanCallback();
        v2 = qword_1402A10B0;
      }
      *((_DWORD *)v4 + 6) = 3;
      if ( v2 )
        v10 = Win32kRS::RegionCore_get_pScan_mut(v4, (struct REGION_CORE *)a2);
      else
        v10 = *(struct SCAN **)v4;
      *((_DWORD *)v10 + 1) = 0x80000000;
      *(_DWORD *)v10 = 0;
      *((_DWORD *)v10 + 2) = a2->top;
      *((_DWORD *)v10 + 3) = 0;
      *((_DWORD *)v10 + 4) = 2;
      *((_DWORD *)v10 + 5) = a2->top;
      *((_DWORD *)v10 + 6) = a2->bottom;
      *((_DWORD *)v10 + 7) = a2->left;
      *((_DWORD *)v10 + 8) = a2->right;
      *((_DWORD *)v10 + 9) = 2;
      v11 = (unsigned int)(4 * *((_DWORD *)v10 + 4) + 16);
      *(_DWORD *)((char *)v10 + v11 + 16) = 0;
      *(_DWORD *)((char *)v10 + v11 + 20) = a2->bottom;
      *(_QWORD *)((char *)v10 + v11 + 24) = 0x7FFFFFFFLL;
    }
  }
}
