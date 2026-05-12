/*
 * XREFs of sub_1400F0A34 @ 0x1400F0A34
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400C93A0 @ 0x1400C93A0 (sub_1400C93A0.c)
 *     sub_1400F0DFC @ 0x1400F0DFC (sub_1400F0DFC.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 */

__int64 __fastcall sub_1400F0A34(__int64 a1)
{
  _DWORD *v1; // rbp
  int v3; // edi
  _DWORD *v4; // rsi
  char v5; // r12
  void *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r9
  _DWORD *v11; // rax
  unsigned int v12; // ecx
  unsigned int i; // edx
  unsigned int v14; // r8d
  unsigned int j; // r9d
  __int64 v16; // r8
  unsigned int k; // r14d
  unsigned int v18; // r8d
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // r8d
  __int64 v24; // r15
  unsigned int v25; // r10d
  unsigned int v26; // r12d
  __int64 v27; // r13
  unsigned int v28; // r9d
  __int64 v29; // r14
  unsigned int v30; // r10d
  __int64 v31; // rdx
  void *v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-48h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v35; // [rsp+98h] [rbp+20h]

  v1 = qword_140168E40;
  v35 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( !qword_140168E40 )
    return 3221225701LL;
  if ( (unsigned int)sub_1400C93A0() )
  {
    v7 = *(void **)(a1 + 872);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x52436152u);
  }
  v8 = sub_1400143E0(64LL, 2LL * (unsigned int)v1[2], 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 872) = v8;
  if ( !v8 )
    goto LABEL_7;
  if ( *(_BYTE *)(a1 + 1728) != 1 )
    goto LABEL_19;
  v9 = 4 * v1[2] + 8;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL);
  v35 = v9;
  v11 = (_DWORD *)sub_1400143E0(256LL, v9, 1380147538LL, v10);
  v4 = v11;
  if ( v11 )
  {
    *v11 = 1;
    v11[1] = v1[2];
    if ( !(unsigned int)sub_1400F0DFC(a1, 2147483654LL, v9) )
    {
      v12 = v1[2];
      for ( i = 0; i < v12; ++i )
      {
        v14 = v4[i + 2];
        if ( !v14 )
          break;
        if ( v14 > *(unsigned __int16 *)(a1 + 22) )
          break;
      }
      if ( i == v12 )
      {
        v5 = 1;
        for ( j = 0; j < v12; v12 = v1[2] )
        {
          v16 = j++;
          *(_WORD *)(*(_QWORD *)(a1 + 872) + 2 * v16) = *(_WORD *)(192LL * (unsigned int)(v4[v16 + 2] - 1)
                                                                 + *(_QWORD *)(a1 + 728)
                                                                 + 136);
        }
        goto LABEL_36;
      }
    }
LABEL_19:
    for ( k = 0;
          k < *(unsigned __int16 *)(a1 + 22);
          *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * KeGetProcessorIndexFromNumber(&ProcNumber)) = *(_WORD *)(v19 + 136) )
    {
      ProcNumber = 0;
      v18 = 0;
      v19 = *(_QWORD *)(a1 + 728) + 192LL * k;
      v20 = *(_QWORD *)(a1 + 912)
          + 32LL
          * *(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v19 + 138) << 7) + *(_QWORD *)(a1 + 864) - 104);
      ProcNumber.Group = *(_WORD *)(v20 + 16);
      v21 = *(_QWORD *)(v20 + 8);
      if ( v21 )
      {
        while ( !_bittest64(&v21, v18) )
          ++v18;
      }
      ProcNumber.Number = v18;
      ++k;
    }
    v12 = v1[2];
    v22 = 0;
    v23 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(a1 + 872);
        if ( !*(_WORD *)(v24 + 2LL * v23) )
        {
          v25 = *(unsigned __int16 *)(a1 + 22);
          v26 = v22;
          if ( v22 < v25 )
            break;
        }
LABEL_33:
        v12 = v1[2];
        if ( ++v23 >= v12 )
        {
          v5 = 0;
          goto LABEL_35;
        }
      }
      v27 = *(_QWORD *)(a1 + 728);
      v33 = *(_QWORD *)(a1 + 864);
      LOBYTE(ProcNumber.Group) = *(_BYTE *)(56LL * v23 + *((_QWORD *)v1 + 4) + 4);
      while ( 1 )
      {
        v28 = v22 + 1;
        v29 = 192LL * v22;
        if ( (*(_BYTE *)(((unsigned __int64)*(unsigned __int16 *)(v29 + v27 + 138) << 7) + v33 - 100) & 0xF) == LOBYTE(ProcNumber.Group) )
        {
          *(_WORD *)(v24 + 2LL * v23) = *(_WORD *)(v29 + v27 + 136);
          v22 = v28 < *(unsigned __int16 *)(a1 + 22) ? v28 : 0;
          goto LABEL_33;
        }
        v22 = v28 < v25 ? v28 : 0;
        if ( v26 == v22 )
          break;
        if ( v22 >= v25 )
          goto LABEL_33;
      }
      v3 = -1073741595;
LABEL_41:
      if ( v4 )
        ExFreePoolWithTag(v4, 0x52436152u);
      if ( v3 >= 0 )
        return (unsigned int)v3;
      goto LABEL_44;
    }
LABEL_35:
    v9 = v35;
LABEL_36:
    if ( *(_BYTE *)(a1 + 1728) == 1 )
    {
      if ( !v5 )
      {
        v30 = 0;
        if ( v12 )
        {
          do
          {
            v31 = v30++;
            v4[v31 + 2] = *(unsigned __int16 *)(*(_QWORD *)(a1 + 872) + 2 * v31);
          }
          while ( v30 < v1[2] );
        }
      }
      sub_1400F24C8(a1, 2147483654LL, v9);
    }
    goto LABEL_41;
  }
LABEL_7:
  v3 = -1073741670;
LABEL_44:
  v32 = *(void **)(a1 + 872);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0x52436152u);
    *(_QWORD *)(a1 + 872) = 0LL;
  }
  return (unsigned int)v3;
}
