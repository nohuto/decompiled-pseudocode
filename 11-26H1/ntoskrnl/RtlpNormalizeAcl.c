/*
 * XREFs of RtlpNormalizeAcl @ 0x1408E72B0
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1404E7820 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall RtlpNormalizeAcl(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  _DWORD *v5; // r10
  __int64 v6; // r14
  char *v7; // rsi
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  unsigned __int16 *v12; // rdi
  int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // r15d
  unsigned __int16 v16; // ax
  unsigned int v17; // r13d
  unsigned int v18; // ebx
  __int64 i; // r12
  __int64 v20; // r14
  unsigned __int16 *v21; // rbx
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  char v25; // dl
  char v26; // di
  unsigned __int8 v27; // al
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // ecx
  int v31; // [rsp+20h] [rbp-88h]
  unsigned int v32; // [rsp+24h] [rbp-84h]
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  unsigned int v35; // [rsp+40h] [rbp-68h]
  __int64 v37; // [rsp+50h] [rbp-58h]
  unsigned __int16 v39; // [rsp+60h] [rbp-48h]

  v3 = 0LL;
  v4 = a2 + 8;
  v5 = a3;
  v6 = a1;
  v37 = a2 + 8;
  v7 = (char *)(a1 + 8);
  v8 = 8;
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = 0;
  v31 = 8;
  v11 = 0;
  v35 = v9;
  v12 = (unsigned __int16 *)(a2 + 8);
  while ( 1 )
  {
    v32 = v11;
    v13 = 1651;
    if ( v11 >= v9 )
      break;
    v14 = 0LL;
    v15 = 0;
    v33 = 0LL;
    if ( v5 )
    {
      v15 = 8;
      if ( v12[1] < 8u )
        goto LABEL_35;
      v27 = *(_BYTE *)v12;
      if ( *(_BYTE *)v12 > 8u && v27 > 0xAu && (unsigned __int8)(v27 - 13) > 1u )
        goto LABEL_35;
      v33 = *(_QWORD *)v12;
      v14 = *(_QWORD *)v12;
      v28 = HIDWORD(*(_QWORD *)v12);
      v34 = *(_QWORD *)v12;
      if ( (*(_QWORD *)v12 & 0x800LL) == 0 )
      {
        if ( (int)v28 < 0 )
          LODWORD(v28) = *v5 | v28;
        if ( (v28 & 0x40000000) != 0 )
          LODWORD(v28) = v5[1] | v28;
        if ( (v28 & 0x20000000) != 0 )
          LODWORD(v28) = v5[2] | v28;
        if ( (v28 & 0x10000000) != 0 )
          LODWORD(v28) = v5[3] | v28;
        v29 = v28 & 0xFFFFFFF;
        if ( (unsigned __int8)v34 <= 0xAu && _bittest(&v13, (unsigned __int8)v34) )
          v30 = v5[3] & v29;
        else
          v30 = (v5[3] | 0x1000000) & v29;
        HIDWORD(v34) = v30;
        v14 = v34;
        v33 = v34;
      }
      if ( v14 == *(_QWORD *)v12 )
LABEL_35:
        v15 = 0;
    }
    v16 = v12[1];
    v39 = v16;
    v17 = v16 - v15;
    if ( *(_BYTE *)v12 )
    {
LABEL_10:
      v21 = (unsigned __int16 *)((char *)v12 + v12[1]);
      v8 += v12[1];
      v31 = v8;
      if ( v6 )
      {
        if ( v15 )
          *(_QWORD *)v7 = v14;
        if ( v7 != (char *)v12 )
        {
          memmove(&v7[v15], &v12[v15 / 2], v17);
          v8 = v31;
          v3 = 0LL;
          v5 = a3;
          v4 = v37;
        }
        v7 += *((unsigned __int16 *)v7 + 1);
      }
      ++v10;
    }
    else
    {
      v18 = 0;
      for ( i = v4; ; i += v20 )
      {
        if ( v18 >= v10 )
        {
          v6 = a1;
          v3 = 0LL;
          v8 = v31;
          v5 = a3;
          v4 = v37;
          goto LABEL_10;
        }
        v20 = *(unsigned __int16 *)(i + 2);
        if ( (_WORD)v20 == v16 && (!v15 || *(_QWORD *)i == v14) && !memcmp((const void *)(v15 + i), &v12[v15 / 2], v17) )
          break;
        v16 = v39;
        ++v18;
        v14 = v33;
      }
      v6 = a1;
      v21 = (unsigned __int16 *)((char *)v12 + v12[1]);
      if ( !a1 )
        return 1;
      v8 = v31;
      v3 = 0LL;
      v5 = a3;
      v4 = v37;
    }
    v12 = v21;
    v9 = v35;
    v11 = v32 + 1;
  }
  v23 = (v8 + 3) & 0xFFFFFFFC;
  v24 = v23 - v8;
  if ( v23 != v8 )
  {
    while ( (unsigned int)v3 < v24 )
    {
      if ( *((_BYTE *)v12 + v3) )
      {
        v25 = 1;
        goto LABEL_24;
      }
      v3 = (unsigned int)(v3 + 1);
    }
  }
  v25 = 0;
LABEL_24:
  v26 = v25;
  if ( v23 != *(unsigned __int16 *)(a2 + 2) )
    v26 = 1;
  if ( v6 )
  {
    if ( v24 )
      memset_0(v7, 0, v24);
    *(_QWORD *)v6 = *(_QWORD *)a2;
    *(_WORD *)(v6 + 2) = v23;
    *(_WORD *)(v6 + 4) = v10;
  }
  return v26;
}
