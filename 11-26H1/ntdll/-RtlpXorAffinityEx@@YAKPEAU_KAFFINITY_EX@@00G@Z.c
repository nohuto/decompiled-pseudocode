/*
 * XREFs of ?RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x18013F4A4
 * Callers:
 *     RtlXorAffinityEx @ 0x18013FBB0 (RtlXorAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpXorAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // ax
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // bx
  struct _KAFFINITY_EX *v8; // rbp
  unsigned int v10; // r9d
  unsigned __int16 v11; // dx
  signed __int64 v12; // rsi
  $B38C3B1372D6E954799962D5DD404846 *v13; // rcx
  signed __int64 v14; // r11
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  __int64 v19; // r11
  unsigned __int64 v20; // rax
  __int64 v21; // rcx

  Count = a2->Count;
  v6 = a2->Count;
  v7 = a1->Count;
  v8 = a2;
  if ( a1->Count >= a2->Count )
    v6 = a1->Count;
  a3->Size = a4;
  a3->Count = v6;
  if ( v7 >= Count )
  {
    v7 = Count;
    v8 = a1;
  }
  v10 = 0;
  if ( v6 > a4 )
    a3->Count = a4;
  v11 = 0;
  if ( v7 > a4 )
    v7 = a4;
  if ( v6 > a4 )
    v6 = a4;
  if ( v7 )
  {
    v12 = (char *)a1 - (char *)a2;
    v13 = &a2->8;
    v11 = v7;
    v14 = (char *)a3 - (char *)a2;
    v15 = v7;
    do
    {
      v16 = v13->Bitmap[0] == *(unsigned __int64 *)((char *)v13->Bitmap + v12);
      *(unsigned __int64 *)((char *)v13->Bitmap + v14) = v13->Bitmap[0] ^ *(unsigned __int64 *)((char *)v13->Bitmap + v12);
      v13 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v13 + 8);
      if ( !v16 )
        v10 = 1;
      --v15;
    }
    while ( v15 );
  }
  if ( v11 < v6 )
  {
    v17 = v11;
    v18 = v6 - v11;
    v11 = v6;
    v19 = v18;
    do
    {
      v20 = v8->Bitmap[v17];
      a3->Bitmap[v17++] = v20;
      if ( v20 )
        v10 = 1;
      --v19;
    }
    while ( v19 );
  }
  a3->Reserved = 0;
  while ( v11 < a3->Size )
  {
    v21 = v11++;
    a3->Bitmap[v21] = 0LL;
  }
  return v10;
}
