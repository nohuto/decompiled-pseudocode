/*
 * XREFs of RtlpComputeMergedAcl2 @ 0x14080A094
 * Callers:
 *     RtlpComputeMergedAcl @ 0x140B53C90 (RtlpComputeMergedAcl.c)
 * Callees:
 *     RtlpCopyAces @ 0x1408EA440 (RtlpCopyAces.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
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
  bool v14; // bp
  char v15; // si
  unsigned int v16; // edi
  unsigned int v17; // ecx
  __int64 result; // rax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax

  v14 = 0;
  v15 = 1;
  v16 = 2;
  RtlCreateAcl(Acl, *a9, 2u);
  *a11 = 1024;
  if ( (a4 & 0x1000) == 0 )
  {
    if ( (a2 & 0x1000) != 0 )
    {
      if ( a3 )
      {
        if ( *a3 >= 2u )
          LOBYTE(v16) = *a3;
        goto LABEL_5;
      }
      if ( a8 != 1 )
        goto LABEL_32;
      return 3221225591LL;
    }
    v15 = a8 != 1;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v16 = *a3;
      v19 = RtlpCopyAces(a3, a7, 1LL);
      v14 = v19 == -1073741789;
      v20 = 0;
      if ( v19 != -1073741789 )
        v20 = v19;
      if ( v20 < 0 )
        return (unsigned int)v20;
      v15 &= -(*((_WORD *)a3 + 2) != 0);
    }
    else if ( a8 == 1 )
    {
      return 3221225591LL;
    }
    if ( a1 )
    {
      v21 = *a1;
      if ( v16 > v21 )
        LOBYTE(v21) = v16;
      LOBYTE(v16) = v21;
      result = RtlpCopyAces(a1, a7, 0LL);
      if ( (_DWORD)result == -1073741789 )
      {
        v14 = 1;
      }
      else if ( (int)result < 0 )
      {
        return result;
      }
    }
    goto LABEL_32;
  }
  *a11 = 5120;
  if ( !a3 )
    goto LABEL_32;
  if ( *a3 >= 2u )
    LOBYTE(v16) = *a3;
LABEL_5:
  v17 = RtlpCopyAces(a3, a7, 2LL);
  result = 0LL;
  if ( v17 != -1073741789 )
    result = v17;
  if ( (int)result < 0 )
    return result;
  v15 = 0;
  v14 = v17 == -1073741789;
LABEL_32:
  if ( v15 )
  {
    *a9 = 0;
  }
  else
  {
    *a9 = 8;
    if ( v14 )
      return 3221225507LL;
    Acl->AclSize = *(_WORD *)a9;
    Acl->AclRevision = v16;
  }
  return 0LL;
}
