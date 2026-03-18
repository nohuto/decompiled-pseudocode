/*
 * XREFs of PsInitializeWin32kServiceTable @ 0x140CD79A8
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14041D934 (VslGetNestedPageProtectionFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MmProtectDriverSection @ 0x1406E6130 (MmProtectDriverSection.c)
 *     MmCompactServiceTable @ 0x14087B270 (MmCompactServiceTable.c)
 *     RtlCompareUnicodeString @ 0x1409E1590 (RtlCompareUnicodeString.c)
 */

__int64 PsInitializeWin32kServiceTable()
{
  __int64 result; // rax
  PVOID *v1; // rbx
  PVOID *v2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  result = Win32kGetSupportedExportsVersion(&v5);
  if ( (_DWORD)result != -1073741637 )
  {
    if ( *(_QWORD *)&PsAltSystemCallRegistrationLock.AffinityPrimaryGroup )
      KeBugCheckEx(0x164u, 0x45uLL, *(ULONG_PTR *)&PsAltSystemCallRegistrationLock.AffinityPrimaryGroup, 0LL, 0LL);
    v1 = (PVOID *)PsLoadedModuleList;
    v2 = 0LL;
    while ( v1 != &PsLoadedModuleList )
    {
      v2 = v1;
      if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v1 + 11), &WIN32KSYS, 1u) )
      {
        *(_QWORD *)&PsAltSystemCallRegistrationLock.AffinityPrimaryGroup = v1;
        break;
      }
      v1 = (PVOID *)*v1;
    }
    v3 = MmCompactServiceTable((__int64)v2[6]);
    if ( v3 < 0 )
      KeBugCheckEx(0x164u, 0x46uLL, v3, 0LL, 0LL);
    v4 = Win32kSystemTableAdd();
    if ( v4 < 0 )
      KeBugCheckEx(0x164u, 0x47uLL, v4, 0LL, 0LL);
    result = VslGetNestedPageProtectionFlags(0LL);
    if ( (result & 4) != 0 )
    {
      if ( stru_140FC01F0.Spare18 )
        return MmProtectDriverSection(stru_140FC01F0.Spare18, 0LL, 0);
    }
  }
  return result;
}
