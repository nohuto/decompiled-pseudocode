/*
 * XREFs of EventDataDescCreateString @ 0x1404DF7A0
 * Callers:
 *     IopLiveDumpTraceEventGeneric @ 0x1405DA220 (IopLiveDumpTraceEventGeneric.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EventDataDescCreateString(__int64 a1, const wchar_t *a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  __int64 result; // rax

  if ( a2 && *a2 )
  {
    v3 = -1LL;
    v4 = a3;
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    if ( v5 >= v4 )
    {
      v3 = v4;
    }
    else
    {
      do
        ++v3;
      while ( a2[v3] );
    }
    result = 2 * v3 + 2;
  }
  else
  {
    a2 = L"NULL";
    result = 10LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
