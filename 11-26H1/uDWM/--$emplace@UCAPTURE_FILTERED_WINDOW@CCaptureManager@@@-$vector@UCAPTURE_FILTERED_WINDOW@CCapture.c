/*
 * XREFs of ??$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@$$QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@@Z @ 0x18009DE14
 * Callers:
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800A466C (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAAEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@$$QEAU23@@Z @ 0x18009D0E0 (--$_Emplace_back_with_unused_capacity@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTU.c)
 *     ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x18009D4C0 (--$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WIN.c)
 *     ??$construct_at@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@$$QEAU12@@Z @ 0x18009D974 (--$construct_at@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@U12@@std@@YAPEAUCAPTURE_FILTERED_WINDO.c)
 */

char **__fastcall std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::emplace<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        __int64 a1,
        char **a2,
        CBaseObject **a3,
        __int64 *a4)
{
  CBaseObject **v4; // rsi
  CBaseObject **v7; // rdi
  __int64 v8; // r10
  CBaseObject **v9; // rsi
  CBaseObject **v10; // rdi
  CBaseObject *v11; // rax
  CBaseObject **v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rax
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rax
  CBaseObject *v18[2]; // [rsp+20h] [rbp-28h] BYREF
  CBaseObject *v19; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v20; // [rsp+38h] [rbp-10h] BYREF
  CBaseObject *v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(CBaseObject ***)(a1 + 8);
  if ( v4 == *(CBaseObject ***)(a1 + 16) )
  {
    *a2 = std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_reallocate<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
            (const char *)a1,
            (__int64)a3,
            (__int64)a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_back_with_unused_capacity<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        a1,
        a4);
    }
    else
    {
      v18[1] = (CBaseObject *)a1;
      std::construct_at<CCaptureManager::CAPTURE_FILTERED_WINDOW,CCaptureManager::CAPTURE_FILTERED_WINDOW>(&v19, a4);
      v7 = v4 - 2;
      std::construct_at<CCaptureManager::CAPTURE_FILTERED_WINDOW,CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        v4,
        (__int64 *)v4 - 2);
      *(_QWORD *)(v8 + 8) += 16LL;
      if ( a3 != v4 - 2 )
      {
        v9 = v4 + 1;
        v10 = v7 + 1;
        do
        {
          v11 = *(v10 - 3);
          v12 = v9;
          v10 -= 2;
          v9 -= 2;
          *(v12 - 3) = v11;
          v13 = 0LL;
          if ( v18 != v10 )
          {
            v13 = *v10;
            *v10 = 0LL;
          }
          v14 = *v9;
          *v9 = v13;
          v18[0] = v14;
          Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v18);
        }
        while ( v9 - 3 != a3 );
      }
      v15 = v20;
      *a3 = v19;
      v16 = a3[1];
      a3[1] = v15;
      v20 = 0LL;
      v21 = v16;
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v20);
    }
    *a2 = (char *)a3;
  }
  return a2;
}
