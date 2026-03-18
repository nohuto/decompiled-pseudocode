/*
 * XREFs of ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1401D5F14
 * Callers:
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400FDE44 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z @ 0x1400FEA0C (-pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z.c)
 *     ?BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z @ 0x1400FEB78 (-BuildEfstateParameters@@YA_NAEAUPARAMETERS@EFSTATE@@AEAVXDCOBJ@@@Z.c)
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1400FEC5C (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1400FEDA4 (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1400FF484 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1400FF6D4 (--1EFSMEMOBJ@@QEAA@XZ.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1401B73A8 (-bValid@FHOBJ@@QEBAHXZ.c)
 *     ??0EFSMEMOBJ@@QEAA@AEBUPARAMETERS@EFSTATE@@KKPEAXPEAK@Z @ 0x1401D64A4 (--0EFSMEMOBJ@@QEAA@AEBUPARAMETERS@EFSTATE@@KKPEAXPEAK@Z.c)
 */

char __fastcall EnumDeviceAndEngine(
        WCHAR *a1,
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
  char v23; // bl
  __int64 *v24; // rax
  int v25; // r9d
  unsigned int v26; // edx
  __int64 *v27; // rax
  bool v28; // zf
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdi
  int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // rax
  struct FONTSUB *v36; // rax
  unsigned __int16 *v37; // r15
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h]
  _QWORD v42[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v43; // [rsp+78h] [rbp-90h] BYREF
  __int64 v44; // [rsp+80h] [rbp-88h]
  _QWORD *v45; // [rsp+88h] [rbp-80h] BYREF
  __int64 v46; // [rsp+90h] [rbp-78h]
  _QWORD v47[10]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v48[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v49[2]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v50[3]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v51; // [rsp+138h] [rbp+30h]

  v14 = *(_QWORD *)a7;
  v15 = (__int64 *)(*(_QWORD *)a7 + 120LL);
  v16 = *v15;
  v41 = *v15;
  v40 = v15;
  if ( v15 )
  {
    if ( v16 )
    {
      v17 = *a5;
      v42[0] = v17;
      v18 = *v17;
      v42[1] = *v17;
      if ( v17 )
      {
        if ( v18 )
        {
          v19 = (__int64 *)(v14 + 112);
          v20 = *(_QWORD *)(v14 + 112);
          v44 = v20;
          v43 = v19;
          if ( v19 )
          {
            if ( v20 )
            {
              v21 = v17 + 1;
              v22 = v17[1];
              v46 = v22;
              v45 = v21;
              if ( v21 )
              {
                if ( v22 )
                {
                  memset(v50, 0, sizeof(v50));
                  v51 = 0LL;
                  if ( BuildEfstateParameters((struct EFSTATE::PARAMETERS *)v50, a9) )
                  {
                    if ( a1 )
                    {
                      EFSMEMOBJ::EFSMEMOBJ(
                        (EFSMEMOBJ *)v47,
                        (const struct EFSTATE::PARAMETERS *)v50,
                        0x20u,
                        a3,
                        a11,
                        a10);
                      if ( !v47[0]
                        || !(unsigned int)FHOBJ::bScanLists((FHOBJ *)&v40, (struct EFSOBJ *)v47, a1, a3, a4)
                        || !(unsigned int)FHOBJ::bScanLists((FHOBJ *)v42, (struct EFSOBJ *)v47, a1, a3, a4) )
                      {
                        goto LABEL_24;
                      }
                      v32 = v47[0];
                      v23 = 1;
                      if ( *(_QWORD *)(v47[0] + 88LL) == v47[0] + 116LL )
                      {
                        if ( !(unsigned int)FHOBJ::bScanLists((FHOBJ *)&v43, (struct EFSOBJ *)v47, a1, a3, a4)
                          || (v28 = (unsigned int)FHOBJ::bScanLists((FHOBJ *)&v45, (struct EFSOBJ *)v47, a1, a3, a4) == 0,
                              v33 = 1,
                              v28) )
                        {
                          v33 = 0;
                        }
                        if ( !v33 )
                          goto LABEL_24;
                        v32 = v47[0];
                      }
                      v34 = *a6;
                      if ( *a6 )
                      {
                        v49[1] = *v34;
                        v48[0] = v34 + 1;
                        v35 = v34[1];
                        v49[0] = v34;
                        v48[1] = v35;
                        if ( !(unsigned int)FHOBJ::bValid((FHOBJ *)v49)
                          || !(unsigned int)FHOBJ::bValid((FHOBJ *)v48)
                          || !(unsigned int)bScanFamilyAndFace(
                                              (struct FHOBJ *)v49,
                                              (struct FHOBJ *)v48,
                                              0LL,
                                              0LL,
                                              (struct EFSOBJ *)v47,
                                              a3,
                                              a4,
                                              a1) )
                        {
                          goto LABEL_24;
                        }
                        v32 = v47[0];
                      }
                      v36 = pfsubAlternateFacename(a1, v30, v31);
                      v37 = (unsigned __int16 *)(((unsigned __int64)v36 + 130) & -(__int64)(v36 != 0LL));
                      if ( v37 )
                      {
                        *(_QWORD *)v32 = v36;
                        if ( !(unsigned int)bScanFamilyAndFace(
                                              (struct FHOBJ *)v42,
                                              (struct FHOBJ *)&v45,
                                              (struct FHOBJ *)&v40,
                                              (struct FHOBJ *)&v43,
                                              (struct EFSOBJ *)v47,
                                              a3,
                                              a4,
                                              (unsigned __int16 *)(((unsigned __int64)v36 + 130) & -(__int64)(v36 != 0LL))) )
                          goto LABEL_24;
                        v38 = *a6;
                        if ( *a6 )
                        {
                          v44 = *v38;
                          v45 = v38 + 1;
                          v39 = v38[1];
                          v43 = v38;
                          v46 = v39;
                          if ( !(unsigned int)FHOBJ::bValid((FHOBJ *)&v43)
                            || !(unsigned int)FHOBJ::bValid((FHOBJ *)&v45)
                            || !(unsigned int)bScanFamilyAndFace(
                                                (struct FHOBJ *)&v43,
                                                (struct FHOBJ *)&v45,
                                                0LL,
                                                0LL,
                                                (struct EFSOBJ *)v47,
                                                a3,
                                                a4,
                                                v37) )
                          {
                            goto LABEL_24;
                          }
                        }
                        v32 = v47[0];
                      }
                      v28 = *(_DWORD *)(v32 + 28) == 0;
                      goto LABEL_23;
                    }
                    EFSMEMOBJ::EFSMEMOBJ(
                      (EFSMEMOBJ *)v47,
                      (const struct EFSTATE::PARAMETERS *)v50,
                      *(_DWORD *)(v16 + 12) + *(_DWORD *)(v18 + 12),
                      a3,
                      a11,
                      a10);
                    if ( !v47[0] )
                      goto LABEL_24;
                    v23 = 1;
                    if ( (*(_DWORD *)(*(_QWORD *)a8 + 2168LL) & 0x2000) != 0 )
                    {
                      if ( !(unsigned int)bScanFamily(
                                            (struct FHOBJ *)&v40,
                                            0,
                                            (struct FHOBJ *)v42,
                                            2,
                                            (struct FHOBJ *)v42,
                                            1u,
                                            (struct EFSOBJ *)v47,
                                            a3,
                                            a4,
                                            0LL) )
                        goto LABEL_24;
                      v24 = *a6;
                      if ( !*a6 )
                        goto LABEL_22;
                      v40 = *a6;
                      v41 = *v24;
                      if ( !(unsigned int)FHOBJ::bValid((FHOBJ *)&v40) )
                        goto LABEL_24;
                      v25 = 1;
                      v26 = 2;
                    }
                    else
                    {
                      if ( !(unsigned int)bScanFamily(
                                            (struct FHOBJ *)&v40,
                                            0,
                                            (struct FHOBJ *)v42,
                                            1,
                                            (struct FHOBJ *)v42,
                                            2u,
                                            (struct EFSOBJ *)v47,
                                            a3,
                                            a4,
                                            0LL) )
                        goto LABEL_24;
                      v27 = *a6;
                      if ( !*a6 )
                        goto LABEL_22;
                      v40 = *a6;
                      v41 = *v27;
                      if ( !(unsigned int)FHOBJ::bValid((FHOBJ *)&v40) )
                        goto LABEL_24;
                      v25 = 2;
                      v26 = 1;
                    }
                    if ( !(unsigned int)bScanFamily(
                                          (struct FHOBJ *)&v40,
                                          v26,
                                          (struct FHOBJ *)&v40,
                                          v25,
                                          0LL,
                                          0,
                                          (struct EFSOBJ *)v47,
                                          a3,
                                          a4,
                                          0LL) )
                      goto LABEL_24;
LABEL_22:
                    v28 = *(_DWORD *)(v47[0] + 28LL) == 0;
LABEL_23:
                    if ( v28 )
                    {
LABEL_25:
                      EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v47);
                      return v23;
                    }
LABEL_24:
                    v23 = 0;
                    goto LABEL_25;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
