/*
 * XREFs of ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x140221390
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14010FC20 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1401BDB04 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2,
        int a3)
{
  __int16 v3; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _WORD *v9; // rax
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  _WORD *v13; // [rsp+30h] [rbp-28h]

  v3 = (__int16)a2;
  CIVSerializer::CIVSerializer((__int64)v12, 6);
  v12[0] = &CIVGenericSerializer::`vftable';
  v9 = v13;
  if ( v13 )
  {
    *v13 = v3;
    *((_DWORD *)v9 + 1) = a3;
    v10 = ivrIVBroadcast((const struct CIVSerializer *)v12, 1u, this);
  }
  else
  {
    v10 = -1073741801;
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v12, v6, v7, v8);
  return v10;
}
