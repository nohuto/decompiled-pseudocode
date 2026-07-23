/*
 * XREFs of RtlFindMessage @ 0x140A8DE20
 * Callers:
 *     IopInitializeBootLogging @ 0x1407977F0 (IopInitializeBootLogging.c)
 *     PiGetDefaultMessageString @ 0x140A39904 (PiGetDefaultMessageString.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 *     ResFwFindMessage @ 0x140C56D2C (ResFwFindMessage.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x1404A0234 (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x140A8DEE4 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x140A8E9F8 (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  int v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  int *v10; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v11[4]; // [rsp+48h] [rbp-28h] BYREF

  v11[0] = MessageTableId;
  v11[2] = MessageLanguageId;
  v9 = 0LL;
  v10 = 0LL;
  v8 = 0;
  v11[1] = 1LL;
  v11[3] = MessageId;
  result = LdrpSearchResourceSection_U((_DWORD)DllHandle, (unsigned int)v11, 4, 64, (__int64)&v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(DllHandle, v9, &v10, &v8);
    if ( result >= 0 )
      return RtlpFindMessageInTable(v10, v8, MessageId, (unsigned __int16 **)MessageEntry);
  }
  return result;
}
