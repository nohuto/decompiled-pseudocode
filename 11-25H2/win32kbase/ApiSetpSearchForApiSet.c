/*
 * XREFs of ApiSetpSearchForApiSet @ 0x14013FBF0
 * Callers:
 *     ApiSetResolveToHost @ 0x14010FD2C (ApiSetResolveToHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  SIZE_T v3; // rsi
  unsigned int v6; // r10d
  const WCHAR *v7; // r11
  __int64 v8; // rbx
  WCHAR v9; // dx
  __int64 v10; // rbx
  int v11; // ecx
  int i; // r8d
  int v14; // edx
  char *v15; // rdi

  v3 = a3;
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
  v10 = 0LL;
  v11 = a1[3] - 1;
  for ( i = 0; ; i = v14 + 1 )
  {
    while ( 1 )
    {
      if ( i > v11 )
        return v10;
      v14 = (i + v11) >> 1;
      v15 = (char *)a1 + (unsigned int)a1[5];
      if ( v6 >= *(_DWORD *)&v15[8 * v14] )
        break;
      v11 = v14 - 1;
    }
    if ( v6 <= *(_DWORD *)&v15[8 * v14] )
      break;
  }
  v10 = (__int64)&a1[6 * *(unsigned int *)&v15[8 * v14 + 4]] + (unsigned int)a1[4];
  if ( !v10
    || !RtlCompareUnicodeStrings(
          a2,
          v3,
          (PCWCH)((char *)a1 + *(unsigned int *)(v10 + 4)),
          *(_DWORD *)(v10 + 12) >> 1,
          1u) )
  {
    return v10;
  }
  return 0LL;
}
