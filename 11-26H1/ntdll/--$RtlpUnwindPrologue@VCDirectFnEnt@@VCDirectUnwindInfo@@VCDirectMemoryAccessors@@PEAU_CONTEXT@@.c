/*
 * XREFs of ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x18014AD00
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014B9DC (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z @ 0x1800BCD34 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z.c)
 *     RtlpUnwindOpSlots @ 0x1800E2B94 (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlpUnwindPrologue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  void (__fastcall __noreturn *v9)(); // rbx
  unsigned int v10; // ecx
  unsigned __int16 v11; // dx
  unsigned int v12; // ecx
  __int64 v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  _QWORD *v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  unsigned int v22; // edx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // r8
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rcx
  _QWORD *v31; // r8
  _QWORD *v32; // rdx
  unsigned int v33; // ecx
  void (__fastcall __noreturn **v34)(); // rax
  _QWORD *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rdx
  char v40; // [rsp+20h] [rbp-68h]
  int v41; // [rsp+50h] [rbp-38h]
  unsigned int v42; // [rsp+54h] [rbp-34h]

  v41 = 0;
  while ( 2 )
  {
    v8 = 0LL;
    v40 = 0;
    v42 = a2 - *a4 - a1;
    v9 = (void (__fastcall __noreturn *)())(a1 + (unsigned int)a4[2]);
    while ( 1 )
    {
      v10 = *((unsigned __int8 *)v9 + 2);
      if ( (unsigned int)v8 >= v10 )
        break;
      v11 = *((_WORD *)v9 + v8 + 2);
      v12 = HIBYTE(v11) & 0xF;
      v13 = v11 >> 12;
      if ( v42 < (unsigned __int8)v11 )
      {
        v8 = (unsigned int)RtlpUnwindOpSlots(v11) + (unsigned int)v8;
      }
      else
      {
        if ( v12 > 5 )
        {
          v26 = v12 - 6;
          if ( !v26 )
          {
            LODWORD(v8) = v8 + 1;
            goto LABEL_61;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
            LODWORD(v8) = v8 + 2;
            goto LABEL_61;
          }
          v28 = v27 - 1;
          if ( !v28 )
          {
            v8 = (unsigned int)(v8 + 1);
            v35 = (_QWORD *)(a3 + 16LL * *((unsigned __int16 *)v9 + v8 + 2));
LABEL_54:
            if ( *(_QWORD *)a8
              && ((unsigned __int64)v35 < **(_QWORD **)a8 || (unsigned __int64)v35 > **(_QWORD **)(a8 + 8) - 16LL) )
            {
              return 3221225512LL;
            }
            v36 = v35[1];
            *(_QWORD *)(a5 + 16 * (v13 + 26)) = *v35;
            *(_QWORD *)(a5 + 16 * v13 + 424) = v36;
            v37 = *(_QWORD *)(a8 + 16);
            if ( v37 )
              *(_QWORD *)(v37 + 8 * v13) = v35;
            goto LABEL_61;
          }
          v29 = v28 - 1;
          if ( !v29 )
          {
            v8 = (unsigned int)(v8 + 2);
            v35 = (_QWORD *)(((unsigned __int64)*((unsigned __int16 *)v9 + v8 + 2) << 16)
                           + a3
                           + *((unsigned __int16 *)v9 + (unsigned int)(v8 - 1) + 2));
            goto LABEL_54;
          }
          if ( v29 != 1 )
            goto LABEL_74;
          v40 = 1;
          v30 = *(_QWORD *)(a5 + 152);
          v31 = (_QWORD *)(v30 + 8);
          if ( !(_DWORD)v13 )
            v31 = *(_QWORD **)(a5 + 152);
          v32 = (_QWORD *)(v30 + ((_DWORD)v13 != 0 ? 32LL : 24LL));
          if ( *(_QWORD *)a8
            && ((unsigned __int64)v31 < **(_QWORD **)a8 || (unsigned __int64)v31 > **(_QWORD **)(a8 + 8) - 8LL)
            || *(_QWORD *)a8
            && ((unsigned __int64)v32 < **(_QWORD **)a8 || (unsigned __int64)v32 > **(_QWORD **)(a8 + 8) - 8LL) )
          {
            return 3221225512LL;
          }
          *(_QWORD *)(a5 + 248) = *v31;
          *(_QWORD *)(a5 + 152) = *v32;
          v33 = 0;
          v34 = RtlpContinuationContextMachineFrameEntries;
          while ( v9 != *v34 )
          {
            ++v33;
            ++v34;
            if ( v33 >= 2 )
              goto LABEL_61;
          }
          RtlpVirtualPopShadowStack<_CONTEXT *>(a5);
        }
        else if ( v12 == 5 )
        {
          v8 = (unsigned int)(v8 + 2);
          v25 = (_QWORD *)(((unsigned __int64)*((unsigned __int16 *)v9 + v8 + 2) << 16)
                         + a3
                         + *((unsigned __int16 *)v9 + (unsigned int)(v8 - 1) + 2));
          if ( *(_QWORD *)a8
            && ((unsigned __int64)v25 < **(_QWORD **)a8 || (unsigned __int64)v25 > **(_QWORD **)(a8 + 8) - 8LL) )
          {
            return 3221225512LL;
          }
          *(_QWORD *)(a5 + 8LL * (unsigned int)v13 + 120) = *v25;
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
                  goto LABEL_74;
                v8 = (unsigned int)(v8 + 1);
                v17 = (_QWORD *)(a3 + 8LL * *((unsigned __int16 *)v9 + v8 + 2));
                if ( *(_QWORD *)a8
                  && ((unsigned __int64)v17 < **(_QWORD **)a8 || (unsigned __int64)v17 > **(_QWORD **)(a8 + 8) - 8LL) )
                {
                  return 3221225512LL;
                }
                *(_QWORD *)(a5 + 8LL * (unsigned int)v13 + 120) = *v17;
                v19 = *(_QWORD *)(a8 + 16);
                if ( v19 )
                  *(_QWORD *)(v19 + 8LL * (unsigned int)v13 + 128) = v17;
              }
              else
              {
                v20 = *(_QWORD *)(a5 + 8LL * (*((_BYTE *)v9 + 3) & 0xF) + 120);
                *(_QWORD *)(a5 + 152) = v20;
                *(_QWORD *)(a5 + 152) = v20 - (*((_BYTE *)v9 + 3) & 0xF0);
              }
            }
            else
            {
              *(_QWORD *)(a5 + 152) += (unsigned int)(8 * v13 + 8);
            }
          }
          else
          {
            v8 = (unsigned int)(v8 + 1);
            v21 = *((unsigned __int16 *)v9 + v8 + 2);
            if ( (_DWORD)v13 )
            {
              v8 = (unsigned int)(v8 + 1);
              v22 = (*((unsigned __int16 *)v9 + v8 + 2) << 16) + v21;
            }
            else
            {
              v22 = 8 * v21;
            }
            *(_QWORD *)(a5 + 152) += v22;
          }
        }
        else
        {
          v23 = *(_QWORD **)(a5 + 152);
          if ( *(_QWORD *)a8
            && ((unsigned __int64)v23 < **(_QWORD **)a8 || (unsigned __int64)v23 > **(_QWORD **)(a8 + 8) - 8LL) )
          {
            return 3221225512LL;
          }
          *(_QWORD *)(a5 + 8LL * (unsigned int)v13 + 120) = *v23;
          v24 = *(_QWORD *)(a8 + 16);
          if ( v24 )
            *(_QWORD *)(v24 + 8LL * (unsigned int)v13 + 128) = v23;
          *(_QWORD *)(a5 + 152) += 8LL;
        }
LABEL_61:
        v8 = (unsigned int)(v8 + 1);
      }
    }
    if ( (*(_BYTE *)v9 & 0x20) != 0 )
    {
      a4 = (_DWORD *)((char *)v9 + 2 * (v10 & 1) + 2 * v10 + 4);
      if ( (unsigned int)++v41 > 0x20 )
LABEL_74:
        RtlRaiseStatus(-1073741569);
      continue;
    }
    break;
  }
  if ( !v40 )
  {
    if ( *(_QWORD *)a8 )
    {
      v38 = *(_QWORD *)(a5 + 152);
      if ( v38 < **(_QWORD **)a8 || v38 > **(_QWORD **)(a8 + 8) - 8LL )
        return 3221225512LL;
    }
    v39 = *(_QWORD **)(a5 + 152);
    *(_QWORD *)(a5 + 248) = *v39;
    *(_QWORD *)(a5 + 152) = v39 + 1;
    RtlpVirtualPopShadowStack<_CONTEXT *>(a5);
  }
  if ( a6 )
    *a6 = v40;
  *a7 = a4;
  return 0LL;
}
