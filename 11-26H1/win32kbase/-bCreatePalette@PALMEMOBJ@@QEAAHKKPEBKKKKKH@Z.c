/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40
 * Callers:
 *     EngCreatePalette @ 0x1400C3940 (EngCreatePalette.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140152360 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1401A50F4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     GreCreatePalette @ 0x1401B9770 (GreCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401F1028 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     bInitPALOBJ @ 0x1402F0008 (bInitPALOBJ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     XEPALOBJ_FreePaletteMemory @ 0x140043F50 (XEPALOBJ_FreePaletteMemory.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C4384 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C43C8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        struct OBJECT **this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  struct Gre::Base::SESSION_GLOBALS *v11; // rcx
  unsigned __int64 v12; // r12
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  unsigned int v15; // edi
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct OBJECT *v21; // rax
  struct OBJECT **v22; // r13
  __int64 v23; // r13
  int v24; // eax
  __int64 v25; // r12
  _DWORD *v26; // r8
  int j; // edx
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // r9d
  unsigned int v33; // eax
  _DWORD *v34; // r10
  int k; // edx
  int v36; // ecx
  int v37; // eax
  unsigned int v38; // ecx
  int v39; // eax
  int v40; // r8d
  _DWORD *v41; // r9
  int m; // edx
  int v43; // ecx
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  int v47; // r15d
  int v48; // r8d
  struct OBJECT *v49; // rax
  int v50; // ecx
  int v51; // ecx
  struct OBJECT *v52; // rbx
  struct HOBJ__ *inserted; // rax
  unsigned int v54; // r8d
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  char *v59; // rcx
  struct OBJECT *v60; // rbx
  __int64 v61; // rcx
  _DWORD *v62; // rdx
  int v63; // r15d
  _DWORD *v64; // rcx
  const unsigned int *v65; // r9
  _QWORD *Pool2; // rax
  unsigned int n; // r8d
  int v68; // eax
  unsigned __int64 v69; // rcx
  _DWORD *i; // rax
  int v71; // r15d
  __int64 v72; // [rsp+30h] [rbp-148h]
  struct Gre::Base::SESSION_GLOBALS *v73; // [rsp+40h] [rbp-138h]
  _BYTE v76[32]; // [rsp+68h] [rbp-110h] BYREF
  struct OBJECT *v77; // [rsp+88h] [rbp-F0h]
  PVOID BackTrace[27]; // [rsp+A0h] [rbp-D8h] BYREF
  char v80; // [rsp+188h] [rbp+10h]
  unsigned int v81; // [rsp+190h] [rbp+18h]

  v81 = a3;
  v11 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(this) + 88);
  v73 = v11;
  v12 = 4LL;
  if ( a2 == 16 )
    goto LABEL_2;
  if ( a2 == 1 )
  {
    v12 = 4 * a3 + 4;
    v13 = a8 & 0x3102F00;
    if ( !a3 )
      return 0LL;
    goto LABEL_7;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 4 && a2 != 8 )
      return 0LL;
LABEL_2:
    v13 = a8 & 0x3100100 | 0x200;
    v81 = 0;
    if ( a2 != 16 )
    {
      if ( a2 == 4 )
      {
        v14 = 255;
        v15 = 65280;
        v16 = 16711680;
      }
      else
      {
        v14 = 16711680;
        v15 = 65280;
        v16 = 255;
      }
      v12 = 52LL;
      goto LABEL_8;
    }
LABEL_7:
    v14 = a5;
    v15 = a6;
    v16 = a7;
    goto LABEL_8;
  }
  v13 = a8 & 0x3100300;
  v81 = 0;
  v14 = a5;
  if ( !a5 )
    return 0LL;
  v16 = a7;
  if ( !a7 )
    return 0LL;
  v15 = a6;
  if ( !a6 )
    return 0LL;
  v12 = 52LL;
LABEL_8:
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v11) + 88) + 4384LL) + 8LL);
  if ( v18 )
    v21 = (struct OBJECT *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v18 + 48));
  else
    v21 = 0LL;
  v22 = this;
  *this = v21;
  if ( !v21 )
    return 0LL;
  if ( !(_DWORD)v12 )
  {
    v25 = 0LL;
    goto LABEL_16;
  }
  v23 = W32GetUserSessionState(v18, v17, v19) + 72016;
  v24 = *(_DWORD *)v23;
  if ( !*(_DWORD *)v23 )
    goto LABEL_13;
  if ( v24 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
           (NSInstrumentation::CLeakTrackingAllocator *)v23,
           0x6C706147u) )
    {
      v17 = v12 + 16;
      if ( v12 + 16 >= v12 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(256LL, v17, 1819304263LL);
        v25 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)(v23 + 112)),
              *Pool2 = 1819304263LL,
              v25 = (__int64)(Pool2 + 2),
              Pool2 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v23 + 8),
            0x6C706147uLL);
        }
        goto LABEL_15;
      }
    }
  }
  else if ( v24 == 2 )
  {
    if ( (*(_DWORD *)(v23 + 80) & 0x6C706147) != 0x6C706147 )
    {
LABEL_13:
      v25 = ExAllocatePool2(256LL, v12, 1819304263LL);
      if ( v25 )
        _InterlockedIncrement64((volatile signed __int64 *)(v23 + 112));
      goto LABEL_15;
    }
    v69 = 0LL;
    for ( i = (_DWORD *)(v23 + 48); ; ++i )
    {
      v72 = v69;
      if ( v69 >= *(unsigned int *)(v23 + 84) )
        goto LABEL_13;
      if ( *i == 1819304263 )
        break;
      ++v69;
    }
    v80 = 0;
    if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
    {
      v80 = 1;
      v12 += 16LL;
    }
    v25 = ExAllocatePool2(256LL, v12, 1819304263LL);
    if ( v25 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v23 + 128));
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v80 && (unsigned __int64)(v25 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               v23,
               (const void *)v25,
               v72,
               (NSInstrumentation::CBackTrace *)BackTrace) )
        {
          v25 += 16LL;
          goto LABEL_15;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v23,
                                   v25,
                                   v72,
                                   BackTrace) )
      {
        goto LABEL_15;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v23 + 136));
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v25);
    }
  }
  v25 = 0LL;
