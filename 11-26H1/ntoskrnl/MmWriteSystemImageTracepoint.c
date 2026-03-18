/*
 * XREFs of MmWriteSystemImageTracepoint @ 0x1406FCF64
 * Callers:
 *     KiTpWriteBreakpoint @ 0x1405FC6F8 (KiTpWriteBreakpoint.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402E92C0 (RtlLookupFunctionEntry.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MiLockLoadedDataTableEntry @ 0x1406FD170 (MiLockLoadedDataTableEntry.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiPrepareDriverPatchState @ 0x140864420 (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x140AC7404 (MiUnlockDriverPages.c)
 *     MiInitializeDriverPatchState @ 0x140B3E6F8 (MiInitializeDriverPatchState.c)
 */

__int64 __fastcall MmWriteSystemImageTracepoint(unsigned __int64 a1, char a2, char a3, __int64 a4)
{
  char v4; // r14
  unsigned __int64 v5; // rdi
  __int64 v7; // rsi
  char v8; // r12
  char *AnyMultiplexedVm; // rbx
  __int64 v10; // rdx
  unsigned int *v11; // r13
  int v12; // ebx
  unsigned int v13; // r14d
  unsigned int v14; // edi
  unsigned int *v15; // rax
  unsigned __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  char *v21; // [rsp+48h] [rbp-B8h]
  _BYTE v22[112]; // [rsp+50h] [rbp-B0h] BYREF
  char v23[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+C8h] [rbp-38h]
  unsigned int v25; // [rsp+D0h] [rbp-30h]
  unsigned int v26; // [rsp+D4h] [rbp-2Ch]
  char v27; // [rsp+D8h] [rbp-28h]

  v4 = a2;
  v5 = a1;
  memset_0(v22, 0, 0x68uLL);
  v20 = 0LL;
  if ( a4 )
  {
    v7 = a4;
  }
  else
  {
    v7 = MiLockLoadedDataTableEntry(v5, 1LL);
    if ( !v7 )
      return (unsigned int)-1073741811;
  }
  v8 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v21 = AnyMultiplexedVm;
  v11 = (unsigned int *)(v10 + 64);
  while ( 1 )
  {
    MiInitializeDriverPatchState(v7, v22);
    v12 = MiPrepareDriverPatchState(v22, AnyMultiplexedVm);
    if ( v12 < 0 )
      break;
    if ( v8 )
    {
      v13 = *v11;
      v14 = 0;
    }
    else
    {
      if ( !v4 )
      {
        v14 = v5 - *(_DWORD *)(v7 + 48);
        v13 = 1;
        goto LABEL_18;
      }
      v15 = RtlLookupFunctionEntry(v5, &v20, 0LL);
      if ( !v15 )
        goto LABEL_13;
      v14 = *v15;
      v13 = v15[1] - *v15;
    }
    if ( !v13 )
      goto LABEL_13;
LABEL_18:
    if ( v14 >= *v11 || *v11 - v14 < v13 )
    {
LABEL_13:
      v12 = -1073741811;
      break;
    }
    v12 = MiLockDriverPageRange((__int64)v22, v14 >> 12, (v13 + v14 - 1) >> 12, 2 * v8 + 1, 0LL);
    if ( v12 < 0 )
      break;
    memset_0(v23, 0, 0x68uLL);
    v27 = a3;
    v24 = a1;
    v25 = v14;
    v26 = v13;
    v12 = VslpEnterIumSecureMode(2u, 0x59u, 0, (__int64)v23);
    if ( v12 != -1073741267 )
      break;
    if ( v8 )
    {
      v12 = -1073741637;
      break;
    }
    MiUnlockDriverPages(v22);
    v5 = a1;
    v8 = 1;
    AnyMultiplexedVm = v21;
    v4 = a2;
  }
  MiUnlockDriverPages(v22);
  if ( !a4 )
    MmUnlockLoadedDataTableEntry(v7);
  return (unsigned int)v12;
}
