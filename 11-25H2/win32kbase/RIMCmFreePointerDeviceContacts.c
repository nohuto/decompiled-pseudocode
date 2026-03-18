/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x14019D0D0
 * Callers:
 *     RIMFreePointerDevice @ 0x1401E3C1C (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1401EA4A4 (RIMIDEResetPointerDeviceMaxCount.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F5464 (RIMCmAllocPointerDeviceContacts.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  char *v2; // rcx
  char *v3; // rcx
  __int64 result; // rax

  v2 = *(char **)(a1 + 1000);
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *(_QWORD *)(a1 + 1000) = 0LL;
    *(_DWORD *)(a1 + 1008) = 0;
  }
  v3 = *(char **)(a1 + 976);
  if ( v3 )
  {
    GreDeleteFastMutex(v3);
    *(_QWORD *)(a1 + 976) = 0LL;
  }
  result = a1 + 984;
  *(_QWORD *)(a1 + 992) = a1 + 984;
  *(_QWORD *)(a1 + 984) = a1 + 984;
  return result;
}
