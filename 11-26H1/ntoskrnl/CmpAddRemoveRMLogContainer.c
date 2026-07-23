/*
 * XREFs of CmpAddRemoveRMLogContainer @ 0x140864224
 * Callers:
 *     CmpTransWriteLog @ 0x1408B3A74 (CmpTransWriteLog.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140868F44 (CmpAddRemoveContainerToCLFSLog.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x140A80688 (CmpQueryNameString.c)
 */

__int64 __fastcall CmpAddRemoveRMLogContainer(__int64 a1)
{
  struct _KTHREAD *Thread; // rax
  UNICODE_STRING *p_UnicodeString; // r14
  NTSTATUS v4; // ebx
  unsigned int i; // esi
  int v6; // eax
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+68h] [rbp+17h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( a1 == *(_QWORD *)&WheapPfaLock.WaitBlockFill11[16] )
  {
    Thread = stru_140E098B8.WaitBlock[2].Thread;
    p_UnicodeString = (UNICODE_STRING *)&CmpLogPath;
  }
  else
  {
    v4 = CmpQueryNameString(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 1544LL), &UnicodeString);
    if ( v4 < 0 )
      goto LABEL_19;
    Thread = *(struct _KTHREAD **)(a1 + 80);
    p_UnicodeString = &UnicodeString;
  }
  v4 = RtlStringFromGUIDEx((PGUID)(Thread->ThreadLock + 112), &GuidString, 1u);
  if ( v4 >= 0 )
  {
    for ( i = *(_DWORD *)(a1 + 68); i < 0x100; ++i )
    {
      v6 = CmpAddRemoveContainerToCLFSLog(
             *(PLOG_FILE_OBJECT *)(a1 + 88),
             p_UnicodeString,
             &GuidString,
             &CmpLogExt,
             &CmpContainerSuffix,
             i,
             (PULONGLONG)(a1 + 72));
      v4 = v6;
      if ( v6 != -1073741771 && v6 != -1073741635 )
      {
        if ( v6 >= 0 )
          ++*(_DWORD *)(a1 + 68);
        goto LABEL_17;
      }
    }
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 1LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)byte_140057E8B,
        0LL,
        0LL,
        2u,
        &v10);
    v4 = -1073741670;
  }
LABEL_17:
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
LABEL_19:
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v4;
}
