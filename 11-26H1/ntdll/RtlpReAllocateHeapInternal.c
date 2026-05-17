/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x18001AED0
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x1800B13D0 (RtlpHpTagReAllocateHeap.c)
 *     RtlReAllocateHeapFast @ 0x1801402B0 (RtlReAllocateHeapFast.c)
 *     RtlReAllocateHeapFull @ 0x180140350 (RtlReAllocateHeapFull.c)
 * Callees:
 *     RtlpValidateLFHBlock @ 0x180018130 (RtlpValidateLFHBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180019070 (RtlpProbeUserBufferSafe.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     RtlpCallInterceptRoutine @ 0x18001C570 (RtlpCallInterceptRoutine.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceRemoveStack @ 0x18002BA50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpHpReAllocateHeap @ 0x1800B11E4 (RtlpHpReAllocateHeap.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     RtlpSetupExtendedBlock @ 0x1800CA280 (RtlpSetupExtendedBlock.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int16 v5; // r13
  unsigned __int64 v7; // rsi
  __int16 v8; // r12
  int v10; // r14d
  int v11; // r12d
  unsigned __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // rdi
  int v15; // r9d
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int16 v20; // cx
  struct _TEB *v21; // rdi
  struct _TEB *v23; // rdi
  int v24; // edx
  int v25; // r12d
  __int64 Heap; // rax
  __int64 v27; // r13
  char v28; // dl
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // ecx
  unsigned int v33; // edx
  int v34; // r8d
  int v35; // ecx
  int v36; // r8d
  int v37; // eax
  char v38; // dl
  __int64 v39; // rcx
  char v40; // dl
  unsigned __int64 v41; // rdx
  int v42; // r8d
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  char v45; // al
  __int64 v46; // rax
  __int16 v47; // cx
  struct _TEB *v48; // rdi
  int v49; // r14d
  char v50; // [rsp+30h] [rbp-108h]
  unsigned __int16 v51; // [rsp+34h] [rbp-104h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0LL;
  v5 = 0;
  v51 = 0;
  *(&ExceptionRecord.NumberParameters + 1) = 0;
  v7 = a3;
  v8 = a2;
  v10 = 0;
  memset(&ExceptionRecord.ExceptionInformation[1], 0, 112);
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
    {
      if ( a2 )
      {
        if ( a2 == 8 )
        {
          v25 = 2;
        }
        else
        {
          v32 = (a2 >> 2) & 2;
          v33 = v32 | 0x80000000;
          if ( (v8 & 4) == 0 )
            v33 = v32;
          v34 = v33 | 0x100;
          if ( (v8 & 0x100) == 0 )
            v34 = v33;
          v35 = v34 | v8 & 0xE00;
          if ( (v8 & 0xE00) == 0 )
            v35 = v34;
          v36 = v35 | 0x10000000;
          if ( (v8 & 0x10) == 0 )
            v36 = v35;
          v25 = v36;
        }
      }
      else
      {
        v25 = 0;
      }
      Heap = RtlpHpReAllocateHeap(a1, (unsigned int)v25, v7);
      v27 = Heap;
      if ( ((Heap + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      {
        v48 = NtCurrentTeb();
        v49 = -1073741801;
        if ( Heap )
          v49 = -1073741819;
        v27 = 0LL;
        v48->LastStatusValue = v49;
        v48->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v49);
        if ( v25 < 0 || *(int *)(a1 + 20) < 0 )
        {
          ExceptionRecord.ExceptionCode = v49;
          ExceptionRecord.ExceptionAddress = RtlRaiseException;
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 1;
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.ExceptionInformation[0] = a4;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      return v27;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 116) | a2;
      if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
      {
        if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
        {
          v12 = (unsigned __int64)RtlpProbeUserBufferSafe(a1, a3);
        }
        else
        {
          if ( (a3 & 0xF) != 0 )
          {
            v13 = 9;
            goto LABEL_11;
          }
          v12 = a3 - 16;
          _m_prefetchw((const void *)(a3 - 16));
          if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
            v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
          if ( (*(_BYTE *)(v12 + 15) & 0x3F) == 0 )
          {
            LODWORD(a3) = v12;
            v13 = 8;
LABEL_11:
            RtlpLogHeapFailure(v13, a1, a3, 0, 0LL, 0LL);
            v12 = 0LL;
          }
        }
        if ( v12 )
        {
          if ( *(_BYTE *)(v7 - 1) != 5 )
            goto LABEL_14;
          if ( *(char *)(v12 + 15) >= 0 )
          {
            v16 = 1;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v24 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v12 + 8);
              if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v12 + 8)) >> 8) ^ BYTE2(v24))) )
                v16 = 0;
            }
          }
          else
          {
            v16 = RtlpValidateLFHBlock(a1, v12);
          }
          if ( !v16 )
            goto LABEL_28;
          if ( *(char *)(v12 + 15) >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              LODWORD(v17) = *(_DWORD *)(v12 + 8);
              if ( ((unsigned int)v17 & *(_DWORD *)(a1 + 124)) != 0 )
                LOWORD(v17) = *(_WORD *)(a1 + 136) ^ v17;
            }
            else
            {
              LOWORD(v17) = *(_WORD *)(v12 + 8);
            }
          }
          else
          {
            v17 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4))
                ? 0LL
                : *(_QWORD *)(v12
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
            LOWORD(v17) = *(_WORD *)(v17 + 36);
          }
          if ( *(_BYTE *)(v12 + 15) == 4 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v37 = *(_DWORD *)(v12 + 8);
              if ( (v37 & *(_DWORD *)(a1 + 124)) != 0 )
                LOWORD(v37) = *(_WORD *)(a1 + 136) ^ v37;
            }
            else
            {
              LOWORD(v37) = *(_WORD *)(v12 + 8);
            }
            v18 = (unsigned __int16)v17 + *(_QWORD *)(v12 - 16) - (unsigned __int16)v37;
          }
          else
          {
            v18 = 16LL * (unsigned __int16)v17;
          }
          if ( v18 + v12 < v7 )
          {
LABEL_28:
            RtlpLogHeapFailure(3, a1, v12, v7, 0LL, 0LL);
            v19 = -1073741811;
            goto LABEL_40;
          }
          v10 = *(_DWORD *)(v7 - 8);
          if ( (v11 & 0x3C000102) != 0 )
          {
LABEL_14:
            v14 = RtlpReAllocateHeap((void *)a1);
            if ( (dword_1801C7858 & 1) != 0
              && (dword_1801C7858 & 2) != 0
              && NtCurrentPeb()->ProcessHeap
              && a1 != qword_1801CB148[2 * (unsigned int)dword_18017C068[BYTE1(RtlpHpEnvHandle)]] )
            {
              if ( !v14 )
              {
LABEL_57:
                a4 -= v5;
                if ( !v10 )
                  goto LABEL_39;
                RtlSizeHeap(a1, 0, v7);
                v28 = *(_BYTE *)(v7 - 1);
                v29 = v7 + v5;
                v50 = 0;
                if ( v28 == 4 )
                {
                  if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v11) & 1) == 0 )
                  {
                    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
                    v50 = 1;
                  }
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    *(_DWORD *)(v7 - 8) ^= *(_DWORD *)(a1 + 136);
                    if ( HIBYTE(*(_DWORD *)(v7 - 8)) != ((unsigned __int8)*(_DWORD *)(v7 - 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v7 - 8)) ^ HIWORD(*(_DWORD *)(v7 - 8)))) )
                      RtlpAnalyzeHeapFailure(a1, v7 - 16);
                  }
                  v20 = *(_WORD *)(v7 - 8) + v51;
                  *(_WORD *)(v7 - 8) = v20;
                  *(_BYTE *)(v7 - 2) = v51 >> 4;
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    *(_BYTE *)(v7 - 5) = v20 ^ *(_BYTE *)(v7 - 6) ^ HIBYTE(v20);
                    *(_DWORD *)(v7 - 8) ^= *(_DWORD *)(a1 + 136);
                  }
                  *(_BYTE *)(v29 - 2) = v51 >> 4;
                  *(_BYTE *)(v29 - 1) = 5;
                  *(_WORD *)(v29 - 4) = v51 + v20;
                  *(_DWORD *)(v29 - 8) = v10;
                  if ( v50 )
                    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
                  goto LABEL_38;
                }
                if ( v28 == 5 )
                {
                  LOWORD(v30) = *(_WORD *)(v7 - 4) ^ *(_WORD *)(a1 + 140);
                }
                else if ( (v28 & 0x40) != 0 )
                {
                  LOWORD(v30) = *(_WORD *)(v7 + 16LL * (*(_BYTE *)(v7 - 1) & 0x3F) - 4);
                }
                else if ( (v28 & 0x3F) == 0x3F )
                {
                  if ( v28 >= 0 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      LODWORD(v31) = *(_DWORD *)(v7 - 8);
                      if ( ((unsigned int)v31 & *(_DWORD *)(a1 + 124)) != 0 )
                      {
                        v30 = *(_QWORD *)(v7 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v31) - 16);
                        goto LABEL_63;
                      }
                    }
                    else
                    {
                      LOWORD(v31) = *(_WORD *)(v7 - 8);
                    }
                  }
                  else
                  {
                    if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v7 - 8) ^ a1 ^ ((v7 - 16) >> 4)) )
                      v31 = 0LL;
                    else
                      v31 = *(_QWORD *)(v7
                                      - 16
                                      - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v7 - 8) ^ (unsigned int)a1 ^ (unsigned int)((v7 - 16) >> 4)) >> 12));
                    LOWORD(v31) = *(_WORD *)(v31 + 36);
                  }
                  v30 = *(_QWORD *)(v7 + 16LL * (unsigned __int16)v31 - 16);
                }
                else
                {
                  LOWORD(v30) = v28 & 0x3F;
                }
