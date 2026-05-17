/*
 * XREFs of RtlDosSearchPath_U @ 0x1800A4640
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_U @ 0x180036180 (RtlGetFullPathName_U.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlDetermineDosPathNameType_U @ 0x18009BB50 (RtlDetermineDosPathNameType_U.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     RtlDoesFileExists_UEx @ 0x1800A5EEC (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_U(
        unsigned __int64 a1,
        wchar_t *a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdx
  wchar_t *i; // rax
  unsigned int v12; // r15d
  unsigned int v13; // edi
  const wchar_t *Heap_0; // rsi
  size_t v15; // r13
  wchar_t *j; // rdi
  wchar_t v17; // ax
  unsigned int FullPathName_U; // ebx
  _OWORD v20[3]; // [rsp+20h] [rbp-38h] BYREF

  v20[0] = 0LL;
  if ( (unsigned int)RtlDetermineDosPathNameType_U((__int16 *)a2) != 5 )
  {
    LOBYTE(v10) = 1;
    if ( (unsigned __int8)RtlDoesFileExists_UEx(a2, v10) )
      return RtlGetFullPathName_U(a2, a4, a5, a6);
    return 0LL;
  }
  for ( i = a2; *i; ++i )
  {
    if ( *i == 46 )
      goto LABEL_30;
  }
  if ( !a3 )
  {
LABEL_30:
    v12 = 0;
    goto LABEL_7;
  }
  if ( (int)RtlInitUnicodeStringEx(v20, a3) < 0 )
    return 0LL;
  v12 = LOWORD(v20[0]);
LABEL_7:
  if ( (int)RtlInitUnicodeStringEx(v20, a1) < 0 )
    return 0LL;
  if ( (int)RtlInitUnicodeStringEx(v20, a2) < 0 )
    return 0LL;
  v13 = LOWORD(v20[0]);
  Heap_0 = (const wchar_t *)RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 0LL;
  v15 = v13;
  while ( 1 )
  {
    for ( j = (wchar_t *)Heap_0; ; ++j )
    {
      v17 = *(_WORD *)a1;
      if ( !*(_WORD *)a1 )
        break;
      a1 += 2LL;
      if ( v17 == 59 )
        break;
      *j = v17;
    }
    if ( j != Heap_0 && *(j - 1) != 92 )
      *j++ = 92;
    a1 &= -(__int64)(*(_WORD *)a1 != 0);
    memmove(j, a2, v15);
    if ( v12 )
      memmove((char *)j + v15, a3, v12 + 2LL);
    else
      *(wchar_t *)((char *)j + v15) = 0;
    if ( (unsigned __int8)RtlDoesFileExists_UEx(Heap_0, 0LL) )
      break;
    if ( !a1 )
    {
      RtlFreeHeap_0();
      return 0LL;
    }
  }
  FullPathName_U = RtlGetFullPathName_U(Heap_0, a4, a5, a6);
  RtlFreeHeap_0();
  return FullPathName_U;
}
