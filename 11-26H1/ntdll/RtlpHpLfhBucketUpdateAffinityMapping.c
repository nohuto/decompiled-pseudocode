/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30
 * Callers:
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DF844 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhContextSlotAllocate @ 0x180092EAC (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvTlsSetValue @ 0x18009345C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x1800938F0 (RtlpHpGetCurrentProcessorNumber.c)
 *     RtlpHpLfhBucketGetSlotInfo @ 0x1800948F0 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x180094978 (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x180094B04 (RtlpHpAffinityMgrUpdateComplete.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, volatile signed __int8 *a2)
{
  unsigned int v3; // ebp
  char CurrentProcessorNumber; // bl
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  __int64 result; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned int SlotInfo; // eax
  __int64 v14; // r12
  char v15; // r8
  unsigned __int8 v16; // bp
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  void **TlsExpansionSlots; // rdx
  __int64 v21; // [rsp+30h] [rbp-158h]
  __int64 v22; // [rsp+30h] [rbp-158h]
  __int64 updated; // [rsp+38h] [rbp-150h]
  unsigned __int8 v24; // [rsp+3Dh] [rbp-14Bh]
  _BYTE v25[256]; // [rsp+40h] [rbp-148h] BYREF

  v3 = *(unsigned __int8 *)a2 >> 1;
  CurrentProcessorNumber = RtlpHpGetCurrentProcessorNumber();
  v6 = 0;
  v7 = *(unsigned __int8 *)(a1 + 72);
  v8 = CurrentProcessorNumber & 0x3F;
  if ( v8 >= v7 )
  {
    if ( v8 == v7 || (_BYTE)v7 == 1 )
      v8 = 0;
    else
      v8 = *(unsigned __int8 *)(v8 - v7 - 1 + *(_QWORD *)(a1 + 64));
  }
  v9 = (unsigned __int16)*(_DWORD *)(a1 + 84);
  if ( v9 < 0x40 )
  {
    result = __readgsqword(8 * v9 + 5248);
    goto LABEL_4;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    result = (__int64)TlsExpansionSlots[v9 - 64];
LABEL_4:
    if ( result )
      goto LABEL_5;
  }
  result = RtlpHpLfhThreadDataInitializeSet(a1);
LABEL_5:
  v11 = a1 + ((unsigned __int16)result << 6);
  v24 = BYTE5(result);
  v21 = result;
  if ( v11 >= a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 72) << 8) + 1472 )
    return result;
  v12 = (unsigned __int64)v8 << 8;
  if ( v11 != v12 + a1 + 1472 )
  {
    v22 = result;
    LOWORD(v22) = (v12 + 1472) >> 6;
    BYTE4(v22) = v8;
    return RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 84), v22, 1LL);
  }
  result = (unsigned __int8)_InterlockedCompareExchange8(a2 + 104, 1, 0);
  if ( (_BYTE)result )
    return result;
  SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, a2, v25);
  v14 = v3;
  v15 = 0;
  v16 = v24;
  if ( v24 >= SlotInfo - 1 )
    v15 = SlotInfo < *(unsigned __int8 *)(a1 + 72);
  updated = RtlpHpAffinityMgrUpdateProcess(
              (int)a2 + 104,
              *(unsigned __int16 *)(v11 + 2 * v14),
              (unsigned int)v25,
              SlotInfo,
              v15);
  if ( !(_DWORD)updated )
  {
LABEL_21:
    v6 = 1;
    return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v6);
  }
  if ( (_DWORD)updated != 1 )
  {
    if ( (_DWORD)updated != 2 )
    {
      if ( (_DWORD)updated == 3 )
      {
        v18 = RtlpHpLfhContextSlotAllocate(a1, a2);
        if ( v18 )
        {
          ++*((_BYTE *)a2 + 1);
          *(_WORD *)(v11 + 2 * v14) = (unsigned __int64)(v18 - a1) >> 6;
          if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
          {
            BYTE5(v21) = 0;
            RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 84), v21, v19);
          }
          v6 = 1;
        }
      }
      return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v6);
    }
    goto LABEL_21;
  }
  v6 = 1;
  *(_WORD *)(v11 + 2 * v14) = WORD2(updated);
  BYTE5(v21) = v16 + 1;
  RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 84), v21, v17);
  return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v6);
}
