/*
 * XREFs of RaCallMiniportResetBus @ 0x140060048
 * Callers:
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     RaidAdapterResetBusNoLock @ 0x14006571C (RaidAdapterResetBusNoLock.c)
 * Callees:
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaCallMiniportResetBus(__int64 a1, unsigned __int8 a2)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // al

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 248) & 1) != 0 )
    return 0LL;
  v5 = *(_QWORD *)a1;
  if ( (qword_140172448 & 0x400) != 0 )
    DbgLogRequest(v5, 11, v5, *(unsigned int *)(v5 + 56), a2, 0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 232);
  v7 = *(_QWORD *)(a1 + 240);
  *(_DWORD *)(a1 + 248) |= 4u;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v6 + 40))(v7 + 16, v3);
  *(_DWORD *)(a1 + 248) &= ~4u;
  return v8 == 0 ? 0xC0000001 : 0;
}
