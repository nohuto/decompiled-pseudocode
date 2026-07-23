/*
 * XREFs of PsQueryThreadStartAddress @ 0x14040CC40
 * Callers:
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     sub_140CAEA00 @ 0x140CAEA00 (sub_140CAEA00.c)
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
