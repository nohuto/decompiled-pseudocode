/*
 * XREFs of sub_1400FA240 @ 0x1400FA240
 * Callers:
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 */

__int64 __fastcall sub_1400FA240(__int64 a1)
{
  _QWORD *v1; // r14
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned __int64 v5; // r10
  unsigned int v6; // r12d
  __int64 v7; // r8
  unsigned int v8; // r11d
  unsigned int v9; // r15d
  __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int i; // esi
  __int64 v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  unsigned int v25; // [rsp+70h] [rbp+8h]
  __int64 v26; // [rsp+78h] [rbp+10h]
  unsigned int v27; // [rsp+80h] [rbp+18h]

  v1 = qword_140168E40;
  v3 = 0;
  v4 = sub_1400143E0(
         72LL,
         dword_1401687C0
       * (unsigned int)(((unsigned int)(dword_1401687C0 - 1)
                       + 24LL
                       + 8 * (unsigned __int64)*((unsigned int *)qword_140168E40 + 2))
                      / (unsigned int)dword_1401687C0),
         1296982354LL,
         *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 256) = v4;
  if ( v4 )
  {
    v5 = (unsigned int)dword_1401687C0;
    *(_DWORD *)(v4 + 4) = 4096;
    v6 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 8LL) = 50
                                             * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 256) + 4LL)
                                             / 0x64;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 12LL) = 90
                                              * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 256) + 4LL)
                                              / 0x64;
    v7 = (unsigned int)(v5 - 1);
    v8 = v5 * ((v7 + 128) / v5);
    v9 = v5 * ((v7 + 256) / v5);
    v27 = v9;
    v25 = v5 * ((v7 + 8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 256) + 4LL)) / v5);
    if ( *((_DWORD *)v1 + 2) )
    {
      v10 = v8;
      v26 = v8;
      while ( 1 )
      {
        v11 = *(unsigned __int16 **)(56LL * v6 + v1[4] + 48);
        v12 = v11 ? *v11 : 0x80000000;
        *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v6 + 24) = sub_14008ADD0(
                                                               72LL,
                                                               v10,
                                                               1296982354LL,
                                                               *(_QWORD *)(a1 + 8),
                                                               v12);
        v13 = *(_QWORD *)(a1 + 256);
        if ( !*(_QWORD *)(v13 + 8LL * v6 + 24) )
          break;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v6 + 24) + 32LL) = sub_14008ADD0(
                                                                                   72LL,
                                                                                   v9,
                                                                                   1296982354LL,
                                                                                   *(_QWORD *)(a1 + 8),
                                                                                   v12);
        v13 = *(_QWORD *)(a1 + 256);
        if ( !*(_QWORD *)(*(_QWORD *)(v13 + 8LL * v6 + 24) + 32LL) )
          break;
        v14 = 0LL;
        v15 = 16LL;
        do
        {
          InitializeSListHead((PSLIST_HEADER)(v14
                                            + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v6 + 24) + 32LL)));
          v14 += 16LL;
          --v15;
        }
        while ( v15 );
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v6 + 24) + 12LL) = 16;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v6 + 24) + 56LL) = sub_14008ADD0(
                                                                                   72LL,
                                                                                   v25,
                                                                                   1296982354LL,
                                                                                   *(_QWORD *)(a1 + 8),
                                                                                   v12);
        v13 = *(_QWORD *)(a1 + 256);
        v16 = *(_QWORD *)(v13 + 8LL * v6 + 24);
        if ( !*(_QWORD *)(v16 + 56) )
          break;
        *(_QWORD *)(v16 + 16) = v13;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v6 + 24) + 24LL) = a1;
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1104LL);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8LL * v6);
          if ( v18 )
          {
            *(_QWORD *)(v18 + 8LL * *(unsigned int *)(v18 + 4) + 264) = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v6 + 24);
            v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1104LL) + 8LL * v6);
            ++*(_DWORD *)(v19 + 4);
          }
        }
        v10 = v26;
        ++v6;
        v9 = v27;
        if ( v6 >= *((_DWORD *)v1 + 2) )
          goto LABEL_17;
      }
      v3 = -1073741670;
      if ( v13 )
      {
        for ( i = 0; i < *((_DWORD *)v1 + 2); ++i )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * i + 24);
          if ( v22 )
          {
            v23 = *(void **)(v22 + 32);
            if ( v23 )
              ExFreePoolWithTag(v23, 0x4D4E6152u);
            v24 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * i + 24) + 56LL);
            if ( v24 )
              ExFreePoolWithTag(v24, 0x4D4E6152u);
            ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 256) + 8LL * i + 24), 0x4D4E6152u);
            *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * i + 24) = 0LL;
          }
        }
        ExFreePoolWithTag(*(PVOID *)(a1 + 256), 0x4D4E6152u);
        *(_QWORD *)(a1 + 256) = 0LL;
      }
    }
    else
    {
LABEL_17:
      *(_BYTE *)(*(_QWORD *)(a1 + 256) + 20LL) = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
