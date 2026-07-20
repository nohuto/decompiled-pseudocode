/*
 * XREFs of ApiSetpSearchForApiSet @ 0x140008110
 * Callers:
 *     ApiSetResolveToHost @ 0x140008B40 (ApiSetResolveToHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  SIZE_T v4; // rbp
  unsigned int v6; // r9d
  const WCHAR *v7; // r10
  __int64 v8; // r11
  WCHAR v9; // ax
  int v10; // r11d
  int v11; // r10d
  int v12; // r8d
  char *v13; // rcx
  bool v14; // cf
  bool v15; // cc
  char *v16; // rcx

  v3 = 0LL;
  v4 = a3;
  v6 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v7;
      if ( (unsigned __int16)(*v7 - 65) <= 0x19u )
        v9 += 32;
      ++v7;
      v6 = v6 * a1[6] + v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = 0;
  v11 = a1[3] - 1;
  while ( v10 <= v11 )
  {
    v12 = (v10 + v11) >> 1;
    v13 = (char *)a1 + (unsigned int)a1[5];
    v14 = v6 < *(_DWORD *)&v13[8 * v12];
    v15 = v6 <= *(_DWORD *)&v13[8 * v12];
    v16 = &v13[8 * v12];
    if ( v14 )
    {
      v11 = v12 - 1;
    }
    else
    {
      if ( v15 )
      {
        v3 = (__int64)&a1[6 * *((unsigned int *)v16 + 1)] + (unsigned int)a1[4];
        if ( v3
          && RtlCompareUnicodeStrings(
               a2,
               v4,
               (PCWCH)((char *)a1 + *(unsigned int *)(v3 + 4)),
               *(_DWORD *)(v3 + 12) >> 1,
               1u) )
        {
          return 0LL;
        }
        return v3;
      }
      v10 = v12 + 1;
    }
  }
  return v3;
}
