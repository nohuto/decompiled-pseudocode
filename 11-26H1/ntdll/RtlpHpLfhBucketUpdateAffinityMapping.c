/*
 * XREFs of RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744
 * Callers:
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhContextSlotAllocate @ 0x180072140 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvTlsSetValue @ 0x1800723C0 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x180072438 (RtlpHpGetCurrentProcessorNumber.c)
 *     RtlpHpLfhBucketGetSlotInfo @ 0x180073A80 (RtlpHpLfhBucketGetSlotInfo.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x1800E0A1C (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x1800E0BA8 (RtlpHpAffinityMgrUpdateComplete.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char __fastcall RtlpHpLfhBucketUpdateAffinityMapping(__int64 a1, volatile signed __int8 *a2)
{
  __int64 v3; // r14
  char CurrentProcessorNumber; // bl
  int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  void **TlsExpansionSlots; // rdx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  __int16 v18; // r14
  __int16 *v19; // r15
  __int16 v20; // dx
  unsigned int SlotInfo; // eax
  char v22; // r8
  _BYTE *v23; // rax
  unsigned __int64 v24; // rax
  __int64 v26; // [rsp+30h] [rbp-168h]
  __int64 v27; // [rsp+30h] [rbp-168h]
  __int16 v28; // [rsp+38h] [rbp-160h]
  unsigned int v29; // [rsp+40h] [rbp-158h]
  __int64 updated; // [rsp+40h] [rbp-158h]
  unsigned __int16 v31[128]; // [rsp+50h] [rbp-148h] BYREF

  v3 = *(unsigned __int8 *)a2 >> 1;
  v29 = *(unsigned __int8 *)a2 >> 1;
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
    v10 = __readgsqword(8 * v9 + 5248);
    goto LABEL_10;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v10 = (unsigned __int64)TlsExpansionSlots[v9 - 64];
LABEL_10:
    if ( v10 )
      goto LABEL_12;
  }
  v10 = RtlpHpLfhThreadDataInitializeSet(a1);
LABEL_12:
  v12 = 0LL;
  v13 = a1 + ((unsigned __int16)v10 << 6);
  v14 = (unsigned __int64)v8 << 8;
  v15 = v14 + a1 + 1472;
  v26 = v10;
  if ( v13 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 72) << 8) + 1472 )
  {
    if ( v13 != v15 )
    {
      v27 = v10;
      LOWORD(v27) = (v14 + 1472) >> 6;
      BYTE4(v27) = v8;
      LOBYTE(v17) = RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84), v27);
      return v17;
    }
    goto LABEL_22;
  }
  v16 = 2LL * (unsigned int)v3;
  v17 = HIDWORD(v10);
  v18 = *(_WORD *)(v15 + v16);
  v19 = (__int16 *)(v13 + v16);
  v12 = v13;
  v13 = v14 + a1 + 1472;
  v20 = *v19;
  v28 = *v19;
  if ( (_BYTE)v17 != (_BYTE)v8 )
  {
    BYTE4(v26) = v8;
    LOBYTE(v17) = RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84), v26);
    v20 = v28;
  }
  if ( v20 == v18 )
  {
    v3 = v29;
LABEL_22:
    LOBYTE(v17) = _InterlockedCompareExchange8(a2 + 104, 1, 0);
    if ( (_BYTE)v17 )
      return v17;
    SlotInfo = RtlpHpLfhBucketGetSlotInfo(a1, (unsigned __int8 *)a2, v31);
    v22 = 0;
    if ( BYTE5(v26) >= SlotInfo - 1 )
      v22 = SlotInfo < *(unsigned __int8 *)(a1 + 72);
    updated = RtlpHpAffinityMgrUpdateProcess(
                (__int64)(a2 + 104),
                *(unsigned __int16 *)(v13 + 2 * v3),
                v31,
                SlotInfo,
                v22);
    switch ( (_DWORD)updated )
    {
      case 0:
        goto LABEL_38;
      case 1:
        *(_WORD *)(v13 + 2 * v3) = WORD2(updated);
        if ( v12 )
          *(_WORD *)(v12 + 2 * v3) = WORD2(updated);
        v6 = 1;
        ++BYTE5(v26);
        RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84), v26);
        break;
      case 2:
LABEL_38:
        v6 = 1;
        break;
      case 3:
        v23 = RtlpHpLfhContextSlotAllocate(a1, a2);
        if ( v23 )
        {
          ++*((_BYTE *)a2 + 1);
          v24 = (unsigned __int64)&v23[-a1] >> 6;
          *(_WORD *)(v13 + 2 * v3) = v24;
          if ( v12 )
            *(_WORD *)(v12 + 2 * v3) = v24;
          if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
          {
            BYTE5(v26) = 0;
            RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84), v26);
          }
          v6 = 1;
        }
        break;
    }
    LOBYTE(v17) = RtlpHpAffinityMgrUpdateComplete((__int64)(a2 + 104), updated, v6);
    return v17;
  }
  *v19 = v18;
  return v17;
}
