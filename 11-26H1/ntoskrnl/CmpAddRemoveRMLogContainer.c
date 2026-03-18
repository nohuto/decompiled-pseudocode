/*
 * XREFs of CmpAddRemoveRMLogContainer @ 0x14085DF34
 * Callers:
 *     CmpTransWriteLog @ 0x1408AD634 (CmpTransWriteLog.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140862B64 (CmpAddRemoveContainerToCLFSLog.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     CmpQueryNameString @ 0x140A77968 (CmpQueryNameString.c)
 */

__int64 __fastcall CmpAddRemoveRMLogContainer(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *Thread; // rax
  UNICODE_STRING *v5; // r14
  int v6; // ebx
  unsigned int i; // esi
  int v8; // eax
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING v11; // [rsp+58h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+68h] [rbp+17h] BYREF

  *(_QWORD *)&v11.Length = 0LL;
  v11.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( (struct _LIST_ENTRY *)a1 == WheapPfaLock.Timer.Header.WaitListHead.Flink )
  {
    Thread = stru_140E098B8.WaitBlock[2].Thread;
    v5 = (UNICODE_STRING *)&CmpLogPath;
  }
  else
  {
    v6 = CmpQueryNameString(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 1544LL), &v11);
    if ( v6 < 0 )
      goto LABEL_19;
    Thread = *(struct _KTHREAD **)(a1 + 80);
    v5 = &v11;
  }
  LOBYTE(a3) = 1;
  v6 = RtlStringFromGUIDEx(Thread->ThreadLock + 112, &UnicodeString, a3);
  if ( v6 >= 0 )
  {
    for ( i = *(_DWORD *)(a1 + 68); i < 0x100; ++i )
    {
      v8 = CmpAddRemoveContainerToCLFSLog(
             *(PLOG_FILE_OBJECT *)(a1 + 88),
             v5,
             &UnicodeString,
             &CmpLogExt,
             &CmpContainerSuffix,
             i,
             (PULONGLONG)(a1 + 72));
      v6 = v8;
      if ( v8 != -1073741771 && v8 != -1073741635 )
      {
        if ( v8 >= 0 )
          ++*(_DWORD *)(a1 + 68);
        goto LABEL_17;
      }
    }
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 1LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)byte_140056ECB,
        0LL,
        0LL,
        2u,
        &v12);
    v6 = -1073741670;
  }
LABEL_17:
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
LABEL_19:
  if ( v11.Buffer )
    RtlFreeAnsiString(&v11);
  return (unsigned int)v6;
}
