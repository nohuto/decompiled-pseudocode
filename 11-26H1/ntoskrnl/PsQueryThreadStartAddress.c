/*
 * XREFs of PsQueryThreadStartAddress @ 0x140418630
 * Callers:
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     sub_140CA8A00 @ 0x140CA8A00 (sub_140CA8A00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 || !a2 )
    return *(_QWORD *)(a1 + 1376);
  if ( (*(_DWORD *)(a1 + 1448) & 8) != 0 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 1248);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  result = 0LL;
  if ( (*(_DWORD *)(a1 + 1448) & 8) == 0 )
    return v2;
  return result;
}
