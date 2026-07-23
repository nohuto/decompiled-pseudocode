/*
 * XREFs of PfpDeprioritizeOldPagesInWs @ 0x140AF2140
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MmUpdateOldWorkingSetPages @ 0x1404C3F54 (MmUpdateOldWorkingSetPages.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PfpDeprioritizeOldPagesInWs(__int64 a1, char a2)
{
  size_t v4; // r8
  void *v5; // rdx
  unsigned int v6; // ecx
  int updated; // ebx
  char v8; // r8
  ULONG_PTR BugCheckParameter1[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  *(_OWORD *)BugCheckParameter1 = 0LL;
  v11 = 0;
  Object = 0LL;
  if ( *(_DWORD *)(a1 + 24) == 24 )
  {
    if ( a2 )
      ProbeForRead(*(volatile void **)(a1 + 16), 0x18uLL, 8u);
    v4 = *(unsigned int *)(a1 + 24);
    v5 = *(void **)(a1 + 16);
    if ( a2 )
      RtlCopyFromUser(BugCheckParameter1, v5, v4);
    else
      RtlCopyVolatileMemory(BugCheckParameter1, v5, v4);
    if ( LODWORD(BugCheckParameter1[0]) != 3
      || (v11 & 0xFFFFFFC0) != 0
      || (v6 = v11 & 0xF, v6 > 8)
      || ((v11 >> 4) & 3) == 3
      || v6 == 8 && ((v11 >> 4) & 3) == 0 )
    {
      updated = -1073741811;
    }
    else
    {
      updated = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1[1],
                  0x2000,
                  (__int64)PsProcessType,
                  a2,
                  0x73576650u,
                  &Object,
                  0LL,
                  0LL);
      if ( updated >= 0 )
      {
        v8 = 0;
        if ( ((v11 >> 4) & 3) != 0 )
        {
          v8 = 1;
          if ( ((v11 >> 4) & 3) == 1 )
            v8 = 3;
        }
        updated = MmUpdateOldWorkingSetPages((ULONG_PTR)Object, v11 & 0xF, v8);
      }
    }
  }
  else
  {
    updated = -1073741306;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x73576650u);
  return (unsigned int)updated;
}
