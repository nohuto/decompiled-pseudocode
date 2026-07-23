/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x140AA5150
 * Callers:
 *     DifNtCreateWaitCompletionPacketWrapper @ 0x140678BD0 (DifNtCreateWaitCompletionPacketWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  NTSTATUS inserted; // ebx
  __int64 v8; // rcx
  __int64 ULong64FromUser; // rax
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF
  void *v13; // [rsp+60h] [rbp-18h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(WaitCompletionPacketHandle);
    RtlWriteULong64ToUser(WaitCompletionPacketHandle, ULong64FromUser);
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v11,
               112,
               0,
               0,
               &v12,
               0LL);
  if ( inserted >= 0 )
  {
    v8 = v12;
    *(_QWORD *)(v12 + 96) = 0LL;
    *(_BYTE *)(v8 + 104) = 0;
    *(_BYTE *)(v8 + 105) = 0;
    *(_QWORD *)(v8 + 88) = 0LL;
    inserted = ObInsertObjectEx((char *)v8, 0LL, DesiredAccess, 0, 0, 0LL, &v13);
    LODWORD(v12) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(WaitCompletionPacketHandle, (__int64)v13);
      else
        *WaitCompletionPacketHandle = v13;
    }
  }
  return inserted;
}
