/*
 * XREFs of SepProbeAndCaptureString_U @ 0x140A5FD38
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x140819C00 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140A5DD30 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140A60CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x140A9B2F0 (NtCloseObjectAuditAlarm.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepProbeAndCaptureString_U(unsigned int *a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int16 ULongFromUser; // si
  __int64 ULong64FromUser; // rax
  const void *v7; // r14
  unsigned __int16 *Pool2; // rax

  v4 = 0;
  *(_QWORD *)a2 = 0LL;
  ULongFromUser = RtlReadULongFromUser(a1);
  ULong64FromUser = RtlReadULong64FromUser(a1 + 2);
  v7 = (const void *)ULong64FromUser;
  if ( ULongFromUser && (ULong64FromUser & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (ULongFromUser & 1) != 0 || ULongFromUser == 65534 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    *(_QWORD *)a2 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = ULongFromUser;
      *(_WORD *)(*(_QWORD *)a2 + 2LL) = ULongFromUser;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)a2 + 16LL;
      if ( ULongFromUser )
        memmove(*(void **)(*(_QWORD *)a2 + 8LL), v7, ULongFromUser);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v4;
}
