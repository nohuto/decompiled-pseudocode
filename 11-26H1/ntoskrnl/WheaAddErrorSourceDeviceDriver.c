/*
 * XREFs of WheaAddErrorSourceDeviceDriver @ 0x14084DEA0
 * Callers:
 *     WheaAddErrorSourceDeviceDriverV1 @ 0x1406D8F80 (WheaAddErrorSourceDeviceDriverV1.c)
 * Callees:
 *     WheapDeviceDriverGetPacketLength @ 0x1406D9724 (WheapDeviceDriverGetPacketLength.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WheaAddErrorSource @ 0x14084D9D0 (WheaAddErrorSource.c)
 *     WheaConfigureErrorSource @ 0x140C05E90 (WheaConfigureErrorSource.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSourceDeviceDriver(__int64 a1, __int64 a2, int a3)
{
  void *Pool2; // rsi
  void *v5; // rdi
  int v8; // r12d
  int v9; // r15d
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  int PacketLength; // r15d
  __int64 v14; // rax
  int v15; // ebx
  _DWORD v17[11]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+54h] [rbp-B4h]
  int v19; // [rsp+64h] [rbp-A4h]
  int v20; // [rsp+68h] [rbp-A0h]
  int v21; // [rsp+6Ch] [rbp-9Ch]
  void *v22; // [rsp+70h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  __int64 (__fastcall *v25)(__int64, unsigned int *); // [rsp+88h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-78h]
  __int128 v27; // [rsp+A0h] [rbp-68h]
  int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h]
  __int64 v30; // [rsp+B8h] [rbp-50h]

  Pool2 = 0LL;
  v5 = 0LL;
  if ( !*(_QWORD *)(a2 + 28) || !*(_QWORD *)(a2 + 36) )
    return 3221225485LL;
  if ( *(_DWORD *)a2 == 2 )
  {
    v8 = *(_DWORD *)(a2 + 48) + 2;
    v9 = *(_DWORD *)(a2 + 44) * v8;
    if ( !LOBYTE(WheapInUsePageOfflineNotifyLock.KernelShadowStackInitial) )
      WheaConfigureErrorSource(16LL, &WheaDeviceDriverDefaultSourceConfig);
    memset_0(v17, 0, 0x3CCuLL);
    v10 = *(_OWORD *)(a2 + 52);
    LOWORD(v19) = *(_WORD *)(a2 + 20);
    v11 = *(_OWORD *)(a2 + 68);
    v23 = *(_QWORD *)(a2 + 28);
    v24 = *(_QWORD *)(a2 + 36);
    v17[7] = 0;
    v17[9] = 0;
    v22 = 0LL;
    v30 = 0LL;
    v26 = v10;
    v25 = WheapCorrectErrorSourceDeviceDriver;
    v12 = *(_OWORD *)(a2 + 4);
    v17[0] = 972;
    v17[1] = 11;
    v17[2] = 16;
    v17[3] = 1;
    v17[5] = a3;
    v17[6] = v8;
    v17[4] = v9;
    v27 = v11;
    v18 = v12;
    PacketLength = WheapDeviceDriverGetPacketLength(v9, v8);
    if ( a3 )
    {
      Pool2 = (void *)ExAllocatePool2(0x42uLL);
      v14 = ExAllocatePool2(0x42uLL);
      v5 = (void *)v14;
      if ( !Pool2 || !v14 )
        return (unsigned int)-1073741670;
      v22 = Pool2;
      v30 = v14;
    }
    v28 = *(_DWORD *)(a2 + 44);
    v29 = *(_DWORD *)(a2 + 48);
    v20 = PacketLength;
    v21 = a3;
    v15 = WheaAddErrorSource((__int64)v17, a1);
    if ( v15 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x41454857u);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x41454857u);
    }
    return (unsigned int)v15;
  }
  return 3221225712LL;
}
