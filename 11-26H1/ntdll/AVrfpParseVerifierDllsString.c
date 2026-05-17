/*
 * XREFs of AVrfpParseVerifierDllsString @ 0x18011535C
 * Callers:
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 AVrfpParseVerifierDllsString()
{
  void *Heap_0; // rax
  __int64 v1; // rbx
  __int64 *v2; // rax
  bool v3; // zf
  wchar_t *i; // rbx
  wchar_t v5; // ax
  wchar_t v6; // ax
  const WCHAR *v7; // rsi
  void *v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax

  Heap_0 = (void *)RtlAllocateHeap_0();
  v1 = (__int64)Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap_0, 0, 0x48uLL);
  *(_OWORD *)(v1 + 16) = VerifierDllString;
  v2 = (__int64 *)qword_1801CD4F8;
  if ( *(__int64 **)qword_1801CD4F8 != &AVrfpVerifierProvidersList )
LABEL_20:
    __fastfail(3u);
  v3 = UseWOW64 == 0;
  *(_QWORD *)v1 = &AVrfpVerifierProvidersList;
  *(_QWORD *)(v1 + 8) = v2;
  *v2 = v1;
  qword_1801CD4F8 = v1;
  if ( v3 )
  {
    for ( i = &AVrfpVerifierDllsString; ; ++i )
    {
      v5 = *i;
      if ( !*i )
        break;
      while ( 1 )
      {
        if ( v5 != 32 )
        {
          v6 = *i;
          if ( *i != 9 )
            break;
        }
        v5 = *++i;
      }
      v7 = i;
      if ( !v6 )
        break;
      do
      {
        if ( v6 == 32 )
          break;
        if ( v6 == 9 )
          break;
        v6 = *++i;
      }
      while ( *i );
      if ( v7 == i )
        break;
      *i = 0;
      if ( wcsicmp(v7, L"verifier.dll") )
      {
        v8 = (void *)RtlAllocateHeap_0();
        v9 = (__int64)v8;
        if ( !v8 )
          return 3221225495LL;
        memset_thunk_772440563353939046(v8, 0, 0x48uLL);
        RtlInitUnicodeString((PUNICODE_STRING)(v9 + 16), v7);
        v10 = (__int64 *)qword_1801CD4F8;
        if ( *(__int64 **)qword_1801CD4F8 != &AVrfpVerifierProvidersList )
          goto LABEL_20;
        *(_QWORD *)v9 = &AVrfpVerifierProvidersList;
        *(_QWORD *)(v9 + 8) = v10;
        *v10 = v9;
        qword_1801CD4F8 = v9;
      }
    }
  }
  return 0LL;
}
