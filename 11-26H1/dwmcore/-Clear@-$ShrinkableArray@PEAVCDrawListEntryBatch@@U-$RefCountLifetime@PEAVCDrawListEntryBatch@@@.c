/*
 * XREFs of ?Clear@?$ShrinkableArray@PEAVCDrawListEntryBatch@@U?$RefCountLifetime@PEAVCDrawListEntryBatch@@@@@@QEAAXXZ @ 0x1801367B4
 * Callers:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1801370A8 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180135F90 (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorRenderer@@VCMilObjectDeleter@@@@IEAA.c)
 */

__int64 __fastcall ShrinkableArray<CDrawListEntryBatch *,RefCountLifetime<CDrawListEntryBatch *>>::Clear(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) )
  {
    v2 = *(unsigned int *)(a1 + 24);
    v3 = 0LL;
    do
    {
      result = CMILRefCountBaseT<ID2D1PrivateCompositorRenderer,CMilObjectDeleter>::InternalRelease(*(volatile signed __int32 **)(v3 + *(_QWORD *)a1));
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
