/*
 * XREFs of ??1DXGK_GAMMA_RAMP@@UEAA@XZ @ 0x140039AB8
 * Callers:
 *     ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x140039A80 (--_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x140039D50 (--1ReferenceCounted@@UEAA@XZ.c)
 */

void __fastcall DXGK_GAMMA_RAMP::~DXGK_GAMMA_RAMP(DXGK_GAMMA_RAMP *this)
{
  void *v2; // rcx

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &DXGK_GAMMA_RAMP::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  ReferenceCounted::~ReferenceCounted(this);
}
