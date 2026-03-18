/*
 * XREFs of ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400A038C
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1400E1A50 (xxxUserChangeDisplaySettings.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x140172D30 (NtUserQueryDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 *     NtUserSetManipulationInputTarget @ 0x140174C80 (NtUserSetManipulationInputTarget.c)
 *     NtUserToUnicodeEx @ 0x140176C30 (NtUserToUnicodeEx.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1400A1AFC (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    result = PopAndFreeW32ThreadLock();
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
