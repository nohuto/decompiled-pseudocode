/*
 * XREFs of SystemSettings::Keyboard::LoadSetting @ 0x18014B2B4
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x18014B040 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemSettings::Keyboard::LoadSetting(HKEY a1, const WCHAR *a2)
{
  unsigned int v2; // ebx
  LSTATUS ValueW; // eax
  bool v4; // sf
  int v6; // [rsp+60h] [rbp+18h] BYREF
  DWORD v7; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v7 = 4;
  v6 = 0;
  ValueW = RegGetValueW(a1, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", a2, 0x10u, 0LL, &v6, &v7);
  v4 = ValueW < 0;
  if ( ValueW > 0 )
    v4 = 1;
  if ( v4 )
    return 0xFFFFFFFFLL;
  if ( v6 )
  {
    LOBYTE(v2) = v6 == 2;
    ++v2;
  }
  return v2;
}
