/*
 * XREFs of RtlpHpLfhContextFree @ 0x180004E80
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180004CE0 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpTlLogGCScheduled @ 0x180064504 (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhContextFree(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // r9d
  unsigned __int64 v7; // rbp
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  signed __int64 v16; // rax
  char v17; // dl
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  signed __int64 v20; // rtt
  __int64 v21; // r9
  signed __int64 v22; // rax
  __int64 v23; // r10
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  signed __int64 v26; // rdx
  signed __int64 v27; // [rsp+50h] [rbp+8h]
  int v28; // [rsp+5Ch] [rbp+14h]

  v6 = a3 - (((unsigned int)qword_1801C5EC8 ^ *(_DWORD *)(a2 + 40) ^ (unsigned int)(a2 >> 12)) >> 16) - a2;
  v7 = (v6 * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72)) >> 32;
  if ( v6 != (_DWORD)v7 * (unsigned __int16)(qword_1801C5EC8 ^ *(_WORD *)(a2 + 40) ^ (a2 >> 12)) )
    return 0LL;
  v9 = (unsigned __int16)*(_DWORD *)(a1 + 84);
  if ( v9 >= 0x40 )
  {
    TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
    if ( !TlsExpansionSlots )
    {
LABEL_8:
      LOWORD(v10) = RtlpHpLfhThreadDataInitializeSet(a1);
      goto LABEL_9;
    }
    v10 = (unsigned __int64)TlsExpansionSlots[v9 - 64];
  }
  else
  {
    v10 = __readgsqword(8 * v9 + 5248);
  }
  if ( !v10 )
    goto LABEL_8;
LABEL_9:
  if ( (_WORD)v10 == *(_WORD *)(a2 + 46) && *(_BYTE *)(a2 + 22) != 1 )
  {
    v12 = *(_QWORD *)(a2 + 8 * (v7 >> 5) + 64);
    v13 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v7 & 0x1F);
    v14 = v7;
    *(_QWORD *)(a2 + 8 * (v7 >> 5) + 64) = v13 & v12;
    if ( ((unsigned int)v12 & ~(_DWORD)v13) != 0 )
    {
      ++*(_WORD *)(a2 + 32);
      return 1LL;
    }
    goto LABEL_14;
  }
  v14 = v7;
  v15 = (unsigned int)*(_QWORD *)(a2 + 8 * (v7 >> 5) + 64);
  if ( !_bittest64(&v15, v7 & 0x1F) )
  {
LABEL_14:
    RtlpLogHeapFailure(17, *(_QWORD *)a1, a3, a2, v14, 0LL);
    return 0LL;
  }
  v16 = *(_QWORD *)(a2 + 16);
  do
  {
    v27 = v16;
    v17 = BYTE6(v16);
    v28 = HIDWORD(v16);
    if ( BYTE6(v16) == 1 )
      v17 = 2;
    BYTE6(v27) = v17;
    if ( a3 )
    {
      v18 = *(_QWORD *)(a1 + 88);
      *(_WORD *)a3 = v16;
      LOWORD(v27) = v7 + 1;
      *(_DWORD *)(a3 + 8) = a3 ^ HIDWORD(v18) ^ __ROL4__(*(_DWORD *)a3 ^ v18, v16);
    }
    WORD1(v27) = WORD1(v16) + 1;
    v19 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
    v20 = v16;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v27, v16);
  }
  while ( v20 != v16 );
  if ( !*(_BYTE *)(v19 + a1 + 92) )
  {
    *(_BYTE *)(v19 + a1 + 92) = 1;
    if ( !(_DWORD)qword_1801C6278 )
    {
      if ( Timer )
      {
        if ( !byte_1801CA908 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, 0) )
        {
          TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
          if ( (RtlpHpHeapFeatures & 0x10) != 0 )
            RtlpHpTlLogGCScheduled();
        }
      }
    }
  }
  if ( BYTE2(v28) == 1 )
  {
    v21 = a1 + ((unsigned __int64)(unsigned __int16)v28 << 6);
    _m_prefetchw((const void *)(v21 + 8));
    v22 = *(_QWORD *)(v21 + 8);
    v23 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = v23 & 0xFFF | (v22 - (v22 & 0xFFF));
    v25 = v22;
    v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8), a2 | v22 & 0xFFF, v22);
    if ( v25 != v24 )
    {
      do
      {
        v26 = v24;
        *(_QWORD *)(a2 + 24) = v23 ^ (v24 ^ v23) & 0xFFFFFFFFFFFFF000uLL;
        v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8), a2 | v24 & 0xFFF, v24);
      }
      while ( v24 != v26 );
    }
  }
  return 1LL;
}
