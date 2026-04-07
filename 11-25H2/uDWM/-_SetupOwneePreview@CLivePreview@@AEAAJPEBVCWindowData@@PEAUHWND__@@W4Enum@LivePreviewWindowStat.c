/*
 * XREFs of ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x18008DC00
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180051D8C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180051D8C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 */

__int64 __fastcall CLivePreview::_SetupOwneePreview(CLivePreview *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 i; // rdi
  __int64 v10; // rdx
  int v11; // eax

  v4 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 632); i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 608) + 8 * i);
    if ( (*(_BYTE *)(v10 + 674) & 0x40) == 0
      && (*(_BYTE *)(v10 + 678) & 0x10) == 0
      && ((*(_BYTE *)(v10 + 672) & 1) != 0 || *(_QWORD *)(v10 + 480)) )
    {
      v11 = CLivePreview::_SetupWindowPreview(a1, v10, a3, 1, a4, 0LL, 1);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x16Bu, 0LL);
        return v4;
      }
    }
  }
  return v4;
}
