/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x18011FA84
 * Callers:
 *     RtlpHpHeapProtect @ 0x1801580D0 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpHpLargeAllocationProtect(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+40h] [rbp-28h]
  __int128 v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  v7 = 0;
  v9 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  result = ZwQueryVirtualMemory(-1LL, v9, 0LL, &v4, 48LL, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = *((_QWORD *)&v5 + 1);
    return ZwProtectVirtualMemory(-1LL, &v9, &v8, a2, &v7);
  }
  return result;
}
