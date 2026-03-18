/*
 * XREFs of ??1CManipulationContext@@UEAA@XZ @ 0x1801CE22C
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x1801CE1E0 (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x1800AB60C (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::~CManipulationContext(CManipulationContext *this)
{
  __int64 v2; // rcx
  int i; // edi
  void *v4; // rcx
  int j; // edi
  void *v6; // rcx

  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 14);
  if ( *((_QWORD *)this + 10) )
  {
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
      TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*((_QWORD *)this + 11) + 16LL * i));
    operator delete(*((void **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
  if ( *((_QWORD *)this + 7) )
  {
    for ( j = 0; j < *((_DWORD *)this + 18); ++j )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*((_QWORD *)this + 8) + 8LL * j));
    operator delete(*((void **)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 8);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
}
