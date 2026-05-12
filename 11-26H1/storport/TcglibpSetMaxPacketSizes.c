/*
 * XREFs of TcglibpSetMaxPacketSizes @ 0x140136980
 * Callers:
 *     TcglibpOpenSession @ 0x140136744 (TcglibpOpenSession.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibpAllocateRequestResources @ 0x140133C68 (TcglibpAllocateRequestResources.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 *     TcglibpReleaseRequestResources @ 0x1401342A0 (TcglibpReleaseRequestResources.c)
 */

__int64 __fastcall TcglibpSetMaxPacketSizes(int **a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // r8
  __int64 *v6; // rbp
  __int64 *v7; // r14
  int RequestResources; // esi
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_WORD *)(a2 + 24);
  if ( !v3 )
  {
    v3 = *((_WORD *)a1 + 14);
    *(_WORD *)(a2 + 24) = v3;
  }
  v6 = (__int64 *)(a2 + 48);
  v7 = (__int64 *)(a2 + 40);
  RequestResources = TcglibpAllocateRequestResources(*a1, 1, v3, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
  if ( RequestResources >= 0 )
  {
    TcglibEalLogCommand(*a1, "SetMaxPacketSize", 255, 23, v10, 0LL);
    RequestResources = TcglibpCallMethod(
                         (__int64)a1,
                         a2,
                         255LL,
                         65281LL,
                         (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenSetTPerPropertiesParams,
                         (__int64)&v10,
                         255LL,
                         65281LL,
                         0LL,
                         0LL);
  }
  TcglibpReleaseRequestResources(*a1, v7, v6);
  return (unsigned int)RequestResources;
}
