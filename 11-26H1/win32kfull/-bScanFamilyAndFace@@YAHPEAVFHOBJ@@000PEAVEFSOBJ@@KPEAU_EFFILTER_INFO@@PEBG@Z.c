/*
 * XREFs of ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1400FEDA4
 * Callers:
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1401D5F14 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1400FF484 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1400FF9B8 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 */

__int64 __fastcall bScanFamilyAndFace(
        struct FHOBJ *this,
        struct FHOBJ *a2,
        struct FHOBJ *a3,
        struct FHOBJ *a4,
        struct EFSOBJ *a5,
        unsigned int a6,
        struct _EFFILTER_INFO *a7,
        unsigned __int16 *a8)
{
  unsigned int v8; // ebx
  int v12; // eax
  int v15; // eax
  int v16; // eax

  v8 = 0;
  if ( !a3 || (!a8 ? (v15 = FHOBJ::bScanLists(a3, a5, a6, a7)) : (v15 = FHOBJ::bScanLists(a3, a5, a8, a6, a7)), v15) )
  {
    if ( !this
      || (!a8 ? (v12 = FHOBJ::bScanLists(this, a5, a6, a7)) : (v12 = FHOBJ::bScanLists(this, a5, a8, a6, a7)), v12) )
    {
      if ( *(_QWORD *)(*(_QWORD *)a5 + 88LL) != *(_QWORD *)a5 + 116LL )
        return 1;
      if ( !a4 || (!a8 ? (v16 = FHOBJ::bScanLists(a4, a5, a6, a7)) : (v16 = FHOBJ::bScanLists(a4, a5, a8, a6, a7)), v16) )
      {
        if ( !a2 )
          return 1;
        if ( a8 ? FHOBJ::bScanLists(a2, a5, a8, a6, a7) : (unsigned int)FHOBJ::bScanLists(a2, a5, a6, a7) )
          return 1;
      }
    }
  }
  return v8;
}
