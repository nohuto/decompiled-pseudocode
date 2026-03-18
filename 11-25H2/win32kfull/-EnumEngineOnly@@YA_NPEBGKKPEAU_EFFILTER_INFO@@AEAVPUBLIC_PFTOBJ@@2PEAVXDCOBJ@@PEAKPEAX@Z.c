/*
 * XREFs of ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400B8D04
 * Callers:
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400B9260 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z @ 0x1400B7044 (-pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z.c)
 *     ?BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z @ 0x1400B7C98 (-BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z.c)
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1400B91F8 (--1EFSMEMOBJ@@QEAA@XZ.c)
 *     ??0EFSMEMOBJ@@QEAA@AEBUPARAMETERS@EFSTATE@@KKPEAXPEAK@Z @ 0x14010235C (--0EFSMEMOBJ@@QEAA@AEBUPARAMETERS@EFSTATE@@KKPEAXPEAK@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1401025BC (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x140104440 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 */

char __fastcall EnumEngineOnly(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        struct _EFFILTER_INFO *a4,
        __int64 **a5,
        __int64 **a6,
        struct XDCOBJ *a7,
        unsigned int *a8,
        void *a9)
{
  char v9; // di
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  struct FONTSUB *v29; // rax
  const unsigned __int16 *v30; // r15
  unsigned int *v31; // rax
  ULONG v32; // ecx
  ULONG v33; // ecx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  __int64 *v37; // rax
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  ULONG v41; // ecx
  __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rdx
  __int64 *v46; // [rsp+38h] [rbp-B1h] BYREF
  __int64 v47; // [rsp+40h] [rbp-A9h]
  _QWORD v48[8]; // [rsp+48h] [rbp-A1h] BYREF
  unsigned int *v49; // [rsp+88h] [rbp-61h]
  __int64 *v50; // [rsp+98h] [rbp-51h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-49h]
  __int64 *v52; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-39h]
  _QWORD v54[2]; // [rsp+B8h] [rbp-31h] BYREF
  __int128 v55; // [rsp+C8h] [rbp-21h] BYREF
  __int128 v56; // [rsp+D8h] [rbp-11h]
  __int128 v57; // [rsp+E8h] [rbp-1h]
  __int64 v58; // [rsp+F8h] [rbp+Fh]

  v9 = 0;
  v13 = *a5;
  v46 = v13;
  v14 = *v13;
  v47 = *v13;
  if ( !v13 )
    return 0;
  if ( !v14 )
    return 0;
  v54[0] = v13 + 1;
  v15 = v13[1];
  v54[1] = v15;
  if ( v13 == (__int64 *)-8LL )
    return 0;
  if ( !v15 )
    return 0;
  v55 = 0LL;
  v58 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  if ( !BuildEfstateParameters((struct EFSTATE::PARAMETERS *)&v55, a7) )
    return 0;
  if ( !a1 )
  {
    EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v48, (const struct EFSTATE::PARAMETERS *)&v55, *(_DWORD *)(v14 + 12), a3, a9, a8);
    if ( v48[0] )
    {
      *((_DWORD *)a4 + 3) = 1;
      v34 = FHOBJ::bScanLists((FHOBJ *)&v46, (struct EFSOBJ *)v48, a3, a4);
      *((_DWORD *)a4 + 3) = 0;
      if ( v34 )
      {
        v35 = *((_DWORD *)a4 + 4);
        *((_DWORD *)a4 + 4) = 1;
        v36 = FHOBJ::bScanLists((FHOBJ *)&v46, (struct EFSOBJ *)v48, a3, a4);
        *((_DWORD *)a4 + 4) = v35;
        if ( v36 )
        {
          v37 = *a6;
          if ( !*a6 )
            goto LABEL_33;
          v46 = *a6;
          v47 = *v37;
          if ( v47 )
          {
            *((_DWORD *)a4 + 3) = 1;
            v38 = FHOBJ::bScanLists((FHOBJ *)&v46, (struct EFSOBJ *)v48, a3, a4);
            *((_DWORD *)a4 + 3) = 0;
            if ( v38 )
            {
              v39 = *((_DWORD *)a4 + 4);
              *((_DWORD *)a4 + 4) = 1;
              v40 = FHOBJ::bScanLists((FHOBJ *)&v46, (struct EFSOBJ *)v48, a3, a4);
              *((_DWORD *)a4 + 4) = v39;
              if ( v40 )
              {
LABEL_33:
                v23 = v48[0];
                v31 = v49;
                if ( !*(_DWORD *)(v48[0] + 28LL) )
                {
                  *v49 = *(_DWORD *)(v48[0] + 112LL);
                  v41 = *(_DWORD *)(v23 + 28);
                  if ( v41 )
                    EngSetLastError(v41);
                  v9 = 1;
                  goto LABEL_23;
                }
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
    goto LABEL_14;
  }
  v49 = a8;
  v16 = AllocFreeTmpBuffer(372LL);
  v48[0] = v16;
  if ( !v16 )
    goto LABEL_14;
  v17 = *a8;
  v18 = v55;
  *(_QWORD *)(v16 + 88) = v16 + 116;
  v19 = v56;
  *(_QWORD *)(v16 + 104) = v16 + 116;
  *(_QWORD *)(v16 + 96) = v16 + 372;
  *(_QWORD *)v16 = 0LL;
  *(_DWORD *)(v16 + 8) = a3;
  *(_DWORD *)(v16 + 112) = 0;
  *(_QWORD *)(v16 + 16) = a9;
  *(_DWORD *)(v16 + 24) = v17;
  *(_DWORD *)(v16 + 28) = 0;
  *(_OWORD *)(v16 + 32) = v18;
  v20 = v57;
  *(_OWORD *)(v16 + 48) = v19;
  *(_QWORD *)&v19 = v58;
  *(_OWORD *)(v16 + 64) = v20;
  *(_QWORD *)(v16 + 80) = v19;
  if ( !(unsigned int)FHOBJ::bScanLists((FHOBJ *)&v46, (struct EFSOBJ *)v48, a1, a3, a4) )
  {
LABEL_14:
    EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v48);
    return 0;
  }
  v23 = v48[0];
  if ( *(_QWORD *)(v48[0] + 88LL) == v48[0] + 116LL )
  {
    if ( !(unsigned int)FHOBJ::bScanLists((FHOBJ *)v54, (struct EFSOBJ *)v48, a1, a3, a4) )
      goto LABEL_14;
    v23 = v48[0];
  }
  v24 = *a6;
  if ( *a6 )
  {
    v25 = *v24;
    v50 = *a6;
    v26 = v24 + 1;
    v51 = v25;
    v52 = v26;
    v27 = *v26;
    v53 = *v26;
    if ( !v25 || !v26 || !v27 || !(unsigned int)FHOBJ::bScanLists((FHOBJ *)&v50, (struct EFSOBJ *)v48, a1, a3, a4) )
      goto LABEL_14;
    v23 = v48[0];
    if ( *(_QWORD *)(v48[0] + 88LL) == v48[0] + 116LL )
    {
      if ( !(unsigned int)FHOBJ::bScanLists((FHOBJ *)&v52, (struct EFSOBJ *)v48, a1, a3, a4) )
        goto LABEL_14;
      v23 = v48[0];
    }
  }
  v29 = pfsubAlternateFacename(a1, v21, v22);
  v30 = (const unsigned __int16 *)(((unsigned __int64)v29 + 130) & -(__int64)(v29 != 0LL));
  if ( !v30 )
    goto LABEL_19;
  *(_QWORD *)v23 = v29;
  if ( !(unsigned int)FHOBJ::bScanLists(
                        (FHOBJ *)&v46,
                        (struct EFSOBJ *)v48,
                        (const unsigned __int16 *)(((unsigned __int64)v29 + 130) & -(__int64)(v29 != 0LL)),
                        a3,
                        a4) )
    goto LABEL_14;
  v23 = v48[0];
  if ( *(_QWORD *)(v48[0] + 88LL) == v48[0] + 116LL )
  {
    if ( (unsigned int)FHOBJ::bScanLists((FHOBJ *)v54, (struct EFSOBJ *)v48, v30, a3, a4) )
    {
      v23 = v48[0];
      goto LABEL_46;
    }
    goto LABEL_14;
  }
LABEL_46:
  v42 = *a6;
  if ( !*a6 )
    goto LABEL_19;
  v43 = *v42;
  v52 = *a6;
  v44 = v42 + 1;
  v53 = v43;
  v50 = v44;
  v45 = *v44;
  v51 = *v44;
  if ( !v43 || !v44 || !v45 || !(unsigned int)FHOBJ::bScanLists((FHOBJ *)&v52, (struct EFSOBJ *)v48, v30, a3, a4) )
    goto LABEL_14;
  v23 = v48[0];
  if ( *(_QWORD *)(v48[0] + 88LL) != v48[0] + 116LL )
    goto LABEL_19;
  if ( !(unsigned int)FHOBJ::bScanLists((FHOBJ *)&v50, (struct EFSOBJ *)v48, v30, a3, a4) )
    goto LABEL_14;
  v23 = v48[0];
LABEL_19:
  v31 = v49;
  if ( *(_DWORD *)(v23 + 28) )
  {
LABEL_24:
    *v31 = *(_DWORD *)(v23 + 112);
    v33 = *(_DWORD *)(v23 + 28);
    if ( v33 )
      EngSetLastError(v33);
    goto LABEL_23;
  }
  *v49 = *(_DWORD *)(v23 + 112);
  v32 = *(_DWORD *)(v23 + 28);
  if ( v32 )
    EngSetLastError(v32);
  v9 = 1;
LABEL_23:
  FreeTmpBuffer(v23);
  return v9;
}
