/*
 * XREFs of InitializePhysicalAdapterSegments_0 @ 0x1400B1ED8
 * Callers:
 *     CreatePhysicalAdapterSegments @ 0x1400B14D0 (CreatePhysicalAdapterSegments.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ConvertSegmentDescriptor4 @ 0x1400B1444 (ConvertSegmentDescriptor4.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z @ 0x1400B5850 (--0VIDMM_SEGMENT@@QEAA@PEAUVIDMM_PHYSICAL_ADAPTER_LEGACY@@GPEBU_DXGK_SEGMENTDESCRIPTOR5@@@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1400B74EC (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall InitializePhysicalAdapterSegments_0(
        struct VIDMM_PHYSICAL_ADAPTER_LEGACY *a1,
        __int64 a2,
        unsigned __int16 a3,
        __int16 a4)
{
  __int16 v4; // di
  __int64 v5; // r9
  char v6; // r12
  unsigned __int16 v7; // r11
  __int64 v8; // r14
  unsigned __int8 v10; // r13
  unsigned __int16 v11; // r15
  char v12; // al
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // edx
  VIDMM_SEGMENT *v16; // rax
  VIDMM_SEGMENT *v17; // rdi
  int v18; // r14d
  __int64 v19; // rsi
  VIDMM_SEGMENT *v20; // rax
  unsigned int v21; // r12d
  char v22; // al
  char v23; // al
  VIDMM_SEGMENT *v24; // rax
  __int64 v25; // rdx
  __int64 result; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r10
  unsigned __int64 *v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned int v33; // r13d
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // r14d
  char v44; // al
  __int64 v45; // rdx
  int v46; // eax
  char v47; // al
  char v48; // cl
  char v49; // al
  __int64 v50; // rcx
  char v51; // [rsp+50h] [rbp-B0h]
  char v52; // [rsp+51h] [rbp-AFh]
  char v53; // [rsp+52h] [rbp-AEh]
  char v54; // [rsp+53h] [rbp-ADh]
  char v56; // [rsp+58h] [rbp-A8h]
  char v58; // [rsp+60h] [rbp-A0h]
  char v59; // [rsp+64h] [rbp-9Ch]
  char v60; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  __int64 v64; // [rsp+80h] [rbp-80h]
  _QWORD v65[3]; // [rsp+88h] [rbp-78h]
  _QWORD v66[14]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v67[12]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v68; // [rsp+170h] [rbp+70h] BYREF
  __int64 v69; // [rsp+180h] [rbp+80h]

  v4 = a4;
  v64 = *((_QWORD *)a1 + 7);
  v5 = 0LL;
  v6 = 0;
  v52 = 0;
  v7 = a3;
  v56 = 0;
  v58 = 0;
  v8 = a2;
  v53 = 0;
  v59 = 0;
  v10 = 0;
  v60 = 0;
  v11 = 0;
  v54 = 0;
  v51 = 0;
  v63 = 0LL;
  v69 = 0LL;
  *((_WORD *)a1 + 72) = v4;
  v68 = 0LL;
  if ( !a3 )
  {
LABEL_51:
    v28 = 0LL;
    v29 = 2LL;
    while ( 1 )
    {
      v30 = (unsigned __int64 *)((char *)&v68 + v28 * 8);
      v31 = *(_QWORD *)((char *)&v68 + v28 * 8 + a1 - (struct VIDMM_PHYSICAL_ADAPTER_LEGACY *)&v68 + 8);
      if ( !v31 )
        goto LABEL_56;
      if ( *v30 > v31 )
        break;
      v32 = v31 - *v30;
      v5 = 0LL;
LABEL_57:
      v65[v28++] = v32;
      if ( !--v29 )
      {
        v33 = 0;
        if ( !v7 )
        {
LABEL_86:
          *(_BYTE *)(v64 + 7042) |= v52;
          *(_BYTE *)(v64 + 7043) |= v56;
          v47 = *((_BYTE *)a1 + 557) & 0xBF ^ (*((_BYTE *)a1 + 557) | (v58 << 6)) & 0x40;
          *((_BYTE *)a1 + 557) = (v59 << 7) | v47 & 0xFE ^ (v53 | v47) & 1;
          v48 = *((_BYTE *)a1 + 558) & 0xBF ^ (*((_BYTE *)a1 + 558) | (v60 << 6)) & 0x40;
          v49 = v48 & 0xFD ^ (v48 | (2 * v54)) & 2;
          *((_BYTE *)a1 + 558) = v49 & 0xFE ^ (v51 | v49) & 1;
          *(_QWORD *)(v64 + 7096) += v63;
          return 0LL;
        }
        v34 = 0LL;
        v62 = 0LL;
        while ( 2 )
        {
          v35 = *(_QWORD *)(v34 + *((_QWORD *)a1 + 233));
          v36 = *(int *)(v35 + 104);
          if ( (_DWORD)v36 == 2 || (v37 = *((_QWORD *)a1 + v36 + 1)) == 0 )
          {
            v37 = *(_QWORD *)(v35 + 160);
            v38 = v35;
          }
          else
          {
            v38 = v35;
            if ( (*(_DWORD *)(v35 + 64) & 0x1000) == 0 )
            {
              v39 = v65[v36];
              v40 = *(_QWORD *)(v35 + 152);
              v41 = *(_QWORD *)(v35 + 160) - v40;
              if ( v41 >= v39 )
                v41 = v65[v36];
              v65[v36] = v39 - v41;
              v37 = v40 + v41;
            }
          }
          *(_QWORD *)(v35 + 40) = v37;
          v42 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), unsigned __int64 *, __int64))(*(_QWORD *)v35 + 8LL))(
                  v35,
                  NotifyAllocationReclaimedCb,
                  v30,
                  v5);
          v43 = v42;
          if ( v42 < 0 )
          {
            _InterlockedAdd(&dword_14008A7A4, 1u);
            WdLogSingleEntry1(6LL, v42);
            WdLogGlobalForLineNumber = 552;
            DxgkLogInternalTriageEvent(v50, 262145LL);
            return v43;
          }
          if ( (_DWORD)v36 )
          {
            if ( (_DWORD)v36 == 1 )
            {
              v51 = 1;
            }
            else if ( (_DWORD)v36 == 2 )
            {
              goto LABEL_78;
            }
            if ( *(_DWORD *)(v35 + 108) == 1 )
LABEL_77:
              *((_QWORD *)a1 + 3 * v36 + 78) += *(_QWORD *)(v35 + 40) - *(_QWORD *)(v35 + 168);
          }
          else
          {
            v44 = v60;
            if ( (*(_BYTE *)(v38 + 64) & 4) == 0 )
              v44 = 1;
            v60 = v44;
            if ( *(_DWORD *)(v35 + 108) == 1 )
            {
              v54 = 1;
              goto LABEL_77;
            }
          }
LABEL_78:
          v45 = *(_QWORD *)(v35 + 40);
          if ( *(_DWORD *)(v35 + 108) == 1 )
          {
            v46 = *(_DWORD *)(v38 + 64);
            if ( (v46 & 0x200000) != 0 )
            {
              *((_QWORD *)a1 + 230) += v45;
            }
            else if ( (v46 & 0x40) != 0 )
            {
              *((_QWORD *)a1 + 231) += v45;
            }
            else
            {
              *((_QWORD *)a1 + 229) += v45;
            }
          }
          else
          {
            *((_BYTE *)a1 + 558) |= 4u;
            *((_BYTE *)a1 + 24 * v36 + 632) |= 1u;
            *((_QWORD *)a1 + 232) += v45;
          }
          ++v33;
          v34 = v62 + 8;
          v62 += 8LL;
          if ( v33 >= a3 )
            goto LABEL_86;
          continue;
        }
      }
    }
    v5 = 0LL;
LABEL_56:
    v32 = 0LL;
    goto LABEL_57;
  }
  while ( 1 )
  {
    memset(v66, 0, 0x68uLL);
    if ( v11 != v4 )
      break;
    memset(v67, 0, sizeof(v67));
    v12 = *((_BYTE *)a1 + 556);
    if ( (v12 & 4) != 0 )
    {
      v13 = **((_DWORD **)a1 + 70) & 0x10 | 0x1180;
    }
    else if ( (v12 & 0x40) != 0 )
    {
      v13 = (*(_DWORD *)(*((_QWORD *)a1 + 8) + 16LL) & 0x100 | 0x11800u) >> 4;
    }
    else
    {
      v13 = 4496;
    }
    v67[2] = qword_14008A318;
    v14 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(v10 << 10)) & 0x400;
    if ( (v13 & 0x10) == 0 )
      v6 = 1;
    v56 = v6;
    if ( *((_QWORD *)&v68 + 1) )
      v15 = v14 | 0x100004;
    else
      v15 = v14 | 0x80004;
    LODWORD(v67[0]) = v15;
    ConvertSegmentDescriptor4((unsigned int *)v67, (__int64)v66);
    v16 = (VIDMM_SEGMENT *)operator new(512LL, 0x36306956u, 64LL);
    v17 = v16;
    if ( v16 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(v16, a1, v11, (const struct _DXGK_SEGMENTDESCRIPTOR5 *)v66);
      *(_QWORD *)v17 = &VIDMM_SYSMEM_SEGMENT::`vftable';
    }
    else
    {
      v17 = 0LL;
    }
    v18 = v66[0];
    v19 = v11;
LABEL_28:
    v5 = 0LL;
    if ( !v17 )
      goto LABEL_45;
    v21 = HIDWORD(v66[10]);
LABEL_38:
    if ( (v18 & 0x1000) == 0 )
    {
      v25 = *((int *)v17 + 26);
      *((_QWORD *)&v68 + v25) += *((_QWORD *)v17 + 19);
      if ( (v18 & 0x10000) != 0 && ((_DWORD)v25 == 2 || !*((_QWORD *)a1 + v25 + 1)) )
      {
        result = VIDMM_SEGMENT::SetVprRange(v17, v66[8], v66[9], v66[10], v21, LODWORD(v66[11]));
        v5 = 0LL;
        if ( (int)result < 0 )
          return result;
      }
    }
    v7 = a3;
    ++v11;
    *(_QWORD *)(*((_QWORD *)a1 + 233) + 8 * v19) = v17;
    if ( v11 >= a3 )
      goto LABEL_51;
    v4 = a4;
    v8 = a2;
    v6 = v56;
  }
  v19 = v11;
  ConvertSegmentDescriptor4((unsigned int *)(v8 + 104LL * v11), (__int64)v66);
  v18 = v66[0];
  if ( ((LODWORD(v66[0]) >> 10) & 1) != 0 )
    v63 += v66[2];
  if ( (v66[0] & 1) != 0 )
  {
    if ( (v66[0] & 0x10) != 0 )
      v52 = 1;
    else
      v56 = 1;
    if ( ((LODWORD(v66[0]) >> 10) & 1) != 0 )
      v10 = 1;
    v20 = (VIDMM_SEGMENT *)operator new(544LL, 0x36306956u, 64LL);
    v17 = v20;
    if ( v20 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(v20, a1, v11, (const struct _DXGK_SEGMENTDESCRIPTOR5 *)v66);
      *((_QWORD *)v17 + 64) = 0LL;
      *(_QWORD *)v17 = &VIDMM_APERTURE_SEGMENT::`vftable';
      *((_QWORD *)v17 + 65) = 0LL;
      *((_QWORD *)v17 + 67) = 0LL;
      *((_QWORD *)v17 + 66) = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    goto LABEL_28;
  }
  v21 = HIDWORD(v66[10]);
  v53 = 1;
  if ( (v66[0] & 0x10000) != 0 )
  {
    v22 = v59;
    if ( !HIDWORD(v66[10]) )
      v22 = 1;
    v59 = v22;
  }
  v23 = v58;
  if ( (v66[0] & 0x800) != 0 )
    v23 = 1;
  v58 = v23;
  v24 = (VIDMM_SEGMENT *)operator new(552LL, 0x36306956u, 64LL);
  v17 = v24;
  if ( v24 )
  {
    VIDMM_SEGMENT::VIDMM_SEGMENT(v24, a1, v11, (const struct _DXGK_SEGMENTDESCRIPTOR5 *)v66);
    v5 = 0LL;
    *((_QWORD *)v17 + 64) = 0LL;
    *((_DWORD *)v17 + 130) = 0;
    *(_QWORD *)v17 = &VIDMM_MEMORY_SEGMENT::`vftable';
    goto LABEL_38;
  }
LABEL_45:
  if ( (v18 & 0x1000) != 0 )
  {
    _InterlockedAdd(dword_14008A7A8, 1u);
    WdLogSingleEntry2(6LL, *((unsigned __int16 *)a1 + 36), v19);
    WdLogGlobalForLineNumber = 430;
  }
  else if ( (v18 & 1) != 0 )
  {
    _InterlockedAdd(&dword_14008A7A0, 1u);
    WdLogSingleEntry2(6LL, *((unsigned __int16 *)a1 + 36), v19);
    WdLogGlobalForLineNumber = 437;
  }
  else
  {
    _InterlockedAdd(&dword_14008A77C, 1u);
    WdLogSingleEntry2(6LL, *((unsigned __int16 *)a1 + 36), v19);
    WdLogGlobalForLineNumber = 444;
  }
  DxgkLogInternalTriageEvent(v27, 262145LL);
  return 3221225495LL;
}
