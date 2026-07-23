/*
 * XREFs of sub_1409E9244 @ 0x1409E9244
 * Callers:
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall sub_1409E9244(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v6; // esi
  _KPROCESS *Process; // rcx
  __int16 v8; // ax
  bool v9; // zf
  char v10; // al
  _OWORD *v11; // rbx
  _OWORD *v12; // rax
  int v13; // eax
  _OWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r9d
  int v18; // r14d
  unsigned int v19; // r11d
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // r9
  int v23; // edx
  _BYTE v25[40]; // [rsp+50h] [rbp-128h] BYREF
  __int64 v26; // [rsp+78h] [rbp-100h]

  v6 = 0;
  memset_0(a3, 0, 0x150uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ReadyTime )
  {
    v8 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v8 == 332 || (v9 = v8 == 452, v10 = 0, v9) )
      v10 = 1;
    if ( v10 && PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process) == 452 )
      *(_QWORD *)(a1 + 8) &= ~1uLL;
  }
  v11 = a3 + 2;
  if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
  {
    RtlCopyFromUser(a3 + 2, *(void **)(a1 + 8), 0xF0uLL);
  }
  else
  {
    ProbeForRead(*(volatile void **)(a1 + 8), 0xF0uLL, 1u);
    v12 = *(_OWORD **)(a1 + 8);
    *v11 = *v12;
    *((_OWORD *)a3 + 2) = v12[1];
    *((_OWORD *)a3 + 3) = v12[2];
    *((_OWORD *)a3 + 4) = v12[3];
    *((_OWORD *)a3 + 5) = v12[4];
    *((_OWORD *)a3 + 6) = v12[5];
    *((_OWORD *)a3 + 7) = v12[6];
    *((_OWORD *)a3 + 8) = v12[7];
    v12 += 8;
    *((_OWORD *)a3 + 9) = *v12;
    *((_OWORD *)a3 + 10) = v12[1];
    *((_OWORD *)a3 + 11) = v12[2];
    *((_OWORD *)a3 + 12) = v12[3];
    *((_OWORD *)a3 + 13) = v12[4];
    *((_OWORD *)a3 + 14) = v12[5];
    *((_OWORD *)a3 + 15) = v12[6];
  }
  a3[41] = *(_QWORD *)(a1 + 8);
  v13 = *((_DWORD *)a3 + 13);
  *((_DWORD *)a3 + 2) = v13 & 0xF;
  *((_DWORD *)a3 + 3) = (unsigned __int8)v13 >> 4;
  if ( (v13 & 0xF) == 1 )
  {
    if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
    {
      RtlCopyFromUser(a3 + 2, *(void **)(a1 + 8), 0xF8uLL);
    }
    else
    {
      ProbeForRead(*(volatile void **)(a1 + 8), 0xF8uLL, 1u);
      v14 = *(_OWORD **)(a1 + 8);
      *v11 = *v14;
      *((_OWORD *)a3 + 2) = v14[1];
      *((_OWORD *)a3 + 3) = v14[2];
      *((_OWORD *)a3 + 4) = v14[3];
      *((_OWORD *)a3 + 5) = v14[4];
      *((_OWORD *)a3 + 6) = v14[5];
      *((_OWORD *)a3 + 7) = v14[6];
      *((_OWORD *)a3 + 8) = v14[7];
      v14 += 8;
      *((_OWORD *)a3 + 9) = *v14;
      *((_OWORD *)a3 + 10) = v14[1];
      *((_OWORD *)a3 + 11) = v14[2];
      *((_OWORD *)a3 + 12) = v14[3];
      *((_OWORD *)a3 + 13) = v14[4];
      *((_OWORD *)a3 + 14) = v14[5];
      *((_OWORD *)a3 + 15) = v14[6];
      a3[32] = *((_QWORD *)v14 + 14);
    }
  }
  else if ( (v13 & 0xF) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (a3[9] & 0xFFFFFFF) == 0 )
    return (unsigned int)-1073741811;
  if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
  {
    memset_0(v25, 0, 0xF0uLL);
    RtlCopyFromUser(v25, *(void **)(a1 + 8), 0xF0uLL);
    v15 = a3[41] - (v26 & 0xFFFFFFF);
  }
  else
  {
    v15 = a3[41] - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF);
  }
  *a3 = v15;
  v16 = 4096;
  if ( *((_DWORD *)a3 + 15) > 0x1000u )
    v16 = *((_DWORD *)a3 + 15);
  *((_DWORD *)a3 + 81) = v16;
  v17 = *((_DWORD *)a3 + 19);
  v18 = a3[9] & 0xFFFFFFF;
  v19 = *((_DWORD *)a3 + 17) & 0xFFFFFFF;
  v20 = v17 & 0xFFFFFFF;
  if ( (v17 & 0xFFFFFFF) != 0 )
  {
    v21 = a3[10] & 0xFFFFFFF;
    *((_DWORD *)a3 + 78) = v21 + 16;
    *((_DWORD *)a3 + 77) = v18;
    *((_DWORD *)a3 + 76) = v19;
    a3[37] = v19 + v15;
    v22 = v17 & 0xFFFFFFF;
    v19 = v20;
  }
  else
  {
    v22 = *((_DWORD *)a3 + 17) & 0xFFFFFFF;
    v21 = a3[9] & 0xFFFFFFF;
  }
  *((_DWORD *)a3 + 72) = 16;
  *((_DWORD *)a3 + 71) = v21;
  *((_DWORD *)a3 + 70) = v19;
  a3[34] = v22 + v15;
  if ( *((_DWORD *)a3 + 2) == 1 )
  {
    v23 = *((_DWORD *)a3 + 64);
    if ( v20 )
    {
      *((_DWORD *)a3 + 73) = *((_DWORD *)a3 + 65);
      *((_DWORD *)a3 + 79) = v23;
    }
    else
    {
      *((_DWORD *)a3 + 73) = v23;
    }
  }
  *((_DWORD *)a3 + 80) = *((_DWORD *)a3 + 77) + 16 + v21;
  return v6;
}
