/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x18008F2B8
 * Callers:
 *     SdbpOpenCompressedDatabase @ 0x1800975B0 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x18008D264 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpReadMappedData @ 0x18008F444 (SdbpReadMappedData.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x18008F700 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpValidateRootTagSizes @ 0x18008F814 (SdbpValidateRootTagSizes.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

_DWORD *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *Heap; // rax
  _DWORD *v7; // rbx
  int v9; // eax
  const char *v10; // r9
  __int64 v11; // r8
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]

  v12 = 0LL;
  v13 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA80uLL);
  v7 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1LL, "SdbpOpenDatabaseInMemory", 2673LL, "Failed to allocate DB structure");
    return 0LL;
  }
  Heap[5] = a2;
  Heap[4] = 0;
  Heap[6] |= 1u;
  *((_QWORD *)Heap + 1) = a1;
  *(_QWORD *)Heap = 0LL;
  if ( !(unsigned int)SdbpReadMappedData(Heap, 0LL, &v12, 12LL) )
  {
    AslLogCallPrintf(1LL, "SdbpOpenDatabaseInMemory", 2684LL, "Can't read database header");
LABEL_5:
    AslFree(NtCurrentPeb()->ProcessHeap, v7);
    return 0LL;
  }
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = v13;
    if ( v13 != 1717724275 && (a3 & 2) == 0 )
    {
      v10 = "Magic does not match a valid value: [0x%lx]";
      v11 = 2690LL;
LABEL_11:
      AslLogCallPrintf(1LL, "SdbpOpenDatabaseInMemory", v11, v10, v9);
      goto LABEL_5;
    }
  }
  if ( !(unsigned int)SdbpValidateAndApplyCompatFlags(v7, &v12, a3) )
    goto LABEL_5;
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = SdbpValidateRootTagSizes(v7);
    if ( v9 < 0 )
    {
      v10 = "SdbpValidateAndApplyCompatFlags failed [%x]";
      v11 = 2702LL;
      goto LABEL_11;
    }
  }
  return v7;
}
