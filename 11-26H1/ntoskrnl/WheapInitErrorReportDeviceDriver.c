/*
 * XREFs of WheapInitErrorReportDeviceDriver @ 0x1406D98F4
 * Callers:
 *     WheaCreateHwErrorReportDeviceDriver @ 0x1406D9140 (WheaCreateHwErrorReportDeviceDriver.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1403E13D0 (WheapGetErrorSource.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     RtlStringCchCopyA @ 0x140486D18 (RtlStringCchCopyA.c)
 *     WheapErrDescIsDeviceDriver @ 0x1406D9744 (WheapErrDescIsDeviceDriver.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x1406D97F4 (WheapGetPreallocatedPacketBuffer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheapInitErrorReportDeviceDriver(unsigned int a1, void **a2)
{
  char v4; // bl
  unsigned int v5; // edi
  __int64 *ErrorSource; // rax
  __int64 v7; // rsi
  signed __int32 v8; // eax
  unsigned int i; // edx
  signed __int32 v10; // r8d
  __int64 v11; // r13
  __int64 v12; // r14
  volatile signed __int32 *Pool2; // r15
  __int64 v14; // rax
  _DWORD Src[5]; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+44h] [rbp-3Ch]
  int v19; // [rsp+48h] [rbp-38h]
  int v20; // [rsp+4Ch] [rbp-34h]
  char pszDest[32]; // [rsp+50h] [rbp-30h] BYREF

  memset_0(Src, 0, 0x40uLL);
  v4 = 0;
  *a2 = 0LL;
  v5 = 0;
  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v7 = (unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL);
  if ( !WheapErrDescIsDeviceDriver(v7) || (v8 = *(_DWORD *)(v7 + 152), v8 == -1) )
  {
    v18 = -2147483605;
LABEL_19:
    Src[0] = 1733060695;
    v20 = 32;
    Src[1] = 1;
    Src[2] = 64;
    Src[3] = 1;
    Src[4] = 1280201291;
    v19 = 2;
    RtlStringCchCopyA(pszDest, 0x20uLL, "InitErrorReportDeviceDriver");
    WheaLogInternalEvent(Src);
LABEL_20:
    v5 = -1073741811;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v10 = v8;
      if ( i >= 0xA )
      {
        v18 = -2147483604;
        goto LABEL_19;
      }
      if ( v8 == -1 )
        goto LABEL_20;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 152), v8 + 1, v8);
      if ( v10 == v8 )
        break;
    }
    v11 = *(unsigned int *)(v7 + 64);
    if ( KeGetCurrentIrql() < 2u )
    {
      v12 = (unsigned int)v11;
      Pool2 = (volatile signed __int32 *)ExAllocatePool2(0x42uLL);
      if ( !Pool2 )
        goto LABEL_13;
      v14 = ExAllocatePool2(0x42uLL);
      *a2 = (void *)v14;
      if ( !v14 )
        goto LABEL_13;
LABEL_16:
      memset_0(*a2, 0, 0x68uLL);
      *(_DWORD *)*a2 = 1095059543;
      *((_DWORD *)*a2 + 3) = a1;
      *((_DWORD *)*a2 + 13) = 2;
      *((_BYTE *)*a2 + 48) = v4;
      *((_QWORD *)*a2 + 5) = Pool2 + 2;
      *((_QWORD *)*a2 + 4) = Pool2;
      memset_0((void *)(Pool2 + 2), 0, v12 - 8);
      *((_DWORD *)Pool2 + 2) = 1095059543;
      *((_DWORD *)Pool2 + 3) = 3;
      *((_DWORD *)Pool2 + 4) = v11 - 112;
      *((_DWORD *)Pool2 + 19) = v11 - 192;
      *((_DWORD *)Pool2 + 6) = 6;
      *((_DWORD *)Pool2 + 7) = -2147483646;
      *((_DWORD *)Pool2 + 8) = a1;
      *((_DWORD *)Pool2 + 9) = 12;
      *(_OWORD *)(Pool2 + 10) = DEVICE_DRIVER_NOTIFY_TYPE_GUID;
      *((_DWORD *)Pool2 + 16) = 7;
      *((_DWORD *)Pool2 + 18) = 80;
      *((_QWORD *)*a2 + 2) = Pool2 + 22;
      *((_DWORD *)Pool2 + 22) &= 0xFFFFC00F;
      *((_DWORD *)Pool2 + 26) = 2;
      *((_DWORD *)Pool2 + 25) = *((_DWORD *)Pool2 + 4) - 100;
      *((_QWORD *)*a2 + 3) = Pool2 + 27;
      *((_DWORD *)*a2 + 2) += 100;
      return v5;
    }
    Pool2 = WheapGetPreallocatedPacketBuffer(a1);
    if ( Pool2 )
    {
      v4 = 1;
      v12 = v11;
      goto LABEL_16;
    }
LABEL_13:
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 152));
    v5 = -1073741670;
    if ( Pool2 )
      ExFreePoolWithTag((PVOID)Pool2, 0x41454857u);
  }
  if ( *a2 )
    ExFreePoolWithTag(*a2, 0x41454857u);
  return v5;
}
