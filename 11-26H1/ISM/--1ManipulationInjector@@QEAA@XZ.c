/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x180113638
 * Callers:
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BD044 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18017C944 (--1ControllerProcessor@@MEAA@XZ.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x1801D8FC7 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$4 @ 0x1801DC123 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::~ManipulationInjector(ManipulationInjector *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 12) )
    RemoveInjectionDevice();
  v2 = (void *)*((_QWORD *)this + 98);
  if ( v2 )
    CloseHandle(v2);
}
