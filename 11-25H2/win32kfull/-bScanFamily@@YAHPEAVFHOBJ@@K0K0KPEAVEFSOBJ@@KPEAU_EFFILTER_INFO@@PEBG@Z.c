/*
 * XREFs of ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x140104268
 * Callers:
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x140101BF8 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1401025BC (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1401043B0 (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x140104440 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 */

__int64 __fastcall bScanFamily(
        struct FHOBJ *a1,
        unsigned int a2,
        struct FHOBJ *a3,
        int a4,
        struct FHOBJ *a5,
        unsigned int a6,
        struct EFSOBJ *a7,
        unsigned int a8,
        struct _EFFILTER_INFO *a9,
        unsigned __int16 *a10)
{
  unsigned int v10; // ebx
  int v13; // eax
  int v15; // ebp

  v10 = 0;
  if ( !a1 || bScanTheList(a1, a2, a7, a8, a9, a10) )
  {
    if ( !a3 )
      goto LABEL_23;
    if ( a10 )
    {
      v13 = FHOBJ::bScanLists(a3, a7, a10, a8, a9);
    }
    else
    {
      v15 = 0;
      if ( a4 == 1 )
      {
        v15 = *((_DWORD *)a9 + 4);
        *((_DWORD *)a9 + 4) = 1;
      }
      else if ( a4 == 2 )
      {
        *((_DWORD *)a9 + 3) = 1;
      }
      v13 = FHOBJ::bScanLists((unsigned __int64)a3, a7, a8, a9);
      if ( a4 == 1 )
      {
        *((_DWORD *)a9 + 4) = v15;
      }
      else if ( a4 == 2 )
      {
        *((_DWORD *)a9 + 3) = 0;
      }
    }
    if ( v13 )
    {
LABEL_23:
      if ( !a5 || bScanTheList(a5, a6, a7, a8, a9, a10) )
        return 1;
    }
  }
  return v10;
}
