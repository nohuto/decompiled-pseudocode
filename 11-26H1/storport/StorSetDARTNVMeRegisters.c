/*
 * XREFs of StorSetDARTNVMeRegisters @ 0x140196778
 * Callers:
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x14006AB0C (RaidAdapterStorageInternalSetPropertyIoctl.c)
 * Callees:
 *     RaGetBusData @ 0x14007062C (RaGetBusData.c)
 *     StorPortGetDeviceBase @ 0x14007B6E0 (StorPortGetDeviceBase.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorSetDARTNVMeRegisters(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r13
  unsigned int v5; // r12d
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  _DWORD *DeviceBase; // rsi
  int v10; // ebp
  int v11; // r12d
  unsigned int i; // edx
  signed __int32 v14[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+40h] [rbp-88h]
  _BYTE v18[16]; // [rsp+50h] [rbp-78h] BYREF
  int v19; // [rsp+60h] [rbp-68h]
  unsigned int v20; // [rsp+64h] [rbp-64h]

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL);
  v17 = *(_QWORD *)(a1 + 616) + 16LL;
  if ( *(_DWORD *)a1 == 1314275652 )
  {
    v15 = a1 + 180;
    v6 = a1 + 232;
    v16 = a1 + 184;
    v7 = a1 + 228;
  }
  else if ( *(_DWORD *)a1 == 1094997074 )
  {
    v15 = a1 + 388;
    v6 = a1 + 440;
    v16 = a1 + 392;
    v7 = a1 + 436;
  }
  else
  {
    v6 = 56LL;
    v15 = 4LL;
    v16 = 8LL;
    v7 = 52LL;
  }
  memset_0(v18, 0, 0x40uLL);
  DeviceBase = 0LL;
  if ( g_InWinPE )
  {
    if ( v5 < 0x14 )
      return (unsigned int)-1073741585;
    v10 = *(_DWORD *)(v3 + 12);
    v11 = *(_DWORD *)(v3 + 16);
    if ( *(_WORD *)(v3 + 8) == 1 && *(_WORD *)(v3 + 10) >= 0xCu )
    {
      RaGetBusData(a1 + 792, 4LL, (__int64)v18, v8, 64);
      if ( *(_DWORD *)v7 )
      {
        for ( i = 0; i < *(_DWORD *)v7; ++i )
        {
          if ( *(_QWORD *)(*(_QWORD *)v6 + 16LL * i) == (((unsigned __int64)v20 << 32) | v19 & 0xFFFFC000) )
          {
            _mm_lfence();
            DeviceBase = (_DWORD *)StorPortGetDeviceBase(
                                     v17,
                                     *(unsigned int *)v16,
                                     *(_DWORD *)v15,
                                     *(_QWORD *)(*(_QWORD *)v6 + 16LL * i),
                                     *(_DWORD *)(*(_QWORD *)v6 + 16LL * i + 8),
                                     *(_BYTE *)(*(_QWORD *)v6 + 16LL * i + 12) == 0);
            break;
          }
        }
      }
      if ( !v10 )
      {
        DeviceBase[5] = v11;
        goto LABEL_23;
      }
      if ( v10 != 1 )
        return v2;
      if ( (DeviceBase[1] & 0x10) != 0 )
      {
        DeviceBase[8] = v11;
LABEL_23:
        _InterlockedOr(v14, 0);
        return v2;
      }
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)-1073741808;
}
