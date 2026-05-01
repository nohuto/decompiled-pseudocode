/*
 * XREFs of ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEBG1@Z @ 0x180676448
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18015A37C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18015BD48 (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z @ 0x18015C760 (-Insert@RtlNameValueArray@@QEAAJPEBG00_K@Z.c)
 */

__int64 __fastcall PiiFilterpAddItemSorted(
        struct _PII_FILTER *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 *v6; // r11
  const unsigned __int16 *v7; // rdx
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = -1LL;
  v6 = (unsigned __int64 *)this;
  do
    ++v3;
  while ( a2[v3] );
  v7 = (const unsigned __int16 *)*((_QWORD *)this + 2);
  v8 = 0;
  if ( v7 )
  {
    v9 = 0LL;
    do
    {
      v10 = 0LL;
      if ( v9 < (unsigned __int64)v7 )
      {
        v14 = 0LL;
        if ( (int)ULongLongMult(v6[1], v9, &v14) < 0 || (v10 = (__int64 *)(v6[5] + v14), (unsigned __int64)v10 < v6[5]) )
          v10 = 0LL;
      }
      v11 = *v10;
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(v11 + 2 * v12) );
      if ( v3 > v12 )
        break;
      v7 = (const unsigned __int16 *)v6[2];
      v9 = ++v8;
    }
    while ( v8 < (unsigned __int64)v7 );
  }
  return RtlNameValueArray::Insert((RtlNameValueArray *)v6, v7, a2, a3, v8);
}
