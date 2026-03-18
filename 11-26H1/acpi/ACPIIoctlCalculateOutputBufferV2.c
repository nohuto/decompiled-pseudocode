/*
 * XREFs of ACPIIoctlCalculateOutputBufferV2 @ 0x140038D80
 * Callers:
 *     ACPIIoctlEvalPostProcessingV2 @ 0x140038BA0 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x140038D80 (ACPIIoctlCalculateOutputBufferV2.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x140038C78 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x140038D80 (ACPIIoctlCalculateOutputBufferV2.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferV2(__int64 a1, unsigned __int64 a2, char a3)
{
  __int16 v4; // cx
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  unsigned int *v8; // r12
  __int64 v9; // r8
  char v10; // r11
  unsigned int v11; // eax
  unsigned int v12; // ebp
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  unsigned int v15; // eax
  int v16[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 2);
  v6 = a2;
  if ( v4 == 1 )
  {
    *(_WORD *)a2 = 0;
    if ( a3 == 1 )
    {
      *(_DWORD *)(a2 + 4) = 8;
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 4;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 16);
    }
    return 0LL;
  }
  if ( (unsigned __int16)(v4 - 2) <= 1u )
  {
    *(_WORD *)a2 = (v4 != 2) + 1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 24);
    memmove((void *)(a2 + 8), *(const void **)(a1 + 32), *(unsigned int *)(a1 + 24));
    return 0LL;
  }
  if ( v4 != 4 )
    return 3222536207LL;
  v8 = *(unsigned int **)(a1 + 32);
  v17 = 0;
  v16[0] = 0;
  result = ACPIIoctlCalculateOutputBufferSizeV2(a1, &v17, v16, a3, 1);
  if ( (int)result >= 0 )
  {
    if ( v10 )
    {
      v11 = v17;
    }
    else
    {
      v15 = v17;
      *(_DWORD *)(v6 + 4) = v17;
      *(_WORD *)v6 = 3;
      v6 += 8LL;
      if ( v15 < 4 )
        v15 = 4;
      v11 = v15 + 8;
    }
    v12 = 0;
    v13 = v6 + v11;
    while ( v6 < v13 && v12 < *v8 )
    {
      LOBYTE(v9) = a3;
      result = ACPIIoctlCalculateOutputBufferV2(&v8[8 * v12 + 2 + 2 * v12], v6, v9, 0LL);
      if ( (int)result < 0 )
        return result;
      v14 = *(unsigned int *)(v6 + 4);
      ++v12;
      if ( (unsigned int)v14 < 4 )
        v14 = 4LL;
      v6 += v14 + 8;
    }
    return 0LL;
  }
  return result;
}
