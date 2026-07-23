/*
 * XREFs of ApiSetpSearchForApiSetHost @ 0x1406DD6B0
 * Callers:
 *     ApiSetResolveToHost @ 0x14052B7C8 (ApiSetResolveToHost.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForApiSetHost(__int64 a1, const WCHAR *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v6; // edi
  SIZE_T v7; // r13
  const WCHAR *v8; // r10
  int v10; // esi
  int v11; // ebp
  __int64 v12; // r14
  LONG v13; // eax

  v5 = a4 + *(unsigned int *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 20) - 1;
  v7 = a3;
  v8 = a2;
  v10 = 1;
  while ( v10 <= v6 )
  {
    v11 = (v10 + v6) >> 1;
    v12 = a4 + *(unsigned int *)(a1 + 16) + 20LL * v11;
    v13 = RtlCompareUnicodeStrings(
            v8,
            v7,
            (PCWCH)(a4 + *(unsigned int *)(v12 + 4)),
            (unsigned __int64)*(unsigned int *)(v12 + 8) >> 1,
            1u);
    if ( v13 >= 0 )
    {
      if ( v13 <= 0 )
        return v12;
      v10 = v11 + 1;
    }
    else
    {
      v6 = v11 - 1;
    }
    v8 = a2;
  }
  return v5;
}
