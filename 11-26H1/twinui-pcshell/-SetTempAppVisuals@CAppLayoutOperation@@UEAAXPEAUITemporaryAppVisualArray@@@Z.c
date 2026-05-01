/*
 * XREFs of ?SetTempAppVisuals@CAppLayoutOperation@@UEAAXPEAUITemporaryAppVisualArray@@@Z @ 0x180513A50
 * Callers:
 *     ?SetTempAppVisuals@AppResizeOperation@@WII@EAAXPEAUITemporaryAppVisualArray@@@Z @ 0x180513AA0 (-SetTempAppVisuals@AppResizeOperation@@WII@EAAXPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAppLayoutOperation::SetTempAppVisuals(CAppLayoutOperation *this, struct ITemporaryAppVisualArray *a2)
{
  struct ITemporaryAppVisualArray *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct ITemporaryAppVisualArray **)this + 7) != a2 )
  {
    v4 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v4);
    v4 = (struct ITemporaryAppVisualArray *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v4);
  }
}
