/*
 * XREFs of IoQueuesInitialize @ 0x140014D10
 * Callers:
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     NVMeSubmissionQueueInit @ 0x140006270 (NVMeSubmissionQueueInit.c)
 *     NVMeCompletionQueueInit @ 0x1400063A0 (NVMeCompletionQueueInit.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     GetMaxDedicatedSqPerCqCount @ 0x140014620 (GetMaxDedicatedSqPerCqCount.c)
 *     NVMeFreePool @ 0x140017DB8 (NVMeFreePool.c)
 *     NVMeSubmissionQueueAssignmentPolicyInit @ 0x1400190B4 (NVMeSubmissionQueueAssignmentPolicyInit.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  __int64 v2; // r9
  unsigned int v3; // r15d
  unsigned int v4; // r13d
  _QWORD *v5; // r14
  __int64 v6; // rcx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int i; // esi
  void **v11; // r9
  __int64 v12; // r14
  _QWORD *v13; // rdi
  unsigned int v14; // r14d
  __int64 *v15; // r8
  unsigned int v16; // esi
  __int64 *v17; // r8
  void *v19; // r9
  unsigned int j; // edi
  void **v21; // r9
  __int64 v22; // r14
  void *v23; // r9
  char *v24; // [rsp+40h] [rbp-38h]
  void *v25; // [rsp+50h] [rbp-28h]
  void *v26; // [rsp+50h] [rbp-28h]
  char *v27; // [rsp+D0h] [rbp+58h]
  char *v28; // [rsp+D8h] [rbp+60h]

  if ( !*(_WORD *)(a1 + 332) )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 330);
  if ( !(_WORD)v2 )
    return 0;
  v3 = *(unsigned __int16 *)(a1 + 326) << 6;
  v4 = 16 * *(unsigned __int16 *)(a1 + 326);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v5 = (_QWORD *)(a1 + 944);
    NVMeSubmissionQueueAssignmentPolicyInit();
    StorPortExtendedFunction(0LL, a1, 392 * (unsigned int)*(unsigned __int16 *)(v6 + 332), 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 208 * (unsigned int)*(unsigned __int16 *)(a1 + 330), 1701672526LL);
    if ( *v5 && *(_QWORD *)(a1 + 936) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 326) * (unsigned int)*(unsigned __int16 *)(a1 + 330),
        1701672526LL);
LABEL_18:
    if ( !*(_BYTE *)(a1 + 20) )
    {
      v13 = (_QWORD *)(a1 + 936);
      if ( *(_QWORD *)(a1 + 936) )
      {
        v14 = 0;
        if ( *(_WORD *)(a1 + 330) )
        {
          do
          {
            v15 = (__int64 *)(*(_QWORD *)(a1 + 936) + 208LL * v14);
            if ( *v15 )
              NVMeFreeDmaBuffer(a1, v3, v15, v15[1]);
            ++v14;
          }
          while ( v14 < *(unsigned __int16 *)(a1 + 330) );
          v13 = (_QWORD *)(a1 + 936);
        }
      }
      if ( *(_QWORD *)(a1 + 944) )
      {
        v16 = 0;
        if ( *(_WORD *)(a1 + 332) )
        {
          do
          {
            v17 = (__int64 *)(*(_QWORD *)(a1 + 944) + 392LL * v16);
            if ( *v17 )
              NVMeFreeDmaBuffer(a1, v4, v17, v17[1]);
            ++v16;
          }
          while ( v16 < *(unsigned __int16 *)(a1 + 332) );
          v13 = (_QWORD *)(a1 + 936);
        }
      }
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      *(_QWORD *)(a1 + 944) = 0LL;
      NVMeFreePool(a1);
      *v13 = 0LL;
    }
    *(_DWORD *)(a1 + 330) = 0;
    return 0;
  }
  v24 = (char *)(v4 + **(_QWORD **)(a1 + 944));
  v28 = &v24[16 * v2 * *(unsigned __int16 *)(a1 + 326)];
  v27 = &v28[32 * v2 * *(unsigned __int16 *)(a1 + 328)];
  v7 = (16 * *(unsigned __int16 *)(a1 + 326) * (unsigned int)(unsigned __int16)v2) >> 2;
  if ( v7 )
    memset(v24, 0, 4LL * v7);
  v8 = (32 * *(unsigned __int16 *)(a1 + 330) * (unsigned int)*(unsigned __int16 *)(a1 + 328)) >> 2;
  if ( v8 )
    memset(v28, 0, 4LL * v8);
  v9 = (8 * (unsigned int)*(unsigned __int16 *)(a1 + 332)) >> 2;
  if ( v9 )
    memset(v27, 0, 4LL * v9);
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 330); ++i )
  {
    v11 = *(void ***)(a1 + 936);
    v12 = (__int64)&v11[26 * i];
    if ( !*(_BYTE *)(a1 + 20) )
    {
      NVMeAllocateDmaBuffer(a1, v3);
      goto LABEL_18;
    }
    v19 = *v11;
    v25 = v19;
    if ( v3 >> 2 )
    {
      memset(v19, 0, 4LL * (v3 >> 2));
      v19 = v25;
    }
    NVMeSubmissionQueueInit(
      a1,
      v12,
      i + 1,
      (__int64)v19,
      0LL,
      (__int64)&v24[16 * i * (unsigned __int64)*(unsigned __int16 *)(a1 + 326)],
      (__int64)&v28[32 * i * (unsigned __int64)*(unsigned __int16 *)(a1 + 328)],
      0LL);
  }
  for ( j = 0; j < *(unsigned __int16 *)(a1 + 332) && j < *(unsigned __int16 *)(a1 + 330); ++j )
  {
    v21 = *(void ***)(a1 + 944);
    v22 = (__int64)&v21[49 * j];
    if ( !*(_BYTE *)(a1 + 20) )
    {
      NVMeAllocateDmaBuffer(a1, v4);
      goto LABEL_18;
    }
    v23 = *v21;
    v26 = v23;
    if ( v4 >> 2 )
    {
      memset(v23, 0, 4LL * (v4 >> 2));
      v23 = v26;
    }
    NVMeCompletionQueueInit(a1, v22, j + 1, (__int64)v23, 0LL, (__int64)&v27[8 * j], 0LL);
  }
  return 1;
}
