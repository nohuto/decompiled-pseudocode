/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x18010AEA0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x18015F980 (ZwQuerySystemTime.c)
 */

void __cdecl RtlRunEncodeUnicodeString(PUCHAR Seed, PUNICODE_STRING String)
{
  UCHAR v2; // r8
  unsigned int i; // r9d
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  UCHAR v9; // dl
  __int64 v10; // rax
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = *Seed;
  SystemTime.QuadPart = 0LL;
  if ( !v2 )
  {
    ZwQuerySystemTime(&SystemTime);
    v2 = BYTE1(SystemTime.LowPart);
    v8 = 1;
    *Seed = BYTE1(SystemTime.LowPart);
    if ( !v2 )
    {
      v9 = 0;
      do
      {
        v2 = v9;
        if ( v8 >= 8 )
          break;
        v10 = v8++;
        v2 = *((_BYTE *)&SystemTime.LowPart + v10) | v9;
        *Seed = v2;
        v9 = v2;
      }
      while ( !v2 );
      if ( !v2 )
      {
        *Seed = 1;
        v2 = 1;
      }
    }
  }
  if ( String->Length )
    *(_BYTE *)String->Buffer ^= v2 | 0x43;
  for ( i = 1; i < String->Length; *((_BYTE *)String->Buffer + v7) ^= *Seed ^ *((_BYTE *)String->Buffer + v6) )
  {
    v6 = i - 1;
    v7 = i++;
  }
}
