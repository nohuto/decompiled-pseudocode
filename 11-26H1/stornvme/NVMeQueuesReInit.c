/*
 * XREFs of NVMeQueuesReInit @ 0x1400076B0
 * Callers:
 *     NVMeControllerPowerUp @ 0x1400075D0 (NVMeControllerPowerUp.c)
 *     NVMeControllerReinitialize @ 0x140024B08 (NVMeControllerReinitialize.c)
 * Callees:
 *     SubmissionQueueReInit @ 0x140006A00 (SubmissionQueueReInit.c)
 *     CompletionQueueReInit @ 0x140006A60 (CompletionQueueReInit.c)
 *     NVMePendingIoCheck @ 0x140011C30 (NVMePendingIoCheck.c)
 */

__int64 __fastcall NVMeQueuesReInit(__int64 a1)
{
  unsigned int i; // edx
  __int64 v3; // rcx
  unsigned int j; // edx
  __int64 v5; // rcx
  _BYTE *v6; // rax
  __int64 v7; // rcx
  __int64 k; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edx
  __int64 v15; // rax

  *(_BYTE *)(a1 + 1008) = 0;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 1552); *(_BYTE *)((v3 << 7) + *(_QWORD *)(a1 + 1392)) = 0 )
    v3 = i++;
  for ( j = 0; j < *(unsigned __int16 *)(a1 + 1554); *(_BYTE *)((v5 << 7) + *(_QWORD *)(a1 + 1400)) = 0 )
    v5 = j++;
  v6 = (_BYTE *)(a1 + 1136);
  v7 = 2LL;
  do
  {
    *v6 = 0;
    v6 += 128;
    --v7;
  }
  while ( v7 );
  SubmissionQueueReInit(a1, a1 + 336);
  CompletionQueueReInit(a1, a1 + 544);
  for ( k = 0LL; (unsigned int)k < *(unsigned __int16 *)(a1 + 324); k = (unsigned int)(k + 1) )
  {
    v9 = *(_QWORD *)(a1 + 368);
    v10 = 32LL * (unsigned int)k;
    if ( *(_QWORD *)(v10 + v9 + 16) )
      *(_QWORD *)(v10 + v9 + 16) = 0LL;
  }
  result = NVMePendingIoCheck(a1, k);
  v12 = 0;
  if ( *(_WORD *)(a1 + 330) )
  {
    do
    {
      SubmissionQueueReInit(a1, *(_QWORD *)(a1 + 936) + 208LL * v12);
      result = *(unsigned __int16 *)(a1 + 330);
      ++v12;
    }
    while ( v12 < (unsigned int)result );
  }
  v13 = 0;
  if ( *(_WORD *)(a1 + 332) )
  {
    do
    {
      CompletionQueueReInit(a1, *(_QWORD *)(a1 + 944) + 392LL * v13);
      result = *(unsigned __int16 *)(a1 + 332);
      ++v13;
    }
    while ( v13 < (unsigned int)result );
  }
  v14 = 0;
  if ( *(_WORD *)(a1 + 234) )
  {
    do
    {
      v15 = v14++;
      *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72 * v15 + 56) = 0LL;
      result = *(unsigned __int16 *)(a1 + 234);
    }
    while ( v14 < (unsigned int)result );
  }
  return result;
}
