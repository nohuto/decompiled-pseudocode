/*
 * XREFs of FastGetProfileIntFromID @ 0x1400E12A0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     FastGetProfileIntW @ 0x1400E1740 (FastGetProfileIntW.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall FastGetProfileIntFromID(int a1, int a2, ULONG MessageId, int a4, PULONG Value, int a6)
{
  int v9; // ebx
  BYTE *Text; // rdx
  __int64 v11; // rbx
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+30h] [rbp-E8h] BYREF
  _WORD v14[80]; // [rsp+40h] [rbp-D8h] BYREF

  MessageResourceEntry = 0LL;
  v9 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, MessageId, &MessageResourceEntry) < 0 )
  {
LABEL_9:
    v14[v9] = 0;
    return FastGetProfileIntW(a1, a2, (int)v14, a4, Value, a6);
  }
  Text = MessageResourceEntry->Text;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)&Text[2 * v11] );
  v9 = v11 - 2;
  if ( v9 >= 0 )
  {
    if ( v9 > 79 )
      v9 = 79;
    memmove(v14, Text, 2LL * (unsigned int)v9);
    goto LABEL_9;
  }
  return FastGetProfileIntW(a1, a2, (int)v14, a4, Value, a6);
}
