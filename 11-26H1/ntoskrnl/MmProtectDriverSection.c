/*
 * XREFs of MmProtectDriverSection @ 0x1406EADE0
 * Callers:
 *     PsInitializeWin32kServiceTable @ 0x140CDDD28 (PsInitializeWin32kServiceTable.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiSnapDriverRange @ 0x140ACB6BC (MiSnapDriverRange.c)
 */

__int64 __fastcall MmProtectDriverSection(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  struct _LIST_ENTRY *v7; // rax
  __int64 v8; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v10; // ebx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  PVOID v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v29; // [rsp+60h] [rbp-A8h] BYREF
  ULONG Size[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-98h] BYREF
  int v32; // [rsp+78h] [rbp-90h]
  _DWORD v33[2]; // [rsp+88h] [rbp-80h] BYREF
  char v34; // [rsp+91h] [rbp-77h]
  char *AnyMultiplexedVm; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v36; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+B8h] [rbp-50h]
  __int64 (__fastcall *v38)(__int64 *, volatile signed __int64 *, int); // [rsp+130h] [rbp+28h]
  __int128 *v39; // [rsp+140h] [rbp+38h]
  _BYTE v40[8]; // [rsp+148h] [rbp+40h] BYREF
  struct _LIST_ENTRY *v41; // [rsp+150h] [rbp+48h]

  v32 = a3;
  v29 = 0LL;
  v31 = 0LL;
  memset_0(v33, 0, 0xC0uLL);
  Size[0] = 0;
  v26 = 0LL;
  v27 = 0LL;
  LODWORD(v28) = 0;
  v25 = 0;
  if ( (MiFlags & 0x10000) == 0 )
    return 3221225860LL;
  if ( (a3 & 0xFFFFFFFE) != 0 || a2 )
    return 3221225485LL;
  v7 = MiLockLoadedDataTableEntryIfNecessary(BugCheckParameter2, &v25);
  v8 = (__int64)v7;
  if ( !v7 )
    KeBugCheckEx(0x1Au, 0x900uLL, BugCheckParameter2, 0LL, 0LL);
  Flink = v7[3].Flink;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)Flink)
    || Flink == PsNtosImageBase
    || Flink == PsHalImageBase )
  {
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v8 + 104) & 0x80000) == 0 )
  {
    MiSnapDriverRange(v8, 0, 64, BugCheckParameter2, (__int64)&v29, (__int64)&v31);
    if ( !v29 )
    {
      v10 = -1073741503;
      goto LABEL_19;
    }
    v11 = ((__int64)(v31 << 25) >> 16) + 4095;
    v12 = (__int64)(v29 << 25) >> 16;
    v13 = RtlImageDirectoryEntryToData(*(PVOID *)(v8 + 48), 1u, 0xCu, Size);
    if ( !v13 || !Size[0] || (unsigned __int64)v13 > v11 || (unsigned __int64)v13 + Size[0] - 1 < v12 )
    {
      v14 = (__int64)(v31 - v29) >> 3;
      v28 = 0LL;
      *((_QWORD *)&v26 + 1) = v8;
      if ( v25 )
        LODWORD(v28) = v28 | 4;
      v38 = MiProtectDriverSectionPte;
      v39 = &v26;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      v36 = v12;
      v37 = v11;
      v33[0] = 23;
      v34 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v15, v16);
      MiWalkPageTables((__int64)v33);
      LOBYTE(v17) = v34;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v17);
      if ( v27 == (_DWORD)v14 + 1 )
      {
        if ( (v32 & 1) == 0 )
        {
          memset_0(v40, 0, 0x68uLL);
          v41 = Flink;
          if ( (int)VslpEnterIumSecureMode(2u, 0xDFu, 0, (__int64)v40) < 0 )
            KeBugCheckEx(0x1Au, 0x901uLL, (ULONG_PTR)Flink, 0LL, 0LL);
        }
        MiMakeDriverPagesPrivate(v8, v29, v31, 0);
        *(_QWORD *)&v26 = 1LL;
        v27 = 0LL;
        v28 = 0LL;
        *((_QWORD *)&v26 + 1) = v8;
        if ( v25 )
          LODWORD(v28) = v28 | 4;
        v34 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v18, v19);
        MiWalkPageTables((__int64)v33);
        LOBYTE(v20) = v34;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v20);
        MiSetSystemCodeProtection(v8, v29, v31, 1u, 0);
        if ( (dword_140E37E44 & 8) != 0 )
        {
          *(_QWORD *)&v26 = 2LL;
          v27 = 0LL;
          v28 = 0LL;
          *((_QWORD *)&v26 + 1) = v8;
          v34 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v21, v22);
          MiWalkPageTables((__int64)v33);
          LOBYTE(v23) = v34;
          MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v23);
        }
        *(_QWORD *)&v26 = 3LL;
        v27 = 0LL;
        v28 = 0LL;
        *((_QWORD *)&v26 + 1) = v8;
        if ( v25 )
          LODWORD(v28) = v28 | 4;
        v34 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v21, v22);
        MiWalkPageTables((__int64)v33);
        LOBYTE(v24) = v34;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v24);
        v10 = 0;
      }
      else if ( (v28 & 1) != 0 )
      {
        v10 = -1073741755;
      }
      else
      {
        v10 = (v28 & 2) != 0 ? -1073741791 : -1073741819;
      }
      goto LABEL_19;
    }
LABEL_18:
    v10 = -1073741637;
    goto LABEL_19;
  }
  v10 = -1073741757;
LABEL_19:
  if ( v25 )
    MmUnlockLoadedDataTableEntry(v8);
  return v10;
}
