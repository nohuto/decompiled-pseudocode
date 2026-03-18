/*
 * XREFs of ACPIIoctlCalculateOutputBufferV1 @ 0x140038194
 * Callers:
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1400228B4 (ACPIIoctlEvalPostProcessingV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x140037F90 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x140038194 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x140067964 (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x140038194 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x140038328 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferV1(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // cx
  char *v6; // rbx
  __int64 result; // rax
  unsigned int *v8; // r12
  __int64 v9; // r8
  char v10; // r11
  unsigned int v11; // eax
  unsigned int v12; // ebp
  char *v13; // r14
  __int64 v14; // rax
  int v15; // eax
  int v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_WORD *)(a1 + 2);
  v6 = (char *)a2;
  if ( v4 == 1 )
  {
    *(_WORD *)a2 = 0;
    if ( a3 == 1 )
    {
      *(_WORD *)(a2 + 2) = 8;
      *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      *(_WORD *)(a2 + 2) = 4;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 16);
    }
    return 0LL;
  }
  if ( (unsigned __int16)(v4 - 2) <= 1u )
  {
    *(_WORD *)a2 = (v4 != 2) + 1;
    *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 24);
    memmove((void *)(a2 + 4), *(const void **)(a1 + 32), *(unsigned int *)(a1 + 24));
    return 0LL;
  }
  if ( v4 != 4 )
    return 3222536207LL;
  v8 = *(unsigned int **)(a1 + 32);
  v17 = 0;
  v16 = 0;
  result = ACPIIoctlCalculateOutputBufferSizeV1(a1, (unsigned int)&v17, (unsigned int)&v16, a3, 1);
  if ( (int)result >= 0 )
  {
    if ( v10 )
    {
      v11 = (unsigned __int16)v17;
    }
    else
    {
      LOWORD(v15) = v17;
      *((_WORD *)v6 + 1) = v17;
      *(_WORD *)v6 = 3;
      v6 += 4;
      if ( (unsigned __int16)v15 < 4u )
        v15 = 4;
      else
        v15 = (unsigned __int16)v15;
      v11 = v15 + 4;
    }
    v12 = 0;
    v13 = &v6[v11];
    while ( v6 < v13 && v12 < *v8 )
    {
      LOBYTE(v9) = a3;
      result = ACPIIoctlCalculateOutputBufferV1(&v8[8 * v12 + 2 + 2 * v12], v6, v9, 0LL);
      if ( (int)result < 0 )
        return result;
      v14 = *((unsigned __int16 *)v6 + 1);
      ++v12;
      if ( (unsigned __int16)v14 < 4u )
        v14 = 4LL;
      v6 += v14 + 4;
    }
    return 0LL;
  }
  return result;
}
