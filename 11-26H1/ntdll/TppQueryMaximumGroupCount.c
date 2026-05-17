/*
 * XREFs of TppQueryMaximumGroupCount @ 0x1800CB518
 * Callers:
 *     TpInitializePackage @ 0x1800CB1A4 (TpInitializePackage.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtQuerySystemInformationEx @ 0x180161D10 (NtQuerySystemInformationEx.c)
 */

__int64 TppQueryMaximumGroupCount()
{
  unsigned __int16 v0; // di
  __int64 Heap_0; // rbx
  int i; // eax
  int v3; // eax
  int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v0 = 0;
  Heap_0 = 0LL;
  for ( i = 0; ; i = v5 )
  {
    v6 = 4;
    v3 = NtQuerySystemInformationEx(107LL, &v6, 4LL, Heap_0, i, &v5);
    if ( v3 >= 0 )
      break;
    if ( v3 != -1073741820 )
      goto LABEL_9;
    if ( Heap_0 )
      RtlFreeHeap_0();
    Heap_0 = RtlAllocateHeap_0();
    if ( !Heap_0 )
      return v0;
  }
  v0 = *(_WORD *)(Heap_0 + 8);
LABEL_9:
  if ( Heap_0 )
    RtlFreeHeap_0();
  return v0;
}
