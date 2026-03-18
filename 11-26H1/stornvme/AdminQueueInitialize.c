/*
 * XREFs of AdminQueueInitialize @ 0x1400067B0
 * Callers:
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeSubmissionQueueInit @ 0x140006270 (NVMeSubmissionQueueInit.c)
 *     NVMeCompletionQueueInit @ 0x1400063A0 (NVMeCompletionQueueInit.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall AdminQueueInitialize(__int64 a1)
{
  unsigned __int16 *v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  char result; // al
  void *v11; // [rsp+70h] [rbp+8h]
  void *v12; // [rsp+78h] [rbp+10h]

  v1 = (unsigned __int16 *)(a1 + 324);
  v3 = *(unsigned __int16 *)(a1 + 324);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v4 = *(_QWORD *)(a1 + 544);
    v5 = 16LL * v3;
    v11 = (void *)(v5 + v4);
    v12 = (void *)(v5 + v4 + v5);
    v6 = (16 * (unsigned int)*v1) >> 2;
    if ( v6 )
      memset(v11, 0, 4LL * v6);
    v7 = (32 * (unsigned int)*v1) >> 2;
    if ( v7 )
      memset(v12, 0, 4LL * v7);
    NVMeSubmissionQueueInit(a1, a1 + 336, 0, *(_QWORD *)(a1 + 336), 0LL, (__int64)v11, (__int64)v12, 0LL);
    NVMeCompletionQueueInit(a1, a1 + 544, 0LL, *(_QWORD *)(a1 + 544), 0LL, 0LL, 0LL);
    v8 = (unsigned int)(*v1 << 6) >> 2;
    if ( v8 )
      memset(*(void **)(a1 + 336), 0, 4LL * v8);
    v9 = (16 * (unsigned int)*v1) >> 2;
    if ( v9 )
      memset(*(void **)(a1 + 544), 0, 4LL * v9);
    *(_WORD *)(a1 + 394) = 0;
    result = 1;
    *(_DWORD *)(a1 + 724) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, 16 * v3, 1701672526LL);
    NVMeFreePool(a1);
    NVMeFreePool(a1);
    NVMeFreePool(a1);
    return 0;
  }
  return result;
}
