/*
 * XREFs of ??1AlpcPort@@UEAA@XZ @ 0x180080C88
 * Callers:
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18010F9B0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180093550 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 */

void __fastcall AlpcPort::~AlpcPort(AlpcPort *this)
{
  *(_QWORD *)this = &AlpcPort::`vftable';
  SipcWin32Handle::Reset((AlpcPort *)((char *)this + 48));
  SipcPort::~SipcPort(this);
}
