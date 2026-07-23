/*
 * XREFs of FsRtlIsFatDbcsLegal @ 0x140A66410
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x140A66410 (FsRtlIsFatDbcsLegal.c)
 * Callees:
 *     FsRtlDissectDbcs @ 0x140792AE0 (FsRtlDissectDbcs.c)
 *     FsRtlIsFatDbcsLegal @ 0x140A66410 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x140A66680 (FsRtlDoesDbcsContainWildCards.c)
 */

BOOLEAN __stdcall FsRtlIsFatDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // cx
  char v7; // bp
  __int64 v8; // rdi
  char *v9; // rsi
  unsigned int v10; // eax
  unsigned int j; // r8d
  char *Buffer; // rax
  bool v14; // zf
  unsigned int i; // edx
  __int64 v16; // r8
  char v17; // dl
  _STRING v18; // xmm1
  _STRING FirstName; // [rsp+20h] [rbp-48h] BYREF
  _STRING RemainingName; // [rsp+30h] [rbp-38h] BYREF
  _STRING Name; // [rsp+40h] [rbp-28h] BYREF

  Length = DbcsName->Length;
  v7 = 0;
  LOBYTE(v8) = 0;
  if ( !Length )
    return 0;
  if ( !WildCardsPermissible )
    goto LABEL_3;
  if ( Length == 1 )
  {
    v17 = *DbcsName->Buffer;
    if ( v17 == 46 )
      return 1;
    v14 = v17 == 34;
    goto LABEL_58;
  }
  if ( Length == 2 )
  {
    Buffer = DbcsName->Buffer;
    if ( *Buffer == 46 )
    {
      v14 = Buffer[1] == 46;
      goto LABEL_58;
    }
    if ( *Buffer == 34 )
    {
      v14 = Buffer[1] == 34;
LABEL_58:
      if ( v14 )
        return 1;
    }
  }
LABEL_3:
  v9 = DbcsName->Buffer;
  if ( *v9 != 92 )
  {
LABEL_4:
    if ( PathNamePermissible )
    {
      v18 = *DbcsName;
      RemainingName = *DbcsName;
      FirstName = 0LL;
      while ( (unsigned __int16)_mm_cvtsi128_si32((__m128i)v18) )
      {
        if ( *(_BYTE *)_mm_srli_si128((__m128i)v18, 8).m128i_i8[0] == 92 )
          return 0;
        Name = v18;
        FsRtlDissectDbcs(&Name, &FirstName, &RemainingName);
        Name = FirstName;
        if ( !FsRtlIsFatDbcsLegal(&Name, WildCardsPermissible, 0, 0) )
          return 0;
        v18 = RemainingName;
      }
      return 1;
    }
    if ( WildCardsPermissible && FsRtlDoesDbcsContainWildCards(DbcsName) )
    {
      for ( i = 0; i < DbcsName->Length; ++i )
      {
        v16 = (unsigned __int8)v9[i];
        if ( (unsigned __int8)v16 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + v16) )
        {
          ++i;
        }
        else if ( (v16 & 0x80u) == 0LL && (*((_BYTE *)qword_140017650 + v16) & 9) == 0 )
        {
          return 0;
        }
      }
      return 1;
    }
    v10 = DbcsName->Length;
    if ( v10 <= 0xC )
    {
      for ( j = 0; j < v10; ++j )
      {
        v8 = (unsigned __int8)DbcsName->Buffer[j];
        if ( (unsigned __int8)v8 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + v8) )
        {
          if ( !v7 && j >= 7 || j == v10 - 1 )
            return 0;
          ++j;
        }
        else
        {
          if ( (v8 & 0x80u) == 0LL
            && ((unsigned __int8)(WildCardsPermissible != 0 ? 9 : 1) & *((_BYTE *)qword_140017650 + v8)) == 0 )
          {
            return 0;
          }
          if ( (_BYTE)v8 == 46 || (_BYTE)v8 == 34 )
          {
            if ( !j || v7 || v10 - j - 1 > 3 || DbcsName->Buffer[j - 1] == 32 )
              return 0;
            v7 = 1;
          }
          if ( j >= 8 && !v7 )
            return 0;
        }
      }
      if ( (_BYTE)v8 != 32 && (_BYTE)v8 != 46 )
        return (_BYTE)v8 != 34;
    }
    return 0;
  }
  if ( !LeadingBackslashPermissible )
    return 0;
  if ( Length > 1u )
  {
    DbcsName->Buffer = ++v9;
    --DbcsName->MaximumLength;
    DbcsName->Length = Length - 1;
    goto LABEL_4;
  }
  return 1;
}
