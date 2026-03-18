/*
 * XREFs of ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1401E63DC
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401DBF5C (--1DXGGLOBAL@@EEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Release(DXGMMS_EXPORT *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *(_BYTE *)this )
  {
    (*((void (__fastcall **)(_QWORD))this + 9))(0LL);
    ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)this + 32, 8uLL);
    *(_BYTE *)this = 0;
  }
  return 0LL;
}
