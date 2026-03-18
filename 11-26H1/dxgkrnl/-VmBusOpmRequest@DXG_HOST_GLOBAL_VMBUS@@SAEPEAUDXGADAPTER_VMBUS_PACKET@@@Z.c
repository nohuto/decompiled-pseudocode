/*
 * XREFs of ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140229E30
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x140061438 (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     _DXGKCALLONEXIT__lambda_a993f943666ba3fc75eaa6a1f2de2c15____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140084120 (_DXGKCALLONEXIT__lambda_a993f943666ba3fc75eaa6a1f2de2c15____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     Feature_2159223096__private_IsEnabledDeviceUsageNoInline @ 0x140084FEC (Feature_2159223096__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z @ 0x1401A9FCC (-DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpmRequest(struct VMBPACKETCOMPLETION__ **a1)
{
  char v2; // bl
  struct _LUID *v3; // rdi
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  const wchar_t *v7; // r9
  signed __int32 v8; // eax
  _DWORD *v9; // rax
  int v10; // eax
  struct _LUID *v11; // rdi
  __int64 v13; // rax
  const wchar_t *v14; // r9
  unsigned int HighPart; // eax
  __int64 v16; // rax
  _DWORD *v17; // r14
  int *v18; // rbx
  int v19; // eax
  int v20; // r8d
  __int64 v21; // [rsp+50h] [rbp-29h] BYREF
  void *v22; // [rsp+58h] [rbp-21h] BYREF
  __int128 v23; // [rsp+60h] [rbp-19h] BYREF
  void **v24; // [rsp+70h] [rbp-9h]
  void **v25; // [rsp+78h] [rbp-1h]
  _BYTE v26[80]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+6Fh] BYREF
  char v28; // [rsp+F0h] [rbp+77h] BYREF
  void *v29; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  if ( !(unsigned int)Feature_2159223096__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = (struct _LUID *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    if ( !v11 )
      return 0;
    if ( *(_BYTE *)(*((_QWORD *)a1[12] + 74) + 336LL) )
    {
      WdLogSingleEntry0(2LL);
      v13 = 8456LL;
      v14 = L"OPM requests not allowed from secure VM's";
    }
    else
    {
      if ( *((_DWORD *)a1 + 36) - 48 >= v11[5].LowPart )
      {
        HighPart = v11[5].HighPart;
        if ( HighPart <= 0x20000 )
        {
          v16 = operator new[](HighPart + 12, 0x4B677844u, 64LL);
          v27 = v16;
          v17 = (_DWORD *)v16;
          if ( v16 )
          {
            v18 = (int *)(v16 + 4);
            *(_DWORD *)(v16 + 4) = v11[5].HighPart;
            v19 = DxgkpProcessOpmVmBusRequest(
                    v11[3],
                    v11[4].LowPart,
                    v11[4].HighPart,
                    (__int64)&v11[6],
                    v11[5].LowPart,
                    (void **)(v16 + 8),
                    (unsigned int *)(v16 + 4));
            v20 = *v18;
            *v17 = v19;
            VmBusCompletePacket(a1[16], v17, v20 + 8);
            v2 = 1;
          }
          else
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 8494;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate memory for output buffer",
              8494LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v27);
          return v2;
        }
        WdLogSingleEntry1(2LL);
        v13 = (unsigned int)v11[5].HighPart;
        v14 = L"OutputBufSize (0x%I64x) too big";
        WdLogGlobalForLineNumber = 8470;
        goto LABEL_31;
      }
      WdLogSingleEntry0(2LL);
      v13 = 8463LL;
      v14 = L"Input buffer size is too big";
    }
    WdLogGlobalForLineNumber = v13;
LABEL_31:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  v3 = (struct _LUID *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( !v3 )
    return 0;
  v21 = 0LL;
  *(_QWORD *)&v23 = &v28;
  v29 = 0LL;
  *((_QWORD *)&v23 + 1) = &v21;
  LOBYTE(v27) = 0;
  v24 = &v29;
  v25 = (void **)&v27;
  v28 = 0;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v26, &v23);
  v4 = a1[12];
  v5 = *((_QWORD *)v4 + 74);
  if ( *(_BYTE *)(v5 + 336) )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8364LL;
    v7 = L"OPM requests not allowed from secure VM's";
LABEL_23:
    WdLogGlobalForLineNumber = v6;
    goto LABEL_24;
  }
  if ( *((_DWORD *)a1 + 36) - 48 < v3[5].LowPart )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8371LL;
    v7 = L"Input buffer size is too big";
    goto LABEL_23;
  }
  if ( v3[5].HighPart <= 0x20000u )
  {
    if ( v4 && (v21 = *((_QWORD *)v4 + 74), v5) )
    {
      if ( v3[4].HighPart != 2303115 )
      {
LABEL_15:
        v9 = (_DWORD *)operator new[]((unsigned int)(v3[5].HighPart + 12), 0x4B677844u, 64LL);
        v22 = v9;
        v29 = v9;
        if ( v9 )
        {
          v9[1] = v3[5].HighPart;
          v10 = DxgkpProcessOpmVmBusRequest(
                  v3[3],
                  v3[4].LowPart,
                  v3[4].HighPart,
                  (__int64)&v3[6],
                  v3[5].LowPart,
                  (void **)v29 + 1,
                  (unsigned int *)v29 + 1);
          *(_DWORD *)v29 = v10;
          if ( v10 >= 0 && v3[4].HighPart == 2303139 )
            _InterlockedDecrement((volatile signed __int32 *)(v21 + 400));
          VmBusCompletePacket(a1[16], v29, *((_DWORD *)v29 + 1) + 8);
          LOBYTE(v27) = 1;
          wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v22);
          v2 = 1;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 8426;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for output buffer",
            8426LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v2 = v27;
          wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v22);
        }
        goto LABEL_25;
      }
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 400), 0, 0);
        if ( v8 >= *(_DWORD *)(v5 + 404) )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 400), v8 + 1, v8) )
        {
          v28 = 1;
          goto LABEL_15;
        }
      }
      WdLogSingleEntry0(2LL);
      v6 = 8398LL;
      v7 = L"Max Opm contexts limit ";
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v6 = 8389LL;
      v7 = L"Failed to get virtual machine";
    }
    goto LABEL_23;
  }
  WdLogSingleEntry1(2LL);
  v6 = (unsigned int)v3[5].HighPart;
  v7 = L"OutputBufSize (0x%I64x) too big";
  WdLogGlobalForLineNumber = 8378;
LABEL_24:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
  v2 = v27;
LABEL_25:
  DXGKCALLONEXIT__lambda_a993f943666ba3fc75eaa6a1f2de2c15____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v26);
  return v2;
}
