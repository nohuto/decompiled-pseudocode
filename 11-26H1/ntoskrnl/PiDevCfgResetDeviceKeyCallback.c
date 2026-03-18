/*
 * XREFs of PiDevCfgResetDeviceKeyCallback @ 0x1407AAFA0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     PiDevCfgCopyDeviceProperties @ 0x140779A34 (PiDevCfgCopyDeviceProperties.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14098C464 (PiDevCfgCopyDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeyCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, __int64 a6)
{
  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
    return PiDevCfgCopyDeviceKeys(a5, a6, 1LL);
  else
    return PiDevCfgCopyDeviceProperties(a5, a6, *(_QWORD *)(a2 + 8), 1LL, 1, 0LL);
}
