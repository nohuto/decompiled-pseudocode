/*
 * XREFs of AuthzBasepValueInSet @ 0x1402FB070
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x1402FA0CC (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402FA444 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402FB250 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepGetNextValue @ 0x1402FB294 (AuthzBasepGetNextValue.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1402FB550 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14045FD34 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404ECA3C (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x140719E8C (AuthzBasepCompareIntegerOperands.c)
 */

__int64 __fastcall AuthzBasepValueInSet(__int128 *a1, unsigned __int16 *a2, _DWORD *a3, char a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // r12
  int NextValue; // eax
  __int64 v11; // rdx
  int v12; // ebx
  unsigned __int16 v13; // r14
  unsigned __int16 v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  _OWORD v21[2]; // [rsp+28h] [rbp-49h] BYREF
  int v22; // [rsp+48h] [rbp-29h]
  __int16 v23; // [rsp+4Ch] [rbp-25h]
  _OWORD v24[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+78h] [rbp+7h]
  _WORD v26[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v27; // [rsp+84h] [rbp+13h]
  int v28; // [rsp+88h] [rbp+17h]
  __int64 v29; // [rsp+90h] [rbp+1Fh]
  int v30; // [rsp+98h] [rbp+27h]
  __int64 v31; // [rsp+A0h] [rbp+2Fh]

  v4 = a1[1];
  v22 = 0;
  memset(v21, 0, sizeof(v21));
  v23 = 0;
  v8 = *a1;
  *a3 = 0;
  v24[1] = v4;
  v24[0] = v8;
  v25 = *((_QWORD *)a1 + 4);
  do
  {
    while ( 1 )
    {
      v9 = *((unsigned int *)a2 + 2);
      NextValue = AuthzBasepGetNextValue(a2, v26);
      v12 = NextValue;
      if ( NextValue == -2147483622 )
      {
LABEL_24:
        v12 = 0;
        goto LABEL_15;
      }
      if ( NextValue < 0 )
        goto LABEL_14;
      v13 = v24[0];
      if ( LOWORD(v24[0]) == 4 )
      {
        v19 = AuthzBasepGetNextValue(a2, v21);
        v12 = v19;
        if ( v19 == -2147483622 )
          goto LABEL_24;
        if ( v19 < 0 )
          goto LABEL_14;
        v14 = *a2;
        v27 = *((_BYTE *)a2 + 4);
        v29 = *((_QWORD *)a2 + 2);
        v30 = *((_DWORD *)a2 + 2);
        v31 = *((_QWORD *)a2 + 4) + v9;
        v26[0] = v14;
        v28 = 0;
      }
      else
      {
        v14 = v26[0];
      }
      if ( (unsigned __int8)AuthzBasepOperandValueTypesCompatible(v24) )
        break;
      if ( !a4 )
      {
        v12 = -1073741406;
LABEL_14:
        *a3 = -1;
        goto LABEL_15;
      }
    }
    if ( HIDWORD(v24[0]) == 1 )
      v13 = v14;
    v15 = (unsigned int)v13 - 1;
    if ( v13 == 1 )
      goto LABEL_31;
    v15 = (unsigned int)v13 - 2;
    if ( v13 == 2 )
      goto LABEL_31;
    if ( v13 == 3 )
    {
      v16 = AuthzBasepCompareUnicodeStringOperands(0x80u, (__int64)v24, a3);
      goto LABEL_13;
    }
    v18 = (unsigned int)v13 - 4;
    if ( v13 != 4 )
    {
      v15 = (unsigned int)v13 - 5;
      if ( v13 != 5 )
      {
        v15 = (unsigned int)v13 - 6;
        if ( v13 == 6 )
        {
LABEL_31:
          LOBYTE(v15) = 0x80;
          v20 = AuthzBasepCompareIntegerOperands(v15, v24);
          goto LABEL_32;
        }
        if ( v13 != 16 )
          continue;
      }
      LOBYTE(v15) = 0x80;
      v20 = AuthzBasepCompareOctetStringOperands(v15, v24);
LABEL_32:
      *a3 = v20;
      continue;
    }
    LODWORD(v18) = 128;
    v16 = AuthzBasepCompareFQBNOperands(v18, v24, a3);
LABEL_13:
    v12 = v16;
    if ( v16 < 0 )
      goto LABEL_14;
  }
  while ( *a3 != 1 );
  if ( v12 < 0 )
    goto LABEL_14;
LABEL_15:
  AuthzBasepRestartOperandValueEnumeration(a2, v11);
  return (unsigned int)v12;
}
