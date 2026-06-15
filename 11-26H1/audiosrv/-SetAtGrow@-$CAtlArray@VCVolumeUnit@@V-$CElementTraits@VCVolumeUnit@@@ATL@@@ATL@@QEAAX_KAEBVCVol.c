/*
 * XREFs of ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18008406C
 * Callers:
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180079744 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18007B1A0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180081708 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180117E90 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180118648 (-LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x180119AFC (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // [rsp+38h] [rbp+10h]

  v6 = a1[1];
  v12 = v6;
  if ( a2 >= v6 && !(unsigned __int8)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(a1, a2 + 1) )
    ATL::AtlThrowImpl(-2147024882);
  try
  {
    v8 = a2 << 6;
    v9 = *a1;
    *(_DWORD *)(v8 + v9) = *(_DWORD *)a3;
    *(_QWORD *)(v8 + v9 + 56) = *(_QWORD *)(a3 + 56);
    *(_DWORD *)(v8 + v9 + 4) = *(_DWORD *)(a3 + 4);
    *(_QWORD *)(v8 + v9 + 24) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(v8 + v9 + 32) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(v8 + v9 + 40) = *(_QWORD *)(a3 + 40);
    *(_QWORD *)(v8 + v9 + 48) = *(_QWORD *)(a3 + 48);
    *(_DWORD *)(v8 + v9 + 8) = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(v8 + v9 + 12) = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(v8 + v9 + 16) = *(_DWORD *)(a3 + 16);
    result = *(unsigned int *)(a3 + 20);
    *(_DWORD *)(v8 + v9 + 20) = result;
  }
  catch ( ... )
  {
    if ( a1[1] != v12 )
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(a1, v12);
    throw;
  }
  return result;
}
