/*
 * XREFs of ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800E5388
 * Callers:
 *     ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800E5270 (-CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CWindowTarget@@KAPEAX_K@Z @ 0x180085B1C (--2CWindowTarget@@KAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ??$?8VCWindowTarget@@@WRL@Microsoft@@YA_N$$TAEBV?$ComPtr@VCWindowTarget@@@01@@Z @ 0x1800E5204 (--$-8VCWindowTarget@@@WRL@Microsoft@@YA_N$$TAEBV-$ComPtr@VCWindowTarget@@@01@@Z.c)
 *     ??0CWindowTarget@@IEAA@XZ @ 0x1800E5214 (--0CWindowTarget@@IEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z @ 0x1800E5238 (-Attach@-$ComPtr@VCWindowTarget@@@WRL@Microsoft@@QEAAXPEAVCWindowTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowTarget::Create(struct CVisualProxy *this, struct CWindowTarget **a2)
{
  unsigned int v4; // edi
  CWindowTarget *v5; // rax
  CWindowTarget *v6; // rsi
  __int64 v7; // rcx
  struct CWindowTarget *v8; // rdx
  CBaseObject *v10; // [rsp+60h] [rbp+18h] BYREF
  CWindowTarget *v11; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v10 = 0LL;
  v5 = (CWindowTarget *)CWindowTarget::operator new();
  v6 = v5;
  v11 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x88uLL);
    v5 = CWindowTarget::CWindowTarget(v6);
  }
  Microsoft::WRL::ComPtr<CWindowTarget>::Attach(&v10, v5);
  if ( Microsoft::WRL::operator==<CWindowTarget>(v7, &v10) )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x18u, 0LL);
  }
  else
  {
    v8 = v10;
    *((_QWORD *)v10 + 2) = this;
    if ( this )
      CBaseObject::AddRef(this);
    v10 = 0LL;
    *a2 = v8;
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v10);
  return v4;
}
