/*
 * XREFs of LdrpInitializeApplicationVerifierPackage @ 0x180111D40
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     RtlQueryImageFileKeyOption @ 0x1800D1480 (RtlQueryImageFileKeyOption.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 */

__int64 __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        void *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int16 *v9; // rbp
  unsigned __int16 v10; // r15
  int v11; // esi
  const WCHAR *v12; // rdi
  __int64 result; // rax
  int v14; // ecx
  ULONG *v15; // rax
  ULONG v16; // edi
  bool v17; // sf
  ULONG v18; // ecx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  DestinationString = 0LL;
  v9 = a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
  }
  else
  {
    if ( !a3 )
      goto LABEL_9;
    v10 = *a1;
    v11 = *a1;
    v12 = (const WCHAR *)(*((_QWORD *)a1 + 1) + *a1);
    if ( *a1 )
    {
      do
      {
        if ( *(v12 - 1) == 92 )
          break;
        --v12;
        v11 -= 2;
      }
      while ( v11 );
    }
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( RtlCompareUnicodeStrings(
           v12,
           (unsigned __int64)(unsigned __int16)(v10 - v11) >> 1,
           DestinationString.Buffer,
           (unsigned __int64)DestinationString.Length >> 1,
           1u) )
    {
LABEL_9:
      LdrpShouldCreateStackTraceDb = (*(_DWORD *)(a2 + 188) & 0x2000100) != 0;
      LOBYTE(a1) = a3;
      result = AVrfInitializeVerifier(a1, v9, a4, 0LL, a5, a6);
      v14 = *(_DWORD *)(a2 + 188);
      if ( (int)result < 0 )
      {
        dword_1801C4588 = 0;
        *(_DWORD *)(a2 + 188) = v14 & 0xFDFFFEFF;
        *(_DWORD *)RtlpDebugPageHeapTable = 0;
        return result;
      }
      if ( (v14 & 0x2000000) != 0 )
      {
        v15 = (ULONG *)RtlpDebugPageHeapTable;
        *(_DWORD *)(a2 + 188) = v14 & 0xFFFF670F;
        LdrpShouldCreateStackTraceDb = 1;
        v16 = *v15;
        *v15 = -1;
        if ( a4 )
        {
          v17 = RtlQueryImageFileKeyOption(a4, (wchar_t *)L"PageHeapFlags", 4, v15, 4u, 0LL) < 0;
          v15 = (ULONG *)RtlpDebugPageHeapTable;
          if ( v17 )
            *(_DWORD *)RtlpDebugPageHeapTable = -1;
        }
        v18 = *v15;
        if ( *v15 == -1 )
        {
          LOWORD(v18) = v16;
          *v15 = v16;
        }
        if ( (((v18 & 0x400) != 0) & _bittest(&AVrfpVerifierFlags, 0xFu)) != 0 )
        {
          LdrpLogInternal(
            "minkernel\\ldr\\ldrinit.c",
            8992,
            (__int64)"LdrpInitializeApplicationVerifierPackage",
            2,
            "Per-DLL page heap is disabled since fast fill heap is enabled\n");
          *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
        }
        dword_1801C4588 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    }
  }
  return 0LL;
}
