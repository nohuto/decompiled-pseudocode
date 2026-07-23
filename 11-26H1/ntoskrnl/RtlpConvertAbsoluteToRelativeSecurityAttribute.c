/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140809440
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x140808EE0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // ebx
  NTSTATUS k; // edi
  unsigned int v11; // r12d
  unsigned int v12; // r11d
  unsigned int j; // edx
  unsigned int v14; // eax
  unsigned int i; // ebx
  unsigned int v16; // r11d
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ebx
  unsigned int v23; // ebp
  _DWORD *v24; // r11
  unsigned int v25; // r12d
  unsigned int v26; // ebp
  __int64 v27; // rbx
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // r12d
  void *v31; // r11
  int v32; // ebx
  __int64 v33; // rcx
  size_t pcbLength; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  pcbLength = 0LL;
  LODWORD(v7) = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_DWORD *)(a1 + 16);
  if ( v8 )
  {
    v7 = 4LL * (unsigned int)(v8 - 1);
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  v9 = v7 + 20;
  if ( (unsigned int)(v7 + 20) < 0x14 )
    return (unsigned int)-1073741675;
  k = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)a1, 0xFFFFuLL, &pcbLength);
  if ( k < 0 )
    return (unsigned int)k;
  v11 = pcbLength + 2;
  if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
    return (unsigned int)-1073741675;
  v12 = v11 + v9;
  if ( v11 + v9 < v9 )
    return (unsigned int)-1073741675;
  if ( *(_WORD *)(a1 + 8) != 1 && *(_WORD *)(a1 + 8) != 2 )
  {
    if ( *(_WORD *)(a1 + 8) == 3 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      {
        k = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * i), 0xFFFFuLL, &pcbLength);
        if ( k < 0 )
          return (unsigned int)k;
        v17 = pcbLength + 2;
        if ( (int)pcbLength + 2 < (unsigned int)pcbLength || v17 + v16 < v16 )
          return (unsigned int)-1073741675;
        v12 = v17 + v16;
      }
      goto LABEL_30;
    }
    if ( *(_WORD *)(a1 + 8) == 5 )
    {
LABEL_15:
      for ( j = 0; j < *(_DWORD *)(a1 + 16); ++j )
      {
        v14 = v12 + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
        if ( v14 < v12 )
          return (unsigned int)-1073741675;
        v12 = v14 + 4;
        if ( v14 + 4 < v14 )
          return (unsigned int)-1073741675;
      }
      goto LABEL_30;
    }
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) != 16 )
        goto LABEL_30;
      goto LABEL_15;
    }
  }
  v18 = 8LL * *(unsigned int *)(a1 + 16);
  if ( v18 > 0xFFFFFFFF || (unsigned int)v18 + v12 < v12 )
    return (unsigned int)-1073741675;
  v12 += v18;
LABEL_30:
  if ( v12 + 3 < v12 )
    return (unsigned int)-1073741675;
  v19 = (v12 + 3) & 0xFFFFFFFC;
  if ( *a3 < v19 )
  {
    *a3 = v19;
    return (unsigned int)-1073741789;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  *a3 = v19;
  memset_0(a2, 0, v19);
  *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
  *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
  a2[2] = *(_DWORD *)(a1 + 12);
  a2[3] = *(_DWORD *)(a1 + 16);
  v20 = *(_DWORD *)(a1 + 16);
  v21 = (unsigned int)(4 * v20 + 16);
  if ( !v20 )
    v21 = 20LL;
  v22 = v21;
  *a2 = v21;
  memmove((char *)a2 + v21, *(const void **)a1, v11);
  v23 = v22 + v11;
  v24 = (_DWORD *)((char *)a2 + v22 + v11);
  if ( *(_WORD *)(a1 + 8) != 1 && *(_WORD *)(a1 + 8) != 2 )
  {
    if ( *(_WORD *)(a1 + 8) == 3 )
    {
      v30 = 0;
      k = 0;
      while ( v30 < *(_DWORD *)(a1 + 16) )
      {
        a2[v30 + 4] = v23;
        k = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * v30), 0xFFFFuLL, &pcbLength);
        if ( k < 0 )
          break;
        v32 = pcbLength + 2;
        memmove(v31, *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * v30), (unsigned int)(pcbLength + 2));
        v23 += v32;
        ++v30;
      }
      return (unsigned int)k;
    }
    if ( *(_WORD *)(a1 + 8) == 5 )
      goto LABEL_42;
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) == 16 )
      {
LABEL_42:
        v25 = 0;
        for ( k = 0; v25 < *(_DWORD *)(a1 + 16); v24 = (_DWORD *)((char *)a2 + v23) )
        {
          a2[v25 + 4] = v23;
          v26 = v23 + 4;
          v27 = 16LL * v25;
          *v24 = *(_DWORD *)(v27 + *(_QWORD *)(a1 + 24) + 8);
          v28 = *(_QWORD *)(a1 + 24);
          v29 = *(_DWORD *)(v27 + v28 + 8);
          if ( v29 )
            memmove((char *)a2 + v26, *(const void **)(v27 + v28), v29);
          ++v25;
          v23 = *(_DWORD *)(v27 + *(_QWORD *)(a1 + 24) + 8) + v26;
        }
        return (unsigned int)k;
      }
      return (unsigned int)-1073741811;
    }
  }
  k = 0;
  if ( *(_DWORD *)(a1 + 16) )
  {
    do
    {
      v33 = v3++;
      a2[v33 + 4] = v23;
      v23 += 8;
      *(_QWORD *)v24 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v33);
      v24 = (_DWORD *)((char *)a2 + v23);
    }
    while ( v3 < *(_DWORD *)(a1 + 16) );
  }
  return (unsigned int)k;
}
