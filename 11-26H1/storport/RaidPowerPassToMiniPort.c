/*
 * XREFs of RaidPowerPassToMiniPort @ 0x140011518
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000FDD0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x140010A10 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaAdapterStartPowerIo @ 0x1400118E8 (RaAdapterStartPowerIo.c)
 *     RaInitializePower @ 0x14005872C (RaInitializePower.c)
 *     WPP_SF_qqq @ 0x14006F5D8 (WPP_SF_qqq.c)
 *     WPP_SF_qqqq @ 0x1400783E0 (WPP_SF_qqqq.c)
 *     WPP_SF_qqqD @ 0x1400826E0 (WPP_SF_qqqD.c)
 */

__int64 __fastcall RaidPowerPassToMiniPort(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rbx
  __int64 v4; // rbp
  int v7; // r14d
  __int64 v8; // rcx
  _WORD *v9; // rdi
  __int64 v10; // rdx
  bool v11; // cf
  int v12; // ecx
  __int64 v13; // rax
  _QWORD *v14; // r8
  __int64 v15; // rcx
  char v16; // r9
  __int64 v17; // rax
  int v18; // r10d
  unsigned int started; // ebp
  _QWORD v21[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(int **)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 184);
  v21[0] = 0LL;
  v7 = a1;
  if ( *v3 == 1431193940 )
    v3 = (int *)*((_QWORD *)v3 + 3);
  v8 = *((_QWORD *)v3 + 577);
  v9 = v3 + 1112;
  if ( v8 )
    goto LABEL_4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      59LL,
      &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
      a2,
      v3 + 1112,
      v3);
  }
  RaInitializePower(v3);
  v8 = *((_QWORD *)v3 + 577);
  if ( v8 )
  {
LABEL_4:
    v21[2] = v8 + 48;
    v10 = v8 + 1200;
    *((_BYTE *)v3 + 4624) = 1;
    v21[3] = v8 + 944;
    v11 = *((_BYTE *)v3 + 4625) != 0;
    v21[1] = v8 + 1200;
    v12 = v11 ? 2304 : 256;
    if ( *v3 == 1314275652 )
    {
      v13 = (__int64)v3 + 274;
    }
    else
    {
      v13 = (__int64)v3 + 482;
      if ( *v3 != 1094997074 )
        v13 = 98LL;
    }
    v14 = v3 + 1126;
    if ( *(_BYTE *)v13 == 1 )
    {
      v3[1118] = v12;
      *((_QWORD *)v3 + 568) = 0LL;
      *((_QWORD *)v3 + 566) = a2;
      *v9 = 8;
      *((_BYTE *)v3 + 4450) = 40;
      v3[1114] = 1397899864;
      v3[1115] = 1;
      v3[1116] = 168;
      v3[1117] = 36;
      *((_WORD *)v3 + 2242) = 2;
      v3[1122] = v3[1418];
      v3[1142] = 144;
      v3[1125] = 128;
      *((_QWORD *)v3 + 564) = 0LL;
      v3[1127] = 0;
      *(_DWORD *)v14 = 1;
      *((_WORD *)v3 + 2288) = 1;
      v3[1145] = 4;
      *((_WORD *)v3 + 2289) = *((_WORD *)v3 + 28);
      *((_WORD *)v3 + 2292) = 0;
      *((_BYTE *)v3 + 4586) = 0;
      v15 = (unsigned int)v3[1142];
      *(_DWORD *)((char *)v9 + v15) = 97;
      *(_DWORD *)((char *)v9 + v15 + 4) = 12;
      *(_DWORD *)((char *)v9 + v15 + 16) = *(_DWORD *)(v4 + 32);
      *(_DWORD *)((char *)v9 + v15 + 12) = *(_DWORD *)(v4 + 24);
      *((_BYTE *)v9 + v15 + 8) = 1;
    }
    else
    {
      *((_QWORD *)v3 + 562) = 0LL;
      *((_BYTE *)v3 + 4450) = 36;
      *((_QWORD *)v3 + 559) = 0LL;
      v3[1116] = 0;
      *v9 = 88;
      v3[1128] = *(_DWORD *)(v4 + 32);
      v3[1114] = *(_DWORD *)(v4 + 24);
      v3[1115] = v12;
      v3[1117] = v3[1418];
      v3[1113] = 1;
    }
    v16 = *((_BYTE *)v3 + 4450);
    v17 = 79LL;
    v18 = *v3;
    if ( v16 == 40 )
    {
      if ( v18 != 1314275652 )
        v17 = 131LL;
      if ( ((v3[v17] + 7) & 0xFFFFFFF8) != 0 )
        *((_QWORD *)v3 + 569) = v10;
    }
    else
    {
      if ( v18 != 1314275652 )
        v17 = 131LL;
      if ( ((v3[v17] + 7) & 0xFFFFFFF8) != 0 )
        *v14 = v10;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      if ( v16 == 40 )
        v14 = v3 + 1138;
      WPP_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        61LL,
        &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
        a2,
        v3 + 1112,
        *v14,
        v3);
    }
    started = RaAdapterStartPowerIo(v7, a2, (int)v3 + 4448, (unsigned int)v21, a3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqqD(
        WPP_GLOBAL_Control->AttachedDevice,
        62LL,
        &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
        a2,
        v3 + 1112,
        v3,
        started);
    }
    return started;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_1c5ab61e0b3334897529fa80e10aa52d_Traceguids,
        a2,
        v3 + 1112,
        v3);
    }
    return 3221225495LL;
  }
}
