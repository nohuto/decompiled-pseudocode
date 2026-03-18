/*
 * XREFs of ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 *     xxxUserChangeDisplaySettings @ 0x140138F20 (xxxUserChangeDisplaySettings.c)
 *     NtUserToUnicodeEx @ 0x140193C60 (NtUserToUnicodeEx.c)
 *     NtUserSetManipulationInputTarget @ 0x140195D40 (NtUserSetManipulationInputTarget.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     NtUserSystemParametersInfo @ 0x1401AB600 (NtUserSystemParametersInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 *     NtUserSetSysColors @ 0x1401E9AA0 (NtUserSetSysColors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = -1LL;
  return result;
}
