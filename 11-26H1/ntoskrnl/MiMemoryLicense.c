/*
 * XREFs of MiMemoryLicense @ 0x140CFB138
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x140A6A340 (NtQueryLicenseValue.c)
 */

unsigned __int64 MiMemoryLicense()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax
  _QWORD v3[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v4; // [rsp+50h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+58h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+60h] [rbp+20h] BYREF

  v3[0] = 4063292LL;
  v3[1] = L"Kernel-WindowsMaxMemAllowedx64";
  v6 = 0;
  v4 = 0;
  v5 = 4;
  if ( (int)NtQueryLicenseValue((unsigned int *)v3, &v6, (char *)&v4, 4u, &v5) >= 0 && v4 )
    v0 = (unsigned __int64)v4 << 8;
  else
    v0 = 0x80000LL;
  v1 = 0x3FFFFFF7FELL;
  qword_140E2D720 = v0;
  qword_140E347B0 = 0x3FFFFFF7FELL;
  if ( (unsigned __int64)(1LL << dword_140E2D6FC) < 0x3FFFFFF7FELL )
    v1 = 1LL << dword_140E2D6FC;
  if ( qword_140E2D740 && v1 > (unsigned __int64)qword_140E2D740 >> 12 )
    v1 = (unsigned __int64)qword_140E2D740 >> 12;
  result = v1 - 1;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  qword_140E2D7A0 = v1 - 1;
  return result;
}
