/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x140519218
 * Callers:
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhContextSlotAllocate @ 0x140348DE8 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x140348F00 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x140356274 (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x14035642C (RtlpHpAffinityMgrUpdateComplete.c)
 *     RtlpHpEnvTlsGetValue @ 0x14041CE70 (RtlpHpEnvTlsGetValue.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140440C90 (KeGetCurrentProcessorNumberEx.c)
 *     RtlpHpLfhBucketGetSlotInfo @ 0x140459290 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x140529D0C (RtlpHpLfhThreadDataInitializeSet.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, volatile signed __int8 *a2)
{
  __int64 v3; // r14
  char CurrentProcessorNumber; // bl
  int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 Value; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r8
  __int16 *v13; // r15
  unsigned __int64 v14; // rax
  __int16 v15; // dx
  __int16 v16; // r14
  unsigned int SlotInfo; // eax
  char v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int8 v22; // [rsp+35h] [rbp-163h]
  __int16 v23; // [rsp+38h] [rbp-160h]
  unsigned int v24; // [rsp+40h] [rbp-158h]
  __int64 updated; // [rsp+40h] [rbp-158h]
  unsigned __int16 v26[128]; // [rsp+50h] [rbp-148h] BYREF

  v3 = *(unsigned __int8 *)a2 >> 1;
  v24 = *(unsigned __int8 *)a2 >> 1;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
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
  Value = RtlpHpEnvTlsGetValue(*(_DWORD *)(a1 + 84));
  if ( !Value )
    Value = RtlpHpLfhThreadDataInitializeSet(a1);
  v10 = 0LL;
  v11 = a1 + ((unsigned __int16)Value << 6);
  v12 = ((unsigned __int64)v8 << 8) + a1 + 1472;
  v22 = BYTE5(Value);
  if ( v11 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 72) << 8) + 1472 )
  {
    if ( v11 != v12 )
    {
      LOBYTE(v14) = RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84));
      return v14;
    }
    goto LABEL_18;
  }
  v13 = (__int16 *)(v11 + 2 * v3);
  v14 = HIDWORD(Value);
  v15 = *v13;
  v10 = v11;
  v16 = *(_WORD *)(v12 + 2 * v3);
  v11 = ((unsigned __int64)v8 << 8) + a1 + 1472;
  v23 = *v13;
  if ( (_BYTE)v14 != (_BYTE)v8 )
  {
    LOBYTE(v14) = RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84));
    v15 = v23;
  }
  if ( v15 == v16 )
  {
    v3 = v24;
LABEL_18:
    LOBYTE(v14) = _InterlockedCompareExchange8(a2 + 104, 1, 0);
    if ( (_BYTE)v14 )
      return v14;
    SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, (unsigned __int8 *)a2, v26);
    v18 = 0;
    if ( v22 >= SlotInfo - 1 )
      v18 = SlotInfo < *(unsigned __int8 *)(a1 + 72);
    updated = RtlpHpAffinityMgrUpdateProcess(
                (__int64)(a2 + 104),
                *(unsigned __int16 *)(v11 + 2 * v3),
                v26,
                SlotInfo,
                v18);
    switch ( (_DWORD)updated )
    {
      case 0:
        goto LABEL_34;
      case 1:
        *(_WORD *)(v11 + 2 * v3) = WORD2(updated);
        if ( v10 )
          *(_WORD *)(v10 + 2 * v3) = WORD2(updated);
        v6 = 1;
        RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84));
        break;
      case 2:
LABEL_34:
        v6 = 1;
        break;
      case 3:
        v19 = RtlpHpLfhContextSlotAllocate(a1, (unsigned __int8 *)a2);
        if ( v19 )
        {
          ++*((_BYTE *)a2 + 1);
          v20 = (unsigned __int64)(v19 - a1) >> 6;
          *(_WORD *)(v11 + 2 * v3) = v20;
          if ( v10 )
            *(_WORD *)(v10 + 2 * v3) = v20;
          if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
            RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84));
          v6 = 1;
        }
        break;
    }
    LOBYTE(v14) = RtlpHpAffinityMgrUpdateComplete((__int64)(a2 + 104), updated, v6);
    return v14;
  }
  *v13 = v16;
  return v14;
}
