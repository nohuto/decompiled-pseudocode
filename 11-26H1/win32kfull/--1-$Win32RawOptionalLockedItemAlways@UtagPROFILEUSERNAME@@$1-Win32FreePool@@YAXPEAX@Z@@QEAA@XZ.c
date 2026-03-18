/*
 * XREFs of ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400CC710
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402ACF70 (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 */

__int64 __fastcall Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>(
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
