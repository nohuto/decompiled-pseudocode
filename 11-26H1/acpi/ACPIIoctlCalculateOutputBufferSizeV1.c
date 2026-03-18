/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV1 @ 0x140038328
 * Callers:
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1400228B4 (ACPIIoctlEvalPostProcessingV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x140037F90 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x140038194 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x140038328 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1400676F0 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x140067964 (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x140038328 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV1(__int64 a1, _DWORD *a2, int *a3, char a4, char a5)
{
  __int16 v5; // r10
  int v8; // ebx
  __int64 result; // rax
  int *v10; // r14
  int v11; // edx
  char v12; // al
  unsigned int v13; // edi
  unsigned int v14; // eax
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_WORD *)(a1 + 2);
  v15 = 0;
  if ( v5 == 1 )
  {
    v8 = 12;
    if ( a4 != 1 )
      v8 = 8;
  }
  else if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    v14 = *(_DWORD *)(a1 + 24);
    if ( v14 < 4 )
      v14 = 4;
    v8 = v14 + 4;
  }
  else
  {
    if ( v5 == 4 )
    {
      v10 = *(int **)(a1 + 32);
      v11 = 1;
      if ( a5 )
        v11 = *v10;
      v12 = -a5;
      *a3 = v11;
      v13 = 0;
      v8 = v12 == 0 ? 4 : 0;
      while ( v13 < *v10 )
      {
        result = ACPIIoctlCalculateOutputBufferSizeV1(
                   (unsigned int)v10 + 8 * (v13 + 4 * v13 + 1),
                   (_DWORD)a2,
                   (unsigned int)&v15,
                   a4,
                   0);
        if ( (int)result < 0 )
          return result;
        ++v13;
      }
      goto LABEL_5;
    }
    if ( v5 )
      return 3222536207LL;
    v8 = 0;
  }
  *a3 = 1;
LABEL_5:
  *a2 += v8;
  return 0LL;
}
