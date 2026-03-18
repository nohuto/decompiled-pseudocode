/*
 * XREFs of SepProbeAndCaptureString_U @ 0x1409F71E8
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x140813DA0 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1409F51E0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1409F7550 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1409F8190 (NtPrivilegeObjectAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x140A97170 (NtCloseObjectAuditAlarm.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
