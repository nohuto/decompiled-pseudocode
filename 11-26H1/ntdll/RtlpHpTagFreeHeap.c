/*
 * XREFs of RtlpHpTagFreeHeap @ 0x180004680
 * Callers:
 *     RtlFreeHeapFull @ 0x1801400A0 (RtlFreeHeapFull.c)
 * Callees:
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpHpVsChunkSize @ 0x1800041CC (RtlpHpVsChunkSize.c)
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1800042A0 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpPgGetUserSize @ 0x180081808 (RtlpHpPgGetUserSize.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpTagFreeHeap(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // r12
  unsigned __int64 v6; // r15
  int v8; // r13d
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // r8
  char v14; // di
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  char v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int16 *v25; // rcx
  unsigned int v26; // edi
  __int64 v27; // r10
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  char v30; // cl
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // rdx
  unsigned int v34; // edi
  struct _TEB *v35; // rbx
  __int64 result; // rax
  __int64 UserSize; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  int v40; // edx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  int v43; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v44; // [rsp+80h] [rbp+18h]

  v44 = a3;
  v5 = 0;
  v6 = 0LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178
    || a1 == qword_1801CA198[2 * (unsigned int)dword_18017B028[BYTE1(RtlpHpEnvHandle)]] )
  {
    v23 = (unsigned __int16)a2;
    goto LABEL_22;
  }
  v8 = *(_DWORD *)(a1 + 20);
  LODWORD(v9) = 0;
  v43 = 0;
  if ( !(_WORD)a2 )
  {
    v11 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801C6908) >> 20));
    if ( v11 )
    {
      v10 = v11 - 1;
      if ( v10 != 2 )
        goto LABEL_7;
    }
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
    v38 = *(_QWORD *)(a1 + 80);
    v39 = *(_QWORD *)(a1 + 72);
    if ( (v38 & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_60;
      v39 ^= a1 + 72;
    }
    v40 = v38 & 1;
    if ( !v39 )
    {
LABEL_60:
      v22 = -1LL;
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
      goto LABEL_15;
    }
    while ( 1 )
    {
      v41 = *(_QWORD *)(v39 + 24) & 0xFFFFFFFFFFFF0000uLL;
      if ( a2 < v41 )
      {
        v42 = *(_QWORD *)v39;
        if ( !v40 || !v42 )
          goto LABEL_54;
      }
      else
      {
        if ( a2 <= v41 )
          goto LABEL_56;
        v42 = *(_QWORD *)(v39 + 8);
        if ( !v40 || !v42 )
        {
LABEL_54:
          v39 = v42;
          goto LABEL_55;
        }
      }
      v39 ^= v42;
LABEL_55:
      if ( !v39 )
      {
LABEL_56:
        if ( v39 )
        {
          v9 = *(_QWORD *)(v39 + 32) & 1LL;
          v22 = (*(_QWORD *)(v39 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v39 + 24);
          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
          goto LABEL_15;
        }
        goto LABEL_60;
      }
    }
  }
  v10 = 0;
LABEL_7:
  v12 = a1 + 192LL * v10;
  a4 = *(_QWORD *)(v12 + 320);
  v13 = a2 & a4;
  if ( !(RtlpHpHeapGlobals ^ a2 & a4 ^ *(_QWORD *)((a2 & a4) + 0x10) ^ (v12 + 320))
    && (v14 = *(_BYTE *)(v12 + 328),
        v15 = v13 + 32 * ((unsigned __int64)(unsigned int)(a2 - v13) >> v14),
        v16 = v15 - 32LL * *(unsigned __int8 *)(v15 + 26),
        v17 = v13 + ((unsigned int)((__int64)(v16 - v13) >> 5) << v14),
        v18 = *(_BYTE *)(v16 + 24),
        (v18 & 3) == 3)
    && (v17 == a2 || (v18 & 0x1Cu) >= 8) )
  {
    a4 &= v16;
    v19 = a4 + ((unsigned int)((__int64)(v16 - a4) >> 5) << v14);
    if ( a2 <= v19 )
    {
      v22 = (*(unsigned __int8 *)(v16 + 31) << v14) - (unsigned __int64)*(unsigned int *)(v16 + 4);
      LODWORD(v9) = *(_DWORD *)(v16 + 8) & 1;
    }
    else
    {
      v20 = *(_BYTE *)(v16 + 24) & 0x1C;
      if ( (_DWORD)v20 == 8 )
      {
        v21 = RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(v12 + 344), v19, a2, &v43);
        LODWORD(v9) = v43;
        v22 = v21;
      }
      else
      {
        if ( (_DWORD)v20 == 12 )
          UserSize = RtlpHpVsChunkSize(*(_QWORD *)(v12 + 352), a2, v20, &v43);
        else
          UserSize = RtlpHpPgGetUserSize(
                       *(_QWORD *)(v12 + 464),
                       a2,
                       (*(unsigned __int8 *)(v16 + 31) << v14) - (unsigned __int64)*(unsigned int *)(v16 + 4),
                       &v43);
        LODWORD(v9) = v43;
        v22 = UserSize;
      }
    }
  }
  else
  {
    v22 = -1LL;
  }
LABEL_15:
  v23 = (unsigned __int16)a2;
  if ( v22 != -1LL )
  {
    v6 = v22;
    if ( (_DWORD)v9 )
    {
      v24 = v22 + a2 + 16;
      if ( (v8 & 0x2000) == 0 )
        v24 = v22 + a2;
      v25 = (unsigned __int16 *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v23 = (unsigned __int16)a2;
      if ( v25 )
        v5 = *v25;
    }
  }
  a3 = v44;
LABEL_22:
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v34 = RtlpFreeNTHeapInternal(a1, a2, a3, a4);
    goto LABEL_35;
  }
  __writegsqword(0x250u, a1 + 20);
  v26 = *(_DWORD *)(a1 + 20) & 0x20F0;
  if ( v26 )
  {
    if ( (v26 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v26, a3);
    v34 = RtlpHpFreeHeapSlow(a1, a2, v26);
    goto LABEL_33;
  }
  if ( v23 )
  {
    v27 = a1 + 320;
  }
  else
  {
    v28 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801C6908) >> 20));
    if ( !v28 || (_DWORD)v28 == 3 )
    {
      v34 = RtlpHpLargeFree(a1, a2) != 0;
      goto LABEL_33;
    }
    v27 = a1 + 320;
    if ( (_DWORD)v28 == 2 )
      v27 = a1 + 512;
  }
  v29 = *(_QWORD *)v27 & a2;
  if ( RtlpHpHeapGlobals ^ v29 ^ *(_QWORD *)(v29 + 0x10) ^ v27 )
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v27 + 56), a2, 0, 0LL, 0LL);
    v34 = 0;
  }
  else
  {
    v30 = *(_BYTE *)(v27 + 8);
    v31 = v29 + 32 * ((unsigned __int64)(unsigned int)(a2 - v29) >> v30);
    v32 = v31 - 32LL * *(unsigned __int8 *)(v31 + 26);
    v33 = v29 + ((unsigned int)((__int64)(v32 - v29) >> 5) << v30);
    if ( *(_BYTE *)(v32 + 24) + (v33 == a2) == 11 )
      v34 = RtlpHpLfhContextFree(*(_QWORD *)(v27 + 24), v33, a2);
    else
      v34 = RtlpHpSegFreeInternal(v27, a2, v32, 0LL);
  }
LABEL_33:
  __writegsqword(0x250u, 0LL);
  if ( !v34 )
  {
    v35 = NtCurrentTeb();
    v35->LastStatusValue = -1073741811;
    v35->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
  }
LABEL_35:
  result = v34;
  if ( v34 )
  {
    if ( v5 )
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801CBC38 + 8LL * v5 - 8) + 32LL), -(__int64)v6);
  }
  return result;
}
