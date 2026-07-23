/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x180005FB0
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x180080F40 (RtlpHpTagReAllocateHeap.c)
 *     RtlReAllocateHeapFast @ 0x1801401B0 (RtlReAllocateHeapFast.c)
 *     RtlReAllocateHeapFull @ 0x180140250 (RtlReAllocateHeapFull.c)
 * Callees:
 *     RtlpValidateLFHBlock @ 0x180003210 (RtlpValidateLFHBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x180004150 (RtlpProbeUserBufferSafe.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlpCallInterceptRoutine @ 0x180007640 (RtlpCallInterceptRoutine.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180016B50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpHpReAllocateHeap @ 0x180080D58 (RtlpHpReAllocateHeap.c)
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 *     RtlpSetupExtendedBlock @ 0x1800C7A00 (RtlpSetupExtendedBlock.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  _DWORD *v6; // rsi
  __int16 v7; // r13
  unsigned __int16 v9; // r14
  int v10; // r15d
  int v11; // r13d
  unsigned __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // rdi
  int v15; // r9d
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS v19; // esi
  unsigned __int64 v20; // r8
  __int16 v21; // cx
  struct _TEB *v22; // rdi
  struct _TEB *v24; // rdi
  int v25; // edx
  int v26; // r13d
  __int64 Heap; // rax
  __int64 v28; // r15
  char v29; // dl
  char *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // ecx
  unsigned int v34; // edx
  int v35; // r8d
  int v36; // ecx
  int v37; // r8d
  int v38; // eax
  char v39; // dl
  __int64 v40; // rcx
  char v41; // dl
  unsigned __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  char v46; // al
  __int64 v47; // rax
  __int16 v48; // cx
  struct _TEB *v49; // rdi
  NTSTATUS v50; // r14d
  char v51; // [rsp+30h] [rbp-108h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0LL;
  *(&ExceptionRecord.NumberParameters + 1) = 0;
  v6 = (_DWORD *)a3;
  v7 = a2;
  v9 = 0;
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
          v26 = 2;
        }
        else
        {
          v33 = (a2 >> 2) & 2;
          v34 = v33 | 0x80000000;
          if ( (v7 & 4) == 0 )
            v34 = v33;
          v35 = v34 | 0x100;
          if ( (v7 & 0x100) == 0 )
            v35 = v34;
          v36 = v35 | v7 & 0xE00;
          if ( (v7 & 0xE00) == 0 )
            v36 = v35;
          v37 = v36 | 0x10000000;
          if ( (v7 & 0x10) == 0 )
            v37 = v36;
          v26 = v37;
        }
      }
      else
      {
        v26 = 0;
      }
      Heap = RtlpHpReAllocateHeap(a1, (unsigned int)v26, v6);
      v28 = Heap;
      if ( ((Heap + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      {
        v49 = NtCurrentTeb();
        v50 = -1073741801;
        if ( Heap )
          v50 = -1073741819;
        v28 = 0LL;
        v49->LastStatusValue = v50;
        v49->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v50);
        if ( v26 < 0 || *(int *)(a1 + 20) < 0 )
        {
          ExceptionRecord.ExceptionCode = v50;
          ExceptionRecord.ExceptionAddress = RtlRaiseException;
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 1;
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.ExceptionInformation[0] = a4;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      return v28;
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
          if ( *((_BYTE *)v6 - 1) != 5 )
            goto LABEL_14;
          if ( *(char *)(v12 + 15) >= 0 )
          {
            v16 = 1;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v25 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v12 + 8);
              if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v12 + 8)) >> 8) ^ BYTE2(v25))) )
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
              v38 = *(_DWORD *)(v12 + 8);
              if ( (v38 & *(_DWORD *)(a1 + 124)) != 0 )
                LOWORD(v38) = *(_WORD *)(a1 + 136) ^ v38;
            }
            else
            {
              LOWORD(v38) = *(_WORD *)(v12 + 8);
            }
            v18 = (unsigned __int16)v17 + *(_QWORD *)(v12 - 16) - (unsigned __int16)v38;
          }
          else
          {
            v18 = 16LL * (unsigned __int16)v17;
          }
          if ( v18 + v12 < (unsigned __int64)v6 )
          {
LABEL_28:
            RtlpLogHeapFailure(3, a1, v12, (_DWORD)v6, 0LL, 0LL);
            v19 = -1073741811;
            goto LABEL_40;
          }
          v10 = *(v6 - 2);
          if ( (v11 & 0x3C000102) != 0 )
          {
LABEL_14:
            v14 = RtlpReAllocateHeap(a1);
            if ( (dword_1801C68A8 & 1) != 0
              && (dword_1801C68A8 & 2) != 0
              && NtCurrentPeb()->ProcessHeap
              && a1 != qword_1801CA198[2 * (unsigned int)dword_18017B028[BYTE1(RtlpHpEnvHandle)]] )
            {
              if ( !v14 )
              {
LABEL_57:
                a4 -= v9;
                if ( !v10 )
                  goto LABEL_39;
                RtlSizeHeap((PVOID)a1, 0, v6);
                v29 = *((_BYTE *)v6 - 1);
                v20 = (unsigned __int64)(v6 - 4);
                v30 = (char *)&v6[v9 / 4u];
                v51 = 0;
                if ( v29 == 4 )
                {
                  if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v11) & 1) == 0 )
                  {
                    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
                    v20 = (unsigned __int64)(v6 - 4);
                    v51 = 1;
                  }
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
                    if ( HIBYTE(*(_DWORD *)(v20 + 8)) != ((unsigned __int8)*(_DWORD *)(v20 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v20 + 8)) ^ HIWORD(*(_DWORD *)(v20 + 8)))) )
                    {
                      RtlpAnalyzeHeapFailure(a1, v20);
                      v20 = (unsigned __int64)(v6 - 4);
                    }
                  }
                  v21 = *(_WORD *)(v20 + 8) + v9;
                  *(_WORD *)(v20 + 8) = v21;
                  *(_BYTE *)(v20 + 14) = v9 >> 4;
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    *(_BYTE *)(v20 + 11) = v21 ^ *(_BYTE *)(v20 + 10) ^ HIBYTE(v21);
                    *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
                  }
                  *(v30 - 2) = v9 >> 4;
                  *(v30 - 1) = 5;
                  *((_WORD *)v30 - 2) = v9 + v21;
                  *((_DWORD *)v30 - 2) = v10;
                  if ( v51 )
                    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
                  goto LABEL_38;
                }
                if ( v29 == 5 )
                {
                  LOWORD(v31) = *(_WORD *)(v20 + 12) ^ *(_WORD *)(a1 + 140);
                }
                else if ( (v29 & 0x40) != 0 )
                {
                  LOWORD(v31) = *(_WORD *)(v20 + 16LL * (*((_BYTE *)v6 - 1) & 0x3F) + 12);
                }
                else if ( (v29 & 0x3F) == 0x3F )
                {
                  if ( v29 >= 0 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      LODWORD(v32) = *(_DWORD *)(v20 + 8);
                      if ( ((unsigned int)v32 & *(_DWORD *)(a1 + 124)) != 0 )
                      {
                        v31 = *(_QWORD *)(v20 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v32));
                        goto LABEL_63;
                      }
                    }
                    else
                    {
                      LOWORD(v32) = *(_WORD *)(v20 + 8);
                    }
                  }
                  else
                  {
                    if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v20 + 8) ^ a1 ^ (v20 >> 4)) )
                      v32 = 0LL;
                    else
                      v32 = *(_QWORD *)(v20
                                      - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v20 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v20 >> 4)) >> 12));
                    LOWORD(v32) = *(_WORD *)(v32 + 36);
                  }
                  v31 = *(_QWORD *)(v20 + 16LL * (unsigned __int16)v32);
                }
                else
                {
                  LOWORD(v31) = v29 & 0x3F;
                }
