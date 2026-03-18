/*
 * XREFs of ACPIProcessorContainerFillIoctlBuffer @ 0x140067964
 * Callers:
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x140067964 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIProcessorContainerGetLpiStatesIoctl @ 0x140067B60 (ACPIProcessorContainerGetLpiStatesIoctl.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x14002C354 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x140038194 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x140038328 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x140067964 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIProcessorContainerFillIoctlBuffer(__int64 **a1, int a2, __int64 a3, _DWORD *a4, int a5)
{
  __int64 *v5; // rbx
  int v6; // r13d
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rsi
  __int64 result; // rax
  int v15; // edx
  unsigned int v16; // edx
  __int64 *v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rcx
  size_t v20; // r8
  const void *v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  bool v24; // zf
  unsigned int v25; // ebp
  __int64 v26; // rcx
  _DWORD *v27; // r11
  int v28; // ecx
  int v29; // eax
  int v30; // [rsp+30h] [rbp-48h] BYREF
  __int128 v31; // [rsp+38h] [rbp-40h] BYREF
  int v32; // [rsp+80h] [rbp+8h] BYREF

  v5 = *a1;
  v6 = a5;
  v31 = 0LL;
  while ( v5 != (__int64 *)a1 )
  {
    v11 = *((unsigned int *)v5 + 14);
    v12 = a2;
    v13 = 3 * v11;
    if ( a2 == -1 )
      v12 = *((_DWORD *)v5 + 14);
    *(_DWORD *)(a3 + 24 * v11 + 8) = v11;
    *(_DWORD *)(a3 + 24 * v11 + 12) = v12;
    result = ACPIProcessorContainerFillIoctlBuffer((int)v5 + 16, v11, a3, (_DWORD)a4, v6);
    if ( (int)result < 0 )
      return result;
    v15 = *a4 + 3;
    *(_DWORD *)(a3 + 8 * v13 + 24) = 0;
    v16 = v15 & 0xFFFFFFFC;
    *(_DWORD *)(a3 + 8 * v13 + 28) = v16;
    v17 = (__int64 *)v5[4];
    v18 = 0;
    while ( v17 != v5 + 4 )
    {
      *(_DWORD *)(a3 + v16 + 4LL * v18) = *((_DWORD *)v17 - 1);
      v18 = *(_DWORD *)(a3 + 8 * v13 + 24) + 1;
      *(_DWORD *)(a3 + 8 * v13 + 24) = v18;
      v17 = (__int64 *)*v17;
    }
    v19 = v5[72];
    *a4 = v16 + 4 * v18;
    result = ACPIAmliBuildObjectPathnameUnicode(v19, (__int64)&v31);
    if ( (int)result < 0 )
      return result;
    v20 = WORD1(v31);
    v21 = (const void *)*((_QWORD *)&v31 + 1);
    v22 = (*a4 + 1) & 0xFFFFFFFE;
    *a4 = v22;
    *(_DWORD *)(a3 + 8 * v13 + 16) = v22;
    memmove((void *)(a3 + v22), v21, v20);
    ExFreePoolWithTag(*((PVOID *)&v31 + 1), 0);
    v23 = WORD1(v31) + *a4;
    v24 = v5[6] == 0;
    *a4 = v23;
    if ( v24 )
    {
      *(_DWORD *)(a3 + 8 * v13 + 20) = 0;
    }
    else
    {
      v32 = 0;
      v30 = 0;
      v25 = (v23 + 3) & 0xFFFFFFFC;
      *(_DWORD *)(a3 + 8 * v13 + 20) = v25;
      v26 = v5[6];
      *a4 = v25;
      result = ACPIIoctlCalculateOutputBufferSizeV1(v26, &v32, &v30, 0, 1);
      if ( (int)result < 0 )
        return result;
      v28 = v32 + 12;
      v29 = v32 + 12;
      if ( (unsigned int)(v32 + 12) < 0x14 )
      {
        v28 = 20;
        v29 = 20;
      }
      *v27 = 1114596673;
      *a4 = v25 + v29;
      v27[2] = v30;
      v27[1] = v28;
      result = ACPIIoctlCalculateOutputBufferV1(v5[6], (__int64)(v27 + 3), 0);
      if ( (int)result < 0 )
        return result;
    }
    v5 = (__int64 *)*v5;
  }
  return 0LL;
}
