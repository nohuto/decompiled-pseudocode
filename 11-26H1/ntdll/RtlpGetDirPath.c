/*
 * XREFs of RtlpGetDirPath @ 0x18009B03C
 * Callers:
 *     RtlpComputePath @ 0x18009B210 (RtlpComputePath.c)
 * Callees:
 *     wcschr @ 0x18012D710 (wcschr.c)
 *     wcsrchr @ 0x18012DCE0 (wcsrchr.c)
 */

const wchar_t *__fastcall RtlpGetDirPath(wchar_t *Str, _QWORD *a2)
{
  const wchar_t *v3; // rbx
  _QWORD *SubSystemTib; // rax
  wchar_t *v5; // rax
  wchar_t *v6; // rsi
  wchar_t *v7; // rax
  wchar_t *v8; // rcx
  const wchar_t *result; // rax
  __int64 v10; // rbx

  v3 = Str;
  if ( !Str )
  {
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && (v10 = SubSystemTib[1]) != 0 )
      v3 = *(const wchar_t **)(v10 + 8);
    else
      v3 = *(const wchar_t **)(LdrpImageEntry + 80);
  }
  v5 = wcschr(v3, 0x5Cu);
  v6 = v5;
  if ( !v5 )
    goto LABEL_9;
  v7 = wcsrchr(v5, 0x5Cu);
  v8 = v7 + 1;
  if ( v7 != v6 )
    v8 = v7;
  if ( v8 )
  {
    result = v3;
    *a2 = (char *)v8 - (char *)v3;
  }
  else
  {
LABEL_9:
    *a2 = 0LL;
    return 0LL;
  }
  return result;
}
