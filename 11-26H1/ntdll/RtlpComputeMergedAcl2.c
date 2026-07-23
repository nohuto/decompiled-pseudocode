/*
 * XREFs of RtlpComputeMergedAcl2 @ 0x180045948
 * Callers:
 *     RtlpComputeMergedAcl @ 0x1800463AC (RtlpComputeMergedAcl.c)
 * Callees:
 *     RtlCreateAcl @ 0x180047A70 (RtlCreateAcl.c)
 *     RtlpCopyAces @ 0x18004BDC0 (RtlpCopyAces.c)
 */

__int64 __fastcall RtlpComputeMergedAcl2(
        unsigned __int8 *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        ULONG *a9,
        PACL Acl,
        _DWORD *a11)
{
  ULONG *v11; // r12
  PACL v13; // r15
  bool v16; // bp
  char v17; // si
  unsigned int v18; // edi
  __int64 v19; // r9
  _DWORD *v20; // rax
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  __int64 result; // rax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  ULONG v28; // ecx
  int v29; // [rsp+20h] [rbp-98h]
  int v30; // [rsp+48h] [rbp-70h]
  int v31; // [rsp+50h] [rbp-68h]
  char v32; // [rsp+50h] [rbp-68h]
  int v33; // [rsp+58h] [rbp-60h]
  PACL v34; // [rsp+68h] [rbp-50h]
  _DWORD v35[18]; // [rsp+70h] [rbp-48h] BYREF
  int v37; // [rsp+D8h] [rbp+20h] BYREF

  v11 = a9;
  v13 = Acl;
  v37 = 0;
  v35[0] = 0;
  v16 = 0;
  v17 = 1;
  v18 = 2;
  RtlCreateAcl(Acl, *a9, 2u);
  v20 = a11;
  *a11 = 1024;
  if ( (a4 & 0x1000) != 0 )
  {
    *v20 = 5120;
    if ( !a3 )
      goto LABEL_23;
    LOBYTE(v19) = 16;
    v34 = v13;
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    v33 = a8;
    v32 = 0;
    goto LABEL_19;
  }
  if ( (a2 & 0x1000) == 0 )
  {
    v21 = a8;
    v17 = a8 != 1;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v18 = *a3;
      v22 = RtlpCopyAces(a3, a7, 1LL, 0LL, 1, a5, a6, a5, a6, 1, 0, a8, &v37, v13);
      v16 = v22 == -1073741789;
      v23 = 0;
      if ( v22 != -1073741789 )
        v23 = v22;
      if ( v23 < 0 )
        return (unsigned int)v23;
      v17 &= -(*((_WORD *)a3 + 2) != 0);
LABEL_10:
      if ( a1 )
      {
        v24 = *a1;
        if ( v18 > v24 )
          LOBYTE(v24) = v18;
        LOBYTE(v18) = v24;
        LOBYTE(v31) = 0;
        LOBYTE(v30) = 1;
        LOBYTE(v29) = 0;
        result = RtlpCopyAces(a1, a7, 0LL, 0LL, v29, 0LL, 0LL, 0LL, 0LL, v30, v31, v21, v35, v13);
        if ( (_DWORD)result == -1073741789 )
        {
          v16 = 1;
        }
        else if ( (int)result < 0 )
        {
          return result;
        }
      }
      goto LABEL_23;
    }
    if ( a8 != 1 )
      goto LABEL_10;
    return 3221225591LL;
  }
  if ( a3 )
  {
    v34 = v13;
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    v19 = 0LL;
    v33 = a8;
    v32 = 1;
LABEL_19:
    v26 = RtlpCopyAces(a3, a7, 2LL, v19, 1, a5, a6, a5, a6, 1, v32, v33, &v37, v34);
    result = 0LL;
    if ( v26 != -1073741789 )
      result = v26;
    if ( (int)result < 0 )
      return result;
    v17 = 0;
    v16 = v26 == -1073741789;
    goto LABEL_23;
  }
  if ( a8 == 1 )
    return 3221225591LL;
LABEL_23:
  v27 = v35[0] + v37;
  if ( v35[0] + v37 || !v17 )
  {
    if ( (unsigned __int64)v27 + 8 > 0xFFFF )
      return 3221225597LL;
    v28 = v27 + 8;
    *v11 = v28;
    if ( v16 )
      return 3221225507LL;
    v13->AclSize = v28;
    v13->AclRevision = v18;
  }
  else
  {
    *v11 = 0;
  }
  return 0LL;
}
