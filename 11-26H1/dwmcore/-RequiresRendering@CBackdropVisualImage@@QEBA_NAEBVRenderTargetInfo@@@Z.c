/*
 * XREFs of ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1800D5508
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBackdropVisualImage::RequiresRendering(CBackdropVisualImage *this, const struct RenderTargetInfo *a2)
{
  char v2; // bl
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  __int64 *v7; // rdi
  __int64 *v8; // rbp
  char v9; // r14
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  _DWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  float v19; // [rsp+30h] [rbp-18h]
  char v20; // [rsp+34h] [rbp-14h]

  v2 = 0;
  if ( !*((_QWORD *)this + 15) )
    return 0;
  if ( (float)(*((float *)this + 26) - *((float *)this + 24)) < 1.0 )
    return 0;
  if ( (float)(*((float *)this + 27) - *((float *)this + 25)) < 1.0 )
    return 0;
  v4 = *((float *)this + 420);
  v5 = *((float *)this + 418);
  if ( v4 < v5 )
    return 0;
  v6 = *((float *)this + 421);
  if ( v6 < *((float *)this + 419)
    || (float)(v4 - v5) < 1.0
    || (float)(v6 - *((float *)this + 419)) < 1.0
    || *((float *)this + 28) <= 0.5
    || *((float *)this + 29) <= 0.5 )
  {
    return 0;
  }
  v7 = (__int64 *)*((_QWORD *)this + 21);
  v8 = (__int64 *)*((_QWORD *)this + 22);
  v9 = *((_BYTE *)g_pComposition + 6458);
  while ( 1 )
  {
    if ( v7 == v8 )
      return 1;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v7 + 8) + 144LL))(*(_QWORD *)(*v7 + 8));
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(v10 + 16) + 120LL))(v10 + 16, v17);
    if ( v17[0] == *(_DWORD *)a2
      && v17[1] == *((_DWORD *)a2 + 1)
      && ((_DWORD)v18 == -1 || (_DWORD)v18 == *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 2) == -3)
      && (v19 != 0.0) == (*((float *)a2 + 4) != 0.0)
      && (!v20 || *((_BYTE *)a2 + 20)) )
    {
      v11 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v7 + 8) + 144LL))(*(_QWORD *)(*v7 + 8));
      v12 = *v11;
      if ( !(v9
           ? (*(__int64 (__fastcall **)(__int64 *))(v12 + 160))(v11)
           : (*(unsigned __int8 (__fastcall **)(__int64 *))(v12 + 176))(v11)) )
        break;
    }
    ++v7;
  }
  v14 = *v7;
  if ( !v14 )
    return 1;
  if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 8) + 24LL))(*(_QWORD *)(v14 + 8)) < 0 )
    return 1;
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 8) + 144LL))(*(_QWORD *)(v14 + 8));
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 176LL))(v15) )
  {
    if ( GetCurrentFrameId() - *(_QWORD *)(v14 + 48) >= 5 )
      return 1;
  }
  if ( *(_BYTE *)(v14 + 56) )
    return 1;
  return v2;
}
