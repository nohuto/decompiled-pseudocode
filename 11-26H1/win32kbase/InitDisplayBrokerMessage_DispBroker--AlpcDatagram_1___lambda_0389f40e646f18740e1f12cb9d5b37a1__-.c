/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__&DrvSampleDisplayState_ @ 0x14007E854
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___ @ 0x140195150 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_0389f40e646f18740e1f12cb9d5b37a1___.c)
 * Callees:
 *     IsRemoteConnection @ 0x14007E9B8 (IsRemoteConnection.c)
 *     DrvSampleDisplayState @ 0x14007EBD0 (DrvSampleDisplayState.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1___DrvSampleDisplayState_(
        _DWORD *a1,
        const void *a2)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // ecx

  memset(a1, 0, 0x60uLL);
  a1[10] = 1;
  a1[11] = 1;
  result = DrvSampleDisplayState(a1 + 12);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      memmove(a1 + 15, a2, 0x10uLL);
    *a1 = 6291512;
    *((_WORD *)a1 + 2) = 0x8000;
    a1[20] = *(_DWORD *)(W32GetUserSessionState(v6, v5, v7) + 68748);
    a1[21] = IsRemoteConnection();
    v8 = *(_DWORD *)(W32GetUserGdiSessionState() + 28);
    result = 0LL;
    a1[22] = v8;
  }
  return result;
}
