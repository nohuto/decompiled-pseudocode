/*
 * XREFs of RtlCreateTagHeap @ 0x1800CB280
 * Callers:
 *     CsrClientConnectToServer @ 0x1800CA4C0 (CsrClientConnectToServer.c)
 *     TpInitializePackage @ 0x1800CB1A4 (TpInitializePackage.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlDebugCreateTagHeap @ 0x180146E14 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlStringCbCopyW @ 0x1800CCF60 (RtlStringCbCopyW.c)
 *     RtlpAllocateTags @ 0x180144718 (RtlpAllocateTags.c)
 *     RtlDebugCreateTagHeap @ 0x180146E14 (RtlDebugCreateTagHeap.c)
 */

__int64 __fastcall RtlCreateTagHeap(void *Src, int a2, __int64 a3, _WORD *a4)
{
  __int64 v8; // r14
  char v9; // si
  int v11; // ebx
  unsigned int TagHeap; // ebx
  int v13; // ebx
  int v14; // edx
  _WORD *v15; // rsi
  _WORD *v17; // rcx
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
    return 0LL;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = RtlAllocateHeap_0();
    if ( !RtlpGlobalTagHeap )
      return 0LL;
  }
  if ( Src && (*((_DWORD *)Src + 4) == -571548178 || (*((_DWORD *)Src + 29) & 0x1000000) != 0) )
    return 0LL;
  if ( !Src )
  {
LABEL_14:
    v13 = 0;
    v14 = 0;
    if ( *a4 == 33 )
    {
      v15 = a4 + 1;
      while ( *a4++ )
        ;
    }
    else
    {
      v15 = 0LL;
    }
    v17 = a4;
    while ( *v17 )
    {
      while ( *v17++ )
        ;
      ++v14;
    }
    if ( !v14 || (Tags = RtlpAllocateTags(Src), (v19 = Tags) == 0) )
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
      if ( !a3 )
        goto LABEL_39;
      v22 = -1LL;
      do
        ++v22;
      while ( *(_WORD *)(a3 + 2 * v22) );
      v23 = v22;
      if ( v22 )
      {
        if ( v22 < 0x13 )
          v20 = 23 - v22;
        else
          v22 = 0LL;
        v8 = a3 & -(__int64)(v23 < 0x13);
      }
      else
      {
LABEL_39:
        v22 = 0LL;
      }
      while ( *a4 )
      {
        v24 = v19 + 20;
        if ( v8 )
        {
          RtlStringCbCopyW(v19 + 20, 2 * v20);
          v24 += 2 * v22;
        }
        RtlStringCbCopyW(v24, 2 * (v20 - v22));
        while ( *a4++ )
          ;
        v19 = v25 + 72;
      }
      goto LABEL_46;
    }
    RtlStringCbCopyW(Tags + 20, 46LL);
    goto LABEL_30;
  }
  v11 = *((_DWORD *)Src + 29) | a2;
  if ( (v11 & 0x61000000) == 0 || (v11 & 0x10000000) != 0 )
  {
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v27 = 1;
    }
    goto LABEL_14;
  }
  TagHeap = RtlDebugCreateTagHeap(Src);
LABEL_47:
  if ( v9 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return TagHeap;
}
