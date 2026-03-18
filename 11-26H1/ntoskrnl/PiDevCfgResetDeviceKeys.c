/*
 * XREFs of PiDevCfgResetDeviceKeys @ 0x1407AB010
 * Callers:
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B32ACC (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1409887D8 (PiDevCfgEnumDeviceKeys.c)
 *     IopOpenRegistryKeyEx @ 0x140AA8B70 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeys(int a1, int a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  v8[0] = 2621478LL;
  v8[1] = L"Configuration\\Reset";
  v5 = IopOpenRegistryKeyEx(&Handle, a3, v8, 131097LL);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    v6 = 0;
  }
  else if ( v5 >= 0 )
  {
    v6 = PiDevCfgEnumDeviceKeys(a1, a2, (_DWORD)Handle, -1, 0, (__int64)PiDevCfgResetDeviceKeyCallback, 0LL);
  }
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
