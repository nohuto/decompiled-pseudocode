/*
 * XREFs of CcCopyToCacheHelper @ 0x140480FF4
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     HviCopyMemory @ 0x140465548 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1404F2B70 (HviCopyMemoryNonTemporal.c)
 *     RtlFlushNonVolatileMemory @ 0x140531700 (RtlFlushNonVolatileMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyMemoryNonTemporal @ 0x140735A10 (RtlCopyMemoryNonTemporal.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

bool *__fastcall CcCopyToCacheHelper(__int64 a1, void *a2, void *a3, unsigned int a4, char a5, bool *a6)
{
  NTSTATUS v6; // ebx
  int v7; // esi
  bool *result; // rax
  SIZE_T v10; // rbp
  DWORD v11; // eax

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
    v11 = RtlFlushNonVolatileMemory((PVOID)0xFFFFFFFFFFFFFFFFLL, a2, v10, 0);
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
