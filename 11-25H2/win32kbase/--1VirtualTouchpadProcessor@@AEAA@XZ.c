/*
 * XREFs of ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x14021CCCC
 * Callers:
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1400CF13C (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     UserDeactivateMITInputProcessing @ 0x14014FA4C (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ??_GVPTPContact@@QEAAPEAXI@Z @ 0x14021CDDC (--_GVPTPContact@@QEAAPEAXI@Z.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x14021DAF8 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 */

void __fastcall VirtualTouchpadProcessor::~VirtualTouchpadProcessor(struct VPTPTouchpad **this, unsigned int a2)
{
  struct VPTPTouchpad *v3; // rbx
  void **v4; // rsi
  void *v5; // rcx

  while ( 1 )
  {
    v3 = *this;
    if ( *this == (struct VPTPTouchpad *)this )
      break;
    v4 = (void **)((char *)v3 + 16);
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      if ( v5 )
        VPTPContact::`scalar deleting destructor'(v5, a2);
    }
    VirtualTouchpadProcessor::RemoveTouchpad((VirtualTouchpadProcessor *)v5, v3);
  }
}
