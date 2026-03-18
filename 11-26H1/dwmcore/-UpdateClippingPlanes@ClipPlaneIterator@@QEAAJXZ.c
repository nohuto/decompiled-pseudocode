/*
 * XREFs of ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x180210F9C
 * Callers:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18001D270 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006C3D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ @ 0x180151070 (-InternalRelease@-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x18019E044 (--4-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18021ED24 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18024F3E0 (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18024F4B4 (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ClipPlaneIterator::UpdateClippingPlanes(ClipPlaneIterator *this)
{
  unsigned int v1; // esi
  char *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  struct D2D_VECTOR_4F *v7; // rax
  float *v8; // rdx
  float x; // xmm2_4
  bool v10; // cc
  float v11; // xmm0_4
  _OWORD *v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v17; // [rsp+38h] [rbp-9h] BYREF
  __int64 v18; // [rsp+40h] [rbp-1h] BYREF
  struct D2D_VECTOR_4F v19; // [rsp+48h] [rbp+7h] BYREF

  v1 = 0;
  v17 = 0;
  if ( !*(_BYTE *)this && ClipPlaneIterator::HasMoreClipPlanes(this) )
  {
    if ( *((_DWORD *)this + 1) )
      ClipPlaneIterator::GetMorePlaceholderClipPlanes(this, &v19, &v17);
    else
      ClipPlaneIterator::GetMoreStandardClipPlanes(this, &v19, &v17);
    v3 = (char *)MIDL_user_allocate(0x60uLL);
    v4 = (__int64)v3;
    if ( v3 )
    {
      memset_0(v3 + 12, 0, 0x54uLL);
      *(_DWORD *)(v4 + 8) = 0;
      *(_QWORD *)v4 = &ClipPlaneInfoRef::`vftable';
      v18 = v4;
      ((void (__fastcall *)(__int64))ClipPlaneInfoRef::`vftable')(v4);
      v5 = v17;
      v6 = 0LL;
      if ( !v17 )
        goto LABEL_17;
      v7 = &v19;
      v8 = (float *)(v4 + 80);
      v6 = v17;
      do
      {
        x = v7->x;
        *(struct D2D_VECTOR_4F *)((char *)v7 + v4 - (_QWORD)&v19.y + 20) = *v7;
        if ( x == 0.0 )
          v10 = v7->y <= 0.0;
        else
          v10 = x <= 0.0;
        if ( v10 )
          v11 = 0.0;
        else
          v11 = FLOAT_0_5;
        *v8 = v11;
        ++v7;
        ++v8;
        --v5;
      }
      while ( v5 );
      if ( (unsigned int)v6 < 4 )
      {
LABEL_17:
        v12 = (_OWORD *)(v4 + 16 * (v6 + 1));
        v13 = (_DWORD *)(v4 + 80 + 4 * v6);
        v14 = (unsigned int)(4 - v6);
        do
        {
          *v12 = 0LL;
          *v13++ = 0;
          ++v12;
          --v14;
        }
        while ( v14 );
      }
      Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::operator=(
        (__int64 *)(*((_QWORD *)this + 15) + 256LL),
        (void (__fastcall ***)(_QWORD))v4);
    }
    else
    {
      v18 = 0LL;
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2A8u, 0LL);
    }
    goto LABEL_23;
  }
  v15 = *((_QWORD *)this + 15);
  if ( *(_QWORD *)(v15 + 256) )
  {
    v18 = *(_QWORD *)(v15 + 256);
    *(_QWORD *)(v15 + 256) = 0LL;
LABEL_23:
    Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::InternalRelease(&v18);
  }
  return v1;
}
