/*
 * XREFs of RtlpReadExtendedContextLayout @ 0x1409EADEC
 * Callers:
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContextLayout(__int64 a1, int a2, __int64 a3, int a4, int *a5)
{
  char v5; // si
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r8
  int v11; // r9d
  int v12; // r8d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  __int128 v17; // [rsp+28h] [rbp-30h] BYREF
  __int128 v18; // [rsp+38h] [rbp-20h]

  v5 = a4;
  v6 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (a2 & 0x10000) == 0 )
  {
    if ( (a2 & 0x100000) != 0 )
    {
      v6 = a3 + 1232;
      a5[3] = 1232;
    }
    else if ( (a2 & 0x200000) != 0 )
    {
      v6 = a3 + 416;
      a5[3] = 416;
    }
    else
    {
      if ( (a2 & 0x400000) == 0 )
        goto LABEL_4;
      v6 = a3 + 912;
      a5[3] = 912;
    }
    a5[2] = a3 - v6;
    goto LABEL_4;
  }
  v6 = a3 + 716;
  a5[2] = -716;
  a5[3] = 204;
  if ( (a2 & 0x10020) == 0x10020 )
    a5[3] = 716;
LABEL_4:
  *a5 = a5[2];
  a5[1] = v6 - a3 + 32;
  if ( (a4 & 0xFFFFFFFE) == 0 )
    return 0LL;
  if ( (v6 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyFromUser(&v17, (void *)v6, 0x20uLL);
  v8 = SDWORD2(v17) + v6;
  if ( SDWORD2(v17) <= HIDWORD(v17) + DWORD2(v17) )
  {
    if ( (SDWORD2(v17) & 0x80000000) == 0 )
    {
      if ( v8 < v6 )
        return 3221225485LL;
    }
    else if ( v8 >= v6 )
    {
      return 3221225485LL;
    }
    if ( v6 + SDWORD2(v17) + (unsigned __int64)HIDWORD(v17) < v8
      || a5[2] != DWORD2(v17)
      || (unsigned int)a5[3] > HIDWORD(v17) )
    {
      return 3221225485LL;
    }
    if ( (v5 & 2) != 0 )
    {
      v9 = v18;
      v10 = (int)v18 + v6;
      if ( (int)v18 > DWORD1(v18) + (int)v18 )
        return 3221225485LL;
      if ( (int)v18 >= 0 )
      {
        if ( v10 < v6 )
          return 3221225485LL;
      }
      else if ( v10 >= v6 )
      {
        return 3221225485LL;
      }
      if ( v6 + (int)v18 + (unsigned __int64)DWORD1(v18) < v10 )
        return 3221225485LL;
      *((_QWORD *)a5 + 2) = v18;
      v11 = *a5;
      v12 = a5[1];
      if ( v12 + *a5 > v9 )
      {
        if ( v9 + a5[5] > v11 )
          return 3221225485LL;
        a5[1] = v11 + v12 - v9;
        *a5 = v9;
      }
      else
      {
        a5[1] = a5[5] + v9 - v11;
      }
    }
    v13 = *a5;
    v14 = v13 + v6;
    v15 = (unsigned int)a5[1];
    v16 = v15 + v13;
    if ( (int)v13 <= (int)v15 + (int)v13 )
    {
      if ( (int)v13 >= 0 )
      {
        if ( v14 < v6 )
          return 3221225485LL;
      }
      else if ( v14 >= v6 )
      {
        return 3221225485LL;
      }
      if ( v6 + v13 + v15 >= v14 && (int)v13 >= (int)v17 && (int)v17 + DWORD1(v17) >= v16 && v14 <= v6 && v6 + v16 >= v6 )
        return 0LL;
    }
  }
  return 3221225485LL;
}
