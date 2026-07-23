/*
 * XREFs of PiCMOpenDeviceKey @ 0x14091C550
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PiCMCaptureRegistryInputData @ 0x14091CC68 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14091CF38 (PiCMReturnHandleResultData.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PiCMDuplicateRegistryHandle @ 0x14091D314 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(void *a1, __int64 a2, __int64 a3, unsigned int a4, int a5, _DWORD *a6)
{
  HANDLE v6; // rsi
  int v8; // edi
  int v9; // r14d
  unsigned int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  int v13; // edi
  int v14; // edx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // r9
  KPROCESSOR_MODE v19; // r14
  int v20; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+48h] [rbp-39h]
  HANDLE Handle; // [rsp+50h] [rbp-31h] BYREF
  HANDLE v24; // [rsp+58h] [rbp-29h] BYREF
  __int128 v25; // [rsp+60h] [rbp-21h]
  PVOID P[2]; // [rsp+70h] [rbp-11h]
  __int128 v27; // [rsp+80h] [rbp-1h]

  v6 = 0LL;
  v25 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  *(_OWORD *)P = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = PiCMCaptureRegistryInputData(a1);
  if ( v8 < 0 )
    goto LABEL_25;
  v9 = (int)P[0];
  v10 = HIDWORD(P[1]);
  v11 = v27;
  v12 = DWORD1(v27);
  if ( !P[0] || DWORD2(v25) != 1 || !a3 || a4 < 0x10 || !BYTE4(v25) )
    goto LABEL_33;
  v13 = 17;
  if ( BYTE4(v25) != 17 )
  {
    switch ( BYTE4(v25) )
    {
      case 0x12u:
        v13 = 18;
        break;
      case 0x13u:
        v13 = 19;
        break;
      case 0x14u:
        v13 = 20;
        break;
      default:
        goto LABEL_33;
    }
  }
  v14 = WORD2(v25) & 0xFF00;
  if ( (WORD2(v25) & 0xFF00) == 0 )
    goto LABEL_16;
  v15 = 256;
  if ( v14 != 256 )
  {
    v15 = 512;
    if ( v14 != 512 )
    {
LABEL_33:
      v17 = -1073741811;
      goto LABEL_20;
    }
  }
  v13 |= v15;
LABEL_16:
  v17 = CmOpenDeviceRegKey(PiPnpRtlCtx, P[0], v13, DWORD1(v27), HIDWORD(P[1]), 0, (__int64)&Handle, 0LL);
  if ( v17 == -1073741772 )
  {
    if ( v11 != 1 )
      goto LABEL_20;
    if ( !(unsigned __int8)PiAuDoesClientHaveAccess(2u) )
    {
      v17 = -1073741790;
      goto LABEL_20;
    }
    v17 = CmOpenDeviceRegKey(PiPnpRtlCtx, v9, v13, v12, v10, 1, (__int64)&Handle, 0LL);
  }
  if ( v17 < 0 )
  {
LABEL_20:
    v19 = PreviousMode;
    goto LABEL_21;
  }
  v19 = PreviousMode;
  LOBYTE(v18) = PreviousMode;
  v20 = PiCMDuplicateRegistryHandle(Handle, v16, v10, v18, &v24);
  v6 = v24;
  v17 = v20;
LABEL_21:
  v8 = PiCMReturnHandleResultData((unsigned int)v17, v6, DWORD2(v27), a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( (v8 < 0 || v17 < 0) && v6 )
    ObCloseHandle(v6, v19);
LABEL_25:
  if ( P[0] && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v8;
}
