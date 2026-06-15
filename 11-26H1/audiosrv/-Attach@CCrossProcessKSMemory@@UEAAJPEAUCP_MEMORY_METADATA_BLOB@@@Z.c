/*
 * XREFs of ?Attach@CCrossProcessKSMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x18015FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x18015F790 (-Attach@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 */

__int64 __fastcall CCrossProcessKSMemory::Attach(void **this, void **a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 != 2 )
  {
    v2 = -2147024809;
    v3 = 15LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpksmemory.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CSectionBasedCrossProcessMemory::Attach(this, a2 + 1);
  if ( v2 < 0 )
  {
    v3 = 16LL;
    goto LABEL_3;
  }
  return 0LL;
}
