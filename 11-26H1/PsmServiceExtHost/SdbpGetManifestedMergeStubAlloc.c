/*
 * XREFs of SdbpGetManifestedMergeStubAlloc @ 0x18008E3FC
 * Callers:
 *     SdbGetMergeStubPath @ 0x18008D810 (SdbGetMergeStubPath.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetMergeSdbsDisabled @ 0x18008F004 (SdbpGetMergeSdbsDisabled.c)
 *     SdbpGetMergeSdbsSupported @ 0x18008F10C (SdbpGetMergeSdbsSupported.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslRegistryGetKey @ 0x180098F30 (AslRegistryGetKey.c)
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 *     AslPathToSystemPath @ 0x18009F190 (AslPathToSystemPath.c)
 *     RtlDownlevelGetNtSystemRoot @ 0x1800A26D8 (RtlDownlevelGetNtSystemRoot.c)
 */

__int64 __fastcall SdbpGetManifestedMergeStubAlloc(_QWORD *a1, const wchar_t *a2)
{
  __int64 v3; // r14
  wchar_t *Heap; // r13
  wchar_t *v5; // rsi
  NTSTATUS v7; // ebx
  int MergeSdbsDisabled; // eax
  int Key; // eax
  const wchar_t **v10; // rbx
  int v11; // r15d
  __int64 v12; // r15
  __int64 v13; // rax
  ULONG Length; // ebx
  ULONG v15; // eax
  const char *v16; // r9
  __int64 v17; // r8
  NTSTATUS v18; // eax
  __int64 v19; // rax
  ULONG v20; // ebx
  unsigned __int64 v21; // r12
  const wchar_t *NtSystemRoot; // rax
  const wchar_t *v23; // rbx
  size_t v24; // r8
  ULONG v25; // [rsp+30h] [rbp-20h]
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-10h] BYREF
  __int64 v28; // [rsp+48h] [rbp-8h]
  ULONG Index; // [rsp+A0h] [rbp+50h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+58h] BYREF

  Index = 0;
  v3 = 0LL;
  ResultLength = 0;
  Heap = 0LL;
  v28 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  KeyHandle = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( (unsigned int)SdbpGetMergeSdbsSupported() )
  {
    MergeSdbsDisabled = SdbpGetMergeSdbsDisabled(&Index);
    v7 = MergeSdbsDisabled;
    if ( MergeSdbsDisabled < 0 )
    {
      AslLogCallPrintf(
        1LL,
        "SdbpGetManifestedMergeStubAlloc",
        1164LL,
        "SdbpGetMergeSdbsDisabled failed [%x]",
        MergeSdbsDisabled);
      return (unsigned int)v7;
    }
    if ( !Index )
    {
      Key = AslRegistryGetKey(
              &KeyHandle,
              L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates\\ManifestedMergeStubSdbs",
              2147483904LL);
      v7 = Key;
      if ( Key < 0 )
      {
        if ( Key != -1073741772 )
          AslLogCallPrintf(
            1LL,
            "SdbpGetManifestedMergeStubAlloc",
            1180LL,
            "AslRegistryGetKey failed to open ManifestedMergeStubSdbs key [%x]",
            Key);
        goto LABEL_49;
      }
      v10 = (const wchar_t **)&off_1800B4FD8;
      v11 = 1;
      do
      {
        if ( !_wcsicmp(a2, *v10) )
          break;
        ++v11;
        v10 += 4;
      }
      while ( (__int64)v10 < (__int64)&qword_1800B50F8 );
      v3 = v28;
      v5 = 0LL;
      if ( v11 >= 10 )
      {
LABEL_48:
        v7 = -1073741772;
LABEL_49:
        if ( (char *)KeyHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          ZwClose(KeyHandle);
        if ( v3 )
          AslFree(NtCurrentPeb()->ProcessHeap, v3);
        if ( Heap )
          AslFree(NtCurrentPeb()->ProcessHeap, Heap);
        if ( v5 )
          AslFree(NtCurrentPeb()->ProcessHeap, v5);
        return (unsigned int)v7;
      }
      v12 = -1LL;
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
      Length = 2 * v13 + 18;
      v25 = Length;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      v15 = 0;
      if ( !Heap )
      {
        v16 = "Failed to allocate partial info.";
        v17 = 1200LL;
        goto LABEL_19;
      }
      while ( 1 )
      {
        Index = v15;
        v18 = ZwEnumerateValueKey(KeyHandle, v15, KeyValuePartialInformation, Heap, Length, &ResultLength);
        v7 = v18;
        if ( v18 != -2147483643 && v18 != -1073741789 )
        {
          if ( v18 == -2147483622 )
            goto LABEL_48;
          if ( v18 < 0 )
          {
            AslLogCallPrintf(1LL, "SdbpGetManifestedMergeStubAlloc", 1219LL, "Failed to query partial info.");
            goto LABEL_49;
          }
          if ( *((_DWORD *)Heap + 1) == 1 && !_wcsicmp(a2, Heap + 6) )
            break;
        }
        Length = v25;
        v15 = Index + 1;
      }
      v19 = -1LL;
      do
        ++v19;
      while ( a2[v19] );
      v20 = 2 * v19 + 538;
      v21 = v20;
      v5 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v20);
      if ( !v5 )
      {
        v16 = "Failed to allocate basic info.";
        v17 = 1236LL;
        goto LABEL_19;
      }
      v7 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, v5, v20, &ResultLength);
      if ( v7 < 0 )
      {
        AslLogCallPrintf(1LL, "SdbpGetManifestedMergeStubAlloc", 1247LL, "Failed to query basic info.");
        goto LABEL_49;
      }
      if ( (unsigned __int64)ResultLength + 2 > v21 )
      {
        v7 = -1073741789;
        AslLogCallPrintf(1LL, "SdbpGetManifestedMergeStubAlloc", 1252LL, "Buffer too small to query basic info.");
        goto LABEL_49;
      }
      NtSystemRoot = (const wchar_t *)RtlDownlevelGetNtSystemRoot();
      v23 = NtSystemRoot;
      v24 = -1LL;
      do
        ++v24;
      while ( NtSystemRoot[v24] );
      if ( _wcsnicmp(NtSystemRoot, v5 + 6, v24) )
      {
        v7 = AslStringDuplicate(&v26, v5 + 6);
        if ( v7 < 0 )
        {
          AslLogCallPrintf(1LL, "SdbpGetManifestedMergeStubAlloc", 1279LL, "Failed to duplicate stub path.");
          goto LABEL_41;
        }
      }
      else
      {
        do
          ++v12;
        while ( v23[v12] );
        v7 = AslPathToSystemPath(&v26, &v5[v12 + 6]);
        if ( v7 < 0 )
        {
          AslLogCallPrintf(1LL, "SdbpGetManifestedMergeStubAlloc", 1272LL, "Failed to allocate or convert stub path.");
LABEL_41:
          v3 = v26;
          goto LABEL_49;
        }
      }
      v3 = v26;
      if ( v26 )
      {
        v7 = 0;
        *a1 = v26;
        v3 = 0LL;
        goto LABEL_49;
      }
      v16 = "Failed to allocate stub path.";
      v17 = 1286LL;
LABEL_19:
      v7 = -1073741801;
      AslLogCallPrintf(1LL, "SdbpGetManifestedMergeStubAlloc", v17, v16);
      goto LABEL_49;
    }
  }
  return (unsigned int)-1073741772;
}
