/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x14035402C
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140397A80 (RtlpHpAllocateHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x140520DB8 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     ExSaDecodeHandle @ 0x1402C15D0 (ExSaDecodeHandle.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x140346D68 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x140346E80 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhBucketGetSlotInfo @ 0x140354280 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x1403544CC (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x140354684 (RtlpHpAffinityMgrUpdateComplete.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x14052769C (RtlpHpLfhThreadDataInitializeSet.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, volatile signed __int8 *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbp
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  signed __int8 v9; // r11
  unsigned __int64 v10; // r14
  unsigned int SlotInfo; // eax
  char v12; // r8
  __int64 v13; // rax
  __int64 updated; // [rsp+38h] [rbp-150h]
  unsigned __int8 v15; // [rsp+3Dh] [rbp-14Bh]
  _BYTE v16[256]; // [rsp+40h] [rbp-148h] BYREF

  v2 = 0;
  v4 = *(unsigned __int8 *)a2 >> 1;
  v6 = *(unsigned __int8 *)(a1 + 72);
  v7 = KeGetCurrentPrcb()->Number & 0x3F;
  if ( v7 >= v6 )
  {
    if ( v7 == v6 || (_BYTE)v6 == 1 )
      v7 = 0;
    else
      v7 = *(unsigned __int8 *)(v7 - v6 - 1 + *(_QWORD *)(a1 + 64));
  }
  result = *(_QWORD *)ExSaDecodeHandle(*(_DWORD *)(a1 + 84));
  if ( !result )
  {
    result = RtlpHpLfhThreadDataInitializeSet(a1);
    v9 = 1;
  }
  v10 = a1 + ((unsigned __int16)result << 6);
  v15 = BYTE5(result);
  if ( v10 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 72) << 8) + 1472 )
  {
    if ( v10 != ((unsigned __int64)v7 << 8) + a1 + 1472 )
      return RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84));
    result = (unsigned __int8)_InterlockedCompareExchange8(a2 + 104, v9, 0);
    if ( (_BYTE)result )
      return result;
    SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, a2, v16);
    v12 = 0;
    if ( v15 >= SlotInfo - 1 )
      v12 = SlotInfo < *(unsigned __int8 *)(a1 + 72);
    updated = RtlpHpAffinityMgrUpdateProcess(
                (int)a2 + 104,
                *(unsigned __int16 *)(v10 + 2 * v4),
                (unsigned int)v16,
                SlotInfo,
                v12);
    if ( (_DWORD)updated )
    {
      if ( (_DWORD)updated == 1 )
      {
        v2 = 1;
        *(_WORD *)(v10 + 2LL * (unsigned int)v4) = WORD2(updated);
        RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84));
        return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v2);
      }
      if ( (_DWORD)updated != 2 )
      {
        if ( (_DWORD)updated == 3 )
        {
          v13 = RtlpHpLfhContextSlotAllocate(a1, (unsigned __int8 *)a2);
          if ( v13 )
          {
            ++*((_BYTE *)a2 + 1);
            *(_WORD *)(v10 + 2LL * (unsigned int)v4) = (unsigned __int64)(v13 - a1) >> 6;
            if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
              RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84));
            v2 = 1;
          }
        }
        return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v2);
      }
    }
    v2 = 1;
    return RtlpHpAffinityMgrUpdateComplete(a2 + 104, (unsigned int)updated, v2);
  }
  return result;
}
