/*
 * XREFs of MiMemoryLicense @ 0x140D014B8
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     NtQueryLicenseValue @ 0x140A76CE0 (NtQueryLicenseValue.c)
 */

unsigned __int64 MiMemoryLicense()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  unsigned int Data; // [rsp+50h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp+18h] BYREF
  ULONG Type; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)&ValueName.Length = 4063292LL;
  ValueName.Buffer = L"Kernel-WindowsMaxMemAllowedx64";
  Type = 0;
  Data = 0;
  ResultDataSize = 4;
  if ( NtQueryLicenseValue(&ValueName, &Type, &Data, 4u, &ResultDataSize) >= 0 && Data )
    v0 = (unsigned __int64)Data << 8;
  else
    v0 = 0x80000LL;
  v1 = 0x3FFFFFF7FELL;
  qword_140E2D8A0 = v0;
  qword_140E34930 = 0x3FFFFFF7FELL;
  if ( (unsigned __int64)(1LL << dword_140E2D87C) < 0x3FFFFFF7FELL )
    v1 = 1LL << dword_140E2D87C;
  if ( qword_140E2D8C0 && v1 > (unsigned __int64)qword_140E2D8C0 >> 12 )
    v1 = (unsigned __int64)qword_140E2D8C0 >> 12;
  result = v1 - 1;
  LOBYTE(Mm64BitPhysicalAddress) = 1;
  qword_140E2D920 = v1 - 1;
  return result;
}
