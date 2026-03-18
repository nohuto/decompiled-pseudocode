/*
 * XREFs of ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x140101BF8
 * Callers:
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400B9260 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z @ 0x1400B7044 (-pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z.c)
 *     ?BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z @ 0x1400B7C98 (-BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z.c)
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1400B91F8 (--1EFSMEMOBJ@@QEAA@XZ.c)
 *     ??0EFSMEMOBJ@@QEAA@AEBUPARAMETERS@EFSTATE@@KKPEAXPEAK@Z @ 0x14010235C (--0EFSMEMOBJ@@QEAA@AEBUPARAMETERS@EFSTATE@@KKPEAXPEAK@Z.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x14010245C (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x140104268 (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x140104440 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x14017EEC4 (-bValid@FHOBJ@@QEBAHXZ.c)
 */

char __fastcall EnumDeviceAndEngine(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        struct _EFFILTER_INFO *a4,
        __int64 **a5,
        __int64 **a6,
        struct PFFOBJ *a7,
        struct PDEVOBJ *a8,
        struct XDCOBJ *a9,
        unsigned int *a10,
        void *a11)
{
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // rcx
  __int64 v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  char v23; // di
  __int64 *v24; // rax
  unsigned int v25; // r9d
  unsigned int v26; // edx
  __int64 *v27; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rbx
  bool v32; // zf
  int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // rax
  struct FONTSUB *v36; // rax
  const unsigned __int16 *v37; // r15
  __int64 *v38; // rcx
  __int64 v39; // rax
  ULONG v40; // ecx
  __int64 *v41; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h]
  _QWORD v43[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v44; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h]
  _QWORD *v46; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h]
  _QWORD v48[10]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v49[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v50[2]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v51[3]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v52; // [rsp+138h] [rbp+30h]

  v14 = *(_QWORD *)a7;
  v15 = (__int64 *)(*(_QWORD *)a7 + 120LL);
  v16 = *v15;
  v42 = *v15;
  v41 = v15;
  if ( !v15 )
    return 0;
  if ( !v16 )
    return 0;
  v17 = *a5;
  v43[0] = v17;
  v18 = *v17;
  v43[1] = *v17;
  if ( !v17 )
    return 0;
  if ( !v18 )
    return 0;
  v19 = (__int64 *)(v14 + 112);
  v20 = *(_QWORD *)(v14 + 112);
  v45 = v20;
  v44 = v19;
  if ( !v19 )
    return 0;
  if ( !v20 )
    return 0;
  v21 = v17 + 1;
  v22 = v17[1];
  v47 = v22;
  v46 = v21;
  if ( !v21 )
    return 0;
  if ( !v22 )
    return 0;
  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  if ( !BuildEfstateParameters((struct EFSTATE::PARAMETERS *)v51, a9) )
    return 0;
  if ( !a1 )
  {
    EFSMEMOBJ::EFSMEMOBJ(
      (EFSMEMOBJ *)v48,
      (const struct EFSTATE::PARAMETERS *)v51,
      *(_DWORD *)(v16 + 12) + *(_DWORD *)(v18 + 12),
      a3,
      a11,
      a10);
    if ( !v48[0] )
      goto LABEL_23;
    v23 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)a8 + 2168LL) & 0x2000) != 0 )
    {
      if ( !bScanFamily(
              (struct FHOBJ *)&v41,
              0,
              (struct FHOBJ *)v43,
              2u,
              (struct FHOBJ *)v43,
              1u,
              (struct EFSOBJ *)v48,
              a3,
              a4,
              0LL) )
        goto LABEL_23;
      v24 = *a6;
      if ( !*a6 )
        goto LABEL_22;
      v41 = *a6;
      v42 = *v24;
      if ( !(unsigned int)FHOBJ::bValid((FHOBJ *)&v41) )
        goto LABEL_23;
      v25 = 1;
      v26 = 2;
    }
    else
    {
      if ( !bScanFamily(
              (struct FHOBJ *)&v41,
              0,
              (struct FHOBJ *)v43,
              1u,
              (struct FHOBJ *)v43,
              2u,
              (struct EFSOBJ *)v48,
              a3,
              a4,
              0LL) )
        goto LABEL_23;
      v27 = *a6;
      if ( !*a6 )
        goto LABEL_22;
      v41 = *a6;
      v42 = *v27;
      if ( !(unsigned int)FHOBJ::bValid((FHOBJ *)&v41) )
        goto LABEL_23;
      v25 = 2;
      v26 = 1;
    }
    if ( !bScanFamily((struct FHOBJ *)&v41, v26, (struct FHOBJ *)&v41, v25, 0LL, 0, (struct EFSOBJ *)v48, a3, a4, 0LL) )
      goto LABEL_23;
