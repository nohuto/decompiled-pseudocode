/*
 * XREFs of ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1402207A8
 * Callers:
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1401BD5D8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x140220698 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x1402205E4 (--1VPTPContact@@QEAA@XZ.c)
 */

VPTPContact ***__fastcall VPTPContact::`scalar deleting destructor'(VPTPContact ***Buffer)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  VPTPContact::~VPTPContact(Buffer);
  GreDeleteFastMutex((char *)Buffer, v2, v3, v4);
  return Buffer;
}
