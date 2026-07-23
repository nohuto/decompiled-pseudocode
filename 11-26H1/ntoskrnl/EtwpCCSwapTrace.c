/*
 * XREFs of EtwpCCSwapTrace @ 0x1402174B0
 * Callers:
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpCCSwapFlush @ 0x140217830 (EtwpCCSwapFlush.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

struct _KPRCB *__fastcall EtwpCCSwapTrace(__int64 a1, __int64 a2, unsigned int a3, struct _KPRCB **a4)
{
  struct _KPRCB *result; // rax
  unsigned int v5; // ebp
  unsigned int v7; // r9d
  __int64 v8; // r10
  __int64 v10; // r13
  _QWORD *EtwSupport; // r12
  unsigned int *v12; // rbx
  struct _KPRCB *v13; // r8
  __int64 v14; // r8
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // edi
  unsigned int v18; // eax
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // r15
  unsigned int *v21; // rax
  char v22; // r9
  unsigned int v23; // eax
  int v24; // r8d
  __int16 v25; // ax
  int v26; // edx
  int v27; // edx
  unsigned int v28; // eax
  __int64 Src; // [rsp+20h] [rbp-58h] BYREF
  unsigned int *v30; // [rsp+28h] [rbp-50h]
  void *v31; // [rsp+30h] [rbp-48h]

  result = KeGetCurrentPrcb();
  v5 = 0;
  Src = 0LL;
  v7 = a3;
  v8 = a2;
  v10 = a3;
  EtwSupport = result->EtwSupport;
  v12 = (unsigned int *)EtwSupport[a3 + 51];
  if ( v12 )
  {
    v13 = *a4;
    v31 = v12 + 6;
    v30 = v12 + 4;
    if ( *v12 )
    {
      v14 = (__int64)v13 - *((_QWORD *)v12 + 1);
    }
    else
    {
      v28 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v12 + 2) = v13;
      *((_QWORD *)v12 + 1) = v13;
      v12[1] = v28;
      *v12 = 104;
      memset_0(v12 + 6, 0, 0x40uLL);
      v7 = a3;
      v8 = a2;
      v14 = 0LL;
      v30 = v12 + 4;
      v31 = v12 + 6;
    }
    v15 = *(_DWORD *)(a1 + 1296);
    v16 = 0;
    if ( v15 )
    {
      while ( v16 < 0x10 )
      {
        v18 = v12[v16 + 6];
        if ( v18 == v15 )
          break;
        if ( !v18 )
        {
          v12[v16 + 6] = v15;
          *((_BYTE *)v12 + v16 + 88) = *(_BYTE *)(a1 + 563);
          break;
        }
        ++v16;
      }
    }
    if ( MEMORY[0xFFFFF78000000320] - v12[1] > 0x1F4
      || v16 == 16
      || (unsigned __int64)*v12 + 8 > 0x400
      || v14 > 0x40000000
      || *((_BYTE *)EtwSupport + v10 + 400) )
    {
      EtwpCCSwapFlush(v12, v7, v14);
      v19 = *a4;
      v20 = v31;
      v12[1] = MEMORY[0xFFFFF78000000320];
      v21 = v30;
      *((_QWORD *)v12 + 1) = v19;
      *v12 = 104;
      *(_QWORD *)v21 = v19;
      memset_0(v20, 0, 0x40uLL);
      v8 = a2;
      v14 = 0LL;
      *((_BYTE *)EtwSupport + v10 + 400) = 0;
      v16 = 0;
      *v20 = v15;
    }
    if ( v15 )
    {
      if ( *(_DWORD *)(v8 + 1296) )
        v5 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v8 + 436);
      v22 = *(_BYTE *)(a1 + 195);
      v23 = v22 - *((char *)v12 + v16 + 88);
      if ( v5 > 1 || v14 >= 0x20000 || v23 > 7 )
      {
        LODWORD(Src) = (4 * v14) | 3;
        v25 = v16 & 0xF | WORD2(Src) & 0xFFF0;
        v26 = 0x1FFFF;
        if ( v5 < 0x1FFFF )
          v26 = v5;
        v27 = v25 & 0x3FF | ((v22 & 0x1F | (32 * v26)) << 10);
        if ( *(_BYTE *)(a1 + 388) == 5 )
          HIDWORD(Src) = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 643))) & 0x3F0;
        else
          HIDWORD(Src) = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 388) - 321)) & 0x3F0;
        v17 = 8;
      }
      else
      {
        v24 = (4 * (v16 & 0xF | (16 * (v23 & 7 | ((_DWORD)v14 << 9))))) | 2;
        if ( *(_BYTE *)(a1 + 388) == 5 )
          LODWORD(Src) = v24 | ((*(_BYTE *)(a1 + 643) & 0x3F) << 9);
        else
          LODWORD(Src) = v24 | ((*(unsigned __int8 *)(a1 + 388) << 9) - 10241) & 0x7E00;
        v17 = 4;
      }
    }
    else if ( v14 >= 0x4000 )
    {
      v17 = 4;
      LODWORD(Src) = (4 * v14) | 1;
    }
    else
    {
      v17 = 2;
      LOWORD(Src) = 4 * v14;
    }
    memmove((char *)v12 + *v12, &Src, v17);
    *v12 += v17;
    result = *a4;
    *((_QWORD *)v12 + 1) = *a4;
  }
  return result;
}
