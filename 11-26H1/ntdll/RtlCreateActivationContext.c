/*
 * XREFs of RtlCreateActivationContext @ 0x1800A1F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpValidateActivationContextData @ 0x1800A20D8 (RtlpValidateActivationContextData.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800A2738 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D4A4 (RtlpPlaceActivationContextOnLiveList.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateActivationContext(int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v8; // ebx
  _QWORD *Heap_0; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // rax

  if ( (char *)a2 == "Actx " )
  {
    DbgPrintEx(51, 0, "SXS: %s() passed the empty activation context data\n", "RtlCreateActivationContext");
    return (unsigned int)-1073741811;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( a1 || !a2 || a3 > 0x10000 || !a6 )
    return (unsigned int)-1073741811;
  v8 = RtlpValidateActivationContextData();
  if ( v8 >= 0 )
  {
    Heap_0 = (_QWORD *)RtlAllocateHeap_0();
    if ( Heap_0 )
    {
      v10 = Heap_0 + 1;
      *Heap_0 = 1733124929LL;
      v11 = Heap_0 + 15;
      v12 = 0LL;
      v13 = *(unsigned int *)(*(unsigned int *)(a2 + 24) + a2 + 8);
      v14 = Heap_0 + 17;
      if ( (unsigned int)v13 <= 0x20 )
        v12 = v14;
      v8 = RtlpInitializeAssemblyStorageMap(v11, v13, v12);
      if ( v8 < 0 )
      {
        RtlFreeHeap_0();
      }
      else
      {
        v10[5] = a5;
        *v10 = 1LL;
        v10[3] = a2;
        v10[4] = a4;
        *((_OWORD *)v10 + 3) = 0LL;
        *((_OWORD *)v10 + 4) = 0LL;
        *((_OWORD *)v10 + 5) = 0LL;
        *((_OWORD *)v10 + 6) = 0LL;
        memset_thunk_772440563353939046(v10 + 49, 0, 0x80uLL);
        *((_DWORD *)v10 + 96) = 0;
        if ( g_SxsKeepActivationContextsAlive )
          RtlpPlaceActivationContextOnLiveList(v10);
        *a6 = v10;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
