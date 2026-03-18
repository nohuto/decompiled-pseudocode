/*
 * XREFs of ??_GVPTPContact@@QEAAPEAXI@Z @ 0x14021CDDC
 * Callers:
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x14021CCCC (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x14021D858 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x14021CC70 (--1VPTPContact@@QEAA@XZ.c)
 */

VPTPContact ***__fastcall VPTPContact::`scalar deleting destructor'(VPTPContact ***Buffer)
{
  VPTPContact::~VPTPContact(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
