/*
 * XREFs of ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1401DD3CC
 * Callers:
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z @ 0x1401DD2B8 (-cKernPairs@PFEOBJ@@QEAAKPEAPEBU_FD_KERNINGPAIR@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x1401F8CD4 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140261E10 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1400C3D54 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400FC44C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFOBJ::QueryFontTree(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 (__fastcall *v10)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *); // rbx
  __int64 v11; // rsi
  ULONG_PTR *v12; // rbx
  __int64 v13; // rdi
  ULONG_PTR *v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-10h]

  if ( !(unsigned int)PFFOBJ::bCheckFntFileInfo(this) )
    return 0LL;
  v10 = *(__int64 (__fastcall **)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)this + 96LL)
                                                                                                 + 2896LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v15, this);
  v11 = v10(a2, a3, a4, a5, a6);
  if ( v16 )
  {
    v12 = v15;
    v13 = v16;
    do
    {
      EngUnmapFontFileFD(*v12++);
      --v13;
    }
    while ( v13 );
  }
  return v11;
}
