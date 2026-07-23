/*
 * XREFs of AuthzBasepEvaluateSetRelationship @ 0x1402FA0CC
 * Callers:
 *     AuthzBasepEvaluateExpression @ 0x1402FB3B8 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     AuthzBasepValueInSet @ 0x1402FB070 (AuthzBasepValueInSet.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402FB250 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepGetNextValue @ 0x1402FB294 (AuthzBasepGetNextValue.c)
 */

__int64 __fastcall AuthzBasepEvaluateSetRelationship(int a1, __int64 a2, _DWORD *a3)
{
  int v4; // edx
  int v5; // r12d
  int v6; // r13d
  int v8; // ecx
  __int64 v9; // r14
  int v10; // eax
  unsigned int v12; // r14d
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // r14
  int NextValue; // eax
  int v17; // eax
  unsigned int v18; // r14d
  int v19; // eax
  __int128 v20; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-30h]
  _OWORD v23[2]; // [rsp+48h] [rbp-28h] BYREF
  int v24; // [rsp+68h] [rbp-8h]
  __int16 v25; // [rsp+6Ch] [rbp-4h]

  LODWORD(v22) = 0;
  v4 = 0;
  WORD2(v22) = 0;
  v5 = 0;
  v24 = 0;
  v6 = 0;
  v25 = 0;
  *a3 = 0;
  v20 = 0LL;
  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  if ( !a1 )
  {
    if ( *(_DWORD *)(a2 + 12) != 1 && *(_DWORD *)(a2 + 52) != 1 && *(_DWORD *)(a2 + 4) != *(_DWORD *)(a2 + 44) )
      return (unsigned int)v4;
    while ( 1 )
    {
      v15 = *(unsigned int *)(a2 + 8);
      NextValue = AuthzBasepGetNextValue(a2, &v20);
      v4 = NextValue;
      if ( NextValue == -2147483622 )
        break;
      if ( NextValue < 0 )
        goto LABEL_9;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v4 = AuthzBasepGetNextValue(a2, v23);
        if ( v4 < 0 )
          goto LABEL_9;
        BYTE4(v20) = *(_BYTE *)(a2 + 4);
        LOWORD(v20) = *(_WORD *)a2;
        *(_QWORD *)&v21 = *(_QWORD *)(a2 + 16);
        DWORD2(v21) = *(_DWORD *)(a2 + 8);
        v22 = *(_QWORD *)(a2 + 32) + v15;
        DWORD2(v20) = 0;
      }
      ++v5;
      v4 = ((__int64 (__fastcall *)(__int128 *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(&v20, a2 + 40, a3, 0LL);
      if ( v4 < 0 )
      {
LABEL_9:
        *a3 = -1;
        return (unsigned int)v4;
      }
      if ( *a3 != 1 )
        return (unsigned int)v4;
    }
    v17 = *(_DWORD *)(a2 + 12);
    v4 = 0;
    if ( v17 == 1 && !*(_BYTE *)(a2 + 4) )
    {
      if ( *(_DWORD *)(a2 + 52) == 1 )
        goto LABEL_34;
      if ( *(_DWORD *)(a2 + 44) == 1 )
        return (unsigned int)v4;
    }
    if ( *(_DWORD *)(a2 + 52) != 1 )
    {
LABEL_37:
      AuthzBasepRestartOperandValueEnumeration(a2, 0LL);
      while ( 1 )
      {
        v18 = *(_DWORD *)(a2 + 48);
        v19 = AuthzBasepGetNextValue(a2 + 40, &v20);
        v4 = v19;
        if ( v19 == -2147483622 )
          break;
        if ( v19 < 0 )
          goto LABEL_9;
        if ( *(_WORD *)a2 == 4 )
        {
          v4 = AuthzBasepGetNextValue(a2 + 40, v23);
          if ( v4 < 0 )
            goto LABEL_9;
          BYTE4(v20) = *(_BYTE *)(a2 + 44);
          LOWORD(v20) = *(_WORD *)(a2 + 40);
          *(_QWORD *)&v21 = *(_QWORD *)(a2 + 56);
          DWORD2(v21) = *(_DWORD *)(a2 + 48);
          v22 = *(_QWORD *)(a2 + 72) + v18;
          DWORD2(v20) = 0;
        }
        ++v6;
        v4 = ((__int64 (__fastcall *)(__int128 *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(&v20, a2, a3, 0LL);
        if ( v4 < 0 )
          goto LABEL_9;
        if ( *a3 != 1 )
          return (unsigned int)v4;
      }
      v4 = 0;
      if ( v5 != v6 )
        *a3 = 0;
      return (unsigned int)v4;
    }
LABEL_34:
    if ( !*(_BYTE *)(a2 + 44) && v17 != 1 && *(_DWORD *)(a2 + 4) == 1 )
      return (unsigned int)v4;
    goto LABEL_37;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return (unsigned int)v4;
    while ( 1 )
    {
      v12 = *(_DWORD *)(a2 + 8);
      v13 = AuthzBasepGetNextValue(a2, &v20);
      v4 = v13;
      if ( v13 == -2147483622 )
        return 0;
      if ( v13 < 0 )
        goto LABEL_9;
      if ( *(_WORD *)(a2 + 40) == 4 )
      {
        v4 = AuthzBasepGetNextValue(a2, v23);
        if ( v4 < 0 )
          goto LABEL_9;
        BYTE4(v20) = *(_BYTE *)(a2 + 4);
        LOWORD(v20) = *(_WORD *)a2;
        *(_QWORD *)&v21 = *(_QWORD *)(a2 + 16);
        DWORD2(v21) = *(_DWORD *)(a2 + 8);
        v22 = *(_QWORD *)(a2 + 32) + v12;
        DWORD2(v20) = 0;
      }
      LOBYTE(v14) = 1;
      v4 = ((__int64 (__fastcall *)(__int128 *, __int64, _DWORD *, __int64))AuthzBasepValueInSet)(
             &v20,
             a2 + 40,
             a3,
             v14);
      if ( v4 < 0 )
        goto LABEL_9;
      if ( *a3 )
        return (unsigned int)v4;
    }
  }
  if ( *(_DWORD *)(a2 + 12) == 1 || *(_DWORD *)(a2 + 52) == 1 || *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a2 + 44) )
  {
    while ( 1 )
    {
      v9 = *(unsigned int *)(a2 + 48);
      v10 = AuthzBasepGetNextValue(a2 + 40, &v20);
      v4 = v10;
      if ( v10 == -2147483622 )
        return 0;
      if ( v10 < 0 )
        goto LABEL_9;
      if ( *(_WORD *)a2 == 4 )
      {
        v4 = AuthzBasepGetNextValue(a2 + 40, v23);
        if ( v4 < 0 )
          goto LABEL_9;
        BYTE4(v20) = *(_BYTE *)(a2 + 44);
        LOWORD(v20) = *(_WORD *)(a2 + 40);
        *(_QWORD *)&v21 = *(_QWORD *)(a2 + 56);
        DWORD2(v21) = *(_DWORD *)(a2 + 48);
        v22 = *(_QWORD *)(a2 + 72) + v9;
        DWORD2(v20) = 0;
      }
      v4 = ((__int64 (__fastcall *)(__int128 *, __int64, _DWORD *, _QWORD))AuthzBasepValueInSet)(&v20, a2, a3, 0LL);
      if ( v4 < 0 )
        goto LABEL_9;
      if ( *a3 != 1 )
        return (unsigned int)v4;
    }
  }
  return (unsigned int)v4;
}
