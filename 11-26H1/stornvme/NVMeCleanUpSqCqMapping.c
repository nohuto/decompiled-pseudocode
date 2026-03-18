/*
 * XREFs of NVMeCleanUpSqCqMapping @ 0x14001639C
 * Callers:
 *     IoSqToIoCqMapping @ 0x140015574 (IoSqToIoCqMapping.c)
 * Callees:
 *     NVMeCompletionQueuesDedicatedSubmissionQueuesInit @ 0x140011280 (NVMeCompletionQueuesDedicatedSubmissionQueuesInit.c)
 *     NVMeCompletionQueuesSubmissionQueuesInit @ 0x140011320 (NVMeCompletionQueuesSubmissionQueuesInit.c)
 *     GetMaxDedicatedSqPerCqCount @ 0x140014620 (GetMaxDedicatedSqPerCqCount.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int16 __fastcall NVMeCleanUpSqCqMapping(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  char v5; // di
  unsigned int v6; // r11d
  __int64 v7; // rdx
  char v8; // r9
  unsigned __int16 v9; // cx
  unsigned int v10; // edx
  char v11; // si
  unsigned int v12; // edi
  __int64 v13; // rdx
  char v14; // r9
  void *v15; // r11
  int v16; // r10d
  unsigned int v17; // r9d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  v5 = 0;
  v6 = 0;
  if ( *(_WORD *)(a1 + 332) )
  {
    do
    {
      LOWORD(v3) = v6;
      v7 = *(_QWORD *)(a1 + 944) + 392LL * v6;
      *(_DWORD *)(v7 + 244) &= 0xFFFFFFF0;
      if ( *(_DWORD *)(v7 + 180) )
      {
        LOWORD(v3) = NVMeCompletionQueuesSubmissionQueuesInit(a1, v7, a3, 0LL);
        v8 = v5;
        if ( !v5 )
          v8 = 1;
        v5 = v8;
      }
      a3 = *(unsigned __int16 *)(a1 + 332);
      ++v6;
    }
    while ( v6 < (unsigned int)a3 );
    if ( v5 )
    {
      v9 = *(_WORD *)(a1 + 330);
      if ( v9 >= *(_WORD *)(a1 + 234) )
        v9 = *(_WORD *)(a1 + 234);
      LOWORD(v3) = (v9 - 1) / (int)a3 + 1;
      v10 = (8 * (unsigned int)a3 * (unsigned __int16)v3) >> 2;
      if ( v10 )
        LOWORD(v3) = (unsigned __int16)memset(*(void **)(*(_QWORD *)(a1 + 944) + 192LL), 0, 4LL * v10);
    }
  }
  v11 = 0;
  v12 = 0;
  if ( *(_WORD *)(a1 + 332) )
  {
    do
    {
      LOWORD(v3) = v12;
      v13 = *(_QWORD *)(a1 + 944) + 392LL * v12;
      if ( *(_DWORD *)(v13 + 212) )
      {
        LOWORD(v3) = NVMeCompletionQueuesDedicatedSubmissionQueuesInit(a1, v13, a3, 0LL);
        v14 = v11;
        if ( !v11 )
          v14 = 1;
        v11 = v14;
      }
      ++v12;
    }
    while ( v12 < *(unsigned __int16 *)(a1 + 332) );
    if ( v11 )
    {
      LOWORD(v3) = GetMaxDedicatedSqPerCqCount((unsigned __int16 *)a1);
      v17 = (8 * v16 * (unsigned int)(unsigned __int16)v3) >> 2;
      if ( v17 )
        LOWORD(v3) = (unsigned __int16)memset(v15, 0, 4LL * v17);
    }
  }
  return (__int16)v3;
}
