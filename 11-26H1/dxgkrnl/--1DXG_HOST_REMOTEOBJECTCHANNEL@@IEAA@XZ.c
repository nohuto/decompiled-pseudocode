/*
 * XREFs of ??1DXG_HOST_REMOTEOBJECTCHANNEL@@IEAA@XZ @ 0x14020CAB4
 * Callers:
 *     ?Delete@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXXZ @ 0x14020DE10 (-Delete@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::~DXG_HOST_REMOTEOBJECTCHANNEL(DXG_HOST_REMOTEOBJECTCHANNEL *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  *(_QWORD *)this = &DXG_HOST_REMOTEOBJECTCHANNEL::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
}
