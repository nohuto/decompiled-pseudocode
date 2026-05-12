/*
 * XREFs of TcglibpOpenSession @ 0x140136744
 * Callers:
 *     TcglibpOpenSessionWithRetry @ 0x140136870 (TcglibpOpenSessionWithRetry.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibpAllocateRequestResources @ 0x140133C68 (TcglibpAllocateRequestResources.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 *     TcglibpReinitRequestResources @ 0x140134228 (TcglibpReinitRequestResources.c)
 *     TcglibpReleaseRequestResources @ 0x1401342A0 (TcglibpReleaseRequestResources.c)
 *     TcglibpSetMaxPacketSizes @ 0x140136980 (TcglibpSetMaxPacketSizes.c)
 */

__int64 __fastcall TcglibpOpenSession(int **a1, __int64 a2)
{
  int RequestResources; // esi
  __int16 v5; // r8
  int *v6; // rcx
  __int64 *v7; // r8
  __int64 *v8; // rdx

  RequestResources = TcglibpSetMaxPacketSizes(a1, a2, *((unsigned int *)a1 + 11));
  if ( RequestResources >= 0 )
  {
    v5 = *(_WORD *)(a2 + 24);
    if ( !v5 )
    {
      v5 = *((_WORD *)a1 + 14);
      *(_WORD *)(a2 + 24) = v5;
    }
    RequestResources = TcglibpAllocateRequestResources(*a1, 1, v5, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
    if ( RequestResources >= 0 )
    {
      TcglibEalLogCommand(*a1, "OpenSession", 255, 2, *(_QWORD *)(a2 + 16), 0LL);
      RequestResources = TcglibpCallMethod(
                           (__int64)a1,
                           a2,
                           255LL,
                           65282LL,
                           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenStartSessionParams,
                           0LL,
                           255LL,
                           65283LL,
                           (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ParseSyncSessionData,
                           0LL);
    }
  }
  v6 = *a1;
  v7 = (__int64 *)(a2 + 48);
  v8 = (__int64 *)(a2 + 40);
  if ( RequestResources < 0 )
  {
    TcglibpReleaseRequestResources(v6, v8, v7);
    *(_QWORD *)(a2 + 4) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)(a2 + 24) = 0;
  }
  else
  {
    TcglibpReinitRequestResources(v6, *v8, *v7);
  }
  return (unsigned int)RequestResources;
}
