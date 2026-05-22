/*
 * XREFs of ??1InjectionDevice@@QEAA@XZ @ 0x18017CA90
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18017C944 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x18019BA18 (--1MouseProcessor@@MEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$5 @ 0x1801DC13C (_ControllerProcessor--ControllerProcessor_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$6 @ 0x1801DC155 (_ControllerProcessor--ControllerProcessor_--_1_--dtor$6.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$7 @ 0x1801DC16E (_ControllerProcessor--ControllerProcessor_--_1_--dtor$7.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$4 @ 0x1801DC9CE (_MouseProcessor--MouseProcessor_--_1_--dtor$4.c)
 * Callees:
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x18017F320 (-Remove@InjectionDevice@@QEAAJXZ.c)
 */

void __fastcall InjectionDevice::~InjectionDevice(InjectionDevice *this)
{
  if ( *((_BYTE *)this + 1556) )
    InjectionDevice::Remove(this);
}
