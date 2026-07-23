/*
 * XREFs of MiLogSystemImageReadOnlyPageViolation @ 0x1404BCA70
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140368B2C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiLogSystemImageReadOnlyPageViolation(unsigned __int64 a1, int a2)
{
  unsigned __int8 v4; // di
  struct _LIST_ENTRY *DataTableEntryByAddress; // rax
  int v6; // r8d
  __int64 v7; // r11
  bool v8; // zf
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  int v11; // [rsp+28h] [rbp-E0h]
  int v12; // [rsp+30h] [rbp-D8h]
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19[7]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v20[2]; // [rsp+A0h] [rbp-68h] BYREF
  int *v21; // [rsp+A8h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-58h]
  int *v23; // [rsp+B8h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-48h]
  int *v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-38h]
  unsigned __int64 *v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  int *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  __int64 *v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]

  if ( stru_140E366D8.FirstArgument )
  {
    v4 = MmLockLoadedModuleListShared();
    DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
    if ( DataTableEntryByAddress
      && ((__int64)DataTableEntryByAddress[11].Blink & 0x100000) == 0
      && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
      && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000004000LL) )
    {
      v8 = *(_QWORD *)(v7 + 112) == 0LL;
      v19[4] = (__int64)v20;
      v9 = *(_QWORD *)(v7 + 96);
      LOBYTE(v13) = v8;
      v10 = a1 - *(_QWORD *)(v7 + 48);
      v19[6] = v9;
      v20[0] = *(unsigned __int16 *)(v7 + 88);
      v14 = *(_DWORD *)(v7 + 120);
      v21 = &v14;
      v15 = *(_DWORD *)(v7 + 156);
      v23 = &v15;
      v25 = &v13;
      v27 = &v17;
      v29 = &v16;
      v18 = 2164260864LL;
      v31 = &v18;
      v19[5] = 2LL;
      v20[1] = 0;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 1LL;
      v17 = v10;
      v28 = 8LL;
      v16 = a2;
      v30 = 4LL;
      v32 = 8LL;
      tlgWriteEx_EtwWriteEx(v6, (int)&unk_1400588D0, v6, 1, v11, v12, 0xAu, (__int64)v19);
    }
    MmUnlockLoadedModuleListShared(v4);
  }
}
