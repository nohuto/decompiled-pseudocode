/*
 * XREFs of CcDecrementPrivateVolumeUseCount @ 0x14039D1B0
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14039BBF0 (CcDeleteSharedCacheMap.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403E0938 (CcForEachPrivateVolumeCacheMap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E1FBC (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDecrementPrivateVolumeUseCount(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
    KeBugCheckEx(0x34u, 0x1D3EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  result = (unsigned int)(v1 - 1);
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
