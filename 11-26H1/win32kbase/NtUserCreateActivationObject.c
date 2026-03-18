/*
 * XREFs of NtUserCreateActivationObject @ 0x1401E2650
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserCreateActivationObject(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LUID Luid; // [rsp+58h] [rbp+20h] BYREF

  Luid = 0LL;
  ZwAllocateLocallyUniqueId(&Luid);
  ((void (__fastcall *)(_QWORD, _QWORD))RtlWriteULong64ToUser)(a3, Luid);
  return 1LL;
}
