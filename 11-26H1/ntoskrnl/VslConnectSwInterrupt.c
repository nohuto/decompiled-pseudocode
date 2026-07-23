/*
 * XREFs of VslConnectSwInterrupt @ 0x140D0CEFC
 * Callers:
 *     KiConnectSwInterrupt @ 0x140CD0470 (KiConnectSwInterrupt.c)
 *     PipInitializeCoreDriversAndElam @ 0x140D0B1AC (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x14040F6A8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140410294 (VslpUnlockPagesForTransfer.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvlIsCoreSharingPossible @ 0x1405BAFE8 (HvlIsCoreSharingPossible.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     KiAreCodePatchesAllowed @ 0x140CCE210 (KiAreCodePatchesAllowed.c)
 *     VslpRecordBootRanges @ 0x140D0FFC8 (VslpRecordBootRanges.c)
 */

__int64 __fastcall VslConnectSwInterrupt(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v5; // eax
  __int64 v6; // r14
  int v7; // eax
  struct _MDL *Pool2; // rax
  int v9; // eax
  __int64 Prcb; // rax
  int v11; // edx
  ULONG_PTR v12; // rsi
  __int64 v13; // r15
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r12d
  __int64 **v17; // rbx
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v19[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+4Ah] [rbp-B6h]
  __int16 v22; // [rsp+4Eh] [rbp-B2h]
  __int128 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h]
  __int128 v25; // [rsp+70h] [rbp-90h]
  __int128 v26; // [rsp+80h] [rbp-80h]
  __int128 v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  _OWORD v30[6]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+120h] [rbp+20h]
  __int64 *v32[2]; // [rsp+130h] [rbp+30h] BYREF
  __int16 v33; // [rsp+142h] [rbp+42h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  _QWORD v35[9]; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v36[10]; // [rsp+1C0h] [rbp+C0h] BYREF

  v21 = 0;
  v22 = 0;
  v18 = 0;
  memset_0(v30, 0, 0x68uLL);
  if ( !*(_QWORD *)&HvlpVsmVtlCallVa )
    return 3224698910LL;
  memset_0(v32, 0, 0xD8uLL);
  if ( BugCheckParameter2 )
  {
    v5 = VslpRecordBootRanges(BugCheckParameter2, BugCheckParameter3);
    if ( v5 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFAuLL, BugCheckParameter2, BugCheckParameter3, v5);
  }
  v6 = 2LL;
  v7 = VslpLockPagesForTransfer((__int64)v35, (struct _MDL *)&VslpTraceLog, 0xA08u, 2, 0);
  if ( v7 < 0 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFCuLL, (ULONG_PTR)&VslpTraceLog, 0xA08uLL, v7);
  memset_0(&v23, 0, 0x68uLL);
  *(_QWORD *)&v25 = v35[0];
  *((_QWORD *)&v25 + 1) = v35[7];
  if ( KiAreCodePatchesAllowed() )
  {
    Pool2 = (struct _MDL *)VslpHotpatchLog;
    if ( VslpHotpatchLog
      || (Pool2 = (struct _MDL *)ExAllocatePool2(64LL, 0x50008uLL, 0x676F4C48u),
          (VslpHotpatchLog = (ULONG_PTR)Pool2) != 0) )
    {
      v9 = VslpLockPagesForTransfer((__int64)v36, Pool2, 0x50008u, 2, 2u);
      if ( v9 < 0 )
        KeBugCheckEx(0x13Du, 0xFFFFFFFBuLL, VslpHotpatchLog, 0x50008uLL, v9);
      *(_QWORD *)&v26 = v36[0];
      *((_QWORD *)&v26 + 1) = v36[7];
    }
  }
  v19[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
  v19[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
  v20 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v18, v19) )
  {
    Prcb = KeGetPrcb(v18);
    if ( ((*(_QWORD *)(Prcb + 36512) - 1LL) & *(_QWORD *)(Prcb + 36512)) != 0 )
    {
      DWORD2(v24) |= 1u;
      break;
    }
  }
  if ( HvlIsCoreSharingPossible() )
    DWORD2(v24) = v11 | 1;
  v12 = 0LL;
  v27 = BugCheckParameter3;
  v13 = 0LL;
  *(_QWORD *)&v28 = 0LL;
  do
  {
    if ( BugCheckParameter2 )
    {
      v13 = BugCheckParameter3 - v12;
      if ( BugCheckParameter3 - v12 > 0x1FA000 )
        v13 = 2072576LL;
      *(_QWORD *)&v28 = v13;
      v14 = VslpLockPagesForTransfer((__int64)v32, (struct _MDL *)(BugCheckParameter2 + v12), v13, 0, 0);
      if ( v14 < 0 )
        KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, BugCheckParameter2, BugCheckParameter3, v14);
      *((__int64 **)&v23 + 1) = v32[0];
      *(_QWORD *)&v24 = v34;
    }
    v30[0] = v23;
    v30[2] = v25;
    v30[3] = v26;
    v30[4] = v27;
    v30[1] = v24;
    v31 = v29;
    v30[5] = v28;
    v15 = VslpEnterIumSecureMode(2u, 0x38u, 0, (__int64)v30);
    v16 = v15;
    if ( v15 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, BugCheckParameter2, BugCheckParameter3, v15);
    if ( BugCheckParameter2 && v33 )
      VslpUnlockPagesForTransfer(v32);
    v12 += v13;
    *((_QWORD *)&v27 + 1) = v12;
  }
  while ( v12 < BugCheckParameter3 );
  v17 = (__int64 **)v35;
  do
  {
    if ( *((_WORD *)v17 + 9) )
      VslpUnlockPagesForTransfer(v17);
    v17 += 9;
    --v6;
  }
  while ( v6 );
  return v16;
}
