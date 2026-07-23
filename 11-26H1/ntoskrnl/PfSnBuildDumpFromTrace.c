/*
 * XREFs of PfSnBuildDumpFromTrace @ 0x140AA6680
 * Callers:
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfVerifyTraceBuffer @ 0x140AA6B60 (PfVerifyTraceBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBuildDumpFromTrace(PVOID *a1, __int64 a2)
{
  int v2; // r12d
  bool v3; // cc
  PVOID *v5; // r15
  unsigned int v6; // ebx
  char *Pool2; // rax
  char *v8; // r14
  char *v9; // r14
  char *v10; // r13
  int v11; // ecx
  __int64 *v12; // rbp
  int v13; // edi
  __int64 *v14; // rdx
  unsigned int v15; // edi
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v22 = 0;
  v3 = *(_DWORD *)(a2 + 332) < 32;
  v5 = a1;
  *a1 = 0LL;
  if ( v3 )
  {
    v19 = -1073741789;
  }
  else if ( (*(_BYTE *)(a2 + 484) & 2) != 0 )
  {
    v19 = -1072103399;
  }
  else
  {
    v6 = ((16 * (*(_DWORD *)(a2 + 120) + *(_DWORD *)(a2 + 344)) + 215) & 0xFFFFFFF8)
       + 8 * (*(_DWORD *)(a2 + 480) + 2 * (*(_DWORD *)(a2 + 480) + 1));
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    *v5 = Pool2;
    v8 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, v6);
      v9 = v8 + 16;
      *((_DWORD *)v9 + 1) = 1128485697;
      *(_DWORD *)v9 = 31;
      v10 = (char *)((unsigned __int64)(v9 + 215) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_OWORD *)(v9 + 12) = *(_OWORD *)(a2 + 24);
      *(_OWORD *)(v9 + 28) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(v9 + 44) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(v9 + 60) = *(_OWORD *)(a2 + 72);
      *((_DWORD *)v9 + 19) = *(_DWORD *)(a2 + 88);
      *((_QWORD *)v9 + 19) = *(_QWORD *)(a2 + 464);
      *((_QWORD *)v9 + 13) = *(_QWORD *)(a2 + 200);
      v11 = *((_DWORD *)v9 + 40) ^ ((unsigned __int8)*((_DWORD *)v9 + 40) ^ (unsigned __int8)*(_WORD *)(a2 + 484)) & 1;
      *((_DWORD *)v9 + 40) = v11;
      *((_DWORD *)v9 + 40) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(2 * *(_WORD *)(a2 + 486))) & 2;
      *((_DWORD *)v9 + 20) = (((_DWORD)v9 + 215) & 0xFFFFFFF8) - (_DWORD)v9;
      v12 = *(__int64 **)(a2 + 104);
      if ( v12 != (__int64 *)(a2 + 104) )
      {
        do
        {
          v13 = *((_DWORD *)v12 + 4);
          v14 = v12;
          v12 = (__int64 *)*v12;
          memmove(v10, v14 + 3, (unsigned int)(16 * v13));
          v10 += (unsigned int)(16 * v13);
          v2 += v13;
        }
        while ( v12 != (__int64 *)(a2 + 104) );
        v5 = a1;
      }
      *((_DWORD *)v9 + 21) = v2;
      *((_DWORD *)v9 + 22) = *(_DWORD *)(a2 + 332);
      v15 = (((_DWORD)v10 + 7) & 0xFFFFFFF8) - (_DWORD)v9;
      *((_DWORD *)v9 + 23) = *(_DWORD *)(a2 + 336);
      *((_OWORD *)v9 + 7) = *(_OWORD *)(a2 + 284);
      *((_OWORD *)v9 + 8) = *(_OWORD *)(a2 + 300);
      *((_QWORD *)v9 + 18) = *(_QWORD *)(a2 + 316);
      *((_DWORD *)v9 + 24) = v15;
      v16 = 24 * *(_DWORD *)(a2 + 480);
      memmove((void *)((unsigned __int64)(v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL), *(const void **)(a2 + 472), v16);
      v17 = *(_DWORD *)(a2 + 480);
      v18 = v15 + v16;
      *((_DWORD *)v9 + 2) = v18;
      *((_DWORD *)v9 + 25) = v17;
      if ( (unsigned __int8)PfVerifyTraceBuffer(v9, v18, &v22) )
        return 0;
      v19 = -1073741823;
    }
    else
    {
      v19 = -1073741670;
    }
  }
  if ( *v5 )
  {
    ExFreePoolWithTag(*v5, 0);
    *v5 = 0LL;
  }
  return v19;
}
