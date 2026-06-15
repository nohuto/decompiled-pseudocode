/*
 * XREFs of ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x180108FBC
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800621EC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DD24C (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x18007AD84 (--0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180085938 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteHardware::Make(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IPartsList *a3,
        struct IMuteControlHandler **a4)
{
  CMuteControlBase *v8; // rax
  CMuteControlBase *v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMuteControlHandler *v14; // [rsp+68h] [rbp+20h]

  *a4 = 0LL;
  v8 = (CMuteControlBase *)operator new[](0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    CMuteControlBase::CMuteControlBase(v8, a2);
    *(_QWORD *)v9 = &CMuteHardware::`vftable';
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_DWORD *)v9 + 16) = 0;
    *(GUID *)((char *)v9 + 68) = GUID_00000000_0000_0000_0000_000000000000;
    *((_BYTE *)v9 + 84) = 0;
    v14 = v9;
    v10 = CMuteHardware::Initialize(v9, a1, a3);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *a4 = v14;
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v14 + 8LL))(v14);
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
      return 0LL;
    }
    if ( v10 == -2147023728 )
    {
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
      return 2147943568LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)0x8007000ELL);
  }
  return v11;
}
