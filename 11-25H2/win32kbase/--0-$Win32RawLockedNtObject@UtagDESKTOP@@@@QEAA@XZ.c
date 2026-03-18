/*
 * XREFs of ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E2330
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1400E1A50 (xxxUserChangeDisplaySettings.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016F3A0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x140172D30 (NtUserQueryDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 *     NtUserSetManipulationInputTarget @ 0x140174C80 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetSysColors @ 0x140174FA0 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x140175320 (NtUserSystemParametersInfo.c)
 *     NtUserToUnicodeEx @ 0x140176C30 (NtUserToUnicodeEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
