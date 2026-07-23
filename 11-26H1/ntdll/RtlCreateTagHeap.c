/*
 * XREFs of RtlCreateTagHeap @ 0x1800C89F0
 * Callers:
 *     CsrClientConnectToServer @ 0x1800C7C30 (CsrClientConnectToServer.c)
 *     TpInitializePackage @ 0x1800C8914 (TpInitializePackage.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlDebugCreateTagHeap @ 0x180146CC4 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlStringCbCopyW @ 0x1800CA6D0 (RtlStringCbCopyW.c)
 *     RtlpAllocateTags @ 0x1801445C8 (RtlpAllocateTags.c)
 *     RtlDebugCreateTagHeap @ 0x180146CC4 (RtlDebugCreateTagHeap.c)
 */

ULONG __cdecl RtlCreateTagHeap(PVOID HeapHandle, ULONG Flags, PWSTR TagPrefix, PWSTR TagNames)
{
  unsigned __int64 v8; // r14
  char v9; // si
  ULONG v11; // ebx
  ULONG TagHeap; // ebx
  int v13; // ebx
  int v14; // edx
  PWSTR v15; // rsi
  PWSTR v17; // rcx
  __int64 Tags; // rax
  __int64 v19; // r10
  __int64 v20; // r12
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r10
  char v27; // [rsp+20h] [rbp-58h]

  v8 = 0LL;
  v9 = 0;
  v27 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = (__int64)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x2C0uLL);
    if ( !RtlpGlobalTagHeap )
      return 0;
  }
  if ( HeapHandle && (*((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0) )
    return 0;
  if ( !HeapHandle )
  {
LABEL_14:
    v13 = 0;
    v14 = 0;
    if ( *TagNames == 33 )
    {
      v15 = TagNames + 1;
      while ( *TagNames++ )
        ;
    }
    else
    {
      v15 = 0LL;
    }
    v17 = TagNames;
    while ( *v17 )
    {
      while ( *v17++ )
        ;
      ++v14;
    }
    if ( !v14 || (Tags = RtlpAllocateTags(HeapHandle), (v19 = Tags) == 0) )
    {
LABEL_46:
      TagHeap = v13 << 18;
      v9 = v27;
      goto LABEL_47;
    }
    v20 = 23LL;
    v13 = *(unsigned __int16 *)(Tags + 16);
    if ( *(_WORD *)(Tags + 16) )
    {
      if ( v13 != 2048 )
        goto LABEL_31;
    }
    else if ( !v15 )
    {
LABEL_30:
      v19 += 72LL;
      v13 = *(unsigned __int16 *)(v19 + 16);
LABEL_31:
      if ( !TagPrefix )
        goto LABEL_39;
      v22 = -1LL;
      do
        ++v22;
      while ( TagPrefix[v22] );
      v23 = v22;
      if ( v22 )
      {
        if ( v22 < 0x13 )
          v20 = 23 - v22;
        else
          v22 = 0LL;
        v8 = (unsigned __int64)TagPrefix & -(__int64)(v23 < 0x13);
      }
      else
      {
LABEL_39:
        v22 = 0LL;
      }
      while ( *TagNames )
      {
        v24 = v19 + 20;
        if ( v8 )
        {
          RtlStringCbCopyW(v19 + 20, 2 * v20);
          v24 += 2 * v22;
        }
        RtlStringCbCopyW(v24, 2 * (v20 - v22));
        while ( *TagNames++ )
          ;
        v19 = v25 + 72;
      }
      goto LABEL_46;
    }
    RtlStringCbCopyW(Tags + 20, 46LL);
    goto LABEL_30;
  }
  v11 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v11 & 0x61000000) == 0 || (v11 & 0x10000000) != 0 )
  {
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v27 = 1;
    }
    goto LABEL_14;
  }
  TagHeap = RtlDebugCreateTagHeap((int)HeapHandle);
LABEL_47:
  if ( v9 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return TagHeap;
}
