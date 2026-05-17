/*
 * XREFs of RtlSetThreadPreferredUILanguages2 @ 0x18006F580
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180006B20 (RtlpMuiRegFreeLanguageList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180006B50 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpMuiRegDupLanguageList @ 0x18006F730 (RtlpMuiRegDupLanguageList.c)
 *     RtlpDupTebLanguageList @ 0x18006F7BC (RtlpDupTebLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18006F928 (RtlpFreeTebLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages2(int a1, __int16 *a2, int *a3, __int64 *a4)
{
  __int64 Heap_0; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  _DWORD v14[10]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
    return RtlSetThreadPreferredUILanguages(a1, a2, a3);
  *a4 = 0LL;
  v14[0] = 0;
  v15 = 0;
  RtlGetThreadPreferredUILanguages(a1 | 0x30, v14, 0LL, &v15);
  Heap_0 = RtlAllocateHeap_0();
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
      *(_QWORD *)(Heap_0 + 8) = v10;
      if ( !v10 )
        goto LABEL_17;
      *(_DWORD *)(v10 + 40) &= ~0x40u;
    }
    if ( !NtCurrentTeb()->UserPrefLanguages )
      goto LABEL_11;
    v11 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
    *(_QWORD *)(Heap_0 + 16) = v11;
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)v11 + 40LL) &= ~0x40u;
LABEL_11:
      *(_DWORD *)(Heap_0 + 24) = NtCurrentTeb()->ClientId.UniqueThread;
      v12 = RtlSetThreadPreferredUILanguages(a1, a2, a3);
      if ( v12 >= 0 )
      {
        *a4 = Heap_0;
        return (unsigned int)v12;
      }
LABEL_18:
      RtlpMuiRegFreeLanguageList(*(_QWORD *)Heap_0);
      RtlpMuiRegFreeLanguageList(*(_QWORD *)(Heap_0 + 8));
      RtlpFreeTebLanguageList(*(_QWORD *)(Heap_0 + 16));
      RtlFreeHeap_0();
      return (unsigned int)v12;
    }
LABEL_17:
    v12 = -1073741801;
    goto LABEL_18;
  }
  return 3221225495LL;
}
