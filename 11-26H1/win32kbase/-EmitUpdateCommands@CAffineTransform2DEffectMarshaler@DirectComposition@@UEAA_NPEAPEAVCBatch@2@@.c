/*
 * XREFs of ?EmitUpdateCommands@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetTransformMatrix11Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022F834 (-EmitSetTransformMatrix11Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetTransformMatrix12Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022F8AC (-EmitSetTransformMatrix12Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetTransformMatrix21Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022F924 (-EmitSetTransformMatrix21Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetTransformMatrix22Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022F99C (-EmitSetTransformMatrix22Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetTransformMatrix31Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022FA14 (-EmitSetTransformMatrix31Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetTransformMatrix32Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022FA8C (-EmitSetTransformMatrix32Command@CAffineTransform2DEffectMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230B00 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CAffineTransform2DEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  int v5; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x400) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
        return v4;
      v6 = v10;
      *(_DWORD *)v10 = 16;
      v6[1] = 0LL;
      *((_DWORD *)v6 + 1) = 348;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v6 + 3) = *((_DWORD *)this + 64);
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x800) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
        return v4;
      v7 = v10;
      *(_DWORD *)v10 = 16;
      v7[1] = 0LL;
      *((_DWORD *)v7 + 1) = 349;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 65);
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x1000) != 0 )
    {
      v10 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v10) )
        return v4;
      v8 = v10;
      *(_DWORD *)v10 = 16;
      v8[1] = 0LL;
      *((_DWORD *)v8 + 1) = 350;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v8 + 3) = *((_DWORD *)this + 66);
      *((_DWORD *)this + 4) &= ~0x1000u;
    }
    if ( DirectComposition::CAffineTransform2DEffectMarshaler::EmitSetTransformMatrix11Command(this, a2)
      && DirectComposition::CAffineTransform2DEffectMarshaler::EmitSetTransformMatrix12Command(this, a2)
      && DirectComposition::CAffineTransform2DEffectMarshaler::EmitSetTransformMatrix21Command(this, a2)
      && DirectComposition::CAffineTransform2DEffectMarshaler::EmitSetTransformMatrix22Command(this, a2)
      && DirectComposition::CAffineTransform2DEffectMarshaler::EmitSetTransformMatrix31Command(this, a2)
      && DirectComposition::CAffineTransform2DEffectMarshaler::EmitSetTransformMatrix32Command(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
