/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x18000E6E0
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000D958 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCheckTokenMembership @ 0x18000DF90 (RtlCheckTokenMembership.c)
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlInitializeSidEx @ 0x1800103A0 (RtlInitializeSidEx.c)
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 *     ZwAccessCheck @ 0x18015EF40 (ZwAccessCheck.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x18015F520 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18015F540 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18015F780 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(void *a1, unsigned __int8 *a2, int a3, _BYTE *a4)
{
  char v8; // si
  __int16 v9; // ax
  char v10; // di
  _BYTE *v11; // rcx
  unsigned int i; // r8d
  unsigned __int16 v13; // r8
  char v14; // bl
  _BYTE *v15; // rdx
  unsigned int j; // r8d
  int v17; // eax
  unsigned __int16 v18; // cx
  int v19; // edi
  _BYTE *v21; // rdx
  unsigned int k; // r8d
  unsigned int v23; // r9d
  unsigned __int16 v24; // cx
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v29; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+70h] [rbp-90h]
  __int64 *v32; // [rsp+80h] [rbp-80h]
  __int128 v33; // [rsp+88h] [rbp-78h] BYREF
  __int128 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h] BYREF
  int v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v40[232]; // [rsp+D8h] [rbp-28h] BYREF
  char Src; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int8 v42; // [rsp+1C1h] [rbp+C1h]
  _BYTE v43[56]; // [rsp+210h] [rbp+110h] BYREF

  v27 = 0;
  v26 = 0;
  memset_thunk_772440563353939046(&Src, 0, 0x44uLL);
  memset_thunk_772440563353939046(&v39, 0, 0xECuLL);
  Handle = 0LL;
  v35 = 0LL;
  LODWORD(v36) = 0;
  v25 = 0;
  v37 = 0LL;
  v38 = 0;
  v32 = 0LL;
  v29 = 0LL;
  *a4 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    v8 = 2;
    if ( a1 )
    {
      Handle = a1;
    }
    else
    {
      v19 = NtOpenThreadTokenEx(-2LL, 8LL, 0LL, 0LL, &Handle);
      if ( v19 == -1073741700 )
      {
        v19 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &v29);
        if ( v19 < 0 )
          goto LABEL_54;
        v36 = &v37;
        LODWORD(v33) = 48;
        *((_QWORD *)&v33 + 1) = 0LL;
        DWORD2(v34) = 0;
        *(_QWORD *)&v34 = 0LL;
        v35 = 0LL;
        v37 = 0x20000000CLL;
        LOWORD(v38) = 1;
        v19 = NtDuplicateToken(v29, 12LL, &v33, 0LL, 2, &Handle);
        NtClose(v29);
      }
      if ( v19 < 0 )
        goto LABEL_54;
    }
    LOBYTE(v30) = 1;
    if ( (SWORD1(v30) & 0x8000u) == 0 )
    {
      *((_QWORD *)&v30 + 1) = 0LL;
      if ( a2 )
        *((_QWORD *)&v30 + 1) = a2;
      v9 = WORD1(v30) & 0xFFFE;
      WORD1(v30) = v9;
      if ( v9 >= 0 )
      {
        *(_QWORD *)&v31 = 0LL;
        if ( a2 )
          *(_QWORD *)&v31 = a2;
        WORD1(v30) = v9 & 0xFFFD;
      }
    }
    v39 = 15466498LL;
    if ( (unsigned __int8)RtlValidSid(a2) && (unsigned __int8)v39 <= 4u )
    {
      v10 = 2;
      if ( (unsigned __int8)v39 > 2u )
        v10 = v39;
      if ( (unsigned __int8)RtlValidAcl(&v39) )
      {
        v11 = v40;
        for ( i = 0; i < WORD2(v39); ++i )
        {
          if ( v11 >= &v40[WORD1(v39) - 8] )
            goto LABEL_25;
          v11 += *((unsigned __int16 *)v11 + 1);
        }
        if ( v11 > &v40[WORD1(v39) - 8] )
          v11 = 0LL;
        v13 = 4 * (a2[1] + 4);
        if ( v11 && &v11[v13] <= &v40[WORD1(v39) - 8] )
        {
          *((_WORD *)v11 + 1) = v13;
          *(_WORD *)v11 = 0;
          *((_DWORD *)v11 + 1) = 1;
          memmove(v11 + 8, a2, 4LL * a2[1] + 8);
          ++WORD2(v39);
          LOBYTE(v39) = v10;
        }
      }
    }
