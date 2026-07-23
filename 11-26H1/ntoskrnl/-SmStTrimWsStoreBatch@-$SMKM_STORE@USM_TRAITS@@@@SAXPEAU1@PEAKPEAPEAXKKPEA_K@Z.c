/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140393390
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140392C04 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14027E6A0 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ZwQueryVirtualMemory @ 0x140728420 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x14072BBA0 (ZwUnlockVirtualMemory.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
        __int64 a1,
        unsigned int *a2,
        PVOID *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned int v8; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned int v15; // ebp
  unsigned int v16; // ebp
  SIZE_T v17; // rdi
  PVOID *Pool3; // rax
  PVOID *v19; // rsi
  unsigned int v20; // r11d
  PVOID *v21; // r10
  char *v22; // rcx
  PVOID *v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // ebx
  unsigned int v26; // ebp
  int v27; // eax
  unsigned int v28; // edi
  PVOID v29; // rcx
  __int64 v30; // r8
  struct _KLOCK_ENTRIES *v31; // r9
  __int64 v32; // rbx
  bool v33; // zf
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KLOCK_ENTRIES *v37; // r9
  int MemoryInformationLength; // [rsp+20h] [rbp-58h]
  PVOID BaseAddress; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+38h] [rbp-40h] BYREF
  int v42; // [rsp+A8h] [rbp+30h]

  v6 = a1;
  v7 = a4;
  v8 = 0;
  BaseAddress = 0LL;
  StLockReleaseShared((struct _KTHREAD *)(a1 + 2472));
  v15 = *(_DWORD *)(v6 + 2640);
  RegionSize[0] = v15;
  if ( a6 )
  {
    v16 = v15 >> 12;
    v17 = 16 * v7 * v16;
    v42 = v16;
    Pool3 = (PVOID *)ExAllocatePool3(64LL, v17, 1901555059LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
    v19 = Pool3;
    if ( Pool3 )
    {
      v20 = 0;
      if ( (_DWORD)v7 )
      {
        v21 = a3;
        do
        {
          v22 = (char *)*v21;
          ++v20;
          BaseAddress = *v21;
          if ( v8 < v16 * v20 )
          {
            v23 = &Pool3[2 * v8];
            v24 = v16 * v20 - v8;
            v8 = v16 * v20;
            do
            {
              *v23 = v22;
              v23 += 2;
              v22 = (char *)BaseAddress + 4096;
              BaseAddress = (char *)BaseAddress + 4096;
              --v24;
            }
            while ( v24 );
          }
          ++v21;
        }
        while ( v20 < (unsigned int)v7 );
      }
      if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, *Pool3, MemoryWorkingSetExInformation, Pool3, v17, 0LL) < 0 )
      {
        *a6 = 0LL;
      }
      else
      {
        v25 = 0;
        v26 = 0;
        if ( (_DWORD)v7 )
        {
          v27 = v42;
          v28 = v42;
          do
          {
            v29 = 0LL;
            BaseAddress = 0LL;
            if ( v25 < v28 )
            {
              do
              {
                if ( ((__int64)v19[2 * v25 + 1] & 1) != 0 )
                {
                  v33 = (*a6)-- == 1LL;
                  v29 = *a3;
                  BaseAddress = *a3;
                  if ( v33 )
                    break;
                }
                ++v25;
              }
              while ( v25 < v28 );
              if ( v29 )
                ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 1u);
              v27 = v42;
            }
            if ( !*a6 )
              break;
            ++v26;
            v28 += v27;
            ++a3;
          }
          while ( v26 < (unsigned int)v7 );
        }
      }
      ExFreePoolWithTag(v19, 0);
    }
    else
    {
      *a6 = 0LL;
    }
    v6 = a1;
LABEL_22:
    StLockAcquireShared((struct VLOCK *)(v6 + 2472), v11, v12, v13);
    if ( !(_DWORD)v7 )
      return;
    goto LABEL_23;
  }
  if ( !(_DWORD)v7 )
    goto LABEL_22;
  v34 = v7;
  do
  {
    BaseAddress = *a3;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 1u);
    ++a3;
    --v34;
  }
  while ( v34 );
  StLockAcquireShared((struct VLOCK *)(v6 + 2472), v35, v36, v37);
LABEL_23:
  v32 = v7;
  do
  {
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *a2++, v30, v31, MemoryInformationLength, 2u);
    --v32;
  }
  while ( v32 );
}
