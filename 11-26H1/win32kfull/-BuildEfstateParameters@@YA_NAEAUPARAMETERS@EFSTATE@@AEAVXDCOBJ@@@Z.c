/*
 * XREFs of ?BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z @ 0x1400FEB78
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400FEF94 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1401D5F14 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14010F6B4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x14010F700 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 */

bool __fastcall BuildEfstateParameters(struct EFSTATE::PARAMETERS *a1, struct XDCOBJ *a2)
{
  bool result; // al
  int v5; // ecx
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  unsigned int v10; // eax
  bool v11; // zf
  char v12; // cl
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  DC::QuickInitXform(*(_QWORD *)a2, &v14, 1026LL);
  if ( !v14 )
    return 0;
  v5 = *(_DWORD *)(v14 + 32);
  v6 = *(_OWORD *)(v14 + 16);
  v7 = *(_QWORD *)a2;
  *(_OWORD *)a1 = *(_OWORD *)v14;
  *((_OWORD *)a1 + 1) = v6;
  v8 = *(_QWORD *)(v7 + 48);
  *((_DWORD *)a1 + 8) = v5;
  v13 = v8;
  if ( !v8 )
    return 0;
  v9 = *(_DWORD *)(v8 + 2168);
  *((_DWORD *)a1 + 11) = *(_DWORD *)(v8 + 1812);
  *((_DWORD *)a1 + 9) = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v13);
  v10 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v13);
  v11 = *(_DWORD *)(v8 + 2124) == 2;
  *((_DWORD *)a1 + 10) = v10;
  *((_BYTE *)a1 + 48) = v11;
  result = 1;
  *((_BYTE *)a1 + 49) = BYTE1(v9) & 1;
  v12 = *(_BYTE *)(v8 + 40) & 1;
  *((_BYTE *)a1 + 51) = (v9 & 0x2000) != 0;
  *((_BYTE *)a1 + 50) = v12;
  *((_BYTE *)a1 + 52) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1;
  return result;
}
