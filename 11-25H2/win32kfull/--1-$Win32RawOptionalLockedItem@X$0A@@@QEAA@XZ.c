/*
 * XREFs of ??1?$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ @ 0x1401CDB3C
 * Callers:
 *     xxxValidateClassAndSize @ 0x140242488 (xxxValidateClassAndSize.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140293D10 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall Win32RawOptionalLockedItem<void,0>::~Win32RawOptionalLockedItem<void,0>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    result = PopAndFreeW32ThreadLock(a1, a2);
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
