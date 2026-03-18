/*
 * XREFs of ?reset@?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAAXPEAVCInternalMilCmdConnection@@@Z @ 0x180229178
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x180228F90 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180229120 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x180228EE0 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 */

CInternalMilCmdConnection *__fastcall std::unique_ptr<CInternalMilCmdConnection>::reset(__int64 a1, CConnection *a2)
{
  CInternalMilCmdConnection *v2; // rcx
  CInternalMilCmdConnection *result; // rax

  v2 = g_pConnection;
  g_pConnection = a2;
  if ( v2 )
    return CInternalMilCmdConnection::`scalar deleting destructor'(v2, 1);
  return result;
}
