/*
 * XREFs of ??1BLTQUEUE@@QEAA@XZ @ 0x140282270
 * Callers:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x140080C9C (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x14009A53C (--1-$CCachedData@VBLTENTRY@@$02@@QEAA@XZ.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1402824D4 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::~BLTQUEUE(BLTQUEUE *this)
{
  unsigned int v2; // edx

  BLTQUEUE::Cleanup(this);
  CCachedData<BLTENTRY,3>::~CCachedData<BLTENTRY,3>((char *)this + 1088, v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((BLTQUEUE *)((char *)this + 832));
}
