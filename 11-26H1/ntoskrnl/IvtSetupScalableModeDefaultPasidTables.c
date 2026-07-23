/*
 * XREFs of IvtSetupScalableModeDefaultPasidTables @ 0x140BF68FC
 * Callers:
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtAllocateScalableModePasidTables @ 0x1405034FC (IvtAllocateScalableModePasidTables.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1405246E4 (IvtUpdateScalableModePasidTablesForPasid.c)
 */

__int64 __fastcall IvtSetupScalableModeDefaultPasidTables(__int64 a1, int a2, int a3, __int64 a4)
{
  __int16 v6; // bx
  int ScalableModePasidTables; // esi
  __int64 v9; // r8
  __int64 v10; // rbx
  __int16 v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+30h] [rbp-38h]
  size_t v14[2]; // [rsp+50h] [rbp-18h] BYREF

  v6 = a3;
  v14[0] = 0LL;
  ScalableModePasidTables = IvtAllocateScalableModePasidTables(a1, 0LL, a3, 0, 0x3Fu, 3, a2, v14, 0LL);
  if ( ScalableModePasidTables >= 0 )
  {
    v12 = v6;
    v10 = v14[0];
    IvtUpdateScalableModePasidTablesForPasid(a1, v14[0], v9, a2, v12, a4, v13, 0);
    *(_QWORD *)(a1 + 104) = v10;
  }
  return (unsigned int)ScalableModePasidTables;
}
