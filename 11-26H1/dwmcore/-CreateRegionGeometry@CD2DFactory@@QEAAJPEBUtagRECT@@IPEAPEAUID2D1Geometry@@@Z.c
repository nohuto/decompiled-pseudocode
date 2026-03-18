/*
 * XREFs of ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x1800AFBE4
 * Callers:
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x1800AF944 (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DFactory::CreateRegionGeometry(
        CD2DFactory *this,
        const struct tagRECT *a2,
        __int64 a3,
        struct ID2D1Geometry **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct ID2D1Geometry *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, const struct tagRECT *, __int64, struct ID2D1Geometry **))(*(_QWORD *)qword_1803DE658 + 24LL))(
         qword_1803DE658,
         a2,
         a3,
         &v8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *a4 = v8;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x85u, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
