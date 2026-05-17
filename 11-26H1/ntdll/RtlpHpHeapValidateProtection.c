/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x18008B8C0
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180069E10 (RtlpHpSegMgrCommit.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrReserve @ 0x18008B664 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  int VirtualMemory; // eax
  _OWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+60h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  if ( a2 != 64 )
    return a2;
  if ( a3 == 5 )
    VirtualMemory = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, _QWORD, _OWORD *, __int64, _QWORD))(a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a4 + 24)))(
                      a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4,
                      -1LL,
                      a1,
                      0LL,
                      v8,
                      48LL,
                      0LL);
  else
    VirtualMemory = ZwQueryVirtualMemory(-1LL, a1, 0LL, v8, 48LL, 0LL);
  if ( VirtualMemory >= 0 && (BYTE4(v9) & 0x60) != 0 && *(_QWORD *)&v8[0] == a1 )
    return a2;
  RtlpLogHeapFailure(0, a1, 1, DWORD1(v9), 0LL, 0LL);
  return 4LL;
}
