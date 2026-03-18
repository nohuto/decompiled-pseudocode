/*
 * XREFs of ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18002C100
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18002C2A0 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18016EBD0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CBackdropVisualImage::HasValidRenderingRealization(
        CBackdropVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  CBackdropVisualImage *v3; // rcx
  __int64 v4; // rcx
  CCachedVisualImage::CCachedTarget **v5; // rbx
  CCachedVisualImage::CCachedTarget **v6; // rsi
  char v7; // bp
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  CCachedVisualImage::CCachedTarget *v12; // rbx
  _DWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  float v16; // [rsp+30h] [rbp-18h]
  char v17; // [rsp+34h] [rbp-14h]

  if ( CBackdropVisualImage::IsValid(this) )
  {
    if ( !CBackdropVisualImage::IsValid(v3) )
      return 1;
    v5 = *(CCachedVisualImage::CCachedTarget ***)(v4 + 168);
    v6 = *(CCachedVisualImage::CCachedTarget ***)(v4 + 176);
    v7 = *((_BYTE *)g_pComposition + 6458);
    while ( v5 != v6 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*v5 + 1) + 144LL))(*((_QWORD *)*v5 + 1));
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(v8 + 16) + 120LL))(v8 + 16, v14);
      if ( v14[0] == *(_DWORD *)a2
        && v14[1] == *((_DWORD *)a2 + 1)
        && ((_DWORD)v15 == -1 || (_DWORD)v15 == *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 2) == -3)
        && (v16 != 0.0) == (*((float *)a2 + 4) != 0.0)
        && (!v17 || *((_BYTE *)a2 + 20)) )
      {
        v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*v5 + 1) + 144LL))(*((_QWORD *)*v5 + 1));
        v10 = *v9;
        if ( !(v7
             ? (*(__int64 (__fastcall **)(__int64 *))(v10 + 160))(v9)
             : (*(unsigned __int8 (__fastcall **)(__int64 *))(v10 + 176))(v9)) )
        {
          v12 = *v5;
          return v12 && CCachedVisualImage::CCachedTarget::IsValid(v12) && !*((_BYTE *)v12 + 56);
        }
      }
      ++v5;
    }
  }
  return 0;
}
