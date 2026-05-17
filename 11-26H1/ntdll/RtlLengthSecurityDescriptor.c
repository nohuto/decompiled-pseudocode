/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x1800DA510
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x18013D120 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthSecurityDescriptor(__int64 a1)
{
  __int16 v1; // r10
  __int16 v3; // r9
  __int64 result; // rax
  __int16 v5; // bx
  unsigned int *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  v1 = *(_WORD *)(a1 + 2);
  v3 = v1 & 0x8000;
  result = 20LL;
  v5 = v1 & 0x8000;
  if ( v1 >= 0 )
    result = 40LL;
  v6 = (unsigned int *)(a1 + 8);
  if ( v3 )
  {
    v7 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v7 )
      goto LABEL_9;
    v8 = a1 + v7;
  }
  else
  {
    v8 = *(_QWORD *)v6;
  }
  if ( v8 )
  {
    result = ((4 * *(unsigned __int8 *)(v8 + 1) + 11) & 0xFFFFFFFC) + (unsigned int)result;
    v6 = (unsigned int *)(a1 + 8);
  }
  if ( !v3 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = (unsigned int *)(a1 + 16);
    goto LABEL_11;
  }
LABEL_9:
  v9 = *v6;
  if ( !(_DWORD)v9 )
  {
    v11 = (unsigned int *)(a1 + 16);
    goto LABEL_13;
  }
  v10 = a1 + v9;
  v11 = (unsigned int *)(a1 + 16);
LABEL_11:
  if ( v10 )
    result = ((4 * *(unsigned __int8 *)(v10 + 1) + 11) & 0xFFFFFFFC) + (unsigned int)result;
LABEL_13:
  if ( (v1 & 4) == 0 )
    goto LABEL_19;
  if ( v5 )
  {
    v12 = *v11;
    if ( !(_DWORD)v12 )
      goto LABEL_19;
    v13 = a1 + v12;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 32);
  }
  if ( v13 )
    result = ((*(unsigned __int16 *)(v13 + 2) + 3) & 0xFFFFFFFC) + (unsigned int)result;
LABEL_19:
  if ( (v1 & 0x10) == 0 )
    return result;
  if ( v5 )
  {
    v14 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v14 )
      return result;
    v15 = a1 + v14;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 24);
  }
  if ( v15 )
    return ((*(unsigned __int16 *)(v15 + 2) + 3) & 0xFFFFFFFC) + (unsigned int)result;
  return result;
}
