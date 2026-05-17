/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800D5244
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpInitCodePageTables @ 0x1800D52E0 (RtlpInitCodePageTables.c)
 *     LdrpFusionManifestCodePages @ 0x1800D55E8 (LdrpFusionManifestCodePages.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800D594C (RtlpQueryNlsSystemCodePages.c)
 */

__int64 __fastcall LdrpInitializeNlsInfo(__int64 a1)
{
  __int16 v2; // cx
  __int16 v3; // dx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) & 0x8000000) != 0 )
  {
    *(_DWORD *)(a1 + 844) = -34996759;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    if ( (unsigned __int8)LdrpFusionManifestCodePages(&v5, &v6) || (int)RtlpQueryNlsSystemCodePages(&v5, &v6) >= 0 )
    {
      v2 = v5;
      v3 = v6;
    }
    else
    {
      v3 = -535;
      v2 = -535;
    }
    *(_WORD *)(a1 + 844) = v2;
    *(_WORD *)(a1 + 846) = v3;
  }
  RtlpInitCodePageTables();
  return RtlpInitUppercaseTables(*(unsigned __int16 *)(a1 + 848));
}
