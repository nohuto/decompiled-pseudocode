/*
 * XREFs of ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x18016EC60
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18009A68C (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z @ 0x18016EB7C (-GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::FindExistingCachedTarget(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  char v5; // bp
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  _DWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  float v12; // [rsp+30h] [rbp-28h]
  char v13; // [rsp+34h] [rbp-24h]

  v3 = *((_QWORD *)this + 21);
  v4 = *((_QWORD *)this + 22);
  v5 = *((_BYTE *)g_pComposition + 6458);
  while ( v3 != v4 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 144LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(v6 + 16) + 120LL))(v6 + 16, v10);
    if ( v10[0] != *(_DWORD *)a2
      || v10[1] != *((_DWORD *)a2 + 1)
      || (_DWORD)v11 != -1 && (_DWORD)v11 != *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 2) != -3
      || (v12 != 0.0) != (*((float *)a2 + 4) != 0.0)
      || v13 && !*((_BYTE *)a2 + 20) )
    {
      goto LABEL_15;
    }
    v7 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 144LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v8 = *v7;
    if ( v5 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v8 + 160))(v7) )
        return *(struct CCachedVisualImage::CCachedTarget **)v3;
      v3 += 8LL;
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v8 + 176))(v7) )
        return *(struct CCachedVisualImage::CCachedTarget **)v3;
LABEL_15:
      v3 += 8LL;
    }
  }
  return 0LL;
}
