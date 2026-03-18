/*
 * XREFs of ?ResolveHandle@BufferCollectionObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x14022808C
 * Callers:
 *     ?SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1401995F0 (-SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 *     NtDCompositionCreateBufferCollection @ 0x140226920 (NtDCompositionCreateBufferCollection.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1400D0AC0 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::BufferCollectionObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct DirectComposition::BufferCollectionObject **a4)
{
  __int64 result; // rax
  struct DirectComposition::BufferCollectionObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 6, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
