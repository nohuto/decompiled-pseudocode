/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1802079A0
 * Callers:
 *     ?PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x180280C70 (-PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x180281130 (-PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 * Callees:
 *     ??$_Construct@$00PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXQEBD_K@Z @ 0x180207AF4 (--$_Construct@$00PEBD@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXQEBD_K@Z.c)
 */

__int64 __fastcall std::string::string(__int64 a1, __int64 a2)
{
  __int64 v3; // r8

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(a2 + v3) );
  std::string::_Construct<1,char const *>();
  return a1;
}
