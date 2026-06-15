/*
 * XREFs of ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x18007AC38
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800621EC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DD24C (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x18007AD84 (--0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMuteSoftware::Make(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IMuteControlHandler **a3)
{
  CMuteControlBase *v6; // rax
  CMuteControlBase *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMuteControlHandler *v12; // [rsp+60h] [rbp+18h]

  *a3 = 0LL;
  v6 = (CMuteControlBase *)operator new[](0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    CMuteControlBase::CMuteControlBase(v6, a2);
    *(_QWORD *)v7 = &CMuteSoftware::`vftable';
    *((_QWORD *)v7 + 6) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)v7 + 56), 0, 0);
    *((_DWORD *)v7 + 24) = 0;
    *((_QWORD *)v7 + 13) = 0LL;
    v12 = v7;
    v8 = (*(__int64 (__fastcall **)(CMuteControlBase *, struct IMMDevice *))(*(_QWORD *)v7 + 112LL))(v7, a1);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *a3 = v12;
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v12 + 8LL))(v12);
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v12 + 16LL))(v12);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x294,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x292,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)0x8007000ELL);
  }
  return v9;
}
