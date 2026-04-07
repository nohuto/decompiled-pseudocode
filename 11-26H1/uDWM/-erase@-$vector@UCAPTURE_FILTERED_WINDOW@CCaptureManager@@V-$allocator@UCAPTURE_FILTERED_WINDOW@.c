/*
 * XREFs of ?erase@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@@Z @ 0x1800A6B28
 * Callers:
 *     ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180069330 (-OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x18007EC90 (-OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18009E6A0 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_QWORD *__fastcall std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  CBaseObject **v3; // rbp
  CBaseObject **v4; // r14
  CBaseObject **v8; // rdi
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rax
  _QWORD *result; // rax
  CBaseObject *v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(CBaseObject ***)(a1 + 8);
  v4 = (CBaseObject **)(a3 + 16);
  if ( (CBaseObject **)(a3 + 16) != v3 )
  {
    v8 = (CBaseObject **)(a3 + 24);
    do
    {
      v9 = 0LL;
      *(v8 - 3) = *v4;
      if ( v12 != v8 )
      {
        v9 = *v8;
        *v8 = 0LL;
      }
      v10 = *(v8 - 2);
      *(v8 - 2) = v9;
      v12[0] = v10;
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v12);
      v4 += 2;
      v8 += 2;
    }
    while ( v4 != v3 );
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
