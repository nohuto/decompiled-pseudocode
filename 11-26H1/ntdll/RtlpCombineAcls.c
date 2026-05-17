/*
 * XREFs of RtlpCombineAcls @ 0x18005DEB0
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlCreateAcl @ 0x18005D4F0 (RtlCreateAcl.c)
 *     memmove @ 0x180164700 (memmove.c)
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
  unsigned int v14; // r12d
  unsigned __int8 *v15; // r13
  unsigned __int8 *v16; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // r10d
  unsigned __int8 *v20; // rdx
  __int64 Heap_0; // rax
  unsigned int v22; // r12d
  unsigned __int16 *v23; // r9
  unsigned __int64 v24; // r10
  unsigned int i; // edx
  unsigned __int16 *v26; // rdi
  unsigned int v27; // ecx
  unsigned __int16 *v28; // rax
  unsigned __int16 *v29; // rdi
  unsigned __int16 *v30; // rdi
  unsigned int n; // esi
  unsigned __int16 *v32; // rsi
  unsigned int v33; // ecx
  unsigned __int16 *v34; // rdi
  unsigned int k; // esi
  unsigned __int16 *v36; // rax
  unsigned int v37; // edx
  unsigned __int16 *v38; // r13
  unsigned int v39; // ecx
  unsigned __int8 *v40; // rdx
  unsigned int v41; // ecx
  unsigned __int8 *v42; // rdx
  unsigned int v43; // edx
  unsigned __int8 *v44; // r9
  unsigned int v45; // r9d
  unsigned __int8 *v46; // rdx
  unsigned int v47; // edx
  unsigned __int8 *v48; // r9
  int Acl; // [rsp+20h] [rbp-38h]
  unsigned __int16 *v50; // [rsp+28h] [rbp-30h]
  unsigned int v51; // [rsp+60h] [rbp+8h]
  unsigned int j; // [rsp+60h] [rbp+8h]
  unsigned int m; // [rsp+60h] [rbp+8h]
  unsigned int v54; // [rsp+60h] [rbp+8h]

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
    v45 = 0;
    v46 = a1 + 8;
    while ( v45 < *((unsigned __int16 *)a1 + 2) )
    {
      if ( *v46 != 16 )
      {
        switch ( *v46 )
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
      if ( v18 + *((unsigned __int16 *)v46 + 1) < v18 )
        goto LABEL_40;
      v18 += *((unsigned __int16 *)v46 + 1);
      if ( a8 )
        *a8 |= 8u;
      if ( *a1 > v14 )
        v14 = *a1;
LABEL_102:
      ++v45;
      v46 += *((unsigned __int16 *)v46 + 1);
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
    v47 = 0;
    v48 = v15 + 8;
    while ( v47 < *((unsigned __int16 *)v15 + 2) )
    {
      if ( *v48 == 20 )
      {
        if ( v18 + *((unsigned __int16 *)v48 + 1) < v18 )
          goto LABEL_40;
        v18 += *((unsigned __int16 *)v48 + 1);
        if ( a8 )
          *a8 |= 0x80u;
        if ( *v15 > v14 )
          v14 = *v15;
      }
      ++v47;
      v48 += *((unsigned __int16 *)v48 + 1);
    }
  }
  if ( v16 )
  {
    v43 = 0;
    v44 = v16 + 8;
    while ( v43 < *((unsigned __int16 *)v16 + 2) )
    {
      if ( *v44 == 21 )
      {
        if ( v18 + *((unsigned __int16 *)v44 + 1) < v18 )
          goto LABEL_40;
        v18 += *((unsigned __int16 *)v44 + 1);
        if ( a8 )
          *a8 |= 0x100u;
        if ( *v16 > v14 )
          v14 = *v16;
      }
      ++v43;
      v44 += *((unsigned __int16 *)v44 + 1);
    }
  }
  if ( a3 )
  {
    v39 = 0;
    v40 = a3 + 8;
    while ( v39 < *((unsigned __int16 *)a3 + 2) )
    {
      if ( *v40 == 18 )
      {
        if ( v18 + *((unsigned __int16 *)v40 + 1) < v18 )
          goto LABEL_40;
        v18 += *((unsigned __int16 *)v40 + 1);
        if ( a8 )
          *a8 |= 0x20u;
        if ( *a3 > v14 )
          v14 = *a3;
      }
      ++v39;
      v40 += *((unsigned __int16 *)v40 + 1);
    }
  }
  if ( a4 )
  {
    v41 = 0;
    v42 = a4 + 8;
    while ( v41 < *((unsigned __int16 *)a4 + 2) )
    {
      if ( *v42 == 19 )
      {
        if ( v18 + *((unsigned __int16 *)v42 + 1) < v18 )
          goto LABEL_40;
        v18 += *((unsigned __int16 *)v42 + 1);
        if ( a8 )
          *a8 |= 0x40u;
        if ( *a4 > v14 )
          v14 = *a4;
      }
      ++v41;
      v42 += *((unsigned __int16 *)v42 + 1);
    }
  }
  if ( v18 + 3 < v18 )
  {
LABEL_40:
    v22 = -1073741675;
LABEL_41:
    *a7 = v13;
    return v22;
  }
  v51 = (v18 + 3) & 0xFFFFFFFC;
  Heap_0 = RtlAllocateHeap_0();
  v13 = (unsigned __int16 *)Heap_0;
  if ( !Heap_0 )
  {
    v22 = -1073741801;
    goto LABEL_41;
  }
  Acl = RtlCreateAcl(Heap_0, v51, v14);
  v22 = Acl;
  if ( Acl >= 0 )
  {
    v23 = v13 + 4;
    v24 = (unsigned __int64)v13 + v13[1];
    for ( i = 0; i < v13[2]; ++i )
    {
      if ( (unsigned __int64)v23 >= v24 )
      {
        v22 = -1073741699;
        goto LABEL_50;
      }
      v23 = (unsigned __int16 *)((char *)v23 + v23[1]);
    }
    if ( (unsigned __int64)v23 > v24 )
      v23 = 0LL;
    v50 = v23;
    if ( a1 )
    {
      v37 = 0;
      v54 = 0;
      if ( *((_WORD *)a1 + 2) )
      {
        v38 = (unsigned __int16 *)(a1 + 8);
        do
        {
          if ( *(_BYTE *)v38 == 16 )
          {
LABEL_69:
            memmove(v23, v38, v38[1]);
            ++v13[2];
            v37 = v54;
            v23 = (unsigned __int16 *)((char *)v50 + v38[1]);
            v50 = v23;
          }
          else
          {
            switch ( *(_BYTE *)v38 )
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
          ++v37;
          v38 = (unsigned __int16 *)((char *)v38 + v38[1]);
          v54 = v37;
        }
        while ( v37 < *((unsigned __int16 *)a1 + 2) );
        v22 = Acl;
        v15 = (unsigned __int8 *)a5;
      }
    }
    if ( a2 )
    {
      v26 = (unsigned __int16 *)(a2 + 8);
      v27 = 0;
      for ( j = 0; v27 < *((unsigned __int16 *)a2 + 2); j = v27 )
      {
        v28 = v26 + 1;
        if ( *(_BYTE *)v26 == 17 )
        {
          memmove(v23, v26, *v28);
          ++v13[2];
          v27 = j;
          v23 = (unsigned __int16 *)((char *)v50 + v26[1]);
          v28 = v26 + 1;
          v50 = v23;
        }
        ++v27;
        v26 = (unsigned __int16 *)((char *)v26 + *v28);
      }
    }
    if ( v15 )
    {
      v34 = (unsigned __int16 *)(v15 + 8);
      for ( k = 0; k < *((unsigned __int16 *)v15 + 2); v34 = (unsigned __int16 *)((char *)v34 + *v36) )
      {
        v36 = v34 + 1;
        if ( *(_BYTE *)v34 == 20 )
        {
          memmove(v23, v34, *v36);
          ++v13[2];
          v23 = (unsigned __int16 *)((char *)v50 + v34[1]);
          v36 = v34 + 1;
          v50 = v23;
        }
        ++k;
      }
    }
    if ( a6 )
    {
      v32 = (unsigned __int16 *)(a6 + 8);
      v33 = 0;
      for ( m = 0; v33 < *(unsigned __int16 *)(a6 + 4); m = v33 )
      {
        if ( *(_BYTE *)v32 == 21 )
        {
          memmove(v23, v32, v32[1]);
          ++v13[2];
          v33 = m;
          v23 = (unsigned __int16 *)((char *)v50 + v32[1]);
          v50 = v23;
        }
        ++v33;
        v32 = (unsigned __int16 *)((char *)v32 + v32[1]);
      }
    }
    if ( a3 )
    {
      v30 = (unsigned __int16 *)(a3 + 8);
      for ( n = 0; n < *((unsigned __int16 *)a3 + 2); v30 = (unsigned __int16 *)((char *)v30 + v30[1]) )
      {
        if ( *(_BYTE *)v30 == 18 )
        {
          memmove(v23, v30, v30[1]);
          ++v13[2];
          v23 = (unsigned __int16 *)((char *)v50 + v30[1]);
          v50 = v23;
        }
        ++n;
      }
    }
    if ( a4 )
    {
      v29 = (unsigned __int16 *)(a4 + 8);
      if ( *((_WORD *)a4 + 2) )
      {
        do
        {
          if ( *(_BYTE *)v29 == 19 )
          {
            memmove(v23, v29, v29[1]);
            ++v13[2];
            v23 = (unsigned __int16 *)((char *)v50 + v29[1]);
            v50 = v23;
          }
          ++v8;
          v29 = (unsigned __int16 *)((char *)v29 + v29[1]);
        }
        while ( v8 < *((unsigned __int16 *)a4 + 2) );
      }
    }
    goto LABEL_41;
  }
LABEL_50:
  RtlFreeHeap_0();
  *a7 = 0LL;
  return v22;
}