LABEL_22:
    if ( !*(_DWORD *)(v48[0] + 28LL) )
    {
LABEL_24:
      EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v48);
      return v23;
    }
LABEL_23:
    v23 = 0;
    goto LABEL_24;
  }
  EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v48, (const struct EFSTATE::PARAMETERS *)v51, 0x20u, a3, a11, a10);
  if ( v48[0]
    && (unsigned int)FHOBJ::bScanLists((FHOBJ *)&v41, (struct EFSOBJ *)v48, a1, a3, a4)
    && (unsigned int)FHOBJ::bScanLists((FHOBJ *)v43, (struct EFSOBJ *)v48, a1, a3, a4) )
  {
    v31 = v48[0];
    v23 = 1;
    if ( *(_QWORD *)(v48[0] + 88LL) == v48[0] + 116LL )
    {
      if ( !(unsigned int)FHOBJ::bScanLists((FHOBJ *)&v44, (struct EFSOBJ *)v48, a1, a3, a4)
        || (v32 = (unsigned int)FHOBJ::bScanLists((FHOBJ *)&v46, (struct EFSOBJ *)v48, a1, a3, a4) == 0, v33 = 1, v32) )
      {
        v33 = 0;
      }
      if ( !v33 )
        goto LABEL_51;
      v31 = v48[0];
    }
    v34 = *a6;
    if ( *a6 )
    {
      v50[1] = *v34;
      v49[0] = v34 + 1;
      v35 = v34[1];
      v50[0] = v34;
      v49[1] = v35;
      if ( !(unsigned int)FHOBJ::bValid((FHOBJ *)v50)
        || !(unsigned int)FHOBJ::bValid((FHOBJ *)v49)
        || !(unsigned int)bScanFamilyAndFace(
                            (struct FHOBJ *)v50,
                            (struct FHOBJ *)v49,
                            0LL,
                            0LL,
                            (struct EFSOBJ *)v48,
                            a3,
                            a4,
                            a1) )
      {
        goto LABEL_51;
      }
      v31 = v48[0];
    }
    v36 = pfsubAlternateFacename(a1, v29, v30);
    v37 = (const unsigned __int16 *)(((unsigned __int64)v36 + 130) & -(__int64)(v36 != 0LL));
    if ( !v37 )
      goto LABEL_47;
    *(_QWORD *)v31 = v36;
    if ( (unsigned int)bScanFamilyAndFace(
                         (struct FHOBJ *)v43,
                         (struct FHOBJ *)&v46,
                         (struct FHOBJ *)&v41,
                         (struct FHOBJ *)&v44,
                         (struct EFSOBJ *)v48,
                         a3,
                         a4,
                         (const unsigned __int16 *)(((unsigned __int64)v36 + 130) & -(__int64)(v36 != 0LL))) )
    {
      v38 = *a6;
      if ( !*a6
        || (v45 = *v38, v46 = v38 + 1, v39 = v38[1], v44 = v38, v47 = v39, (unsigned int)FHOBJ::bValid((FHOBJ *)&v44))
        && (unsigned int)FHOBJ::bValid((FHOBJ *)&v46)
        && (unsigned int)bScanFamilyAndFace(
                           (struct FHOBJ *)&v44,
                           (struct FHOBJ *)&v46,
                           0LL,
                           0LL,
                           (struct EFSOBJ *)v48,
                           a3,
                           a4,
                           v37) )
      {
        v31 = v48[0];
LABEL_47:
        if ( !*(_DWORD *)(v31 + 28) )
        {
          *(_DWORD *)v48[8] = *(_DWORD *)(v31 + 112);
          v40 = *(_DWORD *)(v31 + 28);
          if ( v40 )
            EngSetLastError(v40);
          FreeTmpBuffer(v31);
          return v23;
        }
      }
    }
  }
LABEL_51:
  EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v48);
  return 0;
}
