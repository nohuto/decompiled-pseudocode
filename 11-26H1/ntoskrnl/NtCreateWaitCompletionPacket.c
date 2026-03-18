/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x140B6EB90
 * Callers:
 *     DifNtCreateWaitCompletionPacketWrapper @ 0x140674FF0 (DifNtCreateWaitCompletionPacketWrapper.c)
 * Callees:
 *     Feature_4132124986__private_IsEnabledDeviceUsageNoInline @ 0x1405CB8AC (Feature_4132124986__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(_QWORD *a1, unsigned int a2, __int64 a3)
{
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  int inserted; // ebx
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               a3,
               PreviousMode,
               v11,
               112,
               0,
               0,
               &v12,
               0LL);
  if ( inserted >= 0 )
  {
    v9 = v12;
    *(_QWORD *)(v12 + 96) = 0LL;
    *(_BYTE *)(v9 + 104) = 0;
    if ( (unsigned int)Feature_4132124986__private_IsEnabledDeviceUsageNoInline() )
      *(_BYTE *)(v9 + 105) = 0;
    *(_QWORD *)(v9 + 88) = 0LL;
    inserted = ObInsertObjectEx((char *)v9, 0LL, a2, 0, 0, 0LL, &v13);
    LODWORD(v12) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, v13);
      else
        *a1 = v13;
    }
  }
  return (unsigned int)inserted;
}
