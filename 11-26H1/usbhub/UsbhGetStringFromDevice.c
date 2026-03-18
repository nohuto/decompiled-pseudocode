/*
 * XREFs of UsbhGetStringFromDevice @ 0x14002D2C4
 * Callers:
 *     UsbhGetProductIdString @ 0x140036108 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1400389E8 (UsbhGetSerialNumber.c)
 *     UsbhGetMSOS_Descriptor @ 0x1400425A4 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetBillboardInfo @ 0x140047008 (UsbhGetBillboardInfo.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x14002DA80 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetStringFromDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 *a5,
        unsigned __int16 a6,
        unsigned __int8 a7)
{
  unsigned __int16 *v10; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  signed __int32 v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  signed __int32 v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int16 v25; // ax
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rcx
  signed __int32 v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rdx

  FdoExt(a1);
  v10 = a5;
  if ( !a5 )
    return 3221225485LL;
  v12 = *a5;
  v13 = a7;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        LODWORD(a5) = 827609959;
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 880), 0xFFFFFFFF);
        v16 = *(_DWORD *)(v14 + 884);
        v17 = *(_QWORD *)(v14 + 888);
        v18 = 32LL * ((v15 - 1) & v16);
        *(_DWORD *)(v18 + v17) = (_DWORD)a5;
        *(_QWORD *)(v18 + v17 + 8) = 0LL;
        *(_QWORD *)(v18 + v17 + 16) = v12;
        *(_QWORD *)(v18 + v17 + 24) = v13;
      }
    }
  }
  v19 = a6;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        LODWORD(a5) = 844387175;
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 880), 0xFFFFFFFF);
        v22 = *(_DWORD *)(v20 + 884);
        v23 = *(_QWORD *)(v20 + 888);
        v24 = 32LL * ((v21 - 1) & v22);
        *(_DWORD *)(v24 + v23) = (_DWORD)a5;
        *(_QWORD *)(v24 + v23 + 8) = 0LL;
        *(_QWORD *)(v24 + v23 + 16) = a2;
        *(_QWORD *)(v24 + v23 + 24) = v19;
      }
    }
  }
  v25 = *v10;
  BYTE2(a5) = v13;
  WORD2(a5) = v19;
  HIWORD(a5) = v25;
  LOWORD(a5) = 1664;
  BYTE3(a5) = 3;
  v26 = UsbhSyncSendCommandToDevice(a1, a2, (unsigned int)&a5, a4, (__int64)v10);
  v27 = *v10;
  v28 = v26;
  if ( (UsbhLogMask & 0x100) != 0 && a1 )
  {
    v29 = *(_QWORD *)(a1 + 64);
    if ( v29 )
    {
      LODWORD(a5) = 861164391;
      v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 880), 0xFFFFFFFF);
      v31 = *(_DWORD *)(v29 + 884);
      v32 = *(_QWORD *)(v29 + 888);
      v33 = 32LL * ((v30 - 1) & v31);
      *(_DWORD *)(v33 + v32) = (_DWORD)a5;
      *(_QWORD *)(v33 + v32 + 8) = 0LL;
      *(_QWORD *)(v33 + v32 + 16) = v27;
      *(_QWORD *)(v33 + v32 + 24) = v28;
    }
  }
  return (unsigned int)v28;
}
