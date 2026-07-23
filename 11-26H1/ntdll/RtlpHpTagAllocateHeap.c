/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x180096A80
 * Callers:
 *     RtlAllocateHeapFull @ 0x18013FDB0 (RtlAllocateHeapFull.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A0CF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpAllocateHeapRaiseException @ 0x180112C00 (RtlpAllocateHeapRaiseException.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

unsigned __int64 __fastcall RtlpHpTagAllocateHeap(char *BaseAddress, unsigned __int64 a2, unsigned int a3)
{
  int v5; // edi
  unsigned __int16 v7; // bp
  unsigned __int64 SubProcessTag; // rbx
  __int64 v9; // rbp
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r9
  int v15; // r9d
  unsigned int v16; // edx
  int v17; // r8d
  int v18; // ecx
  bool v19; // zf
  struct _TEB *v20; // r10
  unsigned int v21; // r11d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  int v26; // edi
  unsigned __int64 Heap; // rsi
  struct _TEB *v28; // rbx
  unsigned __int64 v30; // [rsp+28h] [rbp-70h]
  unsigned __int64 Buf2; // [rsp+48h] [rbp-50h] BYREF
  __int64 v32; // [rsp+50h] [rbp-48h]

  v5 = 0;
  v7 = 0;
  if ( *((_DWORD *)BaseAddress + 4) == -571548178
    && BaseAddress != (char *)qword_1801CA198[2 * (unsigned int)dword_18017B028[BYTE1(RtlpHpEnvHandle)]] )
  {
    v32 = 0LL;
    SubProcessTag = (unsigned __int64)NtCurrentTeb()->SubProcessTag;
    Buf2 = SubProcessTag;
    if ( !memcmp(&Buf2, &RtlpHpNullGUID, 0x10uLL) )
    {
      v7 = 0;
    }
    else
    {
      if ( word_1801CBC44
        && (v9 = *(_QWORD *)(qword_1801CBC38 + 8LL * (unsigned __int16)word_1801CBC44 - 8),
            !memcmp((const void *)(v9 + 16), &Buf2, 0x10uLL)) )
      {
        _InterlockedAdd64((volatile signed __int64 *)(v9 + 32), a2);
        v10 = *(_WORD *)(v9 + 40);
      }
      else
      {
        v11 = 0LL;
        v12 = dword_1801CBC2C & 0x1F;
        v30 = HIBYTE(v32)
            + 0x288D4C21D6A4D26DLL * (unsigned __int8)SubProcessTag
            + 0x3433B6F080FF8F35LL * BYTE2(SubProcessTag)
            + 0x8B7970C2A4EFB2A9uLL * BYTE1(SubProcessTag)
            + 37
            * (BYTE6(v32)
             + 37
             * (BYTE5(v32)
              + 37
              * (BYTE4(v32)
               + 37
               * (BYTE3(v32)
                + 37
                * (BYTE2(v32)
                 + 37
                 * (BYTE1(v32)
                  + 1369
                  * (HIBYTE(SubProcessTag)
                   + 37
                   * (BYTE6(SubProcessTag)
                    + 37 * (BYTE5(SubProcessTag) + 37 * (BYTE4(SubProcessTag) + 37LL * BYTE3(SubProcessTag)))))))))))
            + 0x201911C49281756FLL;
        v13 = -1LL << v12;
        v14 = v30 & (-1LL << v12);
LABEL_9:
        if ( v11 )
          goto LABEL_12;
        if ( (unsigned int)dword_1801CBC2C >> 5 )
        {
          v12 = ((unsigned int)dword_1801CBC2C >> 5) - 1;
          v11 = qword_1801CBC30
              + 8LL
              * ((unsigned int)v12 & (HIBYTE(v14)
                                    - 877075889
                                    + 442596621 * (unsigned __int8)v14
                                    + 37
                                    * (BYTE6(v14)
                                     + 37
                                     * (BYTE5(v14)
                                      + 37 * (BYTE4(v14) + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * BYTE1(v14))))))));
LABEL_12:
          while ( 1 )
          {
            v11 = *(_QWORD *)v11;
            if ( (v11 & 1) != 0 )
              break;
            v12 = v13 & *(_QWORD *)(v11 + 8);
            if ( v14 == v12 )
            {
              if ( !v11 )
                break;
              if ( SubProcessTag != *(_QWORD *)(v11 + 16) || *(_QWORD *)(v11 + 24) )
                goto LABEL_9;
              _InterlockedAdd64((volatile signed __int64 *)(v11 + 32), a2);
              v10 = *(_WORD *)(v11 + 40);
              if ( v10 )
                goto LABEL_20;
              break;
            }
          }
        }
        v10 = RtlpHpTagContextAllocateTag(v12, &Buf2, v30, a2, v14);
      }
      if ( v10 )
      {
LABEL_20:
        word_1801CBC44 = v10;
        a3 |= 0x100u;
      }
      v7 = v10;
    }
  }
  if ( *((_DWORD *)BaseAddress + 4) == -571548178 )
  {
    if ( a3 )
    {
      if ( a3 == 8 )
      {
        v15 = 2;
      }
      else
      {
        v16 = (a3 >> 2) & 2 | 0x80000000;
        if ( (a3 & 4) == 0 )
          v16 = (a3 >> 2) & 2;
        v17 = v16 | 0x100;
        if ( (a3 & 0x100) == 0 )
          v17 = v16;
        v18 = v17 | a3 & 0xE00;
        if ( (a3 & 0xE00) == 0 )
          v18 = v17;
        v15 = v18 | 0x10000000;
        if ( (a3 & 0x10) == 0 )
          v15 = v18;
      }
    }
    else
    {
      v15 = 0;
    }
    v19 = NtCurrentTeb()->HeapPgSamplingCount == 1;
    __writegsqword(0x248u, NtCurrentTeb()->HeapPgSamplingCount - 1);
    if ( v19 )
    {
      v20 = NtCurrentTeb();
      v21 = RtlpHpPgSamplingRateMask;
      if ( RtlpHpPgSamplingRateMask == -1 )
      {
        v20->HeapPgSamplingCount = 0LL;
      }
      else
      {
        v22 = v20->RngState[0];
        v23 = v20->RngState[1];
        v24 = v23 + v22;
        v25 = v22 ^ v23;
        v20->RngState[0] = v25 ^ __ROL8__(v22, 24) ^ (v25 << 16);
        v20->RngState[1] = __ROL8__(v25, 37);
        NtCurrentTeb()->HeapPgSamplingCount = (v21 & HIDWORD(v24)) + 1;
      }
      v5 = 4096;
    }
    v26 = v15 | v5;
    Heap = RtlpHpAllocateHeap(BaseAddress, a2, (unsigned int)v26);
    if ( !Heap )
    {
      v28 = NtCurrentTeb();
      v28->LastStatusValue = -1073741801;
      v28->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741801);
      if ( v26 < 0 || *((int *)BaseAddress + 5) < 0 )
        RtlpAllocateHeapRaiseException(a2);
    }
  }
  else
  {
    Heap = (unsigned __int64)RtlpAllocateNTHeapInternal((__int64)BaseAddress, a2, a3);
  }
  if ( v7 )
  {
    if ( Heap )
      *(_WORD *)RtlpHpExtrasGet((_RTL_SRWLOCK *)BaseAddress, Heap, *((_DWORD *)BaseAddress + 5), 0LL) = v7;
    else
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801CBC38 + 8LL * v7 - 8) + 32LL), -(__int64)a2);
  }
  return Heap;
}
