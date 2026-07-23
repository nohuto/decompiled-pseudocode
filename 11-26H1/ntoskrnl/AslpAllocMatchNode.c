/*
 * XREFs of AslpAllocMatchNode @ 0x140890C0C
 * Callers:
 *     AslpParsePattern @ 0x140890D4C (AslpParsePattern.c)
 * Callees:
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall AslpAllocMatchNode(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  unsigned int v7; // r9d
  __int64 v8; // rcx

  v6 = AslAlloc(a1, 48LL);
  v7 = 0;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = v6;
    *(_QWORD *)v6 = v6;
    *(_DWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 24) = a2;
    *(_QWORD *)(v6 + 16) = a1;
    v8 = *a3;
    if ( *(__int64 **)(*a3 + 8) != a3 )
      __fastfail(3u);
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v6 + 8) = a3;
    *(_QWORD *)(v8 + 8) = v6;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
