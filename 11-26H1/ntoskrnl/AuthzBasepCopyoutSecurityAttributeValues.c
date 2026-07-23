/*
 * XREFs of AuthzBasepCopyoutSecurityAttributeValues @ 0x1403B1A40
 * Callers:
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403B1710 (AuthzBasepCopyoutSecurityAttributes.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall AuthzBasepCopyoutSecurityAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rbp
  int v9; // ecx
  unsigned __int64 v10; // r9
  char *v11; // r10
  _QWORD *v12; // r11
  unsigned int v13; // r8d
  _QWORD *k; // rcx
  __int64 v15; // rdx
  unsigned __int64 v17; // r13
  __int64 *v18; // rax
  __int64 *v19; // rsi
  unsigned int v20; // r12d
  size_t v21; // r8
  char *v22; // r15
  __int64 v23; // rax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // r12
  __int64 *v29; // r15
  __int64 *v30; // rsi
  __int64 i; // rax
  size_t v32; // r8
  char *v33; // r13
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __int64 *v36; // r15
  __int64 *v37; // rsi
  __int64 j; // rax
  size_t v39; // r8
  char *v40; // r13
  __int64 v41; // rcx
  __int64 *v42; // [rsp+60h] [rbp+18h]
  int v43; // [rsp+60h] [rbp+18h]
  int v44; // [rsp+60h] [rbp+18h]

  v5 = 0;
  v6 = a3 + a4;
  if ( a3 + a4 < a3 )
    return (unsigned int)-2147483643;
  v9 = *(unsigned __int16 *)(a1 + 48);
  *a5 = 0LL;
  if ( v9 != 6 )
  {
    if ( v9 == 3 )
    {
      v17 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v11 = (char *)(v17 + 16LL * *(unsigned int *)(a1 + 60));
      if ( (unsigned __int64)v11 <= v6 )
      {
        v18 = (__int64 *)(a1 + 72);
        *(_QWORD *)(a2 + 32) = v17;
        v19 = *(__int64 **)(a1 + 72);
        v20 = 0;
        v42 = (__int64 *)(a1 + 72);
        while ( v19 != v18 )
        {
          v21 = *((unsigned __int16 *)v19 + 20);
          v22 = &v11[v21];
          if ( (unsigned __int64)&v11[v21] > v6 )
            return (unsigned int)-2147483643;
          v23 = 2LL * v20;
          *(_WORD *)(v17 + 8 * v23) = v21;
          *(_WORD *)(v17 + 8 * v23 + 2) = v21;
          *(_QWORD *)(v17 + 8 * v23 + 8) = v11;
          memmove(v11, (const void *)v19[6], v21);
          v18 = v42;
          v11 = v22;
          v19 = (__int64 *)*v19;
          ++v20;
        }
        goto LABEL_6;
      }
    }
    else
    {
      v24 = v9 - 1;
      if ( !v24 )
        goto LABEL_3;
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_3;
      v26 = v25 - 2;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 && v27 != 11 )
          return (unsigned int)-1073741811;
        v28 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v11 = (char *)(v28 + 16LL * *(unsigned int *)(a1 + 60));
        if ( (unsigned __int64)v11 <= v6 )
        {
          v29 = (__int64 *)(a1 + 72);
          *(_QWORD *)(a2 + 32) = v28;
          v30 = *(__int64 **)(a1 + 72);
          for ( i = 0LL; ; i = (unsigned int)(v43 + 1) )
          {
            v43 = i;
            if ( v30 == v29 )
              break;
            v32 = *((unsigned int *)v30 + 12);
            v33 = &v11[v32];
            if ( (unsigned __int64)&v11[v32] > v6 )
              return (unsigned int)-2147483643;
            v34 = 2 * i;
            *(_QWORD *)(v28 + 8 * v34) = v11;
            *(_DWORD *)(v28 + 8 * v34 + 8) = v32;
            memmove(v11, (const void *)v30[5], v32);
            v11 = v33;
            v30 = (__int64 *)*v30;
          }
          goto LABEL_6;
        }
      }
      else
      {
        v35 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        v11 = (char *)(v35 + 24LL * *(unsigned int *)(a1 + 60));
        if ( (unsigned __int64)v11 <= v6 )
        {
          v36 = (__int64 *)(a1 + 72);
          *(_QWORD *)(a2 + 32) = v35;
          v37 = *(__int64 **)(a1 + 72);
          for ( j = 0LL; ; j = (unsigned int)(v44 + 1) )
          {
            v44 = j;
            if ( v37 == v36 )
              break;
            v39 = *((unsigned __int16 *)v37 + 24);
            v40 = &v11[v39];
            if ( (unsigned __int64)&v11[v39] > v6 )
              return (unsigned int)-2147483643;
            v41 = 3 * j;
            *(_QWORD *)(v35 + 8 * v41) = v37[5];
            *(_WORD *)(v35 + 8 * v41 + 8) = v39;
            *(_WORD *)(v35 + 8 * v41 + 10) = v39;
            *(_QWORD *)(v35 + 8 * v41 + 16) = v11;
            memmove(v11, (const void *)v37[7], v39);
            v11 = v40;
            v37 = (__int64 *)*v37;
          }
          goto LABEL_6;
        }
      }
    }
    return (unsigned int)-2147483643;
  }
LABEL_3:
  v10 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v11 = (char *)(v10 + 8LL * *(unsigned int *)(a1 + 60));
  if ( (unsigned __int64)v11 > v6 )
    return (unsigned int)-2147483643;
  v12 = (_QWORD *)(a1 + 72);
  *(_QWORD *)(a2 + 32) = v10;
  v13 = 0;
  for ( k = (_QWORD *)*v12; k != v12; k = (_QWORD *)*k )
  {
    v15 = v13++;
    *(_QWORD *)(v10 + 8 * v15) = k[5];
  }
LABEL_6:
  *a5 = &v11[-a3];
  return v5;
}
