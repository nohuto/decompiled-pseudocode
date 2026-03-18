/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18016A508
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18016A468 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAA_NXZ @ 0x18027F4F0 (-UpdateAnimateValues@CScalar@@UEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18016A578 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CComposition **this)
{
  unsigned int v1; // edi
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 112) )
  {
    v3 = CComposition::UnregisterAnimateResource(
           this[3],
           (struct IAnimationResource *)((unsigned __int64)(this + 9) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x8Eu, 0LL);
    else
      *((_BYTE *)this + 112) = 0;
  }
  return v1;
}
