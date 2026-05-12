/*
 * XREFs of sub_1400E9790 @ 0x1400E9790
 * Callers:
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 *     sub_1400EA11C @ 0x1400EA11C (sub_1400EA11C.c)
 */

__int64 __fastcall sub_1400E9790(__int64 a1)
{
  _QWORD *v2; // r13
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned __int64 v5; // r10
  unsigned int v6; // r15d
  __int64 v7; // r8
  unsigned int v8; // r11d
  unsigned int v9; // r14d
  __int64 v10; // rsi
  unsigned __int16 *v11; // rdx
  int v12; // ebp
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v18; // [rsp+70h] [rbp+8h]
  unsigned int v19; // [rsp+78h] [rbp+10h]
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v2 = qword_140168E40;
  v3 = 0;
  v4 = sub_1400143E0(
         72LL,
         dword_1401687C0
       * (unsigned int)(((unsigned int)(dword_1401687C0 - 1)
                       + 24LL
                       + 8 * (unsigned __int64)*((unsigned int *)qword_140168E40 + 2))
                      / (unsigned int)dword_1401687C0),
         1363370322LL,
         *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 1024) = v4;
  if ( v4 )
  {
    v5 = (unsigned int)dword_1401687C0;
    v6 = 0;
    *(_DWORD *)(v4 + 4) = *(unsigned __int16 *)(a1 + 6);
    *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 8LL) = 50
                                              * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 1024) + 4LL)
                                              / 0x64;
    *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 12LL) = 90
                                               * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 1024) + 4LL)
                                               / 0x64;
    v7 = (unsigned int)(v5 - 1);
    v8 = v5 * ((v7 + 128) / v5);
    v9 = v5 * ((v7 + 256) / v5);
    v19 = v8;
    v20 = v9;
    v18 = v5 * ((v7 + 8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 1024) + 4LL)) / v5);
    while ( v6 < *((_DWORD *)v2 + 2) )
    {
      v10 = v6;
      v11 = *(unsigned __int16 **)(56LL * v6 + v2[4] + 48);
      if ( v11 )
        v12 = *v11;
      else
        v12 = 0x80000000;
      *(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) = sub_14008ADD0(
                                                              72LL,
                                                              v8,
                                                              1363370322LL,
                                                              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
                                                              v12);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) )
        goto LABEL_13;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) + 32LL) = sub_14008ADD0(
                                                                                  72LL,
                                                                                  v9,
                                                                                  1363370322LL,
                                                                                  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
                                                                                  v12);
      if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) + 32LL) )
        goto LABEL_13;
      v13 = 0LL;
      v14 = 16LL;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v13 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) + 32LL)));
        v13 += 16LL;
        --v14;
      }
      while ( v14 );
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) + 12LL) = 16;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8LL * v6 + 24) + 56LL) = sub_14008ADD0(
                                                                                  72LL,
                                                                                  v18,
                                                                                  1363370322LL,
                                                                                  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
                                                                                  v12);
      v15 = *(_QWORD *)(a1 + 1024);
      v16 = *(_QWORD *)(v15 + 8LL * v6 + 24);
      if ( !*(_QWORD *)(v16 + 56) )
        goto LABEL_13;
      v8 = v19;
      ++v6;
      v9 = v20;
      *(_QWORD *)(v16 + 16) = v15;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1024) + 8 * v10 + 24) + 24LL) = a1;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 1024) + 20LL) = 1;
  }
  else
  {
LABEL_13:
    v3 = -1073741670;
    sub_1400EA11C(a1);
  }
  return v3;
}
