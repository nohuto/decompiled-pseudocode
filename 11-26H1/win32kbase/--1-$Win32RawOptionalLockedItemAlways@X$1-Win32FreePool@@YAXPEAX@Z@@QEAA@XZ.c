/*
 * XREFs of ??1?$Win32RawOptionalLockedItemAlways@X$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x14006C6D4
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14006C700 (PopAndFreeAlwaysW32ThreadLock.c)
 */

__int64 __fastcall Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    result = PopAndFreeAlwaysW32ThreadLock(a1);
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
