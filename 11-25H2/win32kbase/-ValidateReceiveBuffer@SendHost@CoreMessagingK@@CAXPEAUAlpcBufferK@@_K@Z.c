/*
 * XREFs of ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1400699E8
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x140069850 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 * Callees:
 *     ?GetReceiveBufferMaxSize@RegistrarClient@CoreMessagingK@@SAGXZ @ 0x14006A0D4 (-GetReceiveBufferMaxSize@RegistrarClient@CoreMessagingK@@SAGXZ.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x14019EC04 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall CoreMessagingK::SendHost::ValidateReceiveBuffer(struct AlpcBufferK *a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 ReceiveBufferMaxSize; // r8

  if ( (unsigned __int8)*((_WORD *)a1 + 2) != 2 )
    CoreMessagingK::Runtime::BugCheck(1284LL, (unsigned __int8)*((_WORD *)a1 + 2), 0LL);
  if ( a2 < 0x50 )
    CoreMessagingK::Runtime::BugCheck(1285LL, a2, 0LL);
  v4 = *((unsigned int *)a1 + 18) + 80LL;
  if ( a2 != v4 )
    CoreMessagingK::Runtime::BugCheck(1286LL, a2, v4);
  ReceiveBufferMaxSize = CoreMessagingK::RegistrarClient::GetReceiveBufferMaxSize();
  if ( a2 > ReceiveBufferMaxSize )
    CoreMessagingK::Runtime::BugCheck(1287LL, a2, ReceiveBufferMaxSize);
  if ( *((_DWORD *)a1 + 16) != 0x10000 )
    CoreMessagingK::Runtime::BugCheck(1288LL, *((unsigned __int16 *)a1 + 32), *((unsigned __int16 *)a1 + 33));
}
