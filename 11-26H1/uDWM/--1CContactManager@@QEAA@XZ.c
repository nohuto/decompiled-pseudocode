/*
 * XREFs of ??1CContactManager@@QEAA@XZ @ 0x1800A84D4
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AA010 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18005EF08 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CContactManager::~CContactManager(void **this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CContactManager::Reset((CContactManager *)this);
  if ( *this )
    DefaultHeap::Free(*this);
  v2 = this[1];
  if ( v2 )
    DefaultHeap::Free(v2);
  v3 = this[2];
  if ( v3 )
    DefaultHeap::Free(v3);
  v4 = this[3];
  if ( v4 )
    DefaultHeap::Free(v4);
  v5 = this[4];
  if ( v5 )
    DefaultHeap::Free(v5);
  v6 = this[5];
  if ( v6 )
    DefaultHeap::Free(v6);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  CBitmapSourceArray::~CBitmapSourceArray(this + 35);
  CBitmapSourceArray::~CBitmapSourceArray(this + 31);
  CBitmapSourceArray::~CBitmapSourceArray(this + 27);
  CBitmapSourceArray::~CBitmapSourceArray(this + 23);
  CBitmapSourceArray::~CBitmapSourceArray(this + 19);
  CBitmapSourceArray::~CBitmapSourceArray(this + 15);
  CBitmapSourceArray::~CBitmapSourceArray(this + 11);
  CBitmapSourceArray::~CBitmapSourceArray(this + 7);
}
