/*
 * XREFs of ??1Lockable@@UEAA@XZ @ 0x140193860
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x140095A48 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_ELockable@@UEAAPEAXI@Z @ 0x1400975D0 (--_ELockable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall Lockable::~Lockable(Lockable *this)
{
  struct _KTHREAD **v1; // rbx

  v1 = (struct _KTHREAD **)((char *)this + 24);
  *(_QWORD *)this = &Lockable::`vftable';
  if ( DXGFASTMUTEX::IsOwner((Lockable *)((char *)this + 24)) )
    DXGFASTMUTEX::Release(v1);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)v1);
}
