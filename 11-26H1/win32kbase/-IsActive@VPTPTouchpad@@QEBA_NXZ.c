/*
 * XREFs of ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x1401C5C70
 * Callers:
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1401BD5D8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ??1VPTPTouchpad@@QEAA@XZ @ 0x140220640 (--1VPTPTouchpad@@QEAA@XZ.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x140221270 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VPTPTouchpad::IsActive(VPTPTouchpad *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 4) || *((VPTPTouchpad **)this + 2) != (VPTPTouchpad *)((char *)this + 16) )
    return 1;
  return v1;
}
