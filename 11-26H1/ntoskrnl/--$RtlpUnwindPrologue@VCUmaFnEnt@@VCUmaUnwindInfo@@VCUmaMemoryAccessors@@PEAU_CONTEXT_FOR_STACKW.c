/*
 * XREFs of ??$RtlpUnwindPrologue@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJ_K00VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAV0@PEAU_AMD64_UNWIND_PARAMS@@@Z @ 0x1404125BC
 * Callers:
 *     ??$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKWALK@@@@YAJK_K0VCUmaFnEnt@@PEAU_CONTEXT_FOR_STACKWALK@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAXPEAU_CONTEXT@@7@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x140624DA0 (--$RtlpxVirtualUnwind@VCUmaFnEnt@@VCUmaUnwindInfo@@VCUmaMemoryAccessors@@PEAU_CONTEXT_FOR_STACKW.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ??0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z @ 0x140412AD4 (--0CUmaUnwindInfo@@QEAA@PEAU_UNWIND_INFO@@@Z.c)
 *     ??$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z @ 0x140413240 (--$RtlpAmd64SetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YAXPEAU_CONTEXT_FOR_STACKWALK@@K_K@Z.c)
 *     RtlpUnwindOpSlots @ 0x140413280 (RtlpUnwindOpSlots.c)
 *     ??$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z @ 0x1404132D0 (--$RtlpAmd64GetContextGp@PEAU_CONTEXT_FOR_STACKWALK@@@@YA_KPEAU_CONTEXT_FOR_STACKWALK@@K@Z.c)
 *     RtlpIsMachineFrameEntry @ 0x140447450 (RtlpIsMachineFrameEntry.c)
 *     ?GetUnwindCode@CUmaUnwindInfo@@QEAA?AT_UNWIND_CODE@@K@Z @ 0x1404E1C40 (-GetUnwindCode@CUmaUnwindInfo@@QEAA-AT_UNWIND_CODE@@K@Z.c)
 *     ?MemoryReadSimd@CUmaMemoryAccessors@@SA?AU_M128A@@PEBU_AMD64_UNWIND_PARAMS@@_K@Z @ 0x1404E3FA0 (-MemoryReadSimd@CUmaMemoryAccessors@@SA-AU_M128A@@PEBU_AMD64_UNWIND_PARAMS@@_K@Z.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlpUnwindPrologue<CUmaFnEnt,CUmaUnwindInfo,CUmaMemoryAccessors,_CONTEXT_FOR_STACKWALK *>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        char *a6,
        _OWORD *a7,
        __int64 a8)
{
  int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rsi
  CUmaUnwindInfo *v11; // rax
  __int64 v12; // rbx
  unsigned __int16 UShortFromUser; // ax
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  volatile void *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  volatile void *v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rcx
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  char IsMachineFrameEntry; // al
  char v27; // cl
  unsigned int v28; // ecx
  unsigned __int16 v29; // ax
  unsigned int v30; // ebx
  unsigned __int16 v31; // ax
  void *v32; // rdx
  _OWORD *v33; // rax
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 Context; // rax
  int v41; // r8d
  __int64 v42; // rbx
  volatile void *v43; // rbx
  __int64 v44; // rax
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  __int64 v49; // rcx
  volatile void *v50; // r13
  volatile void *v51; // rbx
  _QWORD *v52; // rcx
  __int64 ULong64FromUser; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  const struct _AMD64_UNWIND_PARAMS *v56; // rdx
  volatile void *v57; // rbx
  struct _M128A *v58; // rcx
  __int64 v59; // rcx
  char v60; // [rsp+20h] [rbp-1C8h]
  unsigned int v61; // [rsp+60h] [rbp-188h]
  char v63[2]; // [rsp+70h] [rbp-178h] BYREF
  char v64[2]; // [rsp+72h] [rbp-176h] BYREF
  char v65[2]; // [rsp+74h] [rbp-174h] BYREF
  char v66[2]; // [rsp+76h] [rbp-172h] BYREF
  char v67[2]; // [rsp+78h] [rbp-170h] BYREF
  char v68[2]; // [rsp+7Ah] [rbp-16Eh] BYREF
  char v69[4]; // [rsp+7Ch] [rbp-16Ch] BYREF
  unsigned int v70; // [rsp+80h] [rbp-168h]
  _OWORD *v71; // [rsp+90h] [rbp-158h]
  __int64 *v72; // [rsp+A0h] [rbp-148h]
  _OWORD v73[3]; // [rsp+A8h] [rbp-140h] BYREF
  char *v74; // [rsp+D8h] [rbp-110h]
  __int64 *v75; // [rsp+E0h] [rbp-108h]
  __int64 v76; // [rsp+E8h] [rbp-100h]
  _DWORD *v77; // [rsp+F0h] [rbp-F8h]
  __int64 v78; // [rsp+F8h] [rbp-F0h]
  __int64 v79; // [rsp+100h] [rbp-E8h]
  __int64 v80; // [rsp+108h] [rbp-E0h]
  __int64 v81; // [rsp+110h] [rbp-D8h]
  __int64 v82; // [rsp+118h] [rbp-D0h]
  __int64 v83; // [rsp+120h] [rbp-C8h]
  __int64 v84; // [rsp+128h] [rbp-C0h]
  __int64 v85; // [rsp+130h] [rbp-B8h]
  _OWORD *v86; // [rsp+140h] [rbp-A8h]
  char v87; // [rsp+150h] [rbp-98h] BYREF
  struct _M128A v88; // [rsp+160h] [rbp-88h] BYREF
  __int128 v89; // [rsp+170h] [rbp-78h] BYREF
  void *v90; // [rsp+180h] [rbp-68h]

  v8 = a2;
  v75 = (__int64 *)a5;
  v77 = a4;
  v76 = a1;
  v71 = a4;
  v74 = a6;
  v86 = a7;
  v9 = a8;
  v61 = 0;
  while ( 2 )
  {
    LODWORD(v10) = 0;
    v60 = 0;
    v70 = v8 - v76 - *v77;
    v11 = CUmaUnwindInfo::CUmaUnwindInfo((CUmaUnwindInfo *)&v89, (struct _UNWIND_INFO *)(v76 + (unsigned int)v77[2]));
    v73[0] = *(_OWORD *)v11;
    v73[1] = *((_OWORD *)v11 + 1);
    v73[2] = *((_OWORD *)v11 + 2);
    *((_QWORD *)&v73[0] + 1) = *((_QWORD *)v11 + 1);
    while ( (unsigned int)v10 < BYTE10(v73[0]) )
    {
      v12 = 2LL * (unsigned int)v10;
      if ( (unsigned int)v10 >= 0x10 )
        UShortFromUser = RtlReadUShortFromUser(v12 + *(_QWORD *)&v73[0] + 4LL);
      else
        UShortFromUser = *((_WORD *)v73 + (unsigned int)v10 + 6);
      v14 = HIBYTE(UShortFromUser) & 0xF;
      v15 = UShortFromUser >> 12;
      if ( v70 < (unsigned __int8)UShortFromUser )
      {
        if ( (unsigned int)v10 >= 0x10 )
          v31 = RtlReadUShortFromUser(v12 + *(_QWORD *)&v73[0] + 4LL);
        else
          v31 = *((_WORD *)v73 + (unsigned int)v10 + 6);
        LODWORD(v10) = RtlpUnwindOpSlots(v31) + v10;
      }
      else
      {
        if ( v14 > 5 )
        {
          v45 = v14 - 6;
          if ( !v45 )
          {
            LODWORD(v10) = v10 + 1;
            goto LABEL_16;
          }
          v46 = v45 - 1;
          if ( !v46 )
          {
            LODWORD(v10) = v10 + 2;
            goto LABEL_16;
          }
          v47 = v46 - 1;
          if ( !v47 )
          {
            LODWORD(v10) = v10 + 1;
            v57 = (volatile void *)(a3
                                  + 16LL
                                  * *(unsigned __int16 *)CUmaUnwindInfo::GetUnwindCode(v73, v69, (unsigned int)v10));
            if ( a2 < 0x7FFFFFFF0000LL )
            {
              v84 = 1LL;
              ProbeForRead(v57, 1uLL, 4u);
            }
            if ( *(_QWORD *)a8
              && ((unsigned __int64)v57 < **(_QWORD **)a8 || (unsigned __int64)v57 > **(_QWORD **)(v9 + 8) - 16LL) )
            {
              return 3221225512LL;
            }
            v58 = &v88;
            goto LABEL_102;
          }
          v48 = v47 - 1;
          if ( !v48 )
          {
            LODWORD(v10) = v10 + 2;
            v55 = *(unsigned __int16 *)CUmaUnwindInfo::GetUnwindCode(v73, v67, (unsigned int)(v10 - 1));
            v57 = (volatile void *)(a3
                                  + ((unsigned __int64)*(unsigned __int16 *)CUmaUnwindInfo::GetUnwindCode(
                                                                              v73,
                                                                              v68,
                                                                              (unsigned int)v10) << 16)
                                  + v55);
            if ( a2 < 0x7FFFFFFF0000LL )
            {
              v83 = 1LL;
              ProbeForRead(v57, 1uLL, 4u);
            }
            if ( *(_QWORD *)a8
              && ((unsigned __int64)v57 < **(_QWORD **)a8 || (unsigned __int64)v57 > **(_QWORD **)(v9 + 8) - 16LL) )
            {
              return 3221225512LL;
            }
            v58 = (struct _M128A *)&v87;
LABEL_102:
            CUmaMemoryAccessors::MemoryReadSimd(v58, v56, (unsigned __int64)v57);
            v59 = *(_QWORD *)(v9 + 16);
            if ( v59 )
              *(_QWORD *)(v59 + 8LL * v15) = v57;
            goto LABEL_16;
          }
          if ( v48 != 1 )
            goto LABEL_48;
          v60 = 1;
          v72 = (__int64 *)(a5 + 8);
          v49 = *(_QWORD *)(a5 + 8);
          v50 = (volatile void *)(v49 + 8);
          if ( !v15 )
            v50 = *(volatile void **)(a5 + 8);
          v51 = (volatile void *)(v49 + (v15 != 0 ? 32LL : 24LL));
          if ( a2 < 0x7FFFFFFF0000LL )
          {
            v81 = 1LL;
            ProbeForRead(v50, 1uLL, 4u);
          }
          v52 = (_QWORD *)a8;
          if ( *(_QWORD *)a8 )
          {
            if ( (unsigned __int64)v50 < **(_QWORD **)a8 || (unsigned __int64)v50 > **(_QWORD **)(a8 + 8) - 8LL )
              return 3221225512LL;
            v52 = (_QWORD *)a8;
          }
          if ( a2 < 0x7FFFFFFF0000LL )
          {
            v82 = 1LL;
            ProbeForRead(v51, 1uLL, 4u);
            v52 = (_QWORD *)a8;
          }
          if ( *v52 && ((unsigned __int64)v51 < *(_QWORD *)*v52 || (unsigned __int64)v51 > **(_QWORD **)(a8 + 8) - 8LL) )
            return 3221225512LL;
          ULong64FromUser = RtlReadULong64FromUser(v50);
          *v75 = ULong64FromUser;
          v54 = RtlReadULong64FromUser(v51);
          *v72 = v54;
        }
        else if ( v14 == 5 )
        {
          LODWORD(v10) = v10 + 2;
          v42 = *(unsigned __int16 *)CUmaUnwindInfo::GetUnwindCode(v73, v65, (unsigned int)(v10 - 1));
          v43 = (volatile void *)(a3
                                + ((unsigned __int64)*(unsigned __int16 *)CUmaUnwindInfo::GetUnwindCode(
                                                                            v73,
                                                                            v66,
                                                                            (unsigned int)v10) << 16)
                                + v42);
          if ( a2 < 0x7FFFFFFF0000LL )
          {
            v80 = 1LL;
            ProbeForRead(v43, 1uLL, 4u);
          }
          if ( *(_QWORD *)a8
            && ((unsigned __int64)v43 < **(_QWORD **)a8 || (unsigned __int64)v43 > **(_QWORD **)(v9 + 8) - 8LL) )
          {
            return 3221225512LL;
          }
          v44 = RtlReadULong64FromUser(v43);
          RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v15, v44);
        }
        else if ( (UShortFromUser & 0xF00) != 0 )
        {
          v28 = v14 - 1;
          if ( v28 )
          {
            v34 = v28 - 1;
            if ( v34 )
            {
              v35 = v34 - 1;
              if ( v35 )
              {
                if ( v35 != 1 )
                  goto LABEL_48;
                LODWORD(v10) = v10 + 1;
                v36 = *(unsigned __int16 *)CUmaUnwindInfo::GetUnwindCode(v73, v63, (unsigned int)v10);
                v37 = a3 + 8 * v36;
                if ( a2 < 0x7FFFFFFF0000LL )
                {
                  v78 = 1LL;
                  ProbeForRead((volatile void *)(a3 + 8 * v36), 1uLL, 4u);
                }
                if ( *(_QWORD *)a8 && (v37 < **(_QWORD **)a8 || v37 > **(_QWORD **)(v9 + 8) - 8LL) )
                  return 3221225512LL;
                v38 = RtlReadULong64FromUser(v37);
                RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v15, v38);
                v39 = *(_QWORD *)(v9 + 16);
                if ( v39 )
                  *(_QWORD *)(v39 + 8LL * v15 + 128) = v37;
              }
              else
              {
                Context = RtlpAmd64GetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, BYTE11(v73[0]) & 0xF);
                *(_QWORD *)(a5 + 8) = Context - (v41 & 0xFFFFFFF0);
              }
            }
            else
            {
              *(_QWORD *)(a5 + 8) += 8 * v15 + 8;
            }
          }
          else
          {
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= 0x10 )
              v29 = RtlReadUShortFromUser(*(_QWORD *)&v73[0] + 4LL + 2 * v10);
            else
              v29 = *((_WORD *)v73 + v10 + 6);
            if ( v15 )
            {
              LODWORD(v10) = v10 + 1;
              v30 = (*(unsigned __int16 *)CUmaUnwindInfo::GetUnwindCode(v73, v64, (unsigned int)v10) << 16) + v29;
            }
            else
            {
              v30 = 8 * v29;
            }
            *(_QWORD *)(a5 + 8) += v30;
          }
        }
        else
        {
          v72 = (__int64 *)(a5 + 8);
          v16 = *(volatile void **)(a5 + 8);
          if ( a2 < 0x7FFFFFFF0000LL )
          {
            v79 = 1LL;
            ProbeForRead(v16, 1uLL, 4u);
          }
          if ( *(_QWORD *)a8
            && ((unsigned __int64)v16 < **(_QWORD **)a8 || (unsigned __int64)v16 > **(_QWORD **)(a8 + 8) - 8LL) )
          {
            return 3221225512LL;
          }
          v17 = RtlReadULong64FromUser(v16);
          RtlpAmd64SetContextGp<_CONTEXT_FOR_STACKWALK *>(a5, v15, v17);
          v18 = *(_QWORD *)(a8 + 16);
          if ( v18 )
            *(_QWORD *)(v18 + 8LL * v15 + 128) = v16;
          *(_QWORD *)(a5 + 8) += 8LL;
        }
LABEL_16:
        LODWORD(v10) = v10 + 1;
        v9 = a8;
      }
    }
    if ( (BYTE8(v73[0]) & 0x20) != 0 )
    {
      v32 = (void *)(*(_QWORD *)&v73[0] + 4LL + 2LL * (BYTE10(v73[0]) + (BYTE10(v73[0]) & 1u)));
      v90 = v32;
      if ( v32 )
        RtlCopyFromUser(&v89, v32, 0xCuLL);
      v33 = v71;
      *v71 = v89;
      *((_QWORD *)v33 + 2) = v90;
      ++v61;
      v8 = a2;
      if ( v61 > 0x20 )
LABEL_48:
        RtlRaiseStatus(-1073741569);
      continue;
    }
    break;
  }
  if ( v60 )
  {
    if ( v74 )
    {
      IsMachineFrameEntry = RtlpIsMachineFrameEntry(*(_QWORD *)&v73[0], RtlpSafeMachineFrameEntries, 4LL);
      v27 = v60;
      if ( IsMachineFrameEntry )
        v27 = 0;
      v60 = v27;
    }
  }
  else
  {
    if ( a2 < 0x7FFFFFFF0000LL )
    {
      v85 = 8LL;
      v19 = *(volatile void **)(a5 + 8);
      v85 = 1LL;
      ProbeForRead(v19, 1uLL, 4u);
    }
    if ( *(_QWORD *)a8 )
    {
      v20 = *(_QWORD *)(a5 + 8);
      if ( v20 < **(_QWORD **)a8 || v20 > **(_QWORD **)(v9 + 8) - 8LL )
        return 3221225512LL;
    }
    v21 = RtlReadULong64FromUser(*(_QWORD *)(a5 + 8));
    v22 = v75;
    *v75 = v21;
    *(_QWORD *)(a5 + 8) += 8LL;
    if ( (*(_BYTE *)(a5 + 56) & 1) != 0 )
      v22[8] += 8LL;
  }
  if ( v74 )
    *v74 = v60;
  v23 = v86;
  v24 = v71;
  *v86 = *v71;
  *((_QWORD *)v23 + 2) = *((_QWORD *)v24 + 2);
  return 0LL;
}
