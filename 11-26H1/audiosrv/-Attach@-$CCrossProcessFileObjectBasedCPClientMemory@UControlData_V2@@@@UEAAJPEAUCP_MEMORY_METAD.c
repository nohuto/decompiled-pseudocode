/*
 * XREFs of ?Attach@?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x18015ED00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT_CROSSPROCESS_MEMORY@@@Z @ 0x18015F730 (-Attach@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT_CROSSPRO.c)
 */

__int64 __fastcall CCrossProcessFileObjectBasedCPClientMemory<ControlData_V2>::Attach(
        CCrossProcessFileObjectBasedCrossProcessMemory *a1,
        __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 != 4 )
  {
    v2 = -2147024809;
    v3 = 119LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CCrossProcessFileObjectBasedCrossProcessMemory::Attach(
         a1,
         (struct CROSSPROCESSFILEOBJECT_CROSSPROCESS_MEMORY *)(a2 + 8));
  if ( v2 < 0 )
  {
    v3 = 120LL;
    goto LABEL_3;
  }
  return 0LL;
}
