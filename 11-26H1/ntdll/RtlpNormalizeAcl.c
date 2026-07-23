/*
 * XREFs of RtlpNormalizeAcl @ 0x1800460D0
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     RtlNormalizeSecurityDescriptor @ 0x18013CFD0 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpNormalizeAcl(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r15d
  unsigned int v5; // eax
  unsigned int v6; // r9d
  char *v7; // r13
  char *v8; // rcx
  int v9; // edx
  char *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  char v13; // r9
  char v14; // di
  char v16; // r9
  unsigned __int64 v17; // rbx
  unsigned int v18; // ebp
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rbx
  int v21; // ebx
  int v22; // r10d
  int v23; // ebx
  unsigned __int16 v24; // ax
  unsigned int v25; // r12d
  char *v26; // r14
  unsigned int v27; // r15d
  unsigned int v28; // ecx
  __int64 v29; // rax
  char *v30; // r14
  __int64 i; // rdx
  int v32; // [rsp+24h] [rbp-74h]
  int v33; // [rsp+28h] [rbp-70h]
  unsigned int v34; // [rsp+2Ch] [rbp-6Ch]
  unsigned __int64 v35; // [rsp+30h] [rbp-68h]
  unsigned int v36; // [rsp+40h] [rbp-58h]
  _DWORD *v37; // [rsp+48h] [rbp-50h]
  char *v38; // [rsp+50h] [rbp-48h]

  v3 = 0;
  v37 = a3;
  v32 = 0;
  v5 = 0;
  v6 = *(unsigned __int16 *)(a2 + 4);
  v7 = (char *)(a1 + 8);
  v8 = (char *)(a2 + 8);
  v36 = v6;
  v9 = 8;
  v38 = v8;
  v33 = 8;
  v10 = v8;
  while ( 1 )
  {
    v34 = v5;
    if ( v5 >= v6 )
      break;
    v16 = 0;
    v17 = 0LL;
    v18 = 0;
    if ( a3 )
    {
      v18 = 8;
      if ( *((_WORD *)v10 + 1) < 8u )
        goto LABEL_29;
      v19 = *v10;
      if ( (unsigned __int8)*v10 > 8u && v19 > 0xAu && (unsigned __int8)(v19 - 13) > 1u )
        goto LABEL_29;
      v35 = *(_QWORD *)v10;
      v17 = *(_QWORD *)v10;
      if ( (*(_QWORD *)v10 & 0x800LL) == 0 )
      {
        v20 = HIDWORD(v35);
        if ( (v35 & 0x8000000000000000uLL) != 0LL )
          LODWORD(v20) = *a3 | HIDWORD(v35);
        if ( (v20 & 0x40000000) != 0 )
          LODWORD(v20) = a3[1] | v20;
        if ( (v20 & 0x20000000) != 0 )
          LODWORD(v20) = a3[2] | v20;
        if ( (v20 & 0x10000000) != 0 )
          LODWORD(v20) = a3[3] | v20;
        v21 = v20 & 0xFFFFFFF;
        if ( (unsigned __int8)v35 <= 0xAu && (v22 = 1651, _bittest(&v22, (unsigned __int8)v35)) )
          v23 = a3[3] & v21;
        else
          v23 = (a3[3] | 0x1000000) & v21;
        HIDWORD(v35) = v23;
        v17 = v35;
      }
      if ( v17 == *(_QWORD *)v10 )
LABEL_29:
        v18 = 0;
    }
    v24 = *((_WORD *)v10 + 1);
    v25 = v24 - v18;
    if ( !*v10 )
    {
      v26 = v8;
      v27 = 0;
      v28 = v32;
      while ( v27 < v28 )
      {
        if ( *((_WORD *)v26 + 1) == v24 && (!v18 || *(_QWORD *)v26 == v17) )
        {
          if ( !memcmp(&v26[v18], &v10[v18], v25) )
          {
            v16 = 1;
            goto LABEL_38;
          }
          v28 = v32;
        }
        ++v27;
        v26 += *((unsigned __int16 *)v26 + 1);
        v24 = *((_WORD *)v10 + 1);
      }
      v16 = 0;
LABEL_38:
      v3 = v32;
      v9 = v33;
    }
    v29 = *((unsigned __int16 *)v10 + 1);
    v30 = &v10[v29];
    if ( v16 )
    {
      if ( !a1 )
        return 1;
    }
    else
    {
      v9 += v29;
      v33 = v9;
      if ( a1 )
      {
        if ( v18 )
          *(_QWORD *)v7 = v17;
        if ( v7 != v10 )
        {
          memmove(&v7[v18], &v10[v18], v25);
          v9 = v33;
        }
        v7 += *((unsigned __int16 *)v7 + 1);
      }
      v32 = ++v3;
    }
    v10 = v30;
    a3 = v37;
    v5 = v34 + 1;
    v8 = v38;
    v6 = v36;
  }
  v11 = (v9 + 3) & 0xFFFFFFFC;
  v12 = v11 - v9;
  if ( v11 != v9 )
  {
    for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
    {
      if ( v10[i] )
      {
        v13 = 1;
        goto LABEL_5;
      }
    }
  }
  v13 = 0;
LABEL_5:
  v14 = v13;
  if ( v11 != *(unsigned __int16 *)(a2 + 2) )
    v14 = 1;
  if ( a1 )
  {
    if ( v12 )
      memset_thunk_772440563353939046(v7, 0, v12);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_WORD *)(a1 + 2) = v11;
    *(_WORD *)(a1 + 4) = v3;
  }
  return v14;
}
