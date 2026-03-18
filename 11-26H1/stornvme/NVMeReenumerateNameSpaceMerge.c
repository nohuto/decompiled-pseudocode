/*
 * XREFs of NVMeReenumerateNameSpaceMerge @ 0x140028C6C
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x140028820 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     NVMeIsLunActive @ 0x14000FE20 (NVMeIsLunActive.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeReenumerateNameSpaceMerge(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // r10
  __int64 v4; // r13
  unsigned int *v6; // r15
  unsigned int v8; // r14d
  __int64 v9; // r9
  unsigned int v10; // edi
  __int64 v11; // r12
  __int64 v12; // r8
  _OWORD *v13; // rcx
  int v14; // edx
  _OWORD *v15; // rax
  __int64 v16; // rdx
  __int128 v17; // xmm1
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  int v23; // eax
  int v24; // edx
  __int64 *v25; // r8
  int v26; // edx
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // r8
  __int64 *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r8

  v3 = 0x80;
  v4 = a3;
  v6 = (unsigned int *)(a2 + 2048);
  v8 = 0;
  v9 = 255LL;
  do
  {
    v10 = *v6;
    if ( !*v6 )
      break;
    if ( v10 <= (unsigned int)v4 )
    {
      v11 = v10 - 1;
      v12 = *(_QWORD *)(a2 + 8 * v11 + 8);
      v13 = *(_OWORD **)(a1 + 8 * v11 + 1672);
      if ( v12 && (v14 = *(_DWORD *)(v12 + 20), (v14 & 8) != 0) )
      {
        *(_BYTE *)(v12 + 10) = v10 - 1;
        *(_DWORD *)(v12 + 20) = v14 & 0xFFFFFF77 | 0x80;
        if ( v13 )
        {
          v15 = (_OWORD *)v12;
          v16 = 3LL;
          do
          {
            *v13 = *v15;
            v13[1] = v15[1];
            v13[2] = v15[2];
            v13[3] = v15[3];
            v13[4] = v15[4];
            v13[5] = v15[5];
            v13[6] = v15[6];
            v13 += 8;
            v17 = v15[7];
            v15 += 8;
            *(v13 - 1) = v17;
            --v16;
          }
          while ( v16 );
          *v13 = *v15;
          v13[1] = v15[1];
          *((_QWORD *)v13 + 4) = *((_QWORD *)v15 + 4);
          StorPortExtendedFunction(1LL, a1, v12, 255LL);
          *(_QWORD *)(a2 + 8 * v11 + 8) = 0LL;
        }
        else
        {
          *(_QWORD *)(a1 + 8 * v11 + 1672) = v12;
        }
        if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 224) )
        {
          v18 = (unsigned __int16)v10;
          if ( (unsigned __int16)v10 >= 0xFFu )
            v18 = 255;
          *(_DWORD *)(a1 + 224) = v18;
        }
      }
      else if ( v13 && (*((_DWORD *)v13 + 5) & 0x20) != 0 )
      {
        memset(v13, 0, 0x1A8uLL);
      }
      else if ( v12 )
      {
        v19 = *(_DWORD *)(v12 + 20);
        if ( (v19 & 0x10) != 0 )
        {
          v20 = 3LL;
          *(_DWORD *)(v12 + 20) = v19 & 0xFFFFFFEF;
          *(_BYTE *)(v12 + 10) = v10 - 1;
          v21 = (_OWORD *)v12;
          do
          {
            *v13 = *v21;
            v13[1] = v21[1];
            v13[2] = v21[2];
            v13[3] = v21[3];
            v13[4] = v21[4];
            v13[5] = v21[5];
            v13[6] = v21[6];
            v13 += 8;
            v22 = v21[7];
            v21 += 8;
            *(v13 - 1) = v22;
            --v20;
          }
          while ( v20 );
          *v13 = *v21;
          v13[1] = v21[1];
          *((_QWORD *)v13 + 4) = *((_QWORD *)v21 + 4);
          StorPortExtendedFunction(1LL, a1, v12, 255LL);
          *(_QWORD *)(a2 + 8LL * (v10 - 1) + 8) = 0LL;
        }
      }
    }
    v3 = 0x80;
    ++v8;
    ++v6;
    v9 = 255LL;
  }
  while ( v8 < 0x400 );
  v23 = *(_DWORD *)(a1 + 224);
  v24 = 0;
  if ( v23 )
  {
    v25 = (__int64 *)(a1 + 1672);
    do
    {
      LOBYTE(v23) = NVMeIsLunActive(*v25);
      v28 = v26 + 1;
      v25 = (__int64 *)(v29 + 8);
      if ( !(_BYTE)v23 )
        v28 = v26;
      v24 = v28;
      v9 = v27 - 1;
    }
    while ( v9 );
  }
  *(_DWORD *)(a1 + 212) = v24;
  if ( (_DWORD)v4 )
  {
    v30 = (__int64 *)(a2 + 8);
    v31 = v4;
    do
    {
      v32 = *v30;
      if ( *v30 )
      {
        v23 = *(_DWORD *)(v32 + 20);
        if ( ((unsigned __int8)v23 & (unsigned __int8)v3) == 0 )
          LOBYTE(v23) = StorPortExtendedFunction(1LL, a1, v32, v9);
      }
      ++v30;
      v3 = 0x80;
      --v31;
    }
    while ( v31 );
  }
  return v23;
}