LABEL_63:
                *(_BYTE *)(v29 - 2) = v51 >> 4;
                *(_BYTE *)(v7 - 1) = (v51 >> 4) | *(_BYTE *)(v7 - 1) & 0xC0 | 0x40;
                *(_WORD *)(v29 - 4) = v51 + v30;
                *(_BYTE *)(v29 - 1) = 5;
                *(_DWORD *)(v29 - 8) = v10;
LABEL_38:
                RtlpCallInterceptRoutine(v10, a1, v7 + v5, 6, v7);
LABEL_39:
                v19 = -1073741801;
                goto LABEL_40;
              }
              if ( (v11 & 0x10000000) == 0 )
              {
                RtlpHpStackTraceRemoveStack(a1, v7);
                RtlpHpStackTraceAddStack(a1, v14);
              }
            }
            else if ( !v14 )
            {
              goto LABEL_57;
            }
            v4 = v14;
            if ( v10 )
            {
              v4 = RtlpSetupExtendedBlock(a1, v11, v14, v15, v5, v10);
              RtlpCallInterceptRoutine(v10, a1, v4, 6, v14);
            }
            return v4;
          }
          v38 = *(_BYTE *)(v7 - 1);
          if ( v38 == 5 )
          {
            v5 = 16 * *(unsigned __int8 *)(v7 - 2);
            v51 = v5;
          }
          else if ( (v38 & 0x40) != 0 )
          {
            v5 = 16 * (v38 & 0x3F);
            v51 = v5;
          }
          else
          {
            v5 = 0;
            v51 = 0;
          }
          if ( a4 + v5 < a4 )
            goto LABEL_39;
          a4 += v5;
          if ( v38 == 5 )
            v39 = v7 - 16LL * *(unsigned __int8 *)(v7 - 16 + 14);
          else
            v39 = 0LL;
          if ( (int)RtlpCallInterceptRoutine(v10, a1, v7, 5, v39) >= 0 )
          {
            v40 = *(_BYTE *)(v12 + 15);
            if ( v40 == 4 )
            {
              if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v11) & 1) == 0 )
                RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
                if ( HIBYTE(*(_DWORD *)(v12 + 8)) != ((unsigned __int8)*(_DWORD *)(v12 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v12 + 8)) ^ HIWORD(*(_DWORD *)(v12 + 8)))) )
                  RtlpAnalyzeHeapFailure(a1, v12);
              }
              v47 = *(_WORD *)(v12 + 8) - v5;
              *(_WORD *)(v12 + 8) = v47;
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_BYTE *)(v12 + 11) = HIBYTE(v47) ^ *(_BYTE *)(v12 + 10) ^ v47;
                *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
              }
              if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v11) & 1) == 0 )
              {
                RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
                v7 = v12 + 16;
                goto LABEL_14;
              }
              goto LABEL_117;
            }
            if ( v40 == 5 )
            {
              v41 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v40 & 0x40) != 0 )
            {
              v41 = *(unsigned __int16 *)(v12 + 16LL * (*(_BYTE *)(v12 + 15) & 0x3F) + 12);
            }
            else if ( (v40 & 0x3F) == 0x3F )
            {
              if ( v40 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  LODWORD(v46) = *(_DWORD *)(v12 + 8);
                  if ( ((unsigned int)v46 & *(_DWORD *)(a1 + 124)) != 0 )
                  {
                    v41 = *(_QWORD *)(v12 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v46));
                    goto LABEL_110;
                  }
                }
                else
                {
                  LOWORD(v46) = *(_WORD *)(v12 + 8);
                }
              }
              else
              {
                if ( *(_WORD *)(v12 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v12 >> 4)) )
                  v46 = 0LL;
                else
                  v46 = *(_QWORD *)(v12
                                  - ((unsigned __int64)(*(_DWORD *)(v12 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v12 >> 4)) >> 12));
                LOWORD(v46) = *(_WORD *)(v46 + 36);
              }
              v41 = *(_QWORD *)(v12 + 16LL * (unsigned __int16)v46);
            }
            else
            {
              v41 = *(_BYTE *)(v12 + 15) & 0x3F;
            }
