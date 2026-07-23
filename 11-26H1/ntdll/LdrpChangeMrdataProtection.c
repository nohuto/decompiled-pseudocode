/*
 * XREFs of LdrpChangeMrdataProtection @ 0x180078DF0
 * Callers:
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 * Callees:
 *     LdrpLocateMrdata @ 0x180078E60 (LdrpLocateMrdata.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpChangeMrdataProtection(ULONG a1)
{
  NTSTATUS result; // eax
  ULONG NewProtect; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  NewProtect = a1;
  if ( !LdrpMrdataBase )
    LdrpLocateMrdata();
  BaseAddress = (PVOID)LdrpMrdataBase;
  RegionSize = LdrpMrdataSize;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
  if ( result < 0 )
    __fastfail(5u);
  return result;
}
