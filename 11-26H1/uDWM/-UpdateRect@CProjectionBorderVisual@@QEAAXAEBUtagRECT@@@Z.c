/*
 * XREFs of ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800BEBC8
 * Callers:
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800BE360 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800BEC2C (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 */

void __fastcall CProjectionBorderVisual::UpdateRect(CProjectionBorderVisual *this, const struct tagRECT *a2)
{
  struct tagRECT *v3; // rsi
  int *v5; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct tagRECT *)((char *)this + 200);
  if ( !EqualRect(a2, (const RECT *)((char *)this + 200)) )
  {
    *v3 = *a2;
    v5 = ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v6);
    CVisual::SetDirtyFlags(this, *v5);
  }
}
