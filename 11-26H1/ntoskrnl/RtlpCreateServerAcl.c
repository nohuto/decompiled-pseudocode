/*
 * XREFs of RtlpCreateServerAcl @ 0x1408E6F44
 * Callers:
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlUShortAdd @ 0x14047AFC0 (RtlUShortAdd.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  USHORT v6; // r10
  char v7; // r13
  unsigned __int16 *v9; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned __int16 v12; // r9
  __int64 v13; // r11
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // si
  unsigned __int16 v16; // ax
  unsigned int v17; // ecx
  __int64 v18; // rax
  ACL *Pool2; // rax
  ACL *v20; // r15
  unsigned int v21; // esi
  unsigned int v22; // eax
  char *v23; // rbx
  unsigned __int8 *v24; // r15
  char v25; // al
  char *v26; // r12
  char *v27; // r13
  unsigned __int8 *v28; // r14
  char *v29; // rbx
  char *v30; // rbx
  __int64 v31; // rcx
  __int16 v32; // ax
  NTSTATUS result; // eax
  _BYTE *v34; // rax
  __int16 v35; // ax
  USHORT v36; // dx
  ACL *pusResult; // [rsp+60h] [rbp+8h] BYREF
  char v38; // [rsp+68h] [rbp+10h]
  void *Src; // [rsp+70h] [rbp+18h]

  Src = a3;
  v38 = a2;
  LOWORD(pusResult) = 8;
  v6 = 8;
  v7 = a2;
  if ( a1 )
  {
    v9 = (unsigned __int16 *)(a1 + 8);
    v10 = *(unsigned __int16 *)(a1 + 4);
    v11 = 0;
    v12 = 4 * (a3[1] + 2);
    v13 = a1 + 8;
    v14 = 8;
    v15 = 8;
    while ( v11 < v10 )
    {
      if ( *(_BYTE *)v13 )
      {
        if ( v7 && *(_BYTE *)v13 == 4 )
        {
          v35 = 4 * *(unsigned __int8 *)(v13 + 13);
          if ( (unsigned __int16)(v35 + 8) <= v12 )
            v36 = v12 - v35 - 8;
          else
            v36 = v35 + 8 - v12;
          result = RtlUShortAdd(v6, v36, (USHORT *)&pusResult);
          if ( result < 0 )
            return result;
          v6 = (unsigned __int16)pusResult;
        }
      }
      else
      {
        v16 = v12 + v14;
        if ( (unsigned __int16)(v12 + v14) < v14 )
          return -1073741675;
        if ( (unsigned __int16)(v16 + 4) < v16 )
          v6 = -1;
        else
          v6 = v16 + 4;
        v17 = (unsigned __int16)(v16 + 4) < v16 ? 0xC0000095 : 0;
        if ( (unsigned __int16)(v16 + 4) < v16 )
          return v17;
      }
      v18 = *(unsigned __int16 *)(v13 + 2);
      v14 = v6 + *(_WORD *)(v13 + 2);
      if ( v14 < v6 )
        return -1073741675;
      ++v11;
      LOWORD(pusResult) = v6 + *(_WORD *)(v13 + 2);
      v13 += v18;
      v6 = v14;
      v15 = v14;
    }
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    *a4 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    *a5 = 1;
    RtlCreateAcl(Pool2, v15, 3u);
    v20 = *a4;
    v21 = 0;
    LOWORD(v22) = *(_WORD *)(a1 + 4);
    pusResult = v20;
    v23 = (char *)&v20[1];
    if ( (_WORD)v22 )
    {
      v24 = (unsigned __int8 *)Src;
      do
      {
        v25 = *(_BYTE *)v9;
        v26 = v23;
        if ( !*(_BYTE *)v9 || v7 && v25 == 4 )
        {
          v27 = v23;
          if ( v25 )
            v28 = (unsigned __int8 *)v9 + RtlLengthSid(v9 + 6) + 12;
          else
            v28 = (unsigned __int8 *)(v9 + 4);
          *(_QWORD *)v23 = *(_QWORD *)v9;
          v29 = v23 + 12;
          memmove(v29, v24, 4LL * v24[1] + 8);
          v30 = &v29[(unsigned __int8)(4 * (v24[1] + 2))];
          memmove(v30, v28, 4LL * v28[1] + 8);
          v31 = v28[1];
          v32 = v24[1] + 7;
          *v26 = 4;
          v23 = &v30[4 * v31 + 8];
          *((_WORD *)v27 + 1) = 4 * (v32 + v31);
          *((_WORD *)v27 + 4) = 1;
          v7 = v38;
        }
        else
        {
          memmove(v23, v9, v9[1]);
          v23 += v9[1];
        }
        ++v21;
        v9 = (unsigned __int16 *)((char *)v9 + v9[1]);
        v22 = *(unsigned __int16 *)(a1 + 4);
      }
      while ( v21 < v22 );
      v20 = pusResult;
    }
    v20->AceCount = v22;
  }
  else
  {
    v34 = a5;
    *a4 = 0LL;
    *v34 = 0;
  }
  return 0;
}
