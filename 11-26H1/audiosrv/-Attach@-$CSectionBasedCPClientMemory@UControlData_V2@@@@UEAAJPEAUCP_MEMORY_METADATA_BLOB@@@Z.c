/*
 * XREFs of ?Attach@?$CSectionBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x18015ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x18015F790 (-Attach@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 */

__int64 __fastcall CSectionBasedCPClientMemory<ControlData_V2>::Attach(CSectionBasedCrossProcessMemory *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 != 1 )
  {
    v2 = -2147024809;
    v3 = 24LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CSectionBasedCrossProcessMemory::Attach(a1, (struct STANDARD_CROSSPROCESS_MEMORY *)(a2 + 8));
  if ( v2 < 0 )
  {
    v3 = 25LL;
    goto LABEL_3;
  }
  return 0LL;
}
