/*
 * XREFs of RtlUnicodeStringCopy @ 0x1800C6630
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18011D4E0 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCopy(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // r10
  unsigned __int16 v6; // r11
  unsigned __int64 v7; // r8
  __int16 v8; // r9
  unsigned __int16 v9; // cx
  _WORD *v10; // rax
  unsigned int v11; // r11d
  unsigned __int64 v12; // rdx
  __int64 v13; // r10
  __int64 result; // rax

  v2 = *(_WORD *)a1;
  if ( (*(_WORD *)a1 & 1) != 0 )
    return 3221225485LL;
  v4 = *(unsigned __int16 *)(a1 + 2);
  if ( (v4 & 1) != 0 )
    return 3221225485LL;
  if ( v2 > (unsigned __int16)v4 )
    return 3221225485LL;
  if ( (_WORD)v4 == 0xFFFF )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 && (v2 || (_WORD)v4) )
    return 3221225485LL;
  v6 = *a2;
  v7 = v4 >> 1;
  v8 = 0;
  if ( (*a2 & 1) != 0
    || (v9 = a2[1], (v9 & 1) != 0)
    || v6 > v9
    || v9 == 0xFFFF
    || (v10 = (_WORD *)*((_QWORD *)a2 + 1)) == 0LL && (v6 || v9) )
  {
    v11 = -1073741811;
  }
  else
  {
    v11 = 0;
    v12 = (unsigned __int64)*a2 >> 1;
    if ( v7 )
    {
      v13 = v5 - (_QWORD)v10;
      while ( v12 )
      {
        --v12;
        *(_WORD *)((char *)v10 + v13) = *v10;
        ++v8;
        ++v10;
        if ( !--v7 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      if ( v12 )
        v11 = -2147483643;
    }
  }
  result = v11;
  *(_WORD *)a1 = 2 * v8;
  return result;
}
