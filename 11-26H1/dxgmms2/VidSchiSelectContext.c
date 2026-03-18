/*
 * XREFs of VidSchiSelectContext @ 0x1400230C0
 * Callers:
 *     VidSchiCleanupPacket_PriorityTable @ 0x1400C458C (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x140024900 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140030808 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x140030A00 (VidSchiStartNodeYield.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContext(__int64 a1, int a2)
{
  struct _VIDSCH_CONTEXT *v4; // rdi
  __int64 v5; // rax
  __int64 SetBits; // rax
  __int64 *v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  CCHAR v11; // al
  __int64 v13; // rax
  CCHAR MostSignificantBit; // al
  CCHAR v15; // al
  LARGE_INTEGER v16; // r14
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r9
  LARGE_INTEGER v20; // r14
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+58h] [rbp-50h] BYREF
  __int128 v26; // [rsp+60h] [rbp-48h]
  __int64 v27; // [rsp+70h] [rbp-38h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+8h] BYREF
  char v29; // [rsp+B8h] [rbp+10h] BYREF

  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
  if ( *(_DWORD *)(a1 + 784) )
  {
    v5 = *(_QWORD *)(a1 + 272);
    if ( v5 && (*(_DWORD *)(v5 + 192) & 1) != 0 )
    {
      v4 = *(struct _VIDSCH_CONTEXT **)(a1 + 272);
    }
    else
    {
      RtlCopyBitMapEx(a1 + 504, a1 + 600, 0LL);
      RtlIntersectBitMapsEx(a1 + 600, a1 + 552);
      if ( (unsigned __int8)RtlAreBitsClearEx(a1 + 600, 0LL, *(_QWORD *)(a1 + 600)) )
        RtlCopyBitMapEx(a1 + 504, a1 + 600, 0LL);
      SetBits = RtlFindSetBitsEx(a1 + 600, 1LL, (unsigned int)(*(_DWORD *)(a1 + 776) + 1));
      if ( SetBits != -1 )
      {
        v7 = *(__int64 **)(a1 + 696);
        if ( (unsigned int)SetBits < *(_DWORD *)(a1 + 768) )
          v7 += (unsigned int)SetBits;
        v8 = *v7;
        *(_DWORD *)(a1 + 776) = SetBits;
        if ( v8 )
        {
          if ( *(_DWORD *)(v8 + 1892) )
          {
            v9 = *(_QWORD *)(v8 + 24);
            v29 = 0;
            v27 = 0LL;
            v25 = v8;
            v26 = 0LL;
            DpSynchronizeExecution(
              *(_QWORD *)(v9 + 32),
              VidSchiUpdateNodeRunningTimeAtISR,
              &v25,
              *(unsigned int *)(v9 + 40),
              &v29);
          }
          v10 = *(unsigned int *)(v8 + 1888);
          if ( *(_BYTE *)(v8 + 2144)
            && (v10 & 0xC0000000) == 0
            && (v13 = *(_QWORD *)(v8 + 24), (v10 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v13 + 224)))) != 0) )
          {
            MostSignificantBit = RtlFindMostSignificantBit(v10 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v13 + 224))));
            v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, MostSignificantBit, 1);
            if ( v4 )
            {
              VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v8);
            }
            else
            {
              v15 = RtlFindMostSignificantBit(*(unsigned int *)(v8 + 1888));
              v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, v15, 0);
              if ( !*(_QWORD *)(v8 + 2120) )
              {
                PerformanceFrequency.QuadPart = 0LL;
                v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
                v17 = *(_DWORD *)(*((_QWORD *)v4 + 13) + 512LL);
                v18 = 0LL;
                if ( v17 <= *(_DWORD *)(a1 + 48) )
                  v18 = v17;
                v19 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v18 + 3448) + 83104LL);
                if ( !(_DWORD)v19 )
                {
                  WdLogSingleEntry1(3LL, (unsigned int)v18);
                  v19 = 16LL;
                  WdLogGlobalForLineNumber = 18892;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                  v8,
                  (LARGE_INTEGER)v16.QuadPart,
                  (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
                  v19);
              }
              VidSchiProfilePerformanceTick(20, a1, v8, 0, (__int64)v4, 0LL, 0LL, 1LL);
            }
          }
          else
          {
            v11 = RtlFindMostSignificantBit(*(unsigned int *)(v8 + 1888));
            v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, v11, 0);
            if ( (*(_DWORD *)(a1 + 2824) & 8) != 0 && *(_BYTE *)(v8 + 2144) && !*(_QWORD *)(v8 + 2120) )
            {
              PerformanceFrequency.QuadPart = 0LL;
              v20 = KeQueryPerformanceCounter(&PerformanceFrequency);
              v21 = *(_DWORD *)(*((_QWORD *)v4 + 13) + 512LL);
              v22 = 0LL;
              if ( v21 <= *(_DWORD *)(a1 + 48) )
                v22 = v21;
              v23 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v22 + 3448) + 83104LL);
              if ( !(_DWORD)v23 )
              {
                WdLogSingleEntry1(3LL, (unsigned int)v22);
                v23 = 16LL;
                WdLogGlobalForLineNumber = 18892;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                v8,
                (LARGE_INTEGER)v20.QuadPart,
                (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
                v23);
            }
            VidSchiProfilePerformanceTick(20, a1, v8, 0, (__int64)v4, 0LL, 0LL, 0LL);
          }
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(2, a1, 0, 0, (__int64)v4, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
