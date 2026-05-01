/*
 * XREFs of ??1ObjectArray@Discover@PenWorkspace@@UEAA@XZ @ 0x1803DE964
 * Callers:
 *     ??_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803DEB80 (--_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@0@@Z @ 0x1803DE664 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr@.c)
 */

void __fastcall PenWorkspace::Discover::ObjectArray::~ObjectArray(PenWorkspace::Discover::ObjectArray *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>(v2, *((__int64 **)this + 7));
    std::_Deallocate<16,0>(
      *((void **)this + 6),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IPenWorkspaceScreenCaptureBroker>((__int64)this);
}
