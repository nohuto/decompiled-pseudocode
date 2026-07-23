/*
 * XREFs of RtlSetThreadPreferredUILanguages2 @ 0x18008F9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180052280 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008FB80 (RtlpMuiRegDupLanguageList.c)
 *     RtlpDupTebLanguageList @ 0x18008FC0C (RtlpDupTebLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18008FD78 (RtlpFreeTebLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages2(int a1, __int16 *a2, int *a3, _QWORD *a4)
{
  PVOID Heap_0; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  ULONG NumberOfLanguages[10]; // [rsp+20h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
    return RtlSetThreadPreferredUILanguages(a1, a2, a3);
  *a4 = 0LL;
  NumberOfLanguages[0] = 0;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(a1 | 0x30, NumberOfLanguages, 0LL, &ReturnLength);
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( Heap_0 )
  {
    if ( NtCurrentTeb()->PreferredLanguages )
    {
      v13 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->PreferredLanguages);
      *(_QWORD *)Heap_0 = v13;
      if ( !v13 )
        goto LABEL_17;
      *(_DWORD *)(v13 + 40) &= ~0x40u;
    }
    if ( NtCurrentTeb()->MergedPrefLanguages )
    {
      v10 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->MergedPrefLanguages);
      *((_QWORD *)Heap_0 + 1) = v10;
      if ( !v10 )
        goto LABEL_17;
      *(_DWORD *)(v10 + 40) &= ~0x40u;
    }
    if ( !NtCurrentTeb()->UserPrefLanguages )
      goto LABEL_11;
    v11 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
    *((_QWORD *)Heap_0 + 2) = v11;
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)v11 + 40LL) &= ~0x40u;
LABEL_11:
      *((_DWORD *)Heap_0 + 6) = NtCurrentTeb()->ClientId.UniqueThread;
      v12 = RtlSetThreadPreferredUILanguages(a1, a2, a3);
      if ( v12 >= 0 )
      {
        *a4 = Heap_0;
        return (unsigned int)v12;
      }
LABEL_18:
      RtlpMuiRegFreeLanguageList(*(PVOID *)Heap_0);
      RtlpMuiRegFreeLanguageList(*((PVOID *)Heap_0 + 1));
      RtlpFreeTebLanguageList(*((PVOID *)Heap_0 + 2));
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
      return (unsigned int)v12;
    }
LABEL_17:
    v12 = -1073741801;
    goto LABEL_18;
  }
  return 3221225495LL;
}
