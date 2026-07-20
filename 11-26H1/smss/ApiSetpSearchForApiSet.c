/*
 * XREFs of ApiSetpSearchForApiSet @ 0x140007AA0
 * Callers:
 *     ApiSetResolveToHost @ 0x1400084BC (ApiSetResolveToHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  unsigned int v6; // eax
  const WCHAR *v7; // r9
  int v8; // r11d
  __int64 v9; // r10
  WCHAR v10; // cx
  int v11; // r11d
  int v12; // r10d
  int v13; // r9d
  char *v14; // rdx
  bool v15; // cf
  bool v16; // cc
  char *v17; // rdx

  v3 = 0LL;
  v6 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a1[6];
    v9 = a3;
    do
    {
      v10 = *v7;
      if ( *v7 >= 0x41u && v10 <= 0x5Au )
        v10 += 32;
      ++v7;
      v6 = v6 * v8 + v10;
      --v9;
    }
    while ( v9 );
  }
  v11 = 0;
  v12 = a1[3] - 1;
  while ( v11 <= v12 )
  {
    v13 = (v11 + v12) >> 1;
    v14 = (char *)a1 + (unsigned int)a1[5];
    v15 = v6 < *(_DWORD *)&v14[8 * v13];
    v16 = v6 <= *(_DWORD *)&v14[8 * v13];
    v17 = &v14[8 * v13];
    if ( v15 )
    {
      v12 = v13 - 1;
    }
    else
    {
      if ( v16 )
      {
        v3 = (__int64)&a1[6 * *((unsigned int *)v17 + 1)] + (unsigned int)a1[4];
        if ( v3
          && RtlCompareUnicodeStrings(
               a2,
               a3,
               (PCWCH)((char *)a1 + *(unsigned int *)(v3 + 4)),
               (unsigned __int64)*(unsigned int *)(v3 + 12) >> 1,
               1u) )
        {
          return 0LL;
        }
        return v3;
      }
      v11 = v13 + 1;
    }
  }
  return v3;
}
