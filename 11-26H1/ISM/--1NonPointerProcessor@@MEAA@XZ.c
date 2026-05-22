/*
 * XREFs of ??1NonPointerProcessor@@MEAA@XZ @ 0x180080F98
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18017C944 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x18019BA18 (--1MouseProcessor@@MEAA@XZ.c)
 *     ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x18019CE00 (--_ENonPointerProcessor@@MEAAPEAXI@Z.c)
 *     ??1DockProcessor@@UEAA@XZ @ 0x1801BC730 (--1DockProcessor@@UEAA@XZ.c)
 *     ??1GazeProcessor@@MEAA@XZ @ 0x1801BCC74 (--1GazeProcessor@@MEAA@XZ.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801BDAA4 (--1HeatProcessor@@MEAA@XZ.c)
 *     ??1TouchProcessor@@MEAA@XZ @ 0x1801C9C98 (--1TouchProcessor@@MEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$0 @ 0x1801DC0C9 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$0.c)
 *     _GazeProcessor::GazeProcessor_::_1_::dtor$0 @ 0x1801DC986 (_GazeProcessor--GazeProcessor_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall NonPointerProcessor::~NonPointerProcessor(NonPointerProcessor *this)
{
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 1) = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