LABEL_15:
  v22 = this;
LABEL_16:
  *((_QWORD *)*v22 + 16) = v25;
  if ( *((_QWORD *)*v22 + 16) )
  {
    *((_DWORD *)*v22 + 6) = v13 | a2;
    *((_DWORD *)*v22 + 7) = v81;
    *((_DWORD *)*v22 + 8) = _InterlockedIncrement((volatile signed __int32 *)v73 + 944);
    *((_QWORD *)*v22 + 5) = 0LL;
    *((_QWORD *)*v22 + 6) = 0LL;
    *((_DWORD *)*v22 + 15) = 0;
    *((_DWORD *)*v22 + 14) = 0;
    *((_QWORD *)*v22 + 9) = 0LL;
    *((_QWORD *)*v22 + 10) = 0LL;
    *((_QWORD *)*v22 + 11) = 0LL;
    *((_DWORD *)*v22 + 9) = 0;
    *((_QWORD *)*v22 + 13) = 0LL;
    *((_QWORD *)*v22 + 15) = *v22;
    *((_QWORD *)*v22 + 14) = *((_QWORD *)*v22 + 16);
    if ( a2 == 8 )
    {
LABEL_18:
      **((_DWORD **)*v22 + 14) = v14;
      *(_DWORD *)(*((_QWORD *)*v22 + 14) + 4LL) = v15;
      *(_DWORD *)(*((_QWORD *)*v22 + 14) + 8LL) = v16;
      if ( v14 == 255 && v15 == 65280 && v16 == 16711680 )
      {
        *((_DWORD *)*v22 + 6) |= 4u;
      }
      else if ( v14 == 63488 && v15 == 2016 && v16 == 31 )
      {
        *((_DWORD *)*v22 + 6) |= 0x400000u;
      }
      else if ( v14 == 31744 && v15 == 992 && v16 == 31 )
      {
        *((_DWORD *)*v22 + 6) |= 0x200000u;
      }
      v26 = (_DWORD *)*((_QWORD *)*v22 + 14);
      for ( j = 0; (v14 & 1) == 0; ++j )
        v14 >>= 1;
      v28 = j;
      do
      {
        v29 = v28;
        v14 >>= 1;
        ++v28;
      }
      while ( (v14 & 1) != 0 );
      v30 = v28 - j;
      v26[9] = v30;
      v31 = v29 - 7;
      if ( v30 <= 8 )
        v31 = j;
      v26[6] = v31;
      v32 = 8;
      if ( v30 > 8 )
        v33 = 0;
      else
        v33 = 8 - v30;
      v26[3] = v33;
      v34 = (_DWORD *)*((_QWORD *)*v22 + 14);
      for ( k = 0; (v15 & 1) == 0; ++k )
        v15 >>= 1;
      v36 = k;
      do
      {
        v37 = v36;
        v15 >>= 1;
        ++v36;
      }
      while ( (v15 & 1) != 0 );
      v38 = v36 - k;
      v34[10] = v38;
      v39 = v37 - 7;
      if ( v38 <= 8 )
        v39 = k;
      v34[7] = v39;
      v40 = 16;
      if ( v38 <= 8 )
        v32 = 16 - v38;
      v34[4] = v32;
      v41 = (_DWORD *)*((_QWORD *)*v22 + 14);
      for ( m = 0; (v16 & 1) == 0; ++m )
        v16 >>= 1;
      v43 = m;
      do
      {
        v44 = v43;
        v16 >>= 1;
        ++v43;
      }
      while ( (v16 & 1) != 0 );
      v45 = v43 - m;
      v41[11] = v45;
      v46 = v44 - 7;
      if ( v45 <= 8 )
        v46 = m;
      v41[8] = v46;
      if ( v45 <= 8 )
        v40 = 24 - v45;
      v41[5] = v40;
      goto LABEL_46;
    }
    v63 = a2 - 1;
    if ( v63 )
    {
      v71 = v63 - 1;
      if ( !v71 || v71 == 2 )
        goto LABEL_18;
    }
    else
    {
      v64 = (_DWORD *)*((_QWORD *)*v22 + 14);
      v65 = a4;
      if ( a4 )
      {
        for ( n = 0; n < v81; ++n )
        {
          v68 = *v65++;
          *v64++ = v68;
        }
        v48 = 4;
        v47 = a9;
LABEL_47:
        v49 = *this;
        if ( *((_DWORD *)*this + 7) )
        {
          v51 = 2;
          v48 = 1;
LABEL_52:
          *((_DWORD *)v49 + 25) = v48;
          *((_DWORD *)*this + 24) = v51;
          HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v76);
          v52 = *v22;
          inserted = 0LL;
          if ( !v77 )
          {
            v54 = 11;
            if ( !v47 )
              v54 = 3;
            inserted = HmgInsertObjectInternal(v73, *v22, v54, 8u);
            if ( !inserted )
            {
LABEL_59:
              HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v76);
              v59 = (char *)*((_QWORD *)*this + 16);
              if ( v59 )
                GreDeleteFastMutex(v59, v56, v57, v58);
              v60 = *this;
              v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v59) + 88) + 4384LL) + 8LL);
              if ( v61 )
              {
                *(_OWORD *)v60 = 0LL;
                *((_OWORD *)v60 + 1) = 0LL;
                *((_OWORD *)v60 + 2) = 0LL;
                *((_OWORD *)v60 + 3) = 0LL;
                *((_OWORD *)v60 + 4) = 0LL;
                *((_OWORD *)v60 + 5) = 0LL;
                *((_OWORD *)v60 + 6) = 0LL;
                *((_OWORD *)v60 + 7) = 0LL;
                *((_OWORD *)v60 + 8) = 0LL;
                ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v61 + 48), v60);
              }
              *this = 0LL;
              return 0LL;
            }
            v77 = v52;
          }
          if ( inserted )
          {
            HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v76);
            return 1LL;
          }
          goto LABEL_59;
        }
        v50 = *((_DWORD *)v49 + 6);
        if ( (v50 & 2) == 0 )
        {
          if ( (v50 & 8) != 0 )
            v48 = 6;
          else
            v48 = 8 - ((v50 & 0x10) != 0);
          goto LABEL_51;
        }
        v62 = (_DWORD *)*((_QWORD *)v49 + 14);
        if ( v62[2] == 31 )
        {
          if ( v62[1] == 2016 && *v62 == 63488 )
          {
            v48 = 3;
            goto LABEL_51;
          }
          if ( v62[1] == 992 && *v62 == 31744 )
            goto LABEL_51;
        }
        v48 = 5;
LABEL_51:
        v51 = v48;
        goto LABEL_52;
      }
      if ( v81 )
        memset(v64, 0, 4LL * v81);
    }
LABEL_46:
    v47 = a9;
    v48 = 4;
    goto LABEL_47;
  }
  XEPALOBJ_FreePaletteMemory((__int64)v22, v17, v19, v20);
  return 0LL;
}
