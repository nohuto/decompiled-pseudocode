/*
 * XREFs of ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x1801190A8
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800621EC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DD2F8 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x1800771E8 (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::Make(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IVolumeControlHandler **a3)
{
  CVolumeControlBase *v6; // rax
  CVolumeControlBase *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IVolumeControlHandler *v12; // [rsp+60h] [rbp+18h]

  *a3 = 0LL;
  v6 = (CVolumeControlBase *)operator new[](0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    CVolumeControlBase::CVolumeControlBase(v6, a2);
    *(_QWORD *)v7 = &CVolumeSoftware::`vftable';
    *((_QWORD *)v7 + 31) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)v7 + 256), 0, 0);
    *((_DWORD *)v7 + 74) = 1;
    *((_DWORD *)v7 + 75) = 0;
    *((_QWORD *)v7 + 38) = 0LL;
    v12 = v7;
    v8 = (*(__int64 (__fastcall **)(CVolumeControlBase *, struct IMMDevice *))(*(_QWORD *)v7 + 240LL))(v7, a1);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a3 = v12;
      (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v12 + 8LL))(v12);
      (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v12 + 16LL))(v12);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x670,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x8007000ELL);
  }
  return v9;
}
