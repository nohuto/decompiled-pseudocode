/*
 * XREFs of ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x18009B720
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18009A68C (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801904D0 (-Snapshot@CCachedVisualImage@@QEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisualImage@@@Z @ 0x18009B658 (--R-$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisua.c)
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x18009B848 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::RemoveInvalidTargets(CCachedVisualImage *this, struct D2D_SIZE_U a2)
{
  char *v2; // rbx
  UINT32 width; // edi
  UINT32 height; // r13d
  unsigned __int8 v6; // r15
  __int64 *v7; // r14
  __int64 v8; // rbp
  CComposition *v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 *v14; // r15
  signed __int64 v15; // r12
  __int64 v16; // rax
  CCachedVisualImage::CCachedTarget *v17; // rdx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+64h] [rbp+Ch]
  struct D2D_SIZE_U v20; // [rsp+68h] [rbp+10h]

  v20 = a2;
  v2 = (char *)*((_QWORD *)this + 21);
  width = a2.width;
  height = a2.height;
  v6 = 0;
  v7 = (__int64 *)(v2 + 8);
  while ( v2 != *((char **)this + 22) )
  {
    v8 = *(_QWORD *)v2;
    if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 24LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL)) < 0 )
      goto LABEL_12;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 8) + 144LL))(*(_QWORD *)(v8 + 8));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 176LL))(v10) )
    {
      v9 = g_pComposition;
      v12 = 0LL;
      if ( g_pComposition )
        v12 = *((_QWORD *)g_pComposition + 110);
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v8 + 48)) >= 5 )
        goto LABEL_12;
    }
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 32LL))(
      *(_QWORD *)(v8 + 8) + 8LL,
      &v18);
    if ( v19 == height && v18 == width )
    {
      v2 += 8;
      ++v7;
    }
    else
    {
LABEL_12:
      v13 = (__int64 *)*((_QWORD *)this + 22);
      v14 = v7;
      if ( v7 != v13 )
      {
        v15 = v2 - (char *)v7;
        do
        {
          v16 = *v14;
          *v14 = 0LL;
          v17 = *(CCachedVisualImage::CCachedTarget **)((char *)v14 + v15);
          *(__int64 *)((char *)v14 + v15) = v16;
          if ( v17 )
            std::default_delete<CCachedVisualImage::CCachedTarget>::operator()((__int64)v9, v17);
          ++v14;
        }
        while ( v14 != v13 );
      }
      std::unique_ptr<CCachedVisualImage::CCachedTarget>::~unique_ptr<CCachedVisualImage::CCachedTarget>(*((_QWORD *)this + 22) - 8LL);
      *((_QWORD *)this + 22) -= 8LL;
      v6 = 1;
    }
  }
  return v6;
}
