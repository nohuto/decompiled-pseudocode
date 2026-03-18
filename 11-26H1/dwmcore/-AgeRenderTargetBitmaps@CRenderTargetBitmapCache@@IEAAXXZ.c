/*
 * XREFs of ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18006A600
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAA_NXZ @ 0x1800695A0 (-AdvanceFrame@CDeviceManager@@IEAA_NXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800F4F48 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CRenderTargetBitmapCache::AgeRenderTargetBitmaps(CRenderTargetBitmapCache *this)
{
  __int64 v1; // rsi
  int v3; // edi
  int v4; // edi
  __int64 v5; // rbp
  __int64 v6; // rbp

  v1 = 0LL;
  if ( g_pComposition )
    v1 = *((_QWORD *)g_pComposition + 110);
  v3 = *((_DWORD *)this + 6);
  while ( v3 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)--v3);
    if ( (unsigned __int64)(v1 - *(_QWORD *)(v6 + 136)) >= 0x20 )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this);
      *(_BYTE *)(v6 + 144) = 0;
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v6);
    }
  }
  v4 = *((_DWORD *)this + 6);
  while ( v4 )
  {
    if ( *((_DWORD *)this + 6) <= 0x20u )
      break;
    v5 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)--v4);
    if ( v1 != *(_QWORD *)(v5 + 136) )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this);
      *(_BYTE *)(v5 + 144) = 0;
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v5);
    }
  }
}
