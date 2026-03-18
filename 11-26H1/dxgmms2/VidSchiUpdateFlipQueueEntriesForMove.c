/*
 * XREFs of VidSchiUpdateFlipQueueEntriesForMove @ 0x140055978
 * Callers:
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6A80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     MoveAndFlipDisplayingAllocation @ 0x1400BECE0 (MoveAndFlipDisplayingAllocation.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiUpdateFlipQueueEntriesForMove(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int i; // r14d
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v9; // r15d
  char v10; // cl
  unsigned int v11; // r13d
  bool v12; // zf
  int v13; // eax
  __int64 v14; // r12
  __int64 v15; // r12
  __int64 *v16; // rax
  unsigned int v17; // edx
  struct _KSPIN_LOCK_QUEUE *volatile Next; // r10
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h]
  _QWORD v28[278]; // [rsp+68h] [rbp-A0h] BYREF
  int v31; // [rsp+938h] [rbp+830h] BYREF
  int v32; // [rsp+940h] [rbp+838h]

  v31 = a3;
  v5 = a1;
  v25 = a4 + a5;
  v27 = 0LL;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  for ( i = 0; i < *(_DWORD *)(v5 + 48); ++i )
  {
    v7 = *(_QWORD *)(v5 + 8LL * i + 3448);
    if ( v7 )
    {
      LOWORD(v8) = *(_WORD *)(v7 + 44296);
      while ( (_WORD)v8 )
      {
        v9 = *(unsigned __int16 *)(v7 + 44298);
        v10 = -1;
        v11 = 0;
        v12 = !_BitScanForward((unsigned int *)&v13, (unsigned __int16)v8);
        v31 = 0;
        if ( !v12 )
          v10 = v13;
        v32 = v10;
        v14 = v10;
        while ( v11 < v9 )
        {
          LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)((__int64)v10 << 6);
          if ( *(_QWORD *)((((__int64)LockHandle.LockQueue.Next + v11) << 6) + v7 + 3344) == a2 )
          {
            memset(v28, 0, 0x870uLL);
            v15 = v14 << 12;
            v28[0] = v5;
            LODWORD(v28[1]) = i;
            HIDWORD(v28[1]) = *(unsigned __int16 *)(v15 + v7 + 3368);
            v28[3] = *(_QWORD *)(v15 + v7 + 3336);
            if ( v11 )
              v16 = (__int64 *)(v15 + v7 + 3360);
            else
              v16 = &v25;
            v28[2] = *v16;
            v17 = 0;
            LODWORD(v28[4]) = v9;
            if ( v9 )
            {
              Next = LockHandle.LockQueue.Next;
              v19 = a5;
              do
              {
                if ( v17 )
                {
                  v20 = 3LL * (v17 - 1);
                  v21 = ((_QWORD)Next + v17) << 6;
                  v28[v20 + 71] = *(_QWORD *)(v21 + v7 + 3336);
                  LOWORD(v28[v20 + 72]) = *(_WORD *)(v21 + v7 + 3368);
                  v22 = v19;
                  if ( v11 != v17 )
                    v22 = *(_QWORD *)(v21 + v7 + 3360);
                  v28[3 * v17 + 70] = v22;
                  v9 = v28[4];
                }
                ++v17;
              }
              while ( v17 < v9 );
              v5 = a1;
            }
            LODWORD(v28[70]) |= 0x102u;
            v23 = *(unsigned int *)(v5 + 40);
            v24 = *(_QWORD *)(v5 + 32);
            LODWORD(v28[265]) = -1073741823;
            LOBYTE(v31) = 0;
            DpSynchronizeExecution(v24, VidSchiExecuteMmIoFlipAtISR, v28, v23, &v31);
            break;
          }
          ++v11;
        }
        v8 = (unsigned __int16)v8 & ~(1 << v32);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
}
