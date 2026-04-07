/*
 * XREFs of ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800681AC
 * Callers:
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180063098 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18008AFF8 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Create(struct CAccentAcrylicBlurBehind **a1)
{
  struct CAccentAcrylicBlurBehind *v2; // rax
  struct CAccentAcrylicBlurBehind *v3; // rbx
  int v4; // edi
  CAccentAcrylicBlurBehind *v6; // rax

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xE7u, 0LL);
    return (unsigned int)v4;
  }
  v2 = (struct CAccentAcrylicBlurBehind *)DefaultHeap::AllocClear(0xE8uLL);
  v3 = v2;
  if ( v2 && (memset_0(v2, 0, 0xE8uLL), v6 = CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(v3), (v3 = v6) != 0LL) )
  {
    v4 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *))(*(_QWORD *)v6 + 8LL))(v6);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xE7u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
