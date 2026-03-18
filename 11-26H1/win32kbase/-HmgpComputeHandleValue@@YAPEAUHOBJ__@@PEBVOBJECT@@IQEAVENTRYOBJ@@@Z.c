/*
 * XREFs of ?HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z @ 0x140024200
 * Callers:
 *     ?HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z @ 0x140024260 (-HmgNextOwned@@YAIIKPEAPEAUHOBJ__@@PEAPEAVOBJECT@@@Z.c)
 *     HmgNextGarbageCollectible @ 0x140155D88 (HmgNextGarbageCollectible.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 */

struct HOBJ__ *__fastcall HmgpComputeHandleValue(
        const struct OBJECT *a1,
        unsigned __int16 a2,
        struct ENTRYOBJ *const a3)
{
  unsigned __int64 v3; // r10

  v3 = a2 | (unsigned __int64)(*((unsigned __int16 *)a3 + 6) << 16);
  if ( (_DWORD)v3 == (unsigned int)*(_QWORD *)a1 )
    return (struct HOBJ__ *)(a2 | (unsigned __int64)(*((unsigned __int16 *)a3 + 6) << 16));
  GrepCaptureLiveMemoryDump(400LL, 47LL, (__int64)a3, *(_QWORD *)a1, v3, 0);
  return 0LL;
}
