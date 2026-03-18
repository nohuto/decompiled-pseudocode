/*
 * XREFs of ?AddTokenToQueueAndSignalTokenEvent@CTokenManager@@UEAAJPEAVCToken@@@Z @ 0x1400A1180
 * Callers:
 *     <none>
 * Callees:
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14003A2D0 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 */

__int64 __fastcall CTokenManager::AddTokenToQueueAndSignalTokenEvent(
        CTokenManager *this,
        struct CompositionSurfaceObject **a2)
{
  int v3; // ebx
  void *v4; // rcx
  LONG PreviousState; // [rsp+40h] [rbp+18h] BYREF

  v3 = CTokenManager::AddTokenToQueue(this, a2);
  if ( v3 >= 0 )
  {
    v4 = (void *)*((_QWORD *)this + 8);
    PreviousState = 0;
    ZwSetEvent(v4, &PreviousState);
  }
  return (unsigned int)v3;
}
