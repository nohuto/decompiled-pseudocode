/*
 * XREFs of ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14005DEB0
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1401048D0 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     IsKeyboardIVEnabled @ 0x14005DFE8 (IsKeyboardIVEnabled.c)
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     IsKeyStateCached @ 0x1400BAA30 (IsKeyStateCached.c)
 *     VKFromVSC @ 0x1401174C0 (VKFromVSC.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x14021DC10 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14021DEC4 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021EA58 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::VirtualizeKeyboardInput(
        char a1,
        IVRootDeliver::Keyboard::Detail *a2,
        __int64 *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // r9
  __int16 v16; // ax
  unsigned __int8 v17; // si
  char v18; // al
  __int64 v19; // xmm0_8
  int v20; // r9d
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  __int128 v22; // [rsp+30h] [rbp-18h]

  v8 = 0;
  if ( !(unsigned __int8)IsKeyboardIVEnabled() )
    return 1LL;
  if ( !(unsigned __int8)isRootPartition() )
    return 1LL;
  UserSessionState = W32GetUserSessionState(v10, v9);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 12928) + 1272LL)) )
    return 1LL;
  if ( (*(_WORD *)a2 || *((_WORD *)a2 + 1))
    && (a1 & 2) != 0
    && (unsigned int)IVRootDeliver::Keyboard::Detail::SendKeyboardInput(a2, (struct _UNICODE_STRING *)a3, a4, v15) )
  {
    return 0LL;
  }
  if ( (a1 & 1) == 0 )
    return 1LL;
  v16 = *((_WORD *)a3 + 2);
  if ( (v16 & 0x40) != 0 )
  {
    v17 = *((_BYTE *)a3 + 2);
  }
  else
  {
    if ( (v16 & 2) != 0 )
    {
      LOBYTE(v13) = -32;
    }
    else
    {
      v13 = 0LL;
      if ( (v16 & 4) != 0 )
        v13 = 225LL;
    }
    v18 = *((_BYTE *)a3 + 2) & 0x7F;
    v22 = 0LL;
    v21 = 0LL;
    LOBYTE(v21) = v18;
    v19 = *a3;
    DWORD2(v22) = *((_DWORD *)a3 + 2);
    *(_QWORD *)&v22 = v19;
    v17 = VKFromVSC(&v21, v13);
  }
  LOBYTE(v14) = v17;
  if ( !(unsigned __int8)IsKeyStateCached(v14) )
    return 1LL;
  LOBYTE(v8) = (unsigned int)IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
                               a2,
                               (const struct CONTAINER_ID *)v17,
                               *((_WORD *)a3 + 2) & 1,
                               v20) == 0;
  return v8;
}
