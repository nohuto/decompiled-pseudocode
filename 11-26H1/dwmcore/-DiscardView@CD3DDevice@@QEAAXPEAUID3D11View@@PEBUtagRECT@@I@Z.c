/*
 * XREFs of ?DiscardView@CD3DDevice@@QEAAXPEAUID3D11View@@PEBUtagRECT@@I@Z @ 0x18018D1D0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::DiscardView(CD3DDevice *this, struct ID3D11View *a2, const struct tagRECT *a3)
{
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp-69h] BYREF
  LONG left; // [rsp+38h] [rbp-61h] BYREF
  LONG top; // [rsp+40h] [rbp-59h] BYREF
  LONG right; // [rsp+48h] [rbp-51h] BYREF
  LONG bottom; // [rsp+50h] [rbp-49h] BYREF
  struct ID3D11View *v11; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-39h] BYREF
  struct ID3D11View **v13; // [rsp+70h] [rbp-29h]
  __int64 v14; // [rsp+78h] [rbp-21h]
  int *v15; // [rsp+80h] [rbp-19h]
  __int64 v16; // [rsp+88h] [rbp-11h]
  LONG *p_left; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  LONG *p_top; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  LONG *p_right; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  LONG *p_bottom; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]

  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, struct ID3D11View *, const struct tagRECT *, __int64))(**((_QWORD **)this + 69)
                                                                                         + 1064LL))(
      *((_QWORD *)this + 69),
      a2,
      a3,
      1LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      bottom = a3->bottom;
      right = a3->right;
      top = a3->top;
      left = a3->left;
      v13 = &v11;
      v15 = &v6;
      p_left = &left;
      p_top = &top;
      p_right = &right;
      p_bottom = &bottom;
      v6 = 1;
      v11 = a2;
      v14 = 8LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_RENDEROPT_DISCARDVIEWEVENT,
        v5,
        7u,
        &v12);
    }
  }
}
