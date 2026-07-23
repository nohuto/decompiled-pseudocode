/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0
 * Callers:
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403488A0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x14034B930 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentSetWitheldBlocks @ 0x14034DB48 (RtlpHpLfhSubsegmentSetWitheldBlocks.c)
 *     RtlpHpLfhBlockBitmapInitialize @ 0x14034DBD8 (RtlpHpLfhBlockBitmapInitialize.c)
 *     RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x14034DC40 (RtlpHpLfhSubsegmentDelayFreeListBatch.c)
 *     RtlpHpReleaseLockShared @ 0x14034DEC0 (RtlpHpReleaseLockShared.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14034F790 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeListProcess(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  _QWORD *v5; // rdi
  int v6; // ecx
  unsigned int v7; // eax
  unsigned __int64 v8; // r15
  int v9; // r9d
  __int64 v10; // r11
  unsigned int v11; // ebx
  __int64 result; // rax
  char v13; // bl
  unsigned __int16 v14; // bp
  unsigned int v15; // r10d
  __int64 v16; // rax
  int v17; // r15d
  char v18; // cl
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r11
  char *v22; // r10
  __int64 v23; // rbp
  int v24; // edx
  char *v25; // rcx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r8
  signed __int16 v28; // ax
  unsigned int v29; // r15d
  struct _KLOCK_ENTRIES *v30; // r9
  __int64 v31; // rdx
  int v32; // r12d
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  bool v38; // cc
  unsigned int v39; // ecx
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  _WORD *v42; // rax
  int v43; // ebx
  _WORD *i; // rsi
  __int64 v45; // rsi
  struct _KTHREAD *v46; // rcx
  __int16 v47; // cx
  _WORD *v48; // rax
  char v49; // cl
  unsigned int v50; // edi
  unsigned int v51; // ebx
  __int64 v52; // r8
  int v53; // kr00_4
  signed __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  __int64 v58; // rdx
  bool v59; // zf
  unsigned int v60; // [rsp+30h] [rbp-78h]
  unsigned int v61; // [rsp+34h] [rbp-74h]
  int v62; // [rsp+38h] [rbp-70h]
  int v63; // [rsp+40h] [rbp-68h]
  __int64 v64; // [rsp+48h] [rbp-60h]
  unsigned __int64 v65; // [rsp+50h] [rbp-58h]
  unsigned __int64 v66; // [rsp+58h] [rbp-50h]
  char v68; // [rsp+B8h] [rbp+10h]
  char v69; // [rsp+C0h] [rbp+18h]
  unsigned __int16 v70; // [rsp+C8h] [rbp+20h]

  v68 = *(_BYTE *)(a2 + 51) & 1;
  v4 = a2 >> 12;
  v5 = a1;
  v6 = *(unsigned __int16 *)(a2 + 34);
  v7 = LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v8 = a3 >> 16;
  v9 = (unsigned __int16)v7;
  v10 = a2 + ((unsigned __int64)v7 >> 16);
  v11 = v7;
  result = WORD1(a3) + (unsigned int)*(unsigned __int16 *)(a2 + 32);
  v65 = a2 >> 12;
  v62 = v9;
  v64 = v10;
  v66 = a3 >> 16;
  if ( v6 == (_DWORD)result )
  {
    if ( *(_BYTE *)(a2 + 39) == 1 )
    {
      result = RtlpHpLfhBlockBitmapInitialize((void *)(a2 + 64), v6 + (unsigned int)*(unsigned __int8 *)(a2 + 37));
      v59 = *(_BYTE *)(a2 + 37) == 0;
      *(_BYTE *)(a2 + 36) = 0;
      if ( !v59 )
        result = RtlpHpLfhSubsegmentSetWitheldBlocks(
                   a2 + 64,
                   v58,
                   (__int64)&a1[8 * (unsigned __int64)*(unsigned __int16 *)(a2 + 44)],
                   v11,
                   HIBYTE(*(unsigned __int16 *)(a2 + 38)) << 12 << *(_WORD *)(a2 + 38));
      goto LABEL_16;
    }
  }
  else if ( *(_BYTE *)(a2 + 39) == 1 )
  {
    v13 = *(_BYTE *)(a2 + 51) & 1;
    if ( !v68 )
    {
      result = (unsigned int)*(unsigned __int8 *)(a2 + 24) - 8;
      if ( WORD1(a3) > (unsigned int)result )
      {
        result = RtlpHpLfhSubsegmentDelayFreeListBatch(v5, a2, a3, v10, v9);
        goto LABEL_16;
      }
    }
    goto LABEL_4;
  }
  v13 = *(_BYTE *)(a2 + 51) & 1;
LABEL_4:
  v14 = a3;
  if ( (_WORD)a3 )
  {
    do
    {
      v15 = v14 - 1;
      v61 = v15;
      v16 = v9 * v15;
      v17 = v16 + v10;
      v14 = *(_WORD *)(v16 + v10);
      v63 = v16 + v10;
      v70 = v14;
      if ( *(_DWORD *)(v16 + v10 + 8) != (HIDWORD(v5[11]) ^ (unsigned int)(v10 + v16) ^ __ROL4__(
                                                                                          *(_DWORD *)(v16 + v10) ^ v5[11],
                                                                                          v14)) )
      {
        RtlpLogHeapFailure(23, (_DWORD)v5, v17, a2, v15, 0LL);
        NT_ASSERT("0");
      }
      if ( !v13 && *(_BYTE *)(a2 + 39) > 1u )
      {
        v18 = *(_BYTE *)(a2 + 38);
        v19 = (unsigned int)(v17 - a2);
        v20 = (unsigned int)(v17 - a2) >> 12 >> v18;
        v21 = 2 * v20;
        v22 = (char *)(a2 + 2 * v20 + 8LL * *(unsigned __int8 *)(a2 + 24));
        _m_prefetchw(v22);
        LODWORD(v23) = -1;
        v24 = 0;
        v25 = &v22[2
                 * ((((unsigned int)v19
                    + (*(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)v4 ^ LOWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink))
                    - 1) >> 12 >> v18)
                  - (unsigned int)v20)
                 + 2];
        if ( v22 < v25 )
        {
          do
          {
            v28 = _InterlockedDecrement16((volatile signed __int16 *)v22);
            if ( v28 )
            {
              if ( v28 == -1 )
                --v24;
            }
            else
            {
              ++v24;
              if ( (_DWORD)v23 == -1 )
                v23 = v21 >> 1;
            }
            v22 += 2;
            v21 += 2LL;
          }
          while ( v22 < v25 );
          if ( v24 )
          {
            v53 = v24 << 12 << *(_BYTE *)(a2 + 38);
            v54 = v53 / 4096;
            _InterlockedAdd64((_QWORD *)((char *)v5 + *((__int16 *)v5 + 37) + 24), v54);
            if ( v54 > 0 )
            {
              v55 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
              if ( !*((_BYTE *)v5 + v55 + 92) )
              {
                *((_BYTE *)v5 + v55 + 92) = 1;
                if ( !(BYTE1(**(_QWORD **)(*v5 + 56LL)) == 1
                     ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
                     : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock)) )
                  RtlpHpEnvCompactionSchedule(*(_QWORD *)(*v5 + 56LL), (v53 >> 31) & 0xFFF, v20, v19);
              }
            }
          }
          if ( (_DWORD)v23 != -1 )
          {
            v29 = *((unsigned __int8 *)v5 + 82);
            v30 = 0LL;
            v69 = -1;
            v60 = 0;
            if ( (int)v23 < 0 )
            {
              LODWORD(v23) = 1;
              v32 = 1;
            }
            else
            {
              v31 = *v5;
              v32 = 0;
              if ( (*(_BYTE *)(*v5 + 13LL) & 8) == 0 )
              {
                v33 = *(__int16 *)(v31 + 22);
                v34 = *(_QWORD *)(v33 + v31 + 8);
                v35 = *(_QWORD *)(v33 + v31 + 24) + *(_QWORD *)(v33 + v31 + 16);
                v36 = v34 >> *(_BYTE *)(v31 + 11);
                if ( v36 <= 8 )
                  v36 = 8LL;
                v37 = v34 >> *(_BYTE *)(v31 + 12);
                if ( v37 <= 8 )
                  v37 = 8LL;
                if ( v35 <= v36 )
                  goto LABEL_52;
                if ( (int)RtlpHpEnvCompactionSchedule(*(_QWORD *)(v31 + 56), v31, 8LL, 0LL) < 0 )
                {
                  v13 = v68;
                }
                else
                {
                  v38 = v35 <= v37;
                  v13 = v68;
                  if ( v38 )
                    goto LABEL_53;
                }
                v5 = a1;
                v30 = 0LL;
              }
            }
            v39 = *(unsigned __int8 *)(a2 + 39);
            if ( (unsigned int)v23 < v39 )
            {
              while ( 1 )
              {
                v40 = a2 + 8LL * *(unsigned __int8 *)(a2 + 24);
                v41 = v40 + 2LL * (unsigned __int8)v39;
                v42 = (_WORD *)(v40 + 2LL * (unsigned int)v23);
                if ( *v42 )
                {
                  if ( (unsigned __int64)v42 >= v41 )
                    goto LABEL_38;
                  while ( *v42 )
                  {
                    if ( (unsigned __int64)++v42 >= v41 )
                      goto LABEL_38;
                  }
                  v23 = ((__int64)v42 - v40) >> 1;
                }
                else
                {
                  v47 = *(v42 - 1);
                  v48 = v42 - 1;
                  if ( !v47 )
                  {
                    while ( !*--v48 )
                      ;
                  }
                  v42 = v48 + 1;
                }
                for ( i = (_WORD *)(v40 + 2 * ((unsigned int)v23 + 1LL)); (unsigned __int64)i < v41; ++i )
                {
                  if ( *i )
                    break;
                }
                v23 = ((__int64)v42 - v40) >> 1;
                v45 = i - v42;
                if ( (_DWORD)v23 == -1 )
                {
LABEL_38:
                  v43 = v60;
LABEL_49:
                  if ( !v43 )
                    goto LABEL_52;
LABEL_50:
                  v46 = (struct _KTHREAD *)(a2 + 56);
                  if ( v43 == 2 )
                    RtlpHpReleaseLockExclusive(v46);
                  else
                    RtlpHpReleaseLockShared(v46, *((unsigned __int8 *)v5 + 73), v69);
LABEL_52:
                  v13 = v68;
                  goto LABEL_53;
                }
                if ( (unsigned int)v45 < v29 )
                  break;
                if ( (_DWORD)v30 )
                {
                  v49 = *(_BYTE *)(a2 + 38);
                  v50 = (_DWORD)v23 << 12 << v49;
                  v51 = (_DWORD)v45 << 12 << v49;
                  guard_dispatch_icall_no_overrides(*a1, a2 + v50, v51);
                  v52 = v50;
                  v5 = a1;
                  RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v52, v51);
                  v43 = v60;
                  if ( !v32 )
                    goto LABEL_50;
LABEL_47:
                  LODWORD(v23) = v45 + v23;
                  goto LABEL_48;
                }
                v43 = 2;
                v60 = 2;
                v69 = RtlpHpAcquireLockExclusive((int *)(a2 + 56), *((unsigned __int8 *)v5 + 73), v40, v30);
LABEL_48:
                v39 = *(unsigned __int8 *)(a2 + 39);
                if ( (unsigned int)v23 >= v39 )
                  goto LABEL_49;
                v30 = (struct _KLOCK_ENTRIES *)v60;
              }
              v43 = v60;
              if ( !v32 )
                goto LABEL_49;
              goto LABEL_47;
            }
LABEL_53:
            v17 = v63;
          }
        }
        v14 = v70;
      }
      v26 = __ROL8__(-2LL, v61 & 0x3F);
      v27 = a2 + 8 * ((unsigned __int64)v61 >> 6);
      if ( v13 )
      {
        result = *(_QWORD *)(v27 + 64);
        *(_QWORD *)(v27 + 64) = result & v26;
      }
      else
      {
        _m_prefetchw((const void *)(v27 + 64));
        result = _InterlockedAnd64((volatile signed __int64 *)(v27 + 64), v26);
      }
      v5 = a1;
      if ( (result & ~v26) == 0 )
      {
        RtlpLogHeapFailure(17, *a1, v17, a2, v61, 0LL);
        NT_ASSERT("0");
      }
      v10 = v64;
      v9 = v62;
      LOWORD(v4) = v65;
    }
    while ( v14 );
    LOWORD(v8) = v66;
  }
LABEL_16:
  *(_WORD *)(a2 + 32) += v8;
  return result;
}
