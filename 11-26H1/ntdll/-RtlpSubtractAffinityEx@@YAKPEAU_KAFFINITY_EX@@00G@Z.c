/*
 * XREFs of ?RtlpSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x18013F3B8
 * Callers:
 *     RtlSubtractAffinityEx @ 0x18013FAF0 (RtlSubtractAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpSubtractAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // r10
  unsigned int v8; // r9d
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // dx
  $B38C3B1372D6E954799962D5DD404846 *v11; // rcx
  __int64 v12; // rsi
  signed __int64 v13; // rdi
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx

  Count = a1->Count;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  a3->Size = a4;
  v8 = 0;
  v9 = a1->Count;
  a3->Count = a1->Count;
  if ( v9 > a4 )
    a3->Count = a4;
  v10 = 0;
  if ( Count > a4 )
    Count = a4;
  if ( Count )
  {
    v11 = &a1->8;
    v12 = Count;
    v13 = (char *)a2 - (char *)a1;
    v10 = Count;
    do
    {
      v14 = (v11->Bitmap[0] & ~*(unsigned __int64 *)((char *)v11->Bitmap + v13)) == 0;
      *(unsigned __int64 *)((char *)v11->Bitmap + (char *)a3 - (char *)a1) = v11->Bitmap[0] & ~*(unsigned __int64 *)((char *)v11->Bitmap + v13);
      v11 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v11 + 8);
      if ( !v14 )
        v8 = 1;
      --v12;
    }
    while ( v12 );
  }
  while ( v10 < a3->Count )
  {
    v15 = a1->Bitmap[v10];
    a3->Bitmap[v10] = v15;
    if ( v15 )
      v8 = 1;
    ++v10;
  }
  a3->Reserved = 0;
  while ( v10 < a3->Size )
  {
    v16 = v10++;
    a3->Bitmap[v16] = 0LL;
  }
  return v8;
}
