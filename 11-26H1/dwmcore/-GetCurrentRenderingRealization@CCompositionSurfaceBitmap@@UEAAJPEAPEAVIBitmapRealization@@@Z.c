/*
 * XREFs of ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18016C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
        CCompositionSurfaceBitmap *this,
        struct IBitmapRealization **a2)
{
  __int64 v2; // rcx
  struct IBitmapRealization *v4; // rax

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    v4 = (struct IBitmapRealization *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    *a2 = v4;
    if ( v4 )
    {
      (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v4 + 8LL))(v4);
      return 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0xC0u, 0LL);
      return 2291662987LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0xC5u, 0LL);
    return 2291674884LL;
  }
}
