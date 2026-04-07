/*
 * XREFs of ?put_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x180075650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_Source(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        struct Windows::Graphics::Effects::IGraphicsEffectSource *a2)
{
  __int64 v4; // rcx

  if ( *((struct Windows::Graphics::Effects::IGraphicsEffectSource **)this + 4) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Graphics::Effects::IGraphicsEffectSource *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
