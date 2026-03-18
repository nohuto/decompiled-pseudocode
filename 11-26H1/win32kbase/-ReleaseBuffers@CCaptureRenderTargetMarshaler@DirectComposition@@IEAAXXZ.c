/*
 * XREFs of ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1401BFF14
 * Callers:
 *     ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1401B32E0 (-ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 *     ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAPEAX_KPEA_N@Z @ 0x140245970 (-SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROP.c)
 *     ?SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140245A70 (-SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rdi
  unsigned int v6; // esi
  __int64 v7; // rax
  void *v8; // rcx

  v4 = (_QWORD *)((char *)this + 88);
  if ( *((_QWORD *)this + 9) )
  {
    v6 = 0;
    if ( *v4 )
    {
      v7 = 0LL;
      do
      {
        ObfDereferenceObject(*(PVOID *)(*((_QWORD *)this + 9) + 8 * v7));
        v7 = ++v6;
      }
      while ( (unsigned __int64)v6 < *v4 );
    }
    GreDeleteFastMutex(*((char **)this + 9), a2, a3, a4);
    *((_QWORD *)this + 9) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 16);
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 10) )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((_QWORD *)this + 10) = 0LL;
  }
  *v4 = 0LL;
}
