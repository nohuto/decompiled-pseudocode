/*
 * XREFs of ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014B35C
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014C2F0 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT_F.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpUnwindOpSlots @ 0x1800E2B94 (RtlpUnwindOpSlots.c)
 *     ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x1800E41F0 (--$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z @ 0x1800FC988 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@KK@Z.c)
 *     ??$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z @ 0x18010A5C4 (--$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z.c)
 */

__int64 __fastcall RtlpUnwindPrologue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  void (__fastcall __noreturn *v9)(); // rbx
  unsigned int v10; // ecx
  unsigned __int16 v11; // dx
  unsigned int v12; // ecx
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 *v17; // r9
  __int64 v19; // r9
  unsigned int v20; // r11d
  __int64 v21; // rcx
  __int64 Context; // rax
  int v23; // edx
  unsigned int v24; // edx
  __int64 *v25; // r9
  __int64 v26; // r9
  _QWORD *v27; // r10
  unsigned int v28; // r11d
  __int64 v29; // rcx
  __int64 *v30; // r8
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  __int64 v35; // rcx
  _QWORD *v36; // r8
  _QWORD *v37; // rdx
  unsigned int v38; // ecx
  void (__fastcall __noreturn **v39)(); // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  _QWORD *v45; // r8
  char v46; // [rsp+20h] [rbp-68h]
  int v47; // [rsp+50h] [rbp-38h]
  unsigned int v48; // [rsp+54h] [rbp-34h]

  v47 = 0;
  while ( 1 )
  {
    v8 = 0LL;
    v46 = 0;
    v48 = a2 - *a4 - a1;
    v9 = (void (__fastcall __noreturn *)())(a1 + (unsigned int)a4[2]);
    while ( 1 )
    {
      v10 = *((unsigned __int8 *)v9 + 2);
      if ( (unsigned int)v8 >= v10 )
        break;
      v11 = *((_WORD *)v9 + v8 + 2);
      v12 = HIBYTE(v11) & 0xF;
      v13 = v11 >> 12;
      if ( v48 < (unsigned __int8)v11 )
      {
        v8 = (unsigned int)RtlpUnwindOpSlots(v11) + (unsigned int)v8;
      }
      else
      {
        if ( v12 > 5 )
        {
          v31 = v12 - 6;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                v34 = v33 - 1;
                if ( v34 )
                {
                  if ( v34 != 1 )
                    goto LABEL_77;
                  v46 = 1;
                  v35 = a5[1];
                  v36 = (_QWORD *)(v35 + 8);
                  if ( !v13 )
                    v36 = (_QWORD *)a5[1];
                  v37 = (_QWORD *)(v35 + (v13 != 0 ? 32LL : 24LL));
                  if ( *(_QWORD *)a8
                    && ((unsigned __int64)v36 < **(_QWORD **)a8 || (unsigned __int64)v36 > **(_QWORD **)(a8 + 8) - 8LL)
                    || *(_QWORD *)a8
                    && ((unsigned __int64)v37 < **(_QWORD **)a8 || (unsigned __int64)v37 > **(_QWORD **)(a8 + 8) - 8LL) )
                  {
                    return 3221225512LL;
                  }
                  *a5 = *v36;
                  a5[1] = *v37;
                  v38 = 0;
                  v39 = RtlpContinuationContextMachineFrameEntries;
                  while ( v9 != *v39 )
                  {
                    ++v38;
                    ++v39;
                    if ( v38 >= 2 )
                      goto LABEL_64;
                  }
                  RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)a5);
                }
                else
                {
                  v8 = (unsigned int)(v8 + 2);
                  v40 = ((unsigned __int64)*((unsigned __int16 *)v9 + v8 + 2) << 16)
                      + a3
                      + *((unsigned __int16 *)v9 + (unsigned int)(v8 - 1) + 2);
                  if ( *(_QWORD *)a8 && (v40 < **(_QWORD **)a8 || v40 > **(_QWORD **)(a8 + 8) - 16LL) )
                    return 3221225512LL;
                  v41 = *(_QWORD *)(a8 + 16);
                  if ( v41 )
                    *(_QWORD *)(v41 + 8LL * v13) = v40;
                }
              }
              else
              {
                v8 = (unsigned int)(v8 + 1);
                v42 = a3 + 16LL * *((unsigned __int16 *)v9 + v8 + 2);
                if ( *(_QWORD *)a8 && (v42 < **(_QWORD **)a8 || v42 > **(_QWORD **)(a8 + 8) - 16LL) )
                  return 3221225512LL;
                v43 = *(_QWORD *)(a8 + 16);
                if ( v43 )
                  *(_QWORD *)(v43 + 8LL * v13) = v42;
              }
            }
            else
            {
              LODWORD(v8) = v8 + 2;
            }
          }
          else
          {
            LODWORD(v8) = v8 + 1;
          }
        }
        else if ( v12 == 5 )
        {
          v8 = (unsigned int)(v8 + 2);
          v30 = (__int64 *)(((unsigned __int64)*((unsigned __int16 *)v9 + v8 + 2) << 16)
                          + a3
                          + *((unsigned __int16 *)v9 + (unsigned int)(v8 - 1) + 2));
          if ( *(_QWORD *)a8
            && ((unsigned __int64)v30 < **(_QWORD **)a8 || (unsigned __int64)v30 > **(_QWORD **)(a8 + 8) - 8LL) )
          {
            return 3221225512LL;
          }
          RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v13, *v30);
        }
        else if ( (*((_WORD *)v9 + v8 + 2) & 0xF00) != 0 )
        {
          v14 = v12 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 != 1 )
                  goto LABEL_77;
                v8 = (unsigned int)(v8 + 1);
                v17 = (__int64 *)(a3 + 8LL * *((unsigned __int16 *)v9 + v8 + 2));
                if ( *(_QWORD *)a8
                  && ((unsigned __int64)v17 < **(_QWORD **)a8 || (unsigned __int64)v17 > **(_QWORD **)(a8 + 8) - 8LL) )
                {
                  return 3221225512LL;
                }
                RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v13, *v17);
                v21 = *(_QWORD *)(a8 + 16);
                if ( v21 )
                  *(_QWORD *)(v21 + 8LL * v20 + 128) = v19;
              }
              else
              {
                Context = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, *((_BYTE *)v9 + 3) & 0xF);
                a5[1] = Context;
                a5[1] = Context - (*((_BYTE *)v9 + 3) & 0xF0);
              }
            }
            else
            {
              a5[1] += 8 * v13 + 8;
            }
          }
          else
          {
            v8 = (unsigned int)(v8 + 1);
            v23 = *((unsigned __int16 *)v9 + v8 + 2);
            if ( v13 )
            {
              v8 = (unsigned int)(v8 + 1);
              v24 = (*((unsigned __int16 *)v9 + v8 + 2) << 16) + v23;
            }
            else
            {
              v24 = 8 * v23;
            }
            a5[1] += v24;
          }
        }
        else
        {
          v25 = (__int64 *)a5[1];
          if ( *(_QWORD *)a8
            && ((unsigned __int64)v25 < **(_QWORD **)a8 || (unsigned __int64)v25 > **(_QWORD **)(a8 + 8) - 8LL) )
          {
            return 3221225512LL;
          }
          RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v13, *v25);
          v29 = *(_QWORD *)(a8 + 16);
          if ( v29 )
            *(_QWORD *)(v29 + 8LL * v28 + 128) = v26;
          *v27 += 8LL;
        }
LABEL_64:
        v8 = (unsigned int)(v8 + 1);
      }
    }
    if ( (*(_BYTE *)v9 & 0x20) == 0 )
      break;
    a4 = (_DWORD *)((char *)v9 + 2 * (v10 & 1) + 2 * v10 + 4);
    if ( (unsigned int)++v47 > 0x20 )
LABEL_77:
      RtlRaiseStatus(-1073741569);
  }
  if ( !v46 )
  {
    if ( *(_QWORD *)a8 )
    {
      v44 = a5[1];
      if ( v44 < **(_QWORD **)a8 || v44 > **(_QWORD **)(a8 + 8) - 8LL )
        return 3221225512LL;
    }
    v45 = (_QWORD *)a5[1];
    *a5 = *v45;
    a5[1] = v45 + 1;
    RtlpVirtualPopShadowStack<_CONTEXT_FOR_STACKWALK *>((__int64)a5);
  }
  if ( a6 )
    *a6 = v46;
  *a7 = a4;
  return 0LL;
}
