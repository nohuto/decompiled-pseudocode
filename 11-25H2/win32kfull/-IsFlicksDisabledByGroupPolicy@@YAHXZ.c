/*
 * XREFs of ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1401457C0
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x14025517C (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x140145838 (GetLocalMachineRegistryDWORDValues.c)
 */

__int64 __fastcall IsFlicksDisabledByGroupPolicy(__int64 a1)
{
  unsigned int v1; // ebx
  int LocalMachineRegistryDWORDValues; // eax
  const wchar_t *v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v1 = 0;
  v4 = L"PreventFlicks";
  v5 = 0LL;
  LocalMachineRegistryDWORDValues = GetLocalMachineRegistryDWORDValues(
                                      a1,
                                      L"\\Software\\Policies\\Microsoft\\TabletPC",
                                      &v4);
  if ( HIDWORD(v5) )
  {
    return LocalMachineRegistryDWORDValues >= 0;
  }
  else if ( (unsigned int)GetDWORDSettingValues(6LL, &v4, 1LL) )
  {
    return HIDWORD(v5) == 1;
  }
  return v1;
}
