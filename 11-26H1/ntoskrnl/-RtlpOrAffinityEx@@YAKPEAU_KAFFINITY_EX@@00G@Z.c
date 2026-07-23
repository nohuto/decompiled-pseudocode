/*
 * XREFs of ?RtlpOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14045A920
 * Callers:
 *     KeOrAffinityEx @ 0x1405EF2B0 (KeOrAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpOrAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // r10
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // r11
  struct _KAFFINITY_EX *v8; // r14
  unsigned int v9; // ebp
  unsigned __int16 v10; // ax
  signed __int64 v11; // rdi
  __int64 v12; // rsi
  $B38C3B1372D6E954799962D5DD404846 *v13; // r9
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v17; // rdx
  unsigned __int16 v18; // cx
  __int64 v19; // r9
  unsigned __int64 v20; // rcx

  Count = a2->Count;
  v5 = a1->Count;
  v6 = a2->Count;
  if ( a1->Count >= a2->Count )
    v6 = a1->Count;
  v7 = a1->Count;
  if ( v5 >= Count )
    v7 = a2->Count;
  a3->Size = a4;
  v8 = a2;
  a3->Count = v6;
  if ( v5 >= Count )
    v8 = a1;
  v9 = 0;
  if ( v6 > a4 )
    a3->Count = a4;
  v10 = 0;
  if ( v7 > a4 )
    v7 = a4;
  if ( v6 > a4 )
    v6 = a4;
  if ( v7 )
  {
    v11 = (char *)a1 - (char *)a2;
    v12 = v7;
    v13 = &a2->8;
    v10 = v7;
    do
    {
      v14 = (v13->Bitmap[0] | *(unsigned __int64 *)((char *)v13->Bitmap + v11)) == 0;
      *(unsigned __int64 *)((char *)v13->Bitmap + (char *)a3 - (char *)a2) = v13->Bitmap[0] | *(unsigned __int64 *)((char *)v13->Bitmap + v11);
      v13 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v13 + 8);
      if ( !v14 )
        v9 = 1;
      --v12;
    }
    while ( v12 );
  }
  if ( v10 < v6 )
  {
    v17 = v10;
    v18 = v6 - v10;
    v10 = v6;
    v19 = v18;
    do
    {
      v20 = v8->Bitmap[v17];
      a3->Bitmap[v17++] = v20;
      if ( v20 )
        v9 = 1;
      --v19;
    }
    while ( v19 );
  }
  for ( a3->Reserved = 0; v10 < a3->Size; a3->Bitmap[v15] = 0LL )
    v15 = v10++;
  return v9;
}
