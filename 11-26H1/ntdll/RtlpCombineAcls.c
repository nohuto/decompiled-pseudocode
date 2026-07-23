/*
 * XREFs of RtlpCombineAcls @ 0x180048430
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlCreateAcl @ 0x180047A70 (RtlCreateAcl.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int16 **a7,
        _DWORD *a8)
{
  unsigned int v8; // ebx
  unsigned __int16 *v13; // rbp
  ULONG v14; // r12d
  unsigned __int8 *v15; // r13
  unsigned __int8 *v16; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // r10d
  unsigned __int8 *v20; // rdx
  unsigned int v21; // eax
  ACL *Heap_0; // rax
  unsigned int v23; // r12d
  unsigned __int16 *v24; // r9
  unsigned __int16 *v25; // r10
  unsigned int i; // edx
  unsigned __int16 *v27; // rdi
  unsigned int v28; // ecx
  unsigned __int16 *v29; // rax
  unsigned __int16 *v30; // rdi
  unsigned __int16 *v31; // rdi
  unsigned int k; // esi
  unsigned __int16 *v33; // rsi
  unsigned int v34; // ecx
  unsigned __int16 *v35; // rdi
  unsigned int j; // esi
  unsigned __int16 *v37; // rax
  unsigned int v38; // edx
  unsigned __int16 *v39; // r13
  unsigned int v40; // ecx
  unsigned __int8 *v41; // rdx
  unsigned int v42; // ecx
  unsigned __int8 *v43; // rdx
  unsigned int v44; // edx
  unsigned __int8 *v45; // r9
  unsigned int v46; // r9d
  unsigned __int8 *v47; // rdx
  unsigned int v48; // edx
  unsigned __int8 *v49; // r9
  NTSTATUS Acl; // [rsp+20h] [rbp-38h]
  unsigned __int16 *v51; // [rsp+28h] [rbp-30h]
  unsigned int AclLength; // [rsp+60h] [rbp+8h]
  ULONG AclLengtha; // [rsp+60h] [rbp+8h]
  ULONG AclLengthb; // [rsp+60h] [rbp+8h]
  ULONG AclLengthc; // [rsp+60h] [rbp+8h]

  v8 = 0;
  v13 = 0LL;
  v14 = 2;
  if ( a1 || a2 || a3 || a4 )
  {
    v15 = (unsigned __int8 *)a5;
    v16 = (unsigned __int8 *)a6;
  }
  else
  {
    v15 = (unsigned __int8 *)a5;
    v16 = (unsigned __int8 *)a6;
    if ( __PAIR128__(a6, a5) == 0 )
    {
      *a7 = 0LL;
      return 0LL;
    }
  }
  v18 = 8;
  if ( a1 )
  {
    v46 = 0;
    v47 = a1 + 8;
    while ( v46 < *((unsigned __int16 *)a1 + 2) )
    {
      if ( *v47 != 16 )
      {
        switch ( *v47 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
            break;
          default:
            goto LABEL_102;
        }
      }
      if ( v18 + *((unsigned __int16 *)v47 + 1) < v18 )
        goto LABEL_40;
      v18 += *((unsigned __int16 *)v47 + 1);
      if ( a8 )
        *a8 |= 8u;
      if ( *a1 > v14 )
        v14 = *a1;
LABEL_102:
      ++v46;
      v47 += *((unsigned __int16 *)v47 + 1);
    }
    v16 = (unsigned __int8 *)a6;
  }
  if ( a2 )
  {
    v19 = 0;
    v20 = a2 + 8;
    while ( v19 < *((unsigned __int16 *)a2 + 2) )
    {
      if ( *v20 == 17 )
      {
        if ( v18 + *((unsigned __int16 *)v20 + 1) < v18 )
          goto LABEL_40;
        v18 += *((unsigned __int16 *)v20 + 1);
        if ( a8 )
          *a8 |= 0x10u;
        if ( *a2 > v14 )
          v14 = *a2;
      }
      ++v19;
      v20 += *((unsigned __int16 *)v20 + 1);
    }
  }
  if ( v15 )
  {
    v48 = 0;
    v49 = v15 + 8;
    while ( v48 < *((unsigned __int16 *)v15 + 2) )
    {
      if ( *v49 == 20 )
      {
        if ( v18 + *((unsigned __int16 *)v49 + 1) < v18 )
          goto LABEL_40;
        v18 += *((unsigned __int16 *)v49 + 1);
        if ( a8 )
          *a8 |= 0x80u;
        if ( *v15 > v14 )
          v14 = *v15;
      }
      ++v48;
      v49 += *((unsigned __int16 *)v49 + 1);
    }
  }
  if ( v16 )
  {
    v44 = 0;
    v45 = v16 + 8;
    while ( v44 < *((unsigned __int16 *)v16 + 2) )
    {
      if ( *v45 == 21 )
      {
        if ( v18 + *((unsigned __int16 *)v45 + 1) < v18 )
          goto LABEL_40;
        v18 += *((unsigned __int16 *)v45 + 1);
        if ( a8 )
          *a8 |= 0x100u;
        if ( *v16 > v14 )
          v14 = *v16;
      }
      ++v44;
      v45 += *((unsigned __int16 *)v45 + 1);
    }
  }
  if ( a3 )
  {
    v40 = 0;
    v41 = a3 + 8;
    while ( v40 < *((unsigned __int16 *)a3 + 2) )
    {
      if ( *v41 == 18 )
      {
        if ( v18 + *((unsigned __int16 *)v41 + 1) < v18 )
          goto LABEL_40;
        v18 += *((unsigned __int16 *)v41 + 1);
        if ( a8 )
          *a8 |= 0x20u;
        if ( *a3 > v14 )
          v14 = *a3;
      }
      ++v40;
      v41 += *((unsigned __int16 *)v41 + 1);
    }
  }
  if ( a4 )
  {
    v42 = 0;
    v43 = a4 + 8;
    while ( v42 < *((unsigned __int16 *)a4 + 2) )
    {
      if ( *v43 == 19 )
      {
        if ( v18 + *((unsigned __int16 *)v43 + 1) < v18 )
          goto LABEL_40;
        v18 += *((unsigned __int16 *)v43 + 1);
        if ( a8 )
          *a8 |= 0x40u;
        if ( *a4 > v14 )
          v14 = *a4;
      }
      ++v42;
      v43 += *((unsigned __int16 *)v43 + 1);
    }
  }
  v21 = v18 + 3;
  if ( v18 + 3 < v18 )
  {
LABEL_40:
    v23 = -1073741675;
LABEL_41:
    *a7 = v13;
    return v23;
  }
  AclLength = v21 & 0xFFFFFFFC;
  Heap_0 = (ACL *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v21 & 0xFFFFFFFC);
  v13 = (unsigned __int16 *)Heap_0;
  if ( !Heap_0 )
  {
    v23 = -1073741801;
    goto LABEL_41;
  }
  Acl = RtlCreateAcl(Heap_0, AclLength, v14);
  v23 = Acl;
  if ( Acl >= 0 )
  {
    v24 = v13 + 4;
    v25 = (unsigned __int16 *)((char *)v13 + v13[1]);
    for ( i = 0; i < v13[2]; ++i )
    {
      if ( v24 >= v25 )
      {
        v23 = -1073741699;
        goto LABEL_50;
      }
      v24 = (unsigned __int16 *)((char *)v24 + v24[1]);
    }
    if ( v24 > v25 )
      v24 = 0LL;
    v51 = v24;
    if ( a1 )
    {
      v38 = 0;
      AclLengthc = 0;
      if ( *((_WORD *)a1 + 2) )
      {
        v39 = (unsigned __int16 *)(a1 + 8);
        do
        {
          if ( *(_BYTE *)v39 == 16 )
          {
LABEL_69:
            memmove(v24, v39, v39[1]);
            ++v13[2];
            v38 = AclLengthc;
            v24 = (unsigned __int16 *)((char *)v51 + v39[1]);
            v51 = v24;
          }
          else
          {
            switch ( *(_BYTE *)v39 )
            {
              case 2:
              case 3:
              case 7:
              case 8:
              case 0xD:
              case 0xE:
              case 0xF:
                goto LABEL_69;
              default:
                break;
            }
          }
          ++v38;
          v39 = (unsigned __int16 *)((char *)v39 + v39[1]);
          AclLengthc = v38;
        }
        while ( v38 < *((unsigned __int16 *)a1 + 2) );
        v23 = Acl;
        v15 = (unsigned __int8 *)a5;
      }
    }
    if ( a2 )
    {
      v27 = (unsigned __int16 *)(a2 + 8);
      v28 = 0;
      for ( AclLengtha = 0; v28 < *((unsigned __int16 *)a2 + 2); AclLengtha = v28 )
      {
        v29 = v27 + 1;
        if ( *(_BYTE *)v27 == 17 )
        {
          memmove(v24, v27, *v29);
          ++v13[2];
          v28 = AclLengtha;
          v24 = (unsigned __int16 *)((char *)v51 + v27[1]);
          v29 = v27 + 1;
          v51 = v24;
        }
        ++v28;
        v27 = (unsigned __int16 *)((char *)v27 + *v29);
      }
    }
    if ( v15 )
    {
      v35 = (unsigned __int16 *)(v15 + 8);
      for ( j = 0; j < *((unsigned __int16 *)v15 + 2); v35 = (unsigned __int16 *)((char *)v35 + *v37) )
      {
        v37 = v35 + 1;
        if ( *(_BYTE *)v35 == 20 )
        {
          memmove(v24, v35, *v37);
          ++v13[2];
          v24 = (unsigned __int16 *)((char *)v51 + v35[1]);
          v37 = v35 + 1;
          v51 = v24;
        }
        ++j;
      }
    }
    if ( a6 )
    {
      v33 = (unsigned __int16 *)(a6 + 8);
      v34 = 0;
      for ( AclLengthb = 0; v34 < *(unsigned __int16 *)(a6 + 4); AclLengthb = v34 )
      {
        if ( *(_BYTE *)v33 == 21 )
        {
          memmove(v24, v33, v33[1]);
          ++v13[2];
          v34 = AclLengthb;
          v24 = (unsigned __int16 *)((char *)v51 + v33[1]);
          v51 = v24;
        }
        ++v34;
        v33 = (unsigned __int16 *)((char *)v33 + v33[1]);
      }
    }
    if ( a3 )
    {
      v31 = (unsigned __int16 *)(a3 + 8);
      for ( k = 0; k < *((unsigned __int16 *)a3 + 2); v31 = (unsigned __int16 *)((char *)v31 + v31[1]) )
      {
        if ( *(_BYTE *)v31 == 18 )
        {
          memmove(v24, v31, v31[1]);
          ++v13[2];
          v24 = (unsigned __int16 *)((char *)v51 + v31[1]);
          v51 = v24;
        }
        ++k;
      }
    }
    if ( a4 )
    {
      v30 = (unsigned __int16 *)(a4 + 8);
      if ( *((_WORD *)a4 + 2) )
      {
        do
        {
          if ( *(_BYTE *)v30 == 19 )
          {
            memmove(v24, v30, v30[1]);
            ++v13[2];
            v24 = (unsigned __int16 *)((char *)v51 + v30[1]);
            v51 = v24;
          }
          ++v8;
          v30 = (unsigned __int16 *)((char *)v30 + v30[1]);
        }
        while ( v8 < *((unsigned __int16 *)a4 + 2) );
      }
    }
    goto LABEL_41;
  }
LABEL_50:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v13);
  *a7 = 0LL;
  return v23;
}
