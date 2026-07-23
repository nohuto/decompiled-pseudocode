/*
 * XREFs of CmpGetCompleteFileName @ 0x1408BBE90
 * Callers:
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiAllocateMemory @ 0x1404B7C28 (CmSiAllocateMemory.c)
 */

__int64 __fastcall CmpGetCompleteFileName(UNICODE_STRING *Source, int a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned int v4; // ebx
  const WCHAR *v8; // rbp
  __int64 v10; // rax
  unsigned __int16 v11; // r14
  __int64 Memory; // rax

  v4 = 0;
  v8 = (const WCHAR *)CmFileNameExtensions[a2];
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v8[v10] );
    v11 = Source->Length + 2 * (v10 + 1);
    Memory = CmSiAllocateMemory();
    a4->Buffer = (wchar_t *)Memory;
    if ( Memory )
    {
      a4->Length = 0;
      a4->MaximumLength = v11;
      RtlAppendUnicodeStringToString(a4, Source);
      RtlAppendUnicodeToString(a4, v8);
    }
    else
    {
      v4 = -1073741670;
      SetFailureLocation(a3, 0, 48, -1073741670, 16);
    }
  }
  else
  {
    *a4 = *Source;
  }
  return v4;
}
