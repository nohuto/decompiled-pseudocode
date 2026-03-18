/*
 * XREFs of ??1CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB60
 * Callers:
 *     NtUserMessageCall @ 0x14001B730 (NtUserMessageCall.c)
 *     ValidateHwndIAM @ 0x14015C6C4 (ValidateHwndIAM.c)
 *     ValidateHwndIAMComponetUIAware @ 0x14015C728 (ValidateHwndIAMComponetUIAware.c)
 *     _MapDesktopObject @ 0x1401AC150 (_MapDesktopObject.c)
 *     UserRecreateRedirectionBitmap @ 0x140287A60 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisableILCheckAuto::~CDisableILCheckAuto(CDisableILCheckAuto *this)
{
  if ( *((_BYTE *)this + 8) )
    *(_BYTE *)(*(_QWORD *)this + 1708LL) = 1;
}
