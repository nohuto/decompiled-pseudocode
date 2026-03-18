/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x14012EBA0
 * Callers:
 *     RIMCmAllocPointerDeviceContacts @ 0x14012E834 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMFreePointerDevice @ 0x140130280 (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x14020958C (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx
  char *v6; // rcx
  __int64 result; // rax

  v5 = *(char **)(a1 + 1000);
  if ( v5 )
  {
    GreDeleteFastMutex(v5, a2, a3, a4);
    *(_QWORD *)(a1 + 1000) = 0LL;
    *(_DWORD *)(a1 + 1008) = 0;
  }
  v6 = *(char **)(a1 + 976);
  if ( v6 )
  {
    GreDeleteFastMutex(v6, a2, a3, a4);
    *(_QWORD *)(a1 + 976) = 0LL;
  }
  result = a1 + 984;
  *(_QWORD *)(a1 + 992) = a1 + 984;
  *(_QWORD *)(a1 + 984) = a1 + 984;
  return result;
}
