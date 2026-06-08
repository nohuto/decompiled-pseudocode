/*
 * XREFs of PepNotifyCoordinatedLpiStates @ 0x140039EE0
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x140038AF8 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x140005E70 (GetDevExtFromIndex.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepNotifyCoordinatedLpiStates(__int64 a1, _DWORD *a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  _DWORD *v7; // r13
  int v8; // r10d
  int v9; // r11d
  _QWORD *v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // r8
  _DWORD *v14; // rax
  __int64 v15; // r15
  unsigned int v16; // r14d
  unsigned int v17; // r12d
  _DWORD *Pool2; // rax
  __int64 v19; // r8
  _BYTE *v20; // rbx
  char *v21; // r10
  char *v22; // r14
  _QWORD *v23; // r9
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // r11
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 i; // r9
  __int64 v35; // rdx
  unsigned int j; // r11d
  __int64 v37; // rcx
  char v38; // al
  _DWORD *v40; // [rsp+20h] [rbp-58h]
  __int64 v43; // [rsp+90h] [rbp+18h]

  v4 = *a3;
  v5 = 0;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  if ( (_DWORD)v4 )
  {
    v10 = a3 + 90;
    v11 = (unsigned int)v4;
    do
    {
      v12 = *((_DWORD *)v10 - 3);
      v8 += v12;
      if ( v12 )
      {
        v13 = v12;
        v14 = (_DWORD *)(*v10 + 4LL);
        do
        {
          v9 += *v14;
          v14 += 4;
          --v13;
        }
        while ( v13 );
      }
      v10 += 40;
      --v11;
    }
    while ( v11 );
  }
  v15 = v4;
  v16 = (96 * v4 + 15) & 0xFFFFFFF8;
  v17 = v16 + 24 * v8;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v17 + 4 * v9, 1919119952LL);
  v40 = Pool2;
  v20 = Pool2;
  if ( Pool2 )
  {
    v21 = (char *)Pool2 + v16;
    v22 = (char *)Pool2 + v17;
    *Pool2 = v4;
    if ( (_DWORD)v4 )
    {
      v19 = (__int64)(a3 + 87);
      v23 = Pool2 + 24;
      do
      {
        v24 = 0;
        *((_DWORD *)v23 - 2) = *(_DWORD *)v19;
        *v23 = v21;
        v25 = *(unsigned int *)v19;
        v21 += 24 * v25;
        if ( (_DWORD)v25 )
        {
          do
          {
            v26 = *(_QWORD *)(v19 + 12);
            v27 = *v23;
            v28 = 2LL * v24;
            v43 = *v23;
            v29 = *(_DWORD *)(v26 + 16LL * v24);
            if ( v29 != -1 )
              *(_QWORD *)(v27 + 24LL * v24) = *(_QWORD *)(GetDevExtFromIndex(v29) + 1120);
            v30 = *(_DWORD *)(v26 + 8 * v28 + 4);
            *(_QWORD *)(v27 + 24LL * v24 + 16) = v22;
            *(_DWORD *)(v27 + 24LL * v24 + 8) = v30;
            v31 = 0;
            v32 = *(unsigned int *)(v26 + 8 * v28 + 4);
            v22 += 4 * v32;
            if ( (_DWORD)v32 )
            {
              do
              {
                v33 = v31++;
                *(_DWORD *)(*(_QWORD *)(v43 + 24LL * v24 + 16) + 4 * v33) = *(unsigned __int8 *)(*(_QWORD *)(v26 + 8 * v28 + 8)
                                                                                               + 4 * v33);
              }
              while ( v31 < *(_DWORD *)(v26 + 8 * v28 + 4) );
            }
            ++v24;
          }
          while ( v24 < *(_DWORD *)v19 );
        }
        v23 += 12;
        v19 += 320LL;
        --v15;
      }
      while ( v15 );
      v20 = v40;
      v7 = a2;
    }
    for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
    {
      v35 = *(_QWORD *)&v7[10 * (unsigned int)i + 6];
      if ( v35 )
      {
        for ( j = 0; j < *(_DWORD *)(v35 + 16); *(_QWORD *)&v20[v37 + 80] = *(_QWORD *)(v35 + 8 * v19 + 96) )
        {
          v19 = 10LL * j;
          v37 = 96LL * (j + *(_DWORD *)(a4 + 4LL * (unsigned int)i));
          *(_DWORD *)&v20[v37 + 8] = *(_DWORD *)(v35 + 80LL * j + 24);
          *(_DWORD *)&v20[v37 + 12] = *(_DWORD *)(v35 + 80LL * j + 28);
          *(_DWORD *)&v20[v37 + 16] = *(_DWORD *)(v35 + 80LL * j + 32);
          *(_DWORD *)&v20[v37 + 20] = *(_DWORD *)(v35 + 80LL * j + 36);
          *(_DWORD *)&v20[v37 + 24] = *(_DWORD *)(v35 + 80LL * j + 40);
          v38 = *(_BYTE *)(v35 + 80LL * j + 48);
          if ( v38 == 126 )
          {
            v20[v37 + 28] = 1;
            *(_QWORD *)&v20[v37 + 32] = *(_QWORD *)(v35 + 80LL * j + 52);
          }
          else
          {
            v20[v37 + 32] = v38;
            v20[v37 + 33] = *(_BYTE *)(v35 + 80LL * j + 49);
            v20[v37 + 34] = *(_BYTE *)(v35 + 80LL * j + 50);
            v20[v37 + 35] = *(_BYTE *)(v35 + 80LL * j + 51);
            *(_QWORD *)&v20[v37 + 40] = *(_QWORD *)(v35 + 80LL * j + 52);
          }
          ++j;
          v20[v37 + 48] = *(_BYTE *)(v35 + 8 * v19 + 60);
          v20[v37 + 49] = *(_BYTE *)(v35 + 8 * v19 + 61);
          v20[v37 + 50] = *(_BYTE *)(v35 + 8 * v19 + 62);
          v20[v37 + 51] = *(_BYTE *)(v35 + 8 * v19 + 63);
          *(_QWORD *)&v20[v37 + 56] = *(_QWORD *)(v35 + 8 * v19 + 64);
          v20[v37 + 64] = *(_BYTE *)(v35 + 8 * v19 + 72);
          v20[v37 + 65] = *(_BYTE *)(v35 + 8 * v19 + 73);
          v20[v37 + 66] = *(_BYTE *)(v35 + 8 * v19 + 74);
          v20[v37 + 67] = *(_BYTE *)(v35 + 8 * v19 + 75);
          *(_QWORD *)&v20[v37 + 72] = *(_QWORD *)(v35 + 8 * v19 + 76);
        }
      }
    }
    ((void (__fastcall *)(_QWORD, _BYTE *, __int64, __int64))qword_140019558)(*(_QWORD *)(a1 + 1120), v20, v19, i);
    ExFreePoolWithTag(v20, (ULONG)1919119952);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
