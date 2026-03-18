/*
 * XREFs of UsbhBuildCompatibleID @ 0x14000E768
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhMakeId @ 0x14000E1C0 (UsbhMakeId.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhBuildDeviceCompatibleID @ 0x140035C60 (UsbhBuildDeviceCompatibleID.c)
 *     UsbhBuildClassCompatibleID @ 0x140059AA8 (UsbhBuildClassCompatibleID.c)
 */

__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  char *Id; // rax
  int v13; // edx
  __int64 Pool2; // rax
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  if ( (UsbhLogMask & 0x1000) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
        v8 = *(_DWORD *)(v6 + 884);
        v9 = *(_QWORD *)(v6 + 888);
        v10 = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(v10 + v9) = 1145660259;
        *(_QWORD *)(v10 + v9 + 8) = 0LL;
        *(_QWORD *)(v10 + v9 + 16) = a2;
        *(_QWORD *)(v10 + v9 + 24) = 0LL;
      }
    }
  }
  if ( !a2 )
  {
    Id = UsbhMakeId(0, L"USB\\UNKNOWN", 0LL, &v15, 2u, 0, 0, 0LL);
    if ( Id )
    {
      *(_QWORD *)(a3 + 8) = Id;
      *(_DWORD *)(a3 + 4) = v15;
      return 0LL;
    }
    return 3221225626LL;
  }
  v13 = *(_DWORD *)(PdoExt(a2) + 1420);
  if ( (v13 & 0x40) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 68LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = xmmword_14006AAF0;
      *(_OWORD *)(Pool2 + 16) = xmmword_14006AB00;
      *(_OWORD *)(Pool2 + 32) = xmmword_14006AB10;
      *(_OWORD *)(Pool2 + 48) = xmmword_14006AB20;
      *(_DWORD *)(Pool2 + 64) = 0;
      *(_QWORD *)(a3 + 8) = Pool2;
      *(_DWORD *)(a3 + 4) = 68;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( (v13 & 0x20) != 0 )
    return UsbhBuildDeviceCompatibleID(a1, a2, a3);
  else
    return UsbhBuildClassCompatibleID(a1, a2, a3);
}
