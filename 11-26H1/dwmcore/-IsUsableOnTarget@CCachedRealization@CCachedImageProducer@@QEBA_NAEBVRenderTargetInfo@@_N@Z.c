/*
 * XREFs of ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1800582E4
 * Callers:
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1800579DC (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 *     ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180058168 (-HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x18005822C (-HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCachedImageProducer::CCachedRealization::IsUsableOnTarget(
        CCachedImageProducer::CCachedRealization *this,
        const struct RenderTargetInfo *a2,
        char a3)
{
  __int64 v6; // rax
  int v7; // ecx
  char v8; // bl
  __int64 *v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 88LL))(*(_QWORD *)this, &v13);
  if ( *(_QWORD *)v6 != *(_QWORD *)a2 )
    return 0;
  v7 = *(_DWORD *)(v6 + 8);
  if ( v7 != -1 && v7 != *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 2) != -3 )
    return 0;
  v8 = 0;
  if ( (*(float *)(v6 + 16) != 0.0) != (*((float *)a2 + 4) != 0.0) || *(_BYTE *)(v6 + 20) && !*((_BYTE *)a2 + 20) )
    return 0;
  v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 144LL))(*(_QWORD *)this);
  v10 = *v9;
  if ( a3 )
    v11 = (*(__int64 (__fastcall **)(__int64 *))(v10 + 160))(v9);
  else
    v11 = (*(__int64 (__fastcall **)(__int64 *))(v10 + 176))(v9);
  if ( !v11 )
    return 1;
  return v8;
}
