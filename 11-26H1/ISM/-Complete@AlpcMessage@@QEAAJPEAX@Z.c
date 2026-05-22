/*
 * XREFs of ?Complete@AlpcMessage@@QEAAJPEAX@Z @ 0x1801104C4
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006A1F0 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcMessage::Complete(AlpcMessage *this, void *a2)
{
  int v2; // ecx
  int v3; // ecx
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  *((_WORD *)this + 2) &= ~0x2000u;
  v2 = NtAlpcSendWaitReceivePort(a2, 0LL, this, (char *)this + 368, 0LL, 0LL, 0LL, &v5);
  if ( v2 >= 0 )
    return 0LL;
  v3 = v2 | 0x10000000;
  result = 2147549183LL;
  if ( v3 < 0 )
    return (unsigned int)v3;
  return result;
}
