/*
 * XREFs of PspWow64ThunkProcessParameters @ 0x1404B85BC
 * Callers:
 *     PspWow64SetupUserProcessAddressSpace @ 0x1404B855C (PspWow64SetupUserProcessAddressSpace.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

NTSTATUS __fastcall PspWow64ThunkProcessParameters(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  _DWORD *v3; // r15
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rsi
  ULONG_PTR v8; // r14
  NTSTATUS result; // eax
  char *v10; // rbx
  char *v11; // r13
  _DWORD *v12; // rcx
  unsigned __int64 v13; // rsi
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  unsigned int v22; // ecx
  char *v23; // rbx
  size_t v24; // r14
  unsigned __int64 v25; // rax
  const void *v26; // rdx
  unsigned __int16 v27; // r14
  _DWORD *v28; // rdx
  char *v29; // rcx
  unsigned __int64 i; // r8
  int v31; // eax
  ULONG_PTR v32; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-48h]
  _DWORD *v35; // [rsp+A8h] [rbp+10h] BYREF
  _DWORD *v36; // [rsp+B0h] [rbp+18h]
  char *v37; // [rsp+B8h] [rbp+20h]

  v36 = a3;
  v3 = a3;
  v5 = a1;
  v6 = -384LL;
  if ( !a2[270] )
    v6 = -388LL;
  v7 = *a2 + v6;
  v8 = v7 + *((_QWORD *)a2 + 126);
  v35 = 0LL;
  v32 = v8;
  result = ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID *)&v35,
             *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].PrimaryGroup - 1LL,
             &v32,
             0x3000u,
             4u);
  if ( result >= 0 )
  {
    v10 = (char *)(v35 + 177);
    v11 = (char *)v35 + v7;
    *v35 = v8;
    v35[1] = v8;
    v35[2] = a2[2];
    v35[3] = a2[3];
    v35[4] = a2[4];
    v35[5] = a2[6];
    v35[6] = a2[8];
    v35[7] = a2[10];
    v35[8] = a2[12];
    v35[19] = a2[34];
    v35[20] = a2[35];
    v35[21] = a2[36];
    v35[22] = a2[37];
    v35[23] = a2[38];
    v35[24] = a2[39];
    v35[25] = a2[40];
    v35[26] = a2[41];
    v35[27] = a2[42];
    v35[168] = a2[259];
    v35[175] = a2[271];
    v12 = v35;
    *((_WORD *)v35 + 18) = *((_WORD *)a2 + 28);
    *((_WORD *)v12 + 19) = *((_WORD *)a2 + 29);
    v13 = 0LL;
    if ( *((_QWORD *)a2 + 8) )
    {
      v12[10] = (_DWORD)v10;
      memmove(v10, *((const void **)a2 + 8), *((unsigned __int16 *)a2 + 29));
      v10 += *((unsigned __int16 *)a2 + 29);
      v37 = v10;
    }
    else
    {
      v12[10] = 0;
    }
    v35[11] = a2[18];
    v14 = v35;
    *((_WORD *)v35 + 24) = *((_WORD *)a2 + 40);
    *((_WORD *)v14 + 25) = *((_WORD *)a2 + 41);
    if ( *((_QWORD *)a2 + 11) )
    {
      v14[13] = (_DWORD)v10;
      memmove(v10, *((const void **)a2 + 11), *((unsigned __int16 *)a2 + 41));
      v10 += *((unsigned __int16 *)a2 + 41);
      v37 = v10;
    }
    else
    {
      v14[13] = 0;
    }
    v15 = v35;
    *((_WORD *)v35 + 28) = *((_WORD *)a2 + 48);
    *((_WORD *)v15 + 29) = *((_WORD *)a2 + 49);
    if ( *((_QWORD *)a2 + 13) )
    {
      v15[15] = (_DWORD)v10;
      memmove(v10, *((const void **)a2 + 13), *((unsigned __int16 *)a2 + 49));
      v10 += *((unsigned __int16 *)a2 + 49);
      v37 = v10;
    }
    else
    {
      v15[15] = 0;
    }
    v16 = v35;
    *((_WORD *)v35 + 32) = *((_WORD *)a2 + 56);
    *((_WORD *)v16 + 33) = *((_WORD *)a2 + 57);
    if ( *((_QWORD *)a2 + 15) )
    {
      v16[17] = (_DWORD)v10;
      memmove(v10, *((const void **)a2 + 15), *((unsigned __int16 *)a2 + 57));
      v10 += *((unsigned __int16 *)a2 + 57);
      v37 = v10;
    }
    else
    {
      v16[17] = 0;
    }
    v17 = v35;
    *((_WORD *)v35 + 56) = *((_WORD *)a2 + 88);
    *((_WORD *)v17 + 57) = *((_WORD *)a2 + 89);
    if ( *((_QWORD *)a2 + 23) )
    {
      v17[29] = (_DWORD)v10;
      memmove(v10, *((const void **)a2 + 23), *((unsigned __int16 *)a2 + 89));
      v10 += *((unsigned __int16 *)a2 + 89);
      v37 = v10;
    }
    else
    {
      v17[29] = 0;
    }
    v18 = v35;
    *((_WORD *)v35 + 60) = *((_WORD *)a2 + 96);
    *((_WORD *)v18 + 61) = *((_WORD *)a2 + 97);
    if ( *((_QWORD *)a2 + 25) )
    {
      v18[31] = (_DWORD)v10;
      memmove(v10, *((const void **)a2 + 25), *((unsigned __int16 *)a2 + 97));
      v10 += *((unsigned __int16 *)a2 + 97);
      v37 = v10;
    }
    else
    {
      v18[31] = 0;
    }
    v19 = v35;
    *((_WORD *)v35 + 64) = *((_WORD *)a2 + 104);
    *((_WORD *)v19 + 65) = *((_WORD *)a2 + 105);
    if ( *((_QWORD *)a2 + 27) )
    {
      v19[33] = (_DWORD)v10;
      memmove(v10, *((const void **)a2 + 27), *((unsigned __int16 *)a2 + 105));
      v10 += *((unsigned __int16 *)a2 + 105);
      v37 = v10;
    }
    else
    {
      v19[33] = 0;
    }
    v20 = v35;
    *((_WORD *)v35 + 338) = *((_WORD *)a2 + 520);
    *((_WORD *)v20 + 339) = *((_WORD *)a2 + 521);
    if ( *((_QWORD *)a2 + 131) )
    {
      v20[170] = (_DWORD)v10;
      memmove(v10, *((const void **)a2 + 131), *((unsigned __int16 *)a2 + 521));
      v10 += *((unsigned __int16 *)a2 + 521);
      v37 = v10;
    }
    else
    {
      v20[170] = 0;
    }
    v21 = v35;
    *((_WORD *)v35 + 342) = *((_WORD *)a2 + 528);
    *((_WORD *)v21 + 343) = *((_WORD *)a2 + 529);
    if ( *((_QWORD *)a2 + 133) )
    {
      v21[172] = (_DWORD)v10;
      memmove(v10, *((const void **)a2 + 133), *((unsigned __int16 *)a2 + 529));
      v10 += *((unsigned __int16 *)a2 + 529);
      v37 = v10;
    }
    else
    {
      v21[172] = 0;
    }
    if ( *((_WORD *)a2 + 112) && *((_QWORD *)a2 + 29) )
    {
      v33 = 0LL;
      v35[35] = (_DWORD)v10;
      v24 = *((unsigned __int16 *)a2 + 112);
      if ( (unsigned __int16)v24 >= 4u )
        v13 = **((unsigned int **)a2 + 29);
      v25 = v13 + 8 * v13 + 4;
      v33 = v25;
      v26 = (const void *)*((_QWORD *)a2 + 29);
      if ( v24 >= v25 )
      {
        v27 = v24 - v25;
        memmove(v10, v26, v13 + 4);
        v28 = (_DWORD *)(v13 + *((_QWORD *)a2 + 29) + 4LL);
        v29 = &v10[v13 + 4];
        for ( i = 0LL; i < v13; ++i )
        {
          *(_DWORD *)v29 = *v28;
          v29 += 4;
          v28 += 2;
        }
        memmove(v29, v28, v27);
        *((_WORD *)v35 + 68) = v27 + 4 + 5 * v13;
        v3 = v36;
        v5 = a1;
      }
      else
      {
        memmove(v10, v26, v24);
        *((_WORD *)v35 + 68) = *((_WORD *)a2 + 112);
      }
      *((_WORD *)v35 + 69) = *((_WORD *)v35 + 68);
      v10 += *((unsigned __int16 *)v35 + 68);
      v37 = v10;
    }
    v22 = a2[270];
    if ( v22 )
    {
      v35[174] = v22;
      v23 = (char *)((unsigned __int64)(v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v37 = v23;
      v35[173] = (_DWORD)v23;
      memmove(v23, *((const void **)a2 + 134), 8LL * a2[270]);
      v37 = &v23[8 * a2[270]];
    }
    v35[18] = (_DWORD)v11;
    v35[164] = a2[252];
    v35[165] = a2[254];
    memmove(v11, *((const void **)a2 + 16), (unsigned int)v35[164]);
    v35[167] = a2[258];
    v31 = (int)v35;
    *(_DWORD *)(v5 + 16) = (_DWORD)v35;
    *v3 = v31;
    return 0;
  }
  return result;
}
