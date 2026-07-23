/*
 * XREFs of AdtpBuildStringListString @ 0x140B6227C
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildStringListString(
        unsigned int *a1,
        __int64 a2,
        wchar_t **a3,
        __int64 a4,
        _DWORD *a5,
        char *a6)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned __int16 *v10; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  wchar_t *Pool2; // rbp
  char v15; // cl
  unsigned int v16; // r14d
  unsigned __int16 Length; // ax
  __int64 v18; // rdi
  const UNICODE_STRING *v19; // rdi
  UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v8 = 2;
  if ( a1 && *a1 )
  {
    v9 = *a1;
    v10 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 8LL);
    do
    {
      v8 += *v10 + 8;
      v10 += 12;
      --v9;
    }
    while ( v9 );
    if ( v8 > 0xFFFF )
      return 3221225485LL;
    v12 = v8 >> 1;
    v13 = (unsigned int)*a5;
    if ( (unsigned int)v13 + v12 >= 0x400 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return 3221225495LL;
      v15 = 1;
    }
    else
    {
      *a5 = v13 + v12;
      Pool2 = (wchar_t *)(a4 + 2 * v13);
      v15 = 0;
    }
    v16 = 0;
    *a6 = v15;
    Length = 0;
    Destination.MaximumLength = 2 * v12;
    v18 = *((_QWORD *)a1 + 1);
    Destination.Length = 0;
    Destination.Buffer = Pool2;
    if ( *a1 )
    {
      v19 = (const UNICODE_STRING *)(v18 + 8);
      do
      {
        RtlAppendUnicodeToString(&Destination, L"\r\n\t\t");
        RtlAppendUnicodeStringToString(&Destination, v19);
        ++v16;
        v19 = (const UNICODE_STRING *)((char *)v19 + 24);
      }
      while ( v16 < *a1 );
      Length = Destination.Length;
    }
    if ( a3 )
    {
      *a3 = Pool2;
      a3[1] = (wchar_t *)((unsigned int)Length + 2);
    }
    else
    {
      MEMORY[0] = Destination;
    }
  }
  else if ( a3 )
  {
    a3[1] = (wchar_t *)4;
    *a3 = L"-";
  }
  return 0LL;
}
