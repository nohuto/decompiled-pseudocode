/*
 * XREFs of ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180118EDC
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800621EC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DD2F8 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180053388 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x1800771E8 (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeHardware::Make(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IPartsList *a3,
        struct IVolumeControlHandler **a4)
{
  CVolumeControlBase *v7; // rax
  CVolumeControlBase *v8; // rdi
  struct IPartsList *v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  v7 = (CVolumeControlBase *)operator new[](0x1C0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    CVolumeControlBase::CVolumeControlBase(v7, a2);
    *(_QWORD *)v8 = &CVolumeHardware::`vftable';
    *((_QWORD *)v8 + 31) = 0LL;
    *((_QWORD *)v8 + 32) = 0LL;
    *(GUID *)((char *)v8 + 264) = GUID_00000000_0000_0000_0000_000000000000;
    *((_QWORD *)v8 + 35) = 0LL;
    *((_BYTE *)v8 + 288) = 0;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)v8 + 296), 0, 0);
    *((_QWORD *)v8 + 42) = 0LL;
    *((_QWORD *)v8 + 43) = 0LL;
    *((_BYTE *)v8 + 352) = 0;
    *((_QWORD *)v8 + 45) = 0LL;
    *((_QWORD *)v8 + 46) = 0LL;
    *((_QWORD *)v8 + 47) = 0LL;
    *((_QWORD *)v8 + 48) = 0LL;
    *((_QWORD *)v8 + 49) = 0LL;
    *((_QWORD *)v8 + 50) = 0LL;
    *((_QWORD *)v8 + 51) = 0LL;
    *((_QWORD *)v8 + 52) = 0LL;
    *((_QWORD *)v8 + 53) = 0LL;
    *((_QWORD *)v8 + 54) = 0LL;
    *((_BYTE *)v8 + 440) = 0;
    v10 = CVolumeHardware::Initialize(v8, a1, v9);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *a4 = v8;
      (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v8 + 8LL))(v8);
      (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v8 + 16LL))(v8);
      return 0LL;
    }
    if ( v10 == -2147023728 )
    {
      (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v8 + 16LL))(v8);
      return 2147943568LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x474,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x472,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x8007000ELL);
  }
  return v11;
}
