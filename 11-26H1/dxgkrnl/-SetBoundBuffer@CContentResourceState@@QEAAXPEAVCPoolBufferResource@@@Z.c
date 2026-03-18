/*
 * XREFs of ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x14001C8BC
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x14001C354 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001C914 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x14002A264 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14001C888 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D790 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x14001D894 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 */

void __fastcall CContentResourceState::SetBoundBuffer(CContentResourceState *this, struct CPoolBufferResource *a2)
{
  CPoolBufferResource *v4; // rcx

  if ( *((struct CPoolBufferResource **)this + 6) != a2 )
  {
    if ( a2 )
    {
      CPoolBufferResource::AddUsageReference(a2);
      ++*((_DWORD *)a2 + 6);
    }
    v4 = (CPoolBufferResource *)*((_QWORD *)this + 6);
    if ( v4 )
    {
      CPoolBufferResource::RemoveUsageReference(v4);
      CFlipResource::Release(*((CFlipResource **)this + 6));
    }
    *((_BYTE *)this + 64) |= 1u;
    *((_QWORD *)this + 6) = a2;
  }
}
