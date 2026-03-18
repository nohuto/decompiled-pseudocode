/*
 * XREFs of AuthzBasepValueInSet @ 0x1403CDA14
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x1403CD69C (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1403CDBF4 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepGetNextValue @ 0x1403CDC38 (AuthzBasepGetNextValue.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1403CF34C (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403CF40C (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x1403D040C (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404F345C (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14071519C (AuthzBasepCompareIntegerOperands.c)
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
  __int64 v16; // rcx
  int v17; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  _OWORD v22[2]; // [rsp+28h] [rbp-49h] BYREF
  int v23; // [rsp+48h] [rbp-29h]
  __int16 v24; // [rsp+4Ch] [rbp-25h]
  _OWORD v25[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v26; // [rsp+78h] [rbp+7h]
  _WORD v27[2]; // [rsp+80h] [rbp+Fh] BYREF
  char v28; // [rsp+84h] [rbp+13h]
  int v29; // [rsp+88h] [rbp+17h]
  __int64 v30; // [rsp+90h] [rbp+1Fh]
  int v31; // [rsp+98h] [rbp+27h]
  __int64 v32; // [rsp+A0h] [rbp+2Fh]

  v4 = a1[1];
  v23 = 0;
  memset(v22, 0, sizeof(v22));
  v24 = 0;
  v8 = *a1;
  *a3 = 0;
  v25[1] = v4;
  v25[0] = v8;
  v26 = *((_QWORD *)a1 + 4);
  do
  {
    while ( 1 )
    {
      v9 = *((unsigned int *)a2 + 2);
      NextValue = AuthzBasepGetNextValue(a2, v27);
      v12 = NextValue;
      if ( NextValue == -2147483622 )
      {
LABEL_24:
        v12 = 0;
        goto LABEL_15;
      }
      if ( NextValue < 0 )
        goto LABEL_14;
      v13 = v25[0];
      if ( LOWORD(v25[0]) == 4 )
      {
        v20 = AuthzBasepGetNextValue(a2, v22);
        v12 = v20;
        if ( v20 == -2147483622 )
          goto LABEL_24;
        if ( v20 < 0 )
          goto LABEL_14;
        v14 = *a2;
        v28 = *((_BYTE *)a2 + 4);
        v30 = *((_QWORD *)a2 + 2);
        v31 = *((_DWORD *)a2 + 2);
        v32 = *((_QWORD *)a2 + 4) + v9;
        v27[0] = v14;
        v29 = 0;
      }
      else
      {
        v14 = v27[0];
      }
      if ( (unsigned __int8)AuthzBasepOperandValueTypesCompatible(v25) )
        break;
      if ( !a4 )
      {
        v12 = -1073741406;
LABEL_14:
        *a3 = -1;
        goto LABEL_15;
      }
    }
    if ( HIDWORD(v25[0]) == 1 )
      v13 = v14;
    v15 = (unsigned int)v13 - 1;
    if ( v13 == 1 )
      goto LABEL_31;
    v15 = (unsigned int)v13 - 2;
    if ( v13 == 2 )
      goto LABEL_31;
    v16 = (unsigned int)v13 - 3;
    if ( v13 == 3 )
    {
      LODWORD(v16) = 128;
      v17 = AuthzBasepCompareUnicodeStringOperands(v16, v25, a3);
      goto LABEL_13;
    }
    v19 = (unsigned int)v13 - 4;
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
          v21 = AuthzBasepCompareIntegerOperands(v15, v25);
          goto LABEL_32;
        }
        if ( v13 != 16 )
          continue;
      }
      LOBYTE(v15) = 0x80;
      v21 = AuthzBasepCompareOctetStringOperands(v15, v25);
LABEL_32:
      *a3 = v21;
      continue;
    }
    LODWORD(v19) = 128;
    v17 = AuthzBasepCompareFQBNOperands(v19, v25, a3);
LABEL_13:
    v12 = v17;
    if ( v17 < 0 )
      goto LABEL_14;
  }
  while ( *a3 != 1 );
  if ( v12 < 0 )
    goto LABEL_14;
LABEL_15:
  AuthzBasepRestartOperandValueEnumeration(a2, v11);
  return (unsigned int)v12;
}
