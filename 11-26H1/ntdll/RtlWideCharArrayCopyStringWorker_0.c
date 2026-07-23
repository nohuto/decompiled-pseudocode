/*
 * XREFs of RtlWideCharArrayCopyStringWorker_0 @ 0x18011D5AC
 * Callers:
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18011D4E0 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWideCharArrayCopyStringWorker_0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  const wchar_t *v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11

  result = 0LL;
  v4 = L"\\";
  v5 = 0x7FFFLL;
  v6 = 0LL;
  if ( a2 )
  {
    while ( v5 )
    {
      if ( *v4 )
      {
        *(const wchar_t *)((char *)v4 + a1 - (_QWORD)L"\\") = *v4;
        --v5;
        ++v4;
        ++v6;
        if ( --a2 )
          continue;
      }
      if ( a2 || !v5 )
        break;
      goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( *v4 )
      result = 2147483653LL;
  }
  *a3 = v6;
  return result;
}
