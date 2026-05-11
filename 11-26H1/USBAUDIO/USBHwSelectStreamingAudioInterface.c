/*
 * XREFs of USBHwSelectStreamingAudioInterface @ 0x14003B95C
 * Callers:
 *     USBCaptureStateChangePin @ 0x140004540 (USBCaptureStateChangePin.c)
 *     USBType1StateChangePin @ 0x1400049E0 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x14000DDF0 (USBType1ChangePowerState.c)
 *     USBCaptureChangePowerState @ 0x14000E540 (USBCaptureChangePowerState.c)
 *     USBParseGetAudioStreamingDataranges @ 0x14003B6E4 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005060 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memmove @ 0x14001C7C0 (memmove.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035C6C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     IsZeroBWInterface @ 0x14003BD4C (IsZeroBWInterface.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x14003BE20 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwFreePipes @ 0x14003BFC0 (USBHwFreePipes.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterface(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rdi
  char v3; // bp
  _BYTE *v4; // rsi
  ULONG *v5; // r8
  int v7; // ebx
  char v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  char v11; // al
  int v12; // edx
  int v13; // r8d
  __int64 Pool2; // rdi
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  __int64 v19; // r13
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rsi
  unsigned int v24; // edx
  __int64 v25; // rax
  void *v26; // rdx
  __int64 v27; // [rsp+50h] [rbp-48h]
  __int64 v28; // [rsp+58h] [rbp-40h]
  int v29; // [rsp+A0h] [rbp+8h]
  __int64 v30; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v28 = v2;
  v4 = a2;
  v5 = &WPP_RECORDER_INITIALIZED;
  v7 = -1073741808;
  v27 = *(_QWORD *)(v2 + 16);
  v8 = 1;
  v9 = *(_QWORD *)(v27 + 16);
  v10 = *(_QWORD *)(v9 + 72);
  v30 = v10;
  if ( *(_BYTE *)(v9 + 64) || *(_BYTE *)(v9 + 67) )
  {
    v7 = -1073741632;
LABEL_41:
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)v5,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    goto LABEL_49;
  }
  v11 = IsZeroBWInterface(*(_QWORD *)(v10 + 40), a2);
  v3 = v11;
  if ( *(_BYTE *)(v2 + 47) && !v11 )
    return USBHwSelectStreamingAudioInterfaceSideband(a1, (__int64)v4);
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v12, v13, WPP_GLOBAL_Control->DeviceExtension);
  }
  v29 = (unsigned __int8)v4[4];
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(24 * v29 + 56), 1096972357LL);
  if ( !Pool2 )
  {
LABEL_40:
    v5 = &WPP_RECORDER_INITIALIZED;
    goto LABEL_41;
  }
  v16 = *(_QWORD *)(v10 + 40);
  v17 = 0;
  v18 = *(unsigned __int8 *)(v16 + 4);
  if ( *(_BYTE *)(v16 + 4) )
  {
    while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL * v17) + 2LL) != v4[2] )
    {
      if ( ++v17 >= v18 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    if ( v17 == v18 )
      goto LABEL_37;
  }
  v19 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(Pool2 + 34) = v4[2];
  *(_WORD *)(Pool2 + 32) = 24 * (v29 + 1);
  *(_BYTE *)(Pool2 + 35) = v4[3];
  if ( v3 )
  {
    if ( v29 )
      *(_DWORD *)(Pool2 + 72) = 0;
  }
  else
  {
    v20 = *(_QWORD *)(v19 + 144);
    v21 = *(_DWORD *)(v20 + 216) & 0xF000;
    if ( !v21 || v21 == 0x2000 )
    {
      *(_DWORD *)(Pool2 + 72) = 500 * *(_DWORD *)(v20 + 220);
      if ( !*(_QWORD *)(v20 + 176) )
        *(_DWORD *)(Pool2 + 76) |= 8u;
    }
    else if ( v21 == 4096 )
    {
      *(_DWORD *)(Pool2 + 72) = 3872;
    }
  }
  *(_WORD *)Pool2 = 24 * v29 + 56;
  *(_WORD *)(Pool2 + 2) = 1;
  *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(v30 + 24);
  v22 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v27 + 40), (PURB)Pool2, 0LL);
  if ( *(int *)(Pool2 + 4) >= 0 )
  {
    v7 = v22;
    if ( v22 >= 0 )
    {
      v23 = *(_QWORD *)(v19 + 152);
      if ( !v3 )
      {
        v24 = *(_DWORD *)(Pool2 + 48);
        *(_DWORD *)(v23 + 56) = v24;
        *(_QWORD *)(v23 + 64) = *(_QWORD *)(Pool2 + 64);
        if ( v24 > 0x14 )
        {
          v7 = -1073741438;
        }
        else
        {
          USBHwFreePipes(a1);
          v25 = ExAllocatePool2(64LL, 24LL * *(unsigned int *)(v23 + 56), 1096972357LL);
          *(_QWORD *)(v23 + 72) = v25;
          if ( !v25 )
            v7 = -1073741670;
          if ( v7 >= 0 )
            memmove(*(void **)(v23 + 72), (const void *)(Pool2 + 56), 24LL * *(unsigned int *)(v23 + 56));
        }
      }
    }
  }
LABEL_37:
  ExFreePool((PVOID)Pool2);
  if ( v7 < 0 )
    goto LABEL_40;
LABEL_49:
  if ( v3 && *(_BYTE *)(v28 + 47) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v26 = &WPP_0c614632963633c1f19e304393ffecb8_Traceguids;
      LOBYTE(v26) = v8;
      LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v26,
        (_DWORD)v5,
        WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return (unsigned int)v7;
}
