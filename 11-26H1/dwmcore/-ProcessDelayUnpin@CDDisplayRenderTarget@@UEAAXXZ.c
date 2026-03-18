/*
 * XREFs of ?ProcessDelayUnpin@CDDisplayRenderTarget@@UEAAXXZ @ 0x180254110
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x180205098 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 */

void __fastcall CDDisplayRenderTarget::ProcessDelayUnpin(CDDisplayRenderTarget *this)
{
  unsigned int v1; // r9d

  v1 = 0;
  if ( *((_DWORD *)this + 8008) != 1 )
  {
    if ( !*((_QWORD *)this + 4015) )
      return;
    v1 = *((_DWORD *)this + 8010);
  }
  CD3DDevice::ProcessDelayUnpinForTarget(
    *(CD3DDevice **)(*((_QWORD *)this + 7) + 64LL),
    *(struct _LUID *)((char *)this + 31992),
    *((unsigned int *)this + 8002),
    v1);
}
