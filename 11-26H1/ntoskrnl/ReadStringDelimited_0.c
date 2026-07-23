/*
 * XREFs of ReadStringDelimited_0 @ 0x14054170C
 * Callers:
 *     _winput_s @ 0x140541970 (_winput_s.c)
 * Callees:
 *     ReadString_0 @ 0x1405414D8 (ReadString_0.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ReadStringDelimited_0(
        char a1,
        unsigned __int16 **a2,
        wint_t *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *File,
        unsigned __int64 Src,
        _DWORD *a9)
{
  int v9; // eax
  unsigned __int16 *v14; // rcx
  unsigned __int16 v15; // dx
  char v16; // al
  unsigned __int16 *v17; // r9
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // r10
  _BYTE v23[11]; // [rsp+50h] [rbp-2038h] BYREF
  char v24; // [rsp+5Bh] [rbp-202Dh]

  memset_0(v23, 0, (unsigned int)(v9 - 80));
  v14 = *a2 + 1;
  *a2 = v14;
  v15 = *v14;
  if ( *v14 == 94 )
  {
    a1 |= 8u;
    v15 = v14[1];
    ++v14;
  }
  v16 = v24;
  v17 = v14 + 1;
  if ( v15 == 93 )
    v16 = 32;
  else
    v17 = v14;
  v24 = v16;
  v18 = *v17;
  if ( *v17 != 93 )
  {
    v19 = 93;
    if ( v15 != 93 )
      v19 = 0;
    do
    {
      ++v17;
      if ( v18 == 45 && v19 && (v20 = *v17, *v17 != 93) )
      {
        ++v17;
        v21 = v20;
        if ( v19 >= v20 )
        {
          v21 = v19;
          v19 = v20;
        }
        while ( v19 <= v21 )
        {
          v23[(unsigned __int64)v19 >> 3] |= 1 << (v19 & 7);
          ++v19;
        }
        v19 = 0;
      }
      else
      {
        v19 = v18;
        v23[(unsigned __int64)v18 >> 3] |= 1 << (v18 & 7);
      }
      v18 = *v17;
    }
    while ( *v17 != 93 );
  }
  *a2 = v17;
  return ReadString_0(a1, (__int64)v23, a3, a4, a5, a6, File, Src, a9);
}
