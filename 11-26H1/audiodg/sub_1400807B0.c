/*
 * XREFs of sub_1400807B0 @ 0x1400807B0
 * Callers:
 *     sub_1400804C0 @ 0x1400804C0 (sub_1400804C0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

__int64 __fastcall sub_1400807B0(__int64 a1, HANDLE *a2)
{
  HANDLE CurrentProcess; // rax
  void *v5; // rdi
  void *v6; // rbx
  HANDLE v7; // rax
  __int64 v8; // r9
  unsigned int v9; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !*(_QWORD *)(a1 + 16) || *(_QWORD *)(a1 + 16) == -1LL )
  {
    v9 = -2147467259;
    sub_14000C2A8(
      (int)retaddr,
      28,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      -2147467259);
  }
  else
  {
    TargetHandle = 0LL;
    sub_140016858(&TargetHandle, 0LL);
    CurrentProcess = GetCurrentProcess();
    v5 = *(void **)(a1 + 16);
    v6 = CurrentProcess;
    v7 = GetCurrentProcess();
    if ( DuplicateHandle(v7, v5, v6, &TargetHandle, 0, 0, 2u) )
    {
      v9 = 0;
      *a2 = TargetHandle;
      TargetHandle = 0LL;
    }
    else
    {
      v9 = sub_1400470EC(
             (int)retaddr,
             38,
             (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
             v8);
    }
    sub_140016F18(&TargetHandle);
  }
  return v9;
}