LABEL_110:
            v42 = *(_BYTE *)(v12 + 15) & 0x80;
            if ( (*(_BYTE *)(v12 + 15) & 0x80) != 0 )
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
                v43 = 0LL;
              else
                v43 = *(_QWORD *)(v12
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
              LOWORD(v43) = *(_WORD *)(v43 + 36);
            }
            else if ( *(_DWORD *)(a1 + 124) )
            {
              LODWORD(v43) = *(_DWORD *)(v12 + 8);
              if ( ((unsigned int)v43 & *(_DWORD *)(a1 + 124)) != 0 )
                LOWORD(v43) = *(_WORD *)(a1 + 136) ^ v43;
            }
            else
            {
              LOWORD(v43) = *(_WORD *)(v12 + 8);
            }
            v44 = v41 - v5;
            if ( v44 >= 0x3F )
            {
              *(_QWORD *)(v12 + 16LL * (unsigned __int16)v43) = v44;
              v45 = -65;
              if ( !v42 )
                v45 = 63;
            }
            else
            {
              v45 = v44 | (v42 != 0 ? 0x80 : 0);
            }
            *(_BYTE *)(v12 + 15) = v45;
LABEL_117:
            v7 = v12 + 16;
            goto LABEL_14;
          }
          v19 = -1073741819;
        }
        else
        {
          v19 = -1073741819;
        }
LABEL_40:
        v21 = NtCurrentTeb();
        v21->LastStatusValue = v19;
        v21->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v19);
        if ( (v11 & 4) != 0 )
        {
          ExceptionRecord.ExceptionCode = v19;
          ExceptionRecord.ExceptionAddress = RtlRaiseException;
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 1;
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.ExceptionInformation[0] = a4;
          RtlRaiseException(&ExceptionRecord);
        }
        return v4;
      }
      return RtlDebugReAllocateHeap((void *)a1);
    }
  }
  else
  {
    v23 = NtCurrentTeb();
    v23->LastStatusValue = 0;
    v23->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0);
    return 0LL;
  }
}
