/*
 * XREFs of MmFreeSecurePoolMemory @ 0x140700AB8
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     MmAllocateSecurePoolMemory @ 0x140700968 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiIsSystemVaAllocated @ 0x1406FA104 (MiIsSystemVaAllocated.c)
 */

unsigned __int64 __fastcall MmFreeSecurePoolMemory(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  int SystemRegionType; // eax
  int v7; // esi
  unsigned __int64 result; // rax
  __int64 v9[2]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-28h]
  char v11; // [rsp+44h] [rbp-24h]
  __int128 v12; // [rsp+45h] [rbp-23h]
  __int16 v13; // [rsp+55h] [rbp-13h]
  char v14; // [rsp+57h] [rbp-11h]

  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  if ( SystemRegionType != 14 )
    KeBugCheckEx(0x1Au, 0x51582uLL, BugCheckParameter2, BugCheckParameter3, SystemRegionType);
  if ( !(unsigned int)MiIsSystemVaAllocated() )
    KeBugCheckEx(0x1Au, 0x51583uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v11 = 3;
  v7 = a3 | 0x4000;
  v9[0] = BugCheckParameter2;
  if ( (a3 & 0x8000) == 0 )
    v7 = a3;
  v9[1] = BugCheckParameter3 >> 12;
  v10 = v7;
  result = MiClearNonPagedPtes(v9);
  if ( result )
  {
    result = -(__int64)result;
    _InterlockedAdd64(&qword_140E2C710, result);
  }
  if ( (v7 & 0x8000) != 0 )
    return MiReturnSystemVa(BugCheckParameter2, BugCheckParameter2 + BugCheckParameter3);
  return result;
}
