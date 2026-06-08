/*
 * XREFs of GetHvPpmCapabilities @ 0x14003D3BC
 * Callers:
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 */

char __fastcall GetHvPpmCapabilities(bool *a1, bool *a2, _BYTE *a3, bool *a4)
{
  char v4; // si
  bool v9; // bl
  bool v10; // di
  bool v11; // bp
  NTSTATUS v12; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  v9 = 0;
  v10 = 0;
  SystemInformation = 0LL;
  v11 = 0;
  v12 = ZwQuerySystemInformation(SystemHypervisorInformation, &SystemInformation, (ULONG)16, 0LL);
  if ( v12 >= 0 )
  {
    v9 = (WORD4(SystemInformation) & 0x400) != 0LL;
    v10 = (*((_QWORD *)&SystemInformation + 1) & 0x20000LL) != 0;
    LOBYTE(v12) = (DWORD2(SystemInformation) & 0x10000000) != 0LL;
    v4 = v12;
    v11 = BYTE3(SystemInformation) == 4;
  }
  *a1 = v9;
  *a2 = v10;
  *a3 = v4;
  *a4 = v11;
  return v12;
}
