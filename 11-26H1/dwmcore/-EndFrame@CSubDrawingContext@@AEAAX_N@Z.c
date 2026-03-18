/*
 * XREFs of ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x18019EF30
 * Callers:
 *     ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800AE0A0 (-DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800F2A20 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x18019F060 (-RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CSubDrawingContext::EndFrame(CSubDrawingContext *this, char a2)
{
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  _BYTE *v6; // rdx
  __int64 v7; // r8
  __int64 i; // rdx
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    CScopedClipStack::RestoreScopeFromClipStack(
      (CScopedClipStack *)(*(_QWORD *)this + 736LL),
      (const struct CScopedClipStack *)(v4 + 736));
    v5 = (_BYTE *)*((_QWORD *)this + 1);
    v6 = *(_BYTE **)this;
    v6[7980] |= v5[7980];
    v6[7981] |= v5[7981];
    v6[7982] |= v5[7982];
    v6[7983] |= v5[7983];
    v6[7984] |= v5[7984];
    *(_QWORD *)(*((_QWORD *)this + 1) + 208LL) = 0LL;
    CDrawingContext::PopAllStacks(*((CDrawingContext **)this + 1));
    if ( a2 )
    {
      *(_BYTE *)(*(_QWORD *)this + 8065LL) = 1;
      *(_BYTE *)(*(_QWORD *)this + 8066LL) = 0;
    }
    else
    {
      for ( i = 0LL; i < 2; ++i )
        *(_BYTE *)(*(_QWORD *)this + i + 8065) = *(_BYTE *)(*((_QWORD *)this + 1) + i + 8065);
    }
    if ( *((_BYTE *)this + 88) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop,
          v7,
          1u,
          &v9);
      *((_BYTE *)this + 88) = 0;
    }
  }
}