LABEL_63:
                *(v30 - 2) = v9 >> 4;
                *(_BYTE *)(v20 + 15) = (v9 >> 4) | *(_BYTE *)(v20 + 15) & 0xC0 | 0x40;
                *((_WORD *)v30 - 2) = v31 + v9;
                *(v30 - 1) = 5;
                *((_DWORD *)v30 - 2) = v10;
LABEL_38:
                RtlpCallInterceptRoutine(v10, a1, (_DWORD)v30, 6, (__int64)v6);
LABEL_39:
                v19 = -1073741801;
                goto LABEL_40;
              }
              if ( (v11 & 0x10000000) == 0 )
              {
                RtlpHpStackTraceRemoveStack(a1, v6);
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
              v4 = RtlpSetupExtendedBlock(a1, v11, v14, v15, v9, v10);
              RtlpCallInterceptRoutine(v10, a1, v4, 6, v14);
            }
            return v4;
          }
          v39 = *((_BYTE *)v6 - 1);
          if ( v39 == 5 )
          {
            v9 = 16 * *((unsigned __int8 *)v6 - 2);
          }
          else if ( (v39 & 0x40) != 0 )
          {
            v9 = 16 * (v39 & 0x3F);
          }
          else
          {
            v9 = 0;
          }
          if ( a4 + v9 < a4 )
            goto LABEL_39;
          a4 += v9;
          if ( v39 == 5 )
            v40 = (__int64)&v6[-4 * *((unsigned __int8 *)v6 - 2)];
          else
            v40 = 0LL;
          if ( (int)RtlpCallInterceptRoutine(v10, a1, (_DWORD)v6, 5, v40) >= 0 )
          {
            v41 = *(_BYTE *)(v12 + 15);
            if ( v41 == 4 )
            {
              if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v11) & 1) == 0 )
                RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
                if ( HIBYTE(*(_DWORD *)(v12 + 8)) != ((unsigned __int8)*(_DWORD *)(v12 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v12 + 8)) ^ HIWORD(*(_DWORD *)(v12 + 8)))) )
                  RtlpAnalyzeHeapFailure(a1, v12);
              }
              v48 = *(_WORD *)(v12 + 8) - v9;
              *(_WORD *)(v12 + 8) = v48;
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_BYTE *)(v12 + 11) = HIBYTE(v48) ^ *(_BYTE *)(v12 + 10) ^ v48;
                *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
              }
              if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)v11) & 1) == 0 )
              {
                RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
                v6 = (_DWORD *)(v12 + 16);
                goto LABEL_14;
              }
              goto LABEL_117;
            }
            if ( v41 == 5 )
            {
              v42 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
            }
            else if ( (v41 & 0x40) != 0 )
            {
              v42 = *(unsigned __int16 *)(v12 + 16LL * (*(_BYTE *)(v12 + 15) & 0x3F) + 12);
            }
            else if ( (v41 & 0x3F) == 0x3F )
            {
              if ( v41 >= 0 )
              {
                if ( *(_DWORD *)(a1 + 124) )
                {
                  LODWORD(v47) = *(_DWORD *)(v12 + 8);
                  if ( ((unsigned int)v47 & *(_DWORD *)(a1 + 124)) != 0 )
                  {
                    v42 = *(_QWORD *)(v12 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v47));
                    goto LABEL_110;
                  }
                }
                else
                {
                  LOWORD(v47) = *(_WORD *)(v12 + 8);
                }
              }
              else
              {
                if ( *(_WORD *)(v12 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (v12 >> 4)) )
                  v47 = 0LL;
                else
                  v47 = *(_QWORD *)(v12
                                  - ((unsigned __int64)(*(_DWORD *)(v12 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(v12 >> 4)) >> 12));
                LOWORD(v47) = *(_WORD *)(v47 + 36);
              }
              v42 = *(_QWORD *)(v12 + 16LL * (unsigned __int16)v47);
            }
            else
            {
              v42 = *(_BYTE *)(v12 + 15) & 0x3F;
            }
