/*
 * XREFs of ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x180135824
 * Callers:
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801357B0 (-Trim@CD3DDevice@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CRenderTargetBitmapCache::ReleaseRenderTargetBitmaps(CRenderTargetBitmapCache *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
    *(_BYTE *)(v3 + 144) = 0;
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((volatile signed __int32 *)v3);
  }
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 8u);
}
