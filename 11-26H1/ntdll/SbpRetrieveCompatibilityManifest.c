/*
 * XREFs of SbpRetrieveCompatibilityManifest @ 0x18006468C
 * Callers:
 *     SbpDetermineDllContext @ 0x180064490 (SbpDetermineDllContext.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlQueryInformationActivationContext @ 0x18004DED0 (RtlQueryInformationActivationContext.c)
 */

__int64 __fastcall SbpRetrieveCompatibilityManifest(struct _ACTIVATION_CONTEXT *a1, __int64 *a2, unsigned __int64 *a3)
{
  struct _PEB *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int v9; // r12d
  int v10; // ecx
  unsigned __int64 v11; // rsi
  __int64 Heap_0; // rdi
  unsigned __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v5 = *a2;
  *a2 = 0LL;
  v14 = 0LL;
  v9 = 1073741826;
  if ( a1 == v3->ImageBaseAddress )
    v9 = 2;
  v10 = RtlQueryInformationActivationContext(v9, a1, 0LL, 6, 0LL, 0LL, &v14);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
  {
    v11 = v14;
    if ( !v14 )
      return 1;
    if ( v14 > *a3 )
    {
      Heap_0 = RtlAllocateHeap_0();
      if ( !Heap_0 )
        return v4;
    }
    else
    {
      Heap_0 = v5;
    }
    if ( (int)RtlQueryInformationActivationContext(v9, a1, 0LL, 6, Heap_0, v11, &v14) >= 0 )
    {
      *a3 = v14;
      *a2 = Heap_0;
      return 1;
    }
    if ( Heap_0 && Heap_0 != v5 )
      RtlFreeHeap_0();
  }
  return v4;
}