LABEL_110:
            v43 = *(_BYTE *)(v12 + 15) & 0x80;
            if ( (*(_BYTE *)(v12 + 15) & 0x80) != 0 )
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
                v44 = 0LL;
              else
                v44 = *(_QWORD *)(v12
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
              LOWORD(v44) = *(_WORD *)(v44 + 36);
            }
            else if ( *(_DWORD *)(a1 + 124) )
            {
              LODWORD(v44) = *(_DWORD *)(v12 + 8);
              if ( ((unsigned int)v44 & *(_DWORD *)(a1 + 124)) != 0 )
                LOWORD(v44) = *(_WORD *)(a1 + 136) ^ v44;
            }
            else
            {
              LOWORD(v44) = *(_WORD *)(v12 + 8);
            }
            v45 = v42 - v9;
            if ( v45 >= 0x3F )
            {
              *(_QWORD *)(v12 + 16LL * (unsigned __int16)v44) = v45;
              v46 = -65;
              if ( !v43 )
                v46 = 63;
            }
            else
            {
              v46 = v45 | (v43 != 0 ? 0x80 : 0);
            }
            *(_BYTE *)(v12 + 15) = v46;
LABEL_117:
            v6 = (_DWORD *)(v12 + 16);
            goto LABEL_14;
          }
          v19 = -1073741819;
        }
        else
        {
          v19 = -1073741819;
        }
LABEL_40:
        v22 = NtCurrentTeb();
        v22->LastStatusValue = v19;
        v22->LastErrorValue = RtlNtStatusToDosErrorNoTeb(v19);
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
      return RtlDebugReAllocateHeap(a1);
    }
  }
  else
  {
    v24 = NtCurrentTeb();
    v24->LastStatusValue = 0;
    v24->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0);
    return 0LL;
  }
}
