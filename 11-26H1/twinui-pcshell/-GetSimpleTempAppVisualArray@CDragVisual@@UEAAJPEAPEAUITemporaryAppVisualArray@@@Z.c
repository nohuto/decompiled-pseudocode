/*
 * XREFs of ?GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180541000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180542DB8 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::GetSimpleTempAppVisualArray(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  int v4; // ebx
  struct ITemporaryAppVisualArray *v5; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  struct ITemporaryAppVisualArray *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v8);
  v4 = CDragVisual::_CreateTempAppVisuals((CDragVisual *)((char *)this - 48), &v8);
  if ( v4 >= 0 )
  {
    v5 = v8;
    v7 = 0;
    (*(void (__fastcall **)(struct ITemporaryAppVisualArray *, int *))(*(_QWORD *)v8 + 24LL))(v8, &v7);
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v8);
      *a2 = v5;
      v4 = 0;
    }
    else
    {
      v4 = -2147023728;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v4;
}
