/*
 * XREFs of ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x140152AD8
 * Callers:
 *     ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140152A80 (-ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 *     ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1401994F0 (-SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z.c)
 *     ?SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1401995F0 (-SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  _QWORD *v1; // rdi
  unsigned int v3; // esi
  __int64 v4; // rax
  void *v5; // rcx

  v1 = (_QWORD *)((char *)this + 88);
  if ( *((_QWORD *)this + 9) )
  {
    v3 = 0;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 9) + 8 * v4));
        v4 = ++v3;
      }
      while ( (unsigned __int64)v3 < *v1 );
    }
    GreDeleteFastMutex(*((char **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 16);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 10) )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((_QWORD *)this + 10) = 0LL;
  }
  *v1 = 0LL;
}
