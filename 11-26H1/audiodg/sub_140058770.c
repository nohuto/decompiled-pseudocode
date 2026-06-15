/*
 * XREFs of sub_140058770 @ 0x140058770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

__int64 __fastcall sub_140058770(__int64 a1, __int64 a2)
{
  HANDLE CurrentProcess; // rax
  void *v5; // rbx
  void *v6; // rdi
  HANDLE v7; // rax
  __int64 v8; // r9
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v5 = *(void **)(a1 + 16);
  v6 = CurrentProcess;
  v7 = GetCurrentProcess();
  if ( !DuplicateHandle(v7, v5, v6, &TargetHandle, 0, 0, 2u) )
    return sub_1400470EC(
             (int)retaddr,
             33,
             (int)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
             v8);
  *(_QWORD *)(a2 + 8) = TargetHandle;
  result = 0LL;
  *(_DWORD *)a2 = 1;
  return result;
}
