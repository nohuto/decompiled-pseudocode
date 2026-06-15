/*
 * XREFs of sub_140049540 @ 0x140049540
 * Callers:
 *     sub_140049120 @ 0x140049120 (sub_140049120.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140049540(__int64 a1)
{
  _DWORD *v2; // rcx
  unsigned __int64 v3; // r8
  _DWORD *v4; // rdx
  _DWORD *v5; // r9
  unsigned __int64 v6; // rcx

  if ( _ImageBase != 23117 )
    return 0;
  v2 = (_DWORD *)((char *)&_ImageBase + (int)off_14000003C);
  if ( *v2 != 17744 || *(__int16 *)((char *)&word_140000018 + (int)off_14000003C) != 523 )
    return 0;
  v3 = a1 - (_QWORD)&_ImageBase;
  v4 = (_DWORD *)((char *)v2 + *(unsigned __int16 *)((char *)&word_140000014 + (int)off_14000003C) + 24);
  v5 = &v4[10 * *(unsigned __int16 *)((char *)&word_140000006 + (int)off_14000003C)];
  while ( v4 != v5 )
  {
    v6 = (unsigned int)v4[3];
    if ( v3 >= v6 && v3 < (unsigned int)(v6 + v4[2]) )
      return v4 && v4[9] >= 0;
    v4 += 10;
  }
  v4 = 0LL;
  return v4 && v4[9] >= 0;
}
