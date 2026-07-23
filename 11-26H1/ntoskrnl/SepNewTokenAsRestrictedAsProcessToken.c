/*
 * XREFs of SepNewTokenAsRestrictedAsProcessToken @ 0x140A95C5C
 * Callers:
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SeTokenIsRestricted @ 0x14045A300 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1404866B0 (SeTokenIsWriteRestricted.c)
 */

__int64 __fastcall SepNewTokenAsRestrictedAsProcessToken(signed __int32 *Token, _DWORD *a2, _BYTE *a3)
{
  int v4; // esi
  unsigned int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // r13
  unsigned __int32 v9; // eax
  unsigned __int32 v10; // ebp
  __int64 v11; // r12
  unsigned __int32 v13; // r15d
  unsigned __int32 i; // ebp
  unsigned int v15; // r14d
  unsigned int v16; // esi
  __int64 v17; // r12
  void *v18; // r13
  unsigned __int32 v19; // [rsp+68h] [rbp+10h]
  unsigned int v21; // [rsp+78h] [rbp+20h]

  *a3 = 0;
  v4 = a2[50];
  if ( (v4 & 0x800) != 0 && !_bittest(Token + 50, 0xBu)
    || SeTokenIsRestricted(a2) && !SeTokenIsRestricted(Token)
    || SeTokenIsWriteRestricted(a2) && !SeTokenIsWriteRestricted(Token)
    || SeTokenIsRestricted(a2) && a2[32] < (unsigned int)Token[32]
    || (~*((_QWORD *)a2 + 9) & *((_QWORD *)Token + 9)) != 0LL
    || (~*((_QWORD *)a2 + 8) & *((_QWORD *)Token + 8)) != 0LL
    || (~v4 & Token[50] & 0x1000) != 0 )
  {
    return 3221225569LL;
  }
  if ( SeTokenIsRestricted(a2) )
  {
    v13 = Token[32];
    for ( i = 0; i < v13; ++i )
    {
      v15 = a2[32];
      v16 = 0;
      if ( v15 )
      {
        v17 = *((_QWORD *)a2 + 20);
        v18 = *(void **)(*((_QWORD *)Token + 20) + 16LL * i);
        do
        {
          if ( RtlEqualSid(v18, *(PSID *)(v17 + 16LL * v16)) )
            break;
          ++v16;
        }
        while ( v16 < v15 );
      }
      if ( v16 == v15 )
        return 3221225569LL;
    }
  }
  v6 = a2[31];
  v7 = 0;
  v21 = v6;
  while ( v7 < v6 )
  {
    v8 = *((_QWORD *)a2 + 19);
    if ( (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x10) != 0 )
    {
      v9 = Token[31];
      v10 = 0;
      v19 = v9;
      while ( v10 < v9 )
      {
        v11 = *((_QWORD *)Token + 19);
        if ( RtlEqualSid(*(PSID *)(v8 + 16LL * v7), *(PSID *)(v11 + 16LL * v10)) )
        {
          if ( (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x10) != 0 )
            break;
          return 3221225569LL;
        }
        v9 = v19;
        ++v10;
      }
    }
    v6 = v21;
    ++v7;
  }
  *a3 = 1;
  return 0LL;
}
