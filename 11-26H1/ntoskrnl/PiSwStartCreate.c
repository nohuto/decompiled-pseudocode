/*
 * XREFs of PiSwStartCreate @ 0x1407B375C
 * Callers:
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     PipInitComputerIds @ 0x140D0B980 (PipInitComputerIds.c)
 * Callees:
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405DEBD4 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405DECE8 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 *     PnpGetMultiSzLength @ 0x140A8D984 (PnpGetMultiSzLength.c)
 */

__int64 __fastcall PiSwStartCreate(
        const wchar_t *a1,
        const wchar_t *a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13)
{
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rcx
  int MultiSzLength; // ebx
  __int64 v22; // r8
  _QWORD v24[3]; // [rsp+48h] [rbp-79h] BYREF
  int v25; // [rsp+60h] [rbp-61h]
  __int64 v26; // [rsp+68h] [rbp-59h]
  int v27; // [rsp+70h] [rbp-51h]
  __int64 v28; // [rsp+78h] [rbp-49h]
  __int64 v29; // [rsp+80h] [rbp-41h]
  int v30; // [rsp+88h] [rbp-39h]
  __int64 v31; // [rsp+90h] [rbp-31h]
  __int64 v32; // [rsp+98h] [rbp-29h]
  int v33; // [rsp+A0h] [rbp-21h]
  __int64 v34; // [rsp+A8h] [rbp-19h]
  int v35; // [rsp+B0h] [rbp-11h]
  __int64 v36; // [rsp+B8h] [rbp-9h]
  __int64 v37; // [rsp+E8h] [rbp+27h] BYREF

  memset_0(v24, 0, 0x78uLL);
  v37 = 0LL;
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      v17,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelCreate_Start,
      v18,
      a1,
      a3,
      a2);
  v19 = a5;
  v29 = a6;
  v30 = a7;
  v31 = a8;
  v32 = a9;
  v33 = a11;
  v34 = a10;
  v35 = a13;
  v36 = a12;
  v24[0] = a1;
  v24[1] = a2;
  v24[2] = a3;
  v26 = a4;
  v28 = a5;
  if ( a4 )
  {
    MultiSzLength = PnpGetMultiSzLength(a4, 1024LL, &v37);
    if ( MultiSzLength < 0 )
      goto LABEL_10;
    v25 = v37;
  }
  if ( v19 )
  {
    MultiSzLength = PnpGetMultiSzLength(v19, 1024LL, &v37);
    if ( MultiSzLength < 0 )
      goto LABEL_10;
    v27 = v37;
  }
  MultiSzLength = PiSwIrpStartCreateWorker(v24, 0LL);
LABEL_10:
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v20,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelCreate_Stop,
      v22,
      a1,
      a3,
      a2,
      MultiSzLength);
  return (unsigned int)MultiSzLength;
}
