/*
 * XREFs of ?RemoveAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140029C94
 * Callers:
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x140029F38 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 * Callees:
 *     ?RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z @ 0x140029D10 (-RemoveContentState@CEndpointResourceStateManager@@QEAAXPEAVCContentResourceState@@@Z.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x14002A264 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 */

void __fastcall CEndpointResourceStateManager::RemoveAllResourceStates(CEndpointResourceStateManager *this)
{
  char *v1; // rsi
  __int64 v3; // rcx
  char *v4; // rbx
  CEndpointResourceStateManager **v5; // rcx
  CEndpointResourceStateManager *v6; // rbx

  v1 = (char *)this + 16;
  v3 = *((_QWORD *)this + 2);
  if ( (char *)v3 != v1 )
  {
    do
    {
      v4 = *(char **)v3;
      CEndpointResourceStateManager::RemoveContentState(
        (CEndpointResourceStateManager *)-v3,
        (struct CContentResourceState *)((v3 - 8) & -(__int64)(v3 != 0)));
      v3 = (__int64)v4;
    }
    while ( v4 != v1 );
  }
  v5 = *(CEndpointResourceStateManager ***)this;
  if ( *(CEndpointResourceStateManager **)this != this )
  {
    do
    {
      v6 = *v5;
      CEndpointResourceStateManager::RemovePoolBufferState(
        this,
        (struct CPoolBufferResourceState *)((unsigned __int64)(v5 - 1) & -(__int64)(v5 != 0LL)));
      v5 = (CEndpointResourceStateManager **)v6;
    }
    while ( v6 != this );
  }
}
