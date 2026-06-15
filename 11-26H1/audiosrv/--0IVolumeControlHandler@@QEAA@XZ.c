/*
 * XREFs of ??0IVolumeControlHandler@@QEAA@XZ @ 0x1800B0F1C
 * Callers:
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x1800771E8 (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIVolumeControlHandler@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800DC4DC (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VIVolumeControlHandler@@@Detai.c)
 * Callees:
 *     <none>
 */

IVolumeControlHandler *__fastcall IVolumeControlHandler::IVolumeControlHandler(IVolumeControlHandler *this)
{
  *(_QWORD *)this = &IVolumeControlHandler::`vftable';
  return this;
}
