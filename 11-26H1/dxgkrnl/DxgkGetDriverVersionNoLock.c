/*
 * XREFs of DxgkGetDriverVersionNoLock @ 0x140195EE0
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14006611C (DpiQueryIntegratedDescriptorWrapper.c)
 *     DpiMdmProcessStartAdapter @ 0x140090C00 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetDriverVersionNoLock(__int64 a1)
{
  return *(unsigned int *)(a1 + 3044);
}
