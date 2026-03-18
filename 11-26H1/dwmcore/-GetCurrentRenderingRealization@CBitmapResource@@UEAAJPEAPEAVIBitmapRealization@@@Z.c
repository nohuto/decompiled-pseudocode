/*
 * XREFs of ?GetCurrentRenderingRealization@CBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801AC900
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapResource::GetCurrentRenderingRealization(
        CBitmapResource *this,
        struct IBitmapRealization **a2)
{
  struct IBitmapRealization *v2; // rcx
  unsigned int v3; // ebx

  v2 = (struct IBitmapRealization *)*((_QWORD *)this + 1);
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
    v3 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292404, 0x7Eu, 0LL);
  }
  return v3;
}
