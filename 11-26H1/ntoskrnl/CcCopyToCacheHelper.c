/*
 * XREFs of CcCopyToCacheHelper @ 0x1404875B4
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     HviCopyMemory @ 0x14046BDC8 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1404F9560 (HviCopyMemoryNonTemporal.c)
 *     RtlFlushNonVolatileMemory @ 0x14052F1E0 (RtlFlushNonVolatileMemory.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyMemoryNonTemporal @ 0x140730E40 (RtlCopyMemoryNonTemporal.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

bool *__fastcall CcCopyToCacheHelper(__int64 a1, void *a2, void *a3, unsigned int a4, char a5, bool *a6)
{
  int v6; // ebx
  int v7; // esi
  bool *result; // rax
  __int64 v10; // rbp
  int v11; // eax

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 152) & 0x40000000;
  if ( a5 )
  {
    if ( !v7 )
    {
      HviCopyMemory((__int64)a2, (__int64)a3, a4);
      goto LABEL_9;
    }
    v11 = HviCopyMemoryNonTemporal(a2, a3, a4);
  }
  else
  {
    if ( !v7 )
    {
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        RtlCopyVolatileMemory(a2, a3, a4);
      else
        RtlCopyFromUser(a2, a3, a4);
      goto LABEL_5;
    }
    v10 = a4;
    if ( a4 >= 8 )
    {
      RtlCopyMemoryNonTemporal(a2, a3, a4);
      goto LABEL_9;
    }
    memmove(a2, a3, a4);
    v11 = RtlFlushNonVolatileMemory(-1LL, a2, v10, 0LL);
  }
  v6 = v11;
LABEL_9:
  if ( v6 < 0 )
    RtlRaiseStatus(v6);
LABEL_5:
  result = a6;
  *a6 = v7 == 0;
  return result;
}