LABEL_25:
    if ( (a3 & 3) != 0 )
    {
      RtlInitializeSidEx(&Src, &RtlpAppPackageAuthority, 2LL, 2LL, 1);
      if ( (unsigned __int8)RtlValidSid(&Src) )
      {
        if ( (unsigned __int8)v39 <= 4u )
        {
          v14 = 2;
          if ( (unsigned __int8)v39 > 2u )
            v14 = v39;
          if ( (unsigned __int8)RtlValidAcl(&v39) )
          {
            v15 = v40;
            for ( j = 0; j < WORD2(v39); ++j )
            {
              if ( v15 >= &v40[WORD1(v39) - 8] )
                goto LABEL_40;
              v15 += *((unsigned __int16 *)v15 + 1);
            }
            v17 = v42;
            if ( v15 > &v40[WORD1(v39) - 8] )
              v15 = 0LL;
            v18 = 4 * v42 + 16;
            if ( v15 && &v15[v18] <= &v40[WORD1(v39) - 8] )
            {
              *((_WORD *)v15 + 1) = v18;
              *(_WORD *)v15 = 0;
              *((_DWORD *)v15 + 1) = 1;
              memmove(v15 + 8, &Src, (unsigned int)(4 * v17 + 8));
              ++WORD2(v39);
              LOBYTE(v39) = v14;
            }
          }
        }
      }
    }
LABEL_40:
    if ( (a3 & 2) != 0 )
    {
      RtlInitializeSidEx(&Src, &RtlpAppPackageAuthority, 2LL, 2LL, 2);
      if ( (unsigned __int8)RtlValidSid(&Src) )
      {
        if ( (unsigned __int8)v39 <= 4u )
        {
          if ( (unsigned __int8)v39 > 2u )
            v8 = v39;
          if ( (unsigned __int8)RtlValidAcl(&v39) )
          {
            v21 = v40;
            for ( k = 0; k < WORD2(v39); ++k )
            {
              if ( v21 >= &v40[WORD1(v39) - 8] )
                goto LABEL_41;
              v21 += *((unsigned __int16 *)v21 + 1);
            }
            if ( v21 > &v40[WORD1(v39) - 8] )
              v21 = 0LL;
            v23 = 4 * v42 + 8;
            v24 = 4 * v42 + 16;
            if ( v21 && &v21[v24] <= &v40[WORD1(v39) - 8] )
            {
              *((_WORD *)v21 + 1) = v24;
              *(_WORD *)v21 = 0;
              *((_DWORD *)v21 + 1) = 1;
              memmove(v21 + 8, &Src, v23);
              ++WORD2(v39);
              LOBYTE(v39) = v8;
            }
          }
        }
      }
    }
LABEL_41:
    if ( (_BYTE)v30 == 1 && (SWORD1(v30) & 0x8000u) == 0 )
    {
      v32 = &v39;
      WORD1(v30) = WORD1(v30) & 0xFFF3 | 4;
    }
    v25 = 56;
    v19 = ZwAccessCheck(&v30, Handle, 1LL, &RtlpCheckTokenMembershipGenericMapping, v43, &v25, &v27, &v26);
    if ( v19 >= 0 )
    {
      v19 = 0;
      if ( v26 )
      {
        if ( v26 == -1073741790 )
          goto LABEL_48;
        goto LABEL_47;
      }
      if ( v27 != 1 )
      {
LABEL_47:
        v19 = v26;
        goto LABEL_48;
      }
      *a4 = 1;
    }
LABEL_48:
    if ( a1 )
      return (unsigned int)v19;
LABEL_54:
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v19;
  }
  return 3221225485LL;
}
