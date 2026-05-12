/*
 * XREFs of StorQueryDARTNVMeRegisters @ 0x140196450
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x14006A3F0 (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     RaGetBusData @ 0x14007062C (RaGetBusData.c)
 *     StorPortGetDeviceBase @ 0x14007B6E0 (StorPortGetDeviceBase.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorQueryDARTNVMeRegisters(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 DeviceBase; // r14
  __int64 v12; // r9
  unsigned int i; // edx
  __int64 v14; // r8
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  __int64 v18; // r8
  _DWORD *v19; // rcx
  unsigned int v21; // [rsp+30h] [rbp-A8h]
  unsigned int v22; // [rsp+34h] [rbp-A4h]
  __int64 v23; // [rsp+38h] [rbp-A0h]
  __int64 v24; // [rsp+40h] [rbp-98h]
  _BYTE v26[16]; // [rsp+50h] [rbp-88h] BYREF
  int v27; // [rsp+60h] [rbp-78h]
  unsigned int v28; // [rsp+64h] [rbp-74h]

  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD **)(a2 + 24);
  v6 = 0;
  v21 = *(_DWORD *)(v3 + 16);
  v22 = *(_DWORD *)(v3 + 8);
  v24 = *(_QWORD *)(a1 + 616) + 16LL;
  if ( *(_DWORD *)a1 == 1314275652 )
  {
    v23 = a1 + 184;
    v7 = a1 + 180;
    v8 = a1 + 232;
    v9 = a1 + 228;
  }
  else if ( *(_DWORD *)a1 == 1094997074 )
  {
    v23 = a1 + 392;
    v7 = a1 + 388;
    v8 = a1 + 440;
    v9 = a1 + 436;
  }
  else
  {
    v8 = 56LL;
    v23 = 8LL;
    v7 = 4LL;
    v9 = 52LL;
  }
  *a3 = 0LL;
  v10 = 64LL;
  DeviceBase = 0LL;
  memset_0(v26, 0, 0x40uLL);
  if ( g_InWinPE )
  {
    if ( v21 >= 0xC )
    {
      if ( *((_WORD *)v5 + 4) == 1 && *((_WORD *)v5 + 5) >= 4u )
      {
        if ( v5 && v22 >= 0x1000 )
        {
          RaGetBusData(a1 + 792, 4LL, (__int64)v26, v12, 64);
          if ( *(_DWORD *)v9 )
          {
            for ( i = 0; i < *(_DWORD *)v9; ++i )
            {
              if ( *(_QWORD *)(*(_QWORD *)v8 + 16LL * i) == (((unsigned __int64)v28 << 32) | v27 & 0xFFFFC000) )
              {
                _mm_lfence();
                DeviceBase = StorPortGetDeviceBase(
                               v24,
                               *(unsigned int *)v23,
                               *(_DWORD *)v7,
                               *(_QWORD *)(*(_QWORD *)v8 + 16LL * i),
                               *(_DWORD *)(*(_QWORD *)v8 + 16LL * i + 8),
                               *(_BYTE *)(*(_QWORD *)v8 + 16LL * i + 12) == 0);
                break;
              }
            }
          }
          memset_0(v5, 0, 0x1000uLL);
          v14 = 8LL;
          *v5 = *(_QWORD *)DeviceBase;
          *((_DWORD *)v5 + 2) = *(_DWORD *)(DeviceBase + 8);
          *((_DWORD *)v5 + 3) = *(_DWORD *)(DeviceBase + 12);
          *((_DWORD *)v5 + 4) = *(_DWORD *)(DeviceBase + 16);
          *((_DWORD *)v5 + 5) = *(_DWORD *)(DeviceBase + 20);
          *((_DWORD *)v5 + 6) = *(_DWORD *)(DeviceBase + 24);
          *((_DWORD *)v5 + 7) = *(_DWORD *)(DeviceBase + 28);
          *((_DWORD *)v5 + 8) = *(_DWORD *)(DeviceBase + 32);
          *((_DWORD *)v5 + 9) = *(_DWORD *)(DeviceBase + 36);
          v5[5] = *(_QWORD *)(DeviceBase + 40);
          v15 = (_DWORD *)v5 + 17;
          v5[6] = *(_QWORD *)(DeviceBase + 48);
          *((_DWORD *)v5 + 14) = *(_DWORD *)(DeviceBase + 56);
          v16 = DeviceBase - (_QWORD)v5;
          *((_DWORD *)v5 + 15) = *(_DWORD *)(DeviceBase + 60);
          *((_DWORD *)v5 + 16) = *(_DWORD *)(DeviceBase + 64);
          do
          {
            *v15 = *(_DWORD *)((char *)v15 + v16);
            ++v15;
            --v14;
          }
          while ( v14 );
          v17 = (_DWORD *)v5 + 27;
          v18 = 933LL;
          *((_DWORD *)v5 + 25) = *(_DWORD *)(DeviceBase + 100);
          *((_DWORD *)v5 + 26) = *(_DWORD *)(DeviceBase + 104);
          do
          {
            *v17 = *(_DWORD *)((char *)v17 + v16);
            ++v17;
            --v18;
          }
          while ( v18 );
          v19 = v5 + 480;
          do
          {
            *v19 = *(_DWORD *)((char *)v19 + v16);
            ++v19;
            --v10;
          }
          while ( v10 );
          *((_DWORD *)v5 + 1024) = *(_DWORD *)(DeviceBase + 4096);
          *a3 = 4096LL;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      return (unsigned int)-1073741585;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v6;
}
