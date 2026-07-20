/*
 * XREFs of ApiSetpSearchForApiSetHost @ 0x140009580
 * Callers:
 *     ApiSetResolveToHost @ 0x1400084BC (ApiSetResolveToHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSetHost(__int64 a1, const WCHAR *a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v5; // rsi
  int v6; // ebx
  SIZE_T v7; // r15
  int v10; // edi
  int v11; // r13d
  __int64 v12; // rax
  LONG v13; // eax
  __int64 v15; // [rsp+60h] [rbp+8h]

  v5 = a4 + *(unsigned int *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 20) - 1;
  v7 = a3;
  v10 = 1;
  while ( v10 <= v6 )
  {
    v11 = (v10 + v6) >> 1;
    v12 = a4 + *(unsigned int *)(a1 + 16) + 20LL * v11;
    v15 = v12;
    v13 = RtlCompareUnicodeStrings(
            a2,
            v7,
            (PCWCH)(a4 + *(unsigned int *)(v12 + 4)),
            (unsigned __int64)*(unsigned int *)(v12 + 8) >> 1,
            1u);
    if ( v13 >= 0 )
    {
      if ( v13 <= 0 )
        return v15;
      v10 = v11 + 1;
    }
    else
    {
      v6 = v11 - 1;
    }
  }
  return v5;
}
