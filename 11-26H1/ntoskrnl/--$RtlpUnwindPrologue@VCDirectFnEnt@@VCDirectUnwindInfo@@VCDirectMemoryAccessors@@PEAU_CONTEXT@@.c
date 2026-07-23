/*
 * XREFs of ??$RtlpUnwindPrologue@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJ_K00VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1403DA7C8
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x14052DF14 (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ??$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z @ 0x1403DB1B0 (--$RtlpVirtualPopShadowStack@PEAU_CONTEXT@@@@YAXPEAU_CONTEXT@@KK@Z.c)
 *     RtlpUnwindOpSlots @ 0x140413280 (RtlpUnwindOpSlots.c)
 *     RtlpIsMachineFrameEntry @ 0x140447450 (RtlpIsMachineFrameEntry.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlpUnwindPrologue<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 a8)
{
  unsigned __int64 v8; // r10
  __int64 v9; // r13
  _QWORD *v10; // r11
  __int64 v11; // r15
  __int64 v12; // rbx
  unsigned int v13; // ecx
  unsigned __int16 v14; // dx
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  _QWORD *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  _QWORD *v24; // r12
  __int64 v25; // rax
  _QWORD *v26; // r8
  char *v27; // r9
  unsigned int v29; // ecx
  int v30; // edx
  unsigned int v31; // edx
  unsigned __int64 v32; // rdx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rcx
  _QWORD *v37; // r13
  _QWORD *v38; // r12
  _QWORD *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int i; // ecx
  _QWORD *v44; // r12
  char IsMachineFrameEntry; // al
  char v46; // cl
  char v47; // [rsp+20h] [rbp-B8h]
  unsigned int Address; // [rsp+28h] [rbp-B0h]
  int v49; // [rsp+50h] [rbp-88h]
  unsigned int v50; // [rsp+54h] [rbp-84h]

  v8 = a2;
  v9 = a8;
  v10 = (_QWORD *)a8;
  v49 = 0;
  while ( 2 )
  {
    LODWORD(v11) = 0;
    v47 = 0;
    v50 = v8 - *a4 - a1;
    v12 = a1 + (unsigned int)a4[2];
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)(v12 + 2);
      if ( (unsigned int)v11 >= v13 )
        break;
      v14 = *(_WORD *)(v12 + 2LL * (unsigned int)v11 + 4);
      v15 = HIBYTE(v14) & 0xF;
      v16 = v14 >> 12;
      Address = v16;
      if ( v50 < (unsigned __int8)v14 )
      {
        LODWORD(v11) = RtlpUnwindOpSlots(v14) + v11;
        v8 = a2;
        v10 = (_QWORD *)a8;
      }
      else
      {
        if ( v15 > 5 )
        {
          v29 = v15 - 6;
          if ( v29 )
          {
            v33 = v29 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                v35 = v34 - 1;
                if ( v35 )
                {
                  if ( v35 != 1 )
                    goto LABEL_99;
                  v47 = 1;
                  v36 = *(_QWORD *)(a5 + 152);
                  v37 = (_QWORD *)(v36 + 8);
                  if ( !v16 )
                    v37 = *(_QWORD **)(a5 + 152);
                  v38 = (_QWORD *)(v36 + (v16 != 0 ? 32LL : 24LL));
                  if ( v8 < 0x7FFFFFFF0000LL )
                  {
                    ProbeForRead(v37, 1uLL, 4u);
                    v10 = (_QWORD *)a8;
                  }
                  if ( *v10
                    && ((unsigned __int64)v37 < *(_QWORD *)*v10 || (unsigned __int64)v37 > **(_QWORD **)(a8 + 8) - 8LL) )
                  {
                    return 3221225512LL;
                  }
                  if ( a2 < 0x7FFFFFFF0000LL )
                    ProbeForRead(v38, 1uLL, 4u);
                  if ( *(_QWORD *)a8
                    && ((unsigned __int64)v38 < **(_QWORD **)a8 || (unsigned __int64)v38 > **(_QWORD **)(a8 + 8) - 8LL) )
                  {
                    return 3221225512LL;
                  }
                  *(_QWORD *)(a5 + 248) = *v37;
                  *(_QWORD *)(a5 + 152) = *v38;
                  if ( (*(_DWORD *)(a5 + 48) & 0x100080) == 0x100080 )
                  {
                    for ( i = 0; i < 3; ++i )
                    {
                      if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))v12 == *(&RtlpNoShadowStackUnwindMachineFrameEntries + i) )
                        goto LABEL_15;
                    }
                    *(_QWORD *)(*(int *)(a5 + 1256) + a5 + 1232) += 24LL;
                  }
                  goto LABEL_15;
                }
                v11 = (unsigned int)(v11 + 2);
                v39 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)(v12 + 2 * v11 + 4) << 16)
                               + a3
                               + *(unsigned __int16 *)(v12 + 2LL * (unsigned int)(v11 - 1) + 4));
                if ( v8 < 0x7FFFFFFF0000LL )
                {
                  ProbeForRead(v39, 1uLL, 4u);
                  v16 = Address;
                  v10 = (_QWORD *)a8;
                }
                if ( *v10
                  && ((unsigned __int64)v39 < *(_QWORD *)*v10 || (unsigned __int64)v39 > **(_QWORD **)(v9 + 8) - 16LL) )
                {
                  return 3221225512LL;
                }
              }
              else
              {
                v11 = (unsigned int)(v11 + 1);
                v39 = (_QWORD *)(a3 + 16LL * *(unsigned __int16 *)(v12 + 2 * v11 + 4));
                if ( v8 < 0x7FFFFFFF0000LL )
                {
                  ProbeForRead(v39, 1uLL, 4u);
                  v16 = Address;
                  v10 = (_QWORD *)a8;
                }
                if ( *v10
                  && ((unsigned __int64)v39 < *(_QWORD *)*v10 || (unsigned __int64)v39 > **(_QWORD **)(v9 + 8) - 16LL) )
                {
                  return 3221225512LL;
                }
              }
              v40 = v39[1];
              *(_QWORD *)(a5 + 16 * (v16 + 26LL)) = *v39;
              *(_QWORD *)(a5 + 16LL * v16 + 424) = v40;
              v41 = *(_QWORD *)(v9 + 16);
              v8 = a2;
              if ( v41 )
                *(_QWORD *)(v41 + 8LL * v16) = v39;
            }
            else
            {
              LODWORD(v11) = v11 + 2;
            }
          }
          else
          {
            LODWORD(v11) = v11 + 1;
          }
        }
        else
        {
          if ( v15 == 5 )
          {
            v11 = (unsigned int)(v11 + 2);
            v44 = (_QWORD *)(((unsigned __int64)*(unsigned __int16 *)(v12 + 2 * v11 + 4) << 16)
                           + a3
                           + *(unsigned __int16 *)(v12 + 2LL * (unsigned int)(v11 - 1) + 4));
            if ( v8 < 0x7FFFFFFF0000LL )
            {
              ProbeForRead(v44, 1uLL, 4u);
              v16 = Address;
              v10 = (_QWORD *)a8;
            }
            if ( *v10
              && ((unsigned __int64)v44 < *(_QWORD *)*v10 || (unsigned __int64)v44 > **(_QWORD **)(v9 + 8) - 8LL) )
            {
              return 3221225512LL;
            }
            *(_QWORD *)(a5 + 8LL * v16 + 120) = *v44;
            goto LABEL_15;
          }
          if ( (*(_WORD *)(v12 + 2LL * (unsigned int)v11 + 4) & 0xF00) == 0 )
          {
            v17 = *(_QWORD **)(a5 + 152);
            if ( v8 < 0x7FFFFFFF0000LL )
            {
              ProbeForRead(v17, 1uLL, 4u);
              v16 = Address;
              v10 = (_QWORD *)a8;
            }
            if ( *v10 )
            {
              if ( (unsigned __int64)v17 < *(_QWORD *)*v10 )
                return 3221225512LL;
              v18 = a8;
              if ( (unsigned __int64)v17 > **(_QWORD **)(a8 + 8) - 8LL )
                return 3221225512LL;
            }
            else
            {
              v18 = a8;
            }
            *(_QWORD *)(a5 + 8LL * v16 + 120) = *v17;
            v19 = *(_QWORD *)(v18 + 16);
            if ( v19 )
              *(_QWORD *)(v19 + 8LL * v16 + 128) = v17;
            *(_QWORD *)(a5 + 152) += 8LL;
LABEL_15:
            v8 = a2;
            goto LABEL_16;
          }
          v20 = v15 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                if ( v22 != 1 )
                  goto LABEL_99;
                v11 = (unsigned int)(v11 + 1);
                v23 = *(unsigned __int16 *)(v12 + 2 * v11 + 4);
                v24 = (_QWORD *)(a3 + 8 * v23);
                if ( v8 < 0x7FFFFFFF0000LL )
                {
                  ProbeForRead((volatile void *)(a3 + 8 * v23), 1uLL, 4u);
                  v16 = Address;
                  v10 = (_QWORD *)a8;
                }
                if ( *v10
                  && ((unsigned __int64)v24 < *(_QWORD *)*v10 || (unsigned __int64)v24 > **(_QWORD **)(v9 + 8) - 8LL) )
                {
                  return 3221225512LL;
                }
                *(_QWORD *)(a5 + 8LL * v16 + 120) = *v24;
                v25 = *(_QWORD *)(v9 + 16);
                v8 = a2;
                if ( v25 )
                  *(_QWORD *)(v25 + 8LL * v16 + 128) = v24;
              }
              else
              {
                v42 = *(_QWORD *)(a5 + 8LL * (*(_BYTE *)(v12 + 3) & 0xF) + 120);
                *(_QWORD *)(a5 + 152) = v42;
                *(_QWORD *)(a5 + 152) = v42 - (*(_BYTE *)(v12 + 3) & 0xF0);
              }
            }
            else
            {
              *(_QWORD *)(a5 + 152) += 8 * v16 + 8;
            }
          }
          else
          {
            v11 = (unsigned int)(v11 + 1);
            v30 = *(unsigned __int16 *)(v12 + 2 * v11 + 4);
            if ( v16 )
            {
              v11 = (unsigned int)(v11 + 1);
              v31 = (*(unsigned __int16 *)(v12 + 2 * v11 + 4) << 16) + v30;
            }
            else
            {
              v31 = 8 * v30;
            }
            *(_QWORD *)(a5 + 152) += v31;
          }
        }
LABEL_16:
        LODWORD(v11) = v11 + 1;
        v9 = a8;
        v10 = (_QWORD *)a8;
      }
    }
    if ( (*(_BYTE *)v12 & 0x20) != 0 )
    {
      a4 = (_DWORD *)(v12 + 2 * ((v13 & 1) + v13 + 2LL));
      if ( (unsigned int)++v49 > 0x20 )
LABEL_99:
        RtlRaiseStatus(-1073741569);
      continue;
    }
    break;
  }
  if ( v47 )
  {
    if ( !a6 )
    {
LABEL_34:
      *a7 = a4;
      return 0LL;
    }
    IsMachineFrameEntry = RtlpIsMachineFrameEntry(v12, RtlpSafeMachineFrameEntries, 4LL);
    v46 = v47;
    if ( IsMachineFrameEntry )
      v46 = 0;
    v47 = v46;
LABEL_32:
    if ( v27 )
      *v27 = v47;
    goto LABEL_34;
  }
  if ( v8 < 0x7FFFFFFF0000LL )
  {
    ProbeForRead(*(volatile void **)(a5 + 152), 1uLL, 4u);
    v10 = (_QWORD *)a8;
  }
  if ( !*v10 || (v32 = *(_QWORD *)(a5 + 152), v32 >= *(_QWORD *)*v10) && v32 <= **(_QWORD **)(v9 + 8) - 8LL )
  {
    v26 = *(_QWORD **)(a5 + 152);
    *(_QWORD *)(a5 + 248) = *v26;
    *(_QWORD *)(a5 + 152) = v26 + 1;
    RtlpVirtualPopShadowStack<_CONTEXT *>(a5, 1LL, 1LL);
    v27 = a6;
    goto LABEL_32;
  }
  return 3221225512LL;
}
