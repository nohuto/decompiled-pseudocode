/*
 * XREFs of sub_1400802D0 @ 0x1400802D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     sub_1400805B4 @ 0x1400805B4 (sub_1400805B4.c)
 */

__int64 __fastcall sub_1400802D0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  void *v5; // rcx
  unsigned int v7; // ebx
  int v8; // edx
  _QWORD *v9; // rdi
  LPVOID v10; // rax
  __int64 v11; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *(void **)(a1 + 16);
  if ( !v5 || v5 == (void *)-1LL )
  {
    v7 = -2147467261;
    v8 = 83;
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v7 = -2147467259;
    v8 = 86;
LABEL_10:
    sub_14000C2A8(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      v7);
    return v7;
  }
  v9 = (_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v10 = MapViewOfFile(v5, 0xF001Fu, 0, 0, *(unsigned int *)(a1 + 32));
    sub_1400805B4(a1 + 24, v10);
    if ( !*v9 )
      return sub_1400470EC(
               (int)retaddr,
               92,
               (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
               v11);
  }
  *a2 = *(_DWORD *)(a1 + 32);
  *a3 = *v9;
  return 0LL;
}
