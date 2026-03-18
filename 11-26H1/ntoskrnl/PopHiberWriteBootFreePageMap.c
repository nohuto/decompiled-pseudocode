/*
 * XREFs of PopHiberWriteBootFreePageMap @ 0x140BFAD84
 * Callers:
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 * Callees:
 *     RtlIntersectBitMaps @ 0x140618A60 (RtlIntersectBitMaps.c)
 *     tcpxsum @ 0x140730930 (tcpxsum.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PopWriteHiberPages @ 0x140BFCC1C (PopWriteHiberPages.c)
 */

__int64 __fastcall PopHiberWriteBootFreePageMap(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rdi
  void *v5; // rsi

  *(_DWORD *)(a1 + 200) = 0;
  v3 = (unsigned int *)(a1 + 32);
  RtlIntersectBitMaps(a1 + 32, (unsigned int *)(a1 + 64));
  v5 = *(void **)(a1 + 160);
  memmove(v5, *((const void **)v3 + 1), (unsigned __int64)*v3 >> 3);
  *(_DWORD *)(a2 + 72) = *v3;
  *(_DWORD *)(a2 + 76) = tcpxsum(0, (const char *)v5, *v3 >> 3);
  return PopWriteHiberPages(
           a1,
           v5,
           (unsigned __int64)((*v3 >> 3) + 4095) >> 12,
           (unsigned int)(*(_DWORD *)(a1 + 280) + 2));
}
