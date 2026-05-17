/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x18010B530
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x18015FA80 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlRunEncodeUnicodeString(char *a1, unsigned __int16 *a2)
{
  char v2; // r8
  unsigned int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  char v9; // dl
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v11 = 0LL;
  if ( !v2 )
  {
    result = ZwQuerySystemTime(&v11);
    v2 = BYTE1(v11);
    v8 = 1;
    *a1 = BYTE1(v11);
    if ( !v2 )
    {
      v9 = 0;
      do
      {
        v2 = v9;
        if ( v8 >= 8 )
          break;
        result = v8++;
        v2 = *((_BYTE *)&v11 + result) | v9;
        *a1 = v2;
        v9 = v2;
      }
      while ( !v2 );
      if ( !v2 )
      {
        *a1 = 1;
        v2 = 1;
      }
    }
  }
  if ( *a2 )
  {
    result = *((_QWORD *)a2 + 1);
    *(_BYTE *)result ^= v2 | 0x43;
  }
  v5 = 1;
  if ( *a2 > 1u )
  {
    do
    {
      v6 = v5 - 1;
      v7 = v5++;
      *(_BYTE *)(v7 + *((_QWORD *)a2 + 1)) ^= *a1 ^ *(_BYTE *)(v6 + *((_QWORD *)a2 + 1));
      result = *a2;
    }
    while ( v5 < (unsigned int)result );
  }
  return result;
}
