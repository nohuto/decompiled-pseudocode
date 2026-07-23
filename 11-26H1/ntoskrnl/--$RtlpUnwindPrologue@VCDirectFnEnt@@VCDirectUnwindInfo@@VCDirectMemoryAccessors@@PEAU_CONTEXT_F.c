/*
 * XREFs of ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x140412B50
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x1406243C8 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x140413240 (--$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z.c)
 *     RtlpUnwindOpSlots @ 0x140413280 (RtlpUnwindOpSlots.c)
 *     ??$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z @ 0x1404132D0 (--$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlpUnwindPrologue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  unsigned __int64 v8; // r9
  __int64 v9; // r15
  _QWORD *v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned __int16 v15; // dx
  unsigned int v16; // ecx
  unsigned int v17; // r12d
  _QWORD *v18; // r14
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rcx
  _QWORD *v25; // r14
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rcx
  int v30; // edx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rcx
  _QWORD *v37; // r15
  _QWORD *v38; // r14
  __int64 i; // rcx
  volatile void *v40; // r14
  __int64 v41; // rcx
  __int64 Context; // rax
  _QWORD *v43; // r14
  char v44; // [rsp+20h] [rbp-B8h]
  int v45; // [rsp+50h] [rbp-88h]
  unsigned int v46; // [rsp+54h] [rbp-84h]

  v8 = a2;
  v9 = a8;
  v10 = (_QWORD *)a8;
  v45 = 0;
  v11 = 0x7FFFFFFF0000LL;
  while ( 2 )
  {
    v12 = 0LL;
    v44 = 0;
    v46 = v8 - *a4 - a1;
    v13 = a1 + (unsigned int)a4[2];
    while ( 1 )
    {
      v14 = *(unsigned __int8 *)(v13 + 2);
      if ( (unsigned int)v12 >= v14 )
        break;
      v15 = *(_WORD *)(v13 + 2 * v12 + 4);
      v16 = HIBYTE(v15) & 0xF;
      v17 = v15 >> 12;
      if ( v46 < (unsigned __int8)v15 )
      {
        v12 = (unsigned int)RtlpUnwindOpSlots(v15) + (unsigned int)v12;
        v8 = a2;
        v10 = (_QWORD *)a8;
        v11 = 0x7FFFFFFF0000LL;
      }
      else
      {
        if ( v16 > 5 )
        {
          v32 = v16 - 6;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                v35 = v34 - 1;
                if ( v35 )
                {
                  if ( v35 != 1 )
                    goto LABEL_49;
                  v44 = 1;
                  v36 = *(_QWORD *)(a5 + 8);
                  v37 = (_QWORD *)(v36 + 8);
                  if ( !v17 )
                    v37 = *(_QWORD **)(a5 + 8);
                  v38 = (_QWORD *)(v36 + (v17 != 0 ? 32LL : 24LL));
                  if ( v8 < v11 )
                  {
                    ProbeForRead(v37, 1uLL, 4u);
                    v10 = (_QWORD *)a8;
                    v11 = 0x7FFFFFFF0000LL;
                  }
                  if ( *v10
                    && ((unsigned __int64)v37 < *(_QWORD *)*v10 || (unsigned __int64)v37 > **(_QWORD **)(a8 + 8) - 8LL) )
                  {
                    return 3221225512LL;
                  }
                  if ( a2 < v11 )
                  {
                    ProbeForRead(v38, 1uLL, 4u);
                    v11 = 0x7FFFFFFF0000LL;
                  }
                  if ( *(_QWORD *)a8
                    && ((unsigned __int64)v38 < **(_QWORD **)a8 || (unsigned __int64)v38 > **(_QWORD **)(a8 + 8) - 8LL) )
                  {
                    return 3221225512LL;
                  }
                  *(_QWORD *)a5 = *v37;
                  *(_QWORD *)(a5 + 8) = *v38;
                  goto LABEL_16;
                }
                v12 = (unsigned int)(v12 + 2);
                v40 = (volatile void *)(*(unsigned __int16 *)(v13 + 2LL * (unsigned int)(v12 - 1) + 4)
                                      + a3
                                      + ((unsigned __int64)*(unsigned __int16 *)(v13 + 2 * v12 + 4) << 16));
                if ( v8 < v11 )
                {
                  ProbeForRead(v40, 1uLL, 4u);
                  v10 = (_QWORD *)a8;
                  v11 = 0x7FFFFFFF0000LL;
                }
              }
              else
              {
                v12 = (unsigned int)(v12 + 1);
                v40 = (volatile void *)(a3 + 16LL * *(unsigned __int16 *)(v13 + 2 * v12 + 4));
                if ( v8 < v11 )
                {
                  ProbeForRead(v40, 1uLL, 4u);
                  v10 = (_QWORD *)a8;
                  v11 = 0x7FFFFFFF0000LL;
                }
              }
              if ( *v10
                && ((unsigned __int64)v40 < *(_QWORD *)*v10 || (unsigned __int64)v40 > **(_QWORD **)(v9 + 8) - 16LL) )
              {
                return 3221225512LL;
              }
              v41 = *(_QWORD *)(v9 + 16);
              v8 = a2;
              if ( v41 )
                *(_QWORD *)(v41 + 8LL * v17) = v40;
            }
            else
            {
              LODWORD(v12) = v12 + 2;
            }
          }
          else
          {
            LODWORD(v12) = v12 + 1;
          }
        }
        else
        {
          if ( v16 == 5 )
          {
            v12 = (unsigned int)(v12 + 2);
            v43 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)(v13 + 2 * v12 + 4) << 16)
                           + a3
                           + *(unsigned __int16 *)(v13 + 2LL * (unsigned int)(v12 - 1) + 4));
            if ( v8 < v11 )
            {
              ProbeForRead(v43, 1uLL, 4u);
              v10 = (_QWORD *)a8;
            }
            if ( *v10
              && ((unsigned __int64)v43 < *(_QWORD *)*v10 || (unsigned __int64)v43 > **(_QWORD **)(v9 + 8) - 8LL) )
            {
              return 3221225512LL;
            }
            RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v17, *v43);
            goto LABEL_16;
          }
          if ( (*(_WORD *)(v13 + 2 * v12 + 4) & 0xF00) == 0 )
          {
            v18 = *(_QWORD **)(a5 + 8);
            if ( v8 < v11 )
            {
              ProbeForRead(v18, 1uLL, 4u);
              v10 = (_QWORD *)a8;
            }
            if ( *v10
              && ((unsigned __int64)v18 < *(_QWORD *)*v10 || (unsigned __int64)v18 > **(_QWORD **)(a8 + 8) - 8LL) )
            {
              return 3221225512LL;
            }
            RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v17, *v18);
            v20 = *(_QWORD *)(v19 + 16);
            if ( v20 )
              *(_QWORD *)(v20 + 8LL * v17 + 128) = v18;
            *(_QWORD *)(a5 + 8) += 8LL;
LABEL_16:
            v8 = a2;
            goto LABEL_17;
          }
          v21 = v16 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                if ( v23 != 1 )
                  goto LABEL_49;
                v12 = (unsigned int)(v12 + 1);
                v24 = *(unsigned __int16 *)(v13 + 2 * v12 + 4);
                v25 = (_QWORD *)(a3 + 8 * v24);
                if ( v8 < v11 )
                {
                  ProbeForRead((volatile void *)(a3 + 8 * v24), 1uLL, 4u);
                  v10 = (_QWORD *)a8;
                }
                if ( *v10
                  && ((unsigned __int64)v25 < *(_QWORD *)*v10 || (unsigned __int64)v25 > **(_QWORD **)(v9 + 8) - 8LL) )
                {
                  return 3221225512LL;
                }
                RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v17, *v25);
                v26 = *(_QWORD *)(v9 + 16);
                v8 = a2;
                if ( v26 )
                  *(_QWORD *)(v26 + 8LL * v17 + 128) = v25;
              }
              else
              {
                Context = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, *(_BYTE *)(v13 + 3) & 0xF);
                *(_QWORD *)(a5 + 8) = Context;
                *(_QWORD *)(a5 + 8) = Context - (*(_BYTE *)(v13 + 3) & 0xF0);
              }
            }
            else
            {
              *(_QWORD *)(a5 + 8) += 8 * v17 + 8;
            }
          }
          else
          {
            v12 = (unsigned int)(v12 + 1);
            v30 = *(unsigned __int16 *)(v13 + 2 * v12 + 4);
            if ( v17 )
            {
              v12 = (unsigned int)(v12 + 1);
              v31 = (*(unsigned __int16 *)(v13 + 2 * v12 + 4) << 16) + v30;
            }
            else
            {
              v31 = 8 * v30;
            }
            *(_QWORD *)(a5 + 8) += v31;
          }
        }
LABEL_17:
        v12 = (unsigned int)(v12 + 1);
        v9 = a8;
        v10 = (_QWORD *)a8;
      }
    }
    if ( (*(_BYTE *)v13 & 0x20) != 0 )
    {
      a4 = (_DWORD *)(v13 + 2 * ((v14 & 1) + v14 + 2LL));
      if ( (unsigned int)++v45 > 0x20 )
LABEL_49:
        RtlRaiseStatus(-1073741569);
      continue;
    }
    break;
  }
  if ( v44 )
  {
    if ( a6 )
    {
      for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
      {
        if ( (__int64 (__fastcall *)())v13 == RtlpSafeMachineFrameEntries[i] )
        {
          v44 = 0;
          break;
        }
      }
    }
  }
  else
  {
    if ( v8 < v11 )
    {
      ProbeForRead(*(volatile void **)(a5 + 8), 1uLL, 4u);
      v10 = (_QWORD *)a8;
    }
    if ( *v10 )
    {
      v27 = *(_QWORD *)(a5 + 8);
      if ( v27 < *(_QWORD *)*v10 || v27 > **(_QWORD **)(v9 + 8) - 8LL )
        return 3221225512LL;
    }
    v28 = *(_QWORD **)(a5 + 8);
    *(_QWORD *)a5 = *v28;
    *(_QWORD *)(a5 + 8) = v28 + 1;
    if ( (*(_BYTE *)(a5 + 56) & 1) != 0 )
      *(_QWORD *)(a5 + 64) += 8LL;
  }
  if ( a6 )
    *a6 = v44;
  *a7 = a4;
  return 0LL;
}
