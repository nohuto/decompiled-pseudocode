/*
 * XREFs of ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x18021180C
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800FB84C (--1CEffectBrush@@MEAA@XZ.c)
 *     ?SetTemplate@?$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJPEAVCCompiledEffectTemplate@@@Z @ 0x18024EC70 (-SetTemplate@-$CEffectBrushGeneratedT@VCEffectBrush@@VCBrush@@@@QEAAJPEAVCCompiledEffectTemplate.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CEffectBrush::ReleaseResources(CEffectBrush *this)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 0x18u);
    *(_BYTE *)(v1 + 200) = 1;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 10);
  }
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    *(_QWORD *)(v3 + 80) = 0LL;
  v4 = *((_DWORD *)this + 48);
  v5 = (__int64 *)((char *)this + 168);
  if ( v4 )
  {
    v6 = 0LL;
    v7 = v4;
    do
    {
      v8 = *v5;
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(*v5 + v6));
      *(_QWORD *)(v8 + v6) = 0LL;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)this + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 168, 8u);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 20);
}
