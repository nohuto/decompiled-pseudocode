/*
 * XREFs of KiVerifyContextXStateCetUEnabled @ 0x1403DA154
 * Callers:
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D5F50 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KeVerifyContextXStateCetU @ 0x1403D9C14 (KeVerifyContextXStateCetU.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x140728420 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall KiVerifyContextXStateCetUEnabled(_QWORD *a1, void *a2)
{
  bool v2; // zf
  unsigned __int64 v4; // rax
  __int128 MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h]
  __int128 v8; // [rsp+50h] [rbp-18h]

  v2 = *a1 == 1LL;
  MemoryInformation = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !v2 )
    return 3221227018LL;
  v4 = a1[1];
  if ( (v4 & 7) != 0 || v4 < (unsigned __int64)a2 )
    return 3221227018LL;
  ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, MemoryRegionInformation, &MemoryInformation, 0x30uLL, 0LL);
  return (unsigned __int64)(v7 + MemoryInformation - 4096) < a1[1] ? 0xC000060A : 0;
}
