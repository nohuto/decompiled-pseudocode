/*
 * XREFs of ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14010FC20
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x140143DF0 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     VKFromVSC @ 0x14008ABB0 (VKFromVSC.c)
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     IsKeyStateCached @ 0x1400E8580 (IsKeyStateCached.c)
 *     IsKeyboardIVEnabled @ 0x14010FD58 (IsKeyboardIVEnabled.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1401C37F4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x140221390 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x140221638 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::VirtualizeKeyboardInput(
        char a1,
        IVRootDeliver::Keyboard::Detail *a2,
        __int64 *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 UserSessionState; // rax
  void *v17; // r9
  __int16 v18; // ax
  unsigned __int8 v19; // si
  char v20; // dl
  char v21; // al
  __int64 v22; // xmm0_8
  int v23; // r9d
  __int128 v24; // [rsp+20h] [rbp-28h] BYREF
  __int128 v25; // [rsp+30h] [rbp-18h]

  v11 = 0;
  if ( !(unsigned __int8)IsKeyboardIVEnabled() )
    return 1LL;
  if ( !isRootPartition(v9, v8, v10) )
    return 1LL;
  UserSessionState = W32GetUserSessionState(v13, v12, v14);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 12920) + 1272LL)) )
    return 1LL;
  if ( (*(_WORD *)a2 || *((_WORD *)a2 + 1))
    && (a1 & 2) != 0
    && (unsigned int)IVRootDeliver::Keyboard::Detail::SendKeyboardInput(a2, (struct _UNICODE_STRING *)a3, a4, v17) )
  {
    return 0LL;
  }
  if ( (a1 & 1) == 0 )
    return 1LL;
  v18 = *((_WORD *)a3 + 2);
  if ( (v18 & 0x40) != 0 )
  {
    v19 = *((_BYTE *)a3 + 2);
  }
  else
  {
    if ( (v18 & 2) != 0 )
    {
      v20 = -32;
    }
    else
    {
      v20 = 0;
      if ( (v18 & 4) != 0 )
        v20 = -31;
    }
    v21 = *((_BYTE *)a3 + 2) & 0x7F;
    v25 = 0LL;
    v24 = 0LL;
    LOBYTE(v24) = v21;
    v22 = *a3;
    DWORD2(v25) = *((_DWORD *)a3 + 2);
    *(_QWORD *)&v25 = v22;
    v19 = VKFromVSC((unsigned __int8 *)&v24, v20);
  }
  if ( !IsKeyStateCached(v19) )
    return 1LL;
  LOBYTE(v11) = (unsigned int)IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
                                a2,
                                (const struct CONTAINER_ID *)v19,
                                *((_WORD *)a3 + 2) & 1,
                                v23) == 0;
  return v11;
}
