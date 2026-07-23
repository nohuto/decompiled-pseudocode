/*
 * XREFs of AVrfpParseVerifierDllsString @ 0x180114B3C
 * Callers:
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 AVrfpParseVerifierDllsString()
{
  void *ProcessHeap; // rbp
  PVOID Heap_0; // rax
  __int64 v2; // rbx
  __int64 *v3; // rax
  bool v4; // zf
  wchar_t *i; // rbx
  wchar_t v6; // ax
  wchar_t v7; // ax
  const WCHAR *v8; // rsi
  PVOID v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap_0 = RtlAllocateHeap_0(ProcessHeap, 0, 0x48uLL);
  v2 = (__int64)Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap_0, 0, 0x48uLL);
  *(UNICODE_STRING *)(v2 + 16) = VerifierDllString;
  v3 = (__int64 *)qword_1801CC538;
  if ( *(__int64 **)qword_1801CC538 != &AVrfpVerifierProvidersList )
LABEL_20:
    __fastfail(3u);
  v4 = UseWOW64 == 0;
  *(_QWORD *)v2 = &AVrfpVerifierProvidersList;
  *(_QWORD *)(v2 + 8) = v3;
  *v3 = v2;
  qword_1801CC538 = v2;
  if ( v4 )
  {
    for ( i = &AVrfpVerifierDllsString; ; ++i )
    {
      v6 = *i;
      if ( !*i )
        break;
      while ( v6 == 32 || v6 == 9 )
        v6 = *++i;
      v7 = *i;
      v8 = i;
      if ( !*i )
        break;
      do
      {
        if ( v7 == 32 )
          break;
        if ( v7 == 9 )
          break;
        v7 = *++i;
      }
      while ( *i );
      if ( v8 == i )
        break;
      *i = 0;
      if ( wcsicmp(v8, L"verifier.dll") )
      {
        v9 = RtlAllocateHeap_0(ProcessHeap, 0, 0x48uLL);
        v10 = (__int64)v9;
        if ( !v9 )
          return 3221225495LL;
        memset_thunk_772440563353939046(v9, 0, 0x48uLL);
        RtlInitUnicodeString((PUNICODE_STRING)(v10 + 16), v8);
        v11 = (__int64 *)qword_1801CC538;
        if ( *(__int64 **)qword_1801CC538 != &AVrfpVerifierProvidersList )
          goto LABEL_20;
        *(_QWORD *)v10 = &AVrfpVerifierProvidersList;
        *(_QWORD *)(v10 + 8) = v11;
        *v11 = v10;
        qword_1801CC538 = v10;
      }
    }
  }
  return 0LL;
}
