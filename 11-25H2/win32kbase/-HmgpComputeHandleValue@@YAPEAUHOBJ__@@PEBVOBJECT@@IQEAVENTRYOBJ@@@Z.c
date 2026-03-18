/*
 * XREFs of ?HmgpComputeHandleValue@@YAPEAUHOBJ__@@PEBVOBJECT@@IQEAVENTRYOBJ@@@Z @ 0x14006D9B4
 * Callers:
 *     HmgNextGarbageCollectible @ 0x14006F2A4 (HmgNextGarbageCollectible.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall HmgpComputeHandleValue(
        const struct OBJECT *a1,
        unsigned __int16 a2,
        struct ENTRYOBJ *const a3)
{
  unsigned __int64 v3; // r9

  v3 = a2 | (unsigned __int64)(*((unsigned __int16 *)a3 + 6) << 16);
  if ( (_DWORD)v3 == (unsigned int)*(_QWORD *)a1 )
    return (struct HOBJ__ *)(a2 | (unsigned __int64)(*((unsigned __int16 *)a3 + 6) << 16));
  DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 47LL, a3, *(_QWORD *)a1, v3, 0LL, 0LL, 0);
  return 0LL;
}
