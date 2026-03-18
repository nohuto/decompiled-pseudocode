/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001EEB0
 * Callers:
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1400C67F4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     EngCreatePalette @ 0x1400C6970 (EngCreatePalette.c)
 *     GreCreatePalette @ 0x14019D1D0 (GreCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401C9224 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     bInitPALOBJ @ 0x1402E8008 (bInitPALOBJ.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     XEPALOBJ_FreePaletteMemory @ 0x14001D130 (XEPALOBJ_FreePaletteMemory.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F850 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001F87C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001F910 (HmgInsertObjectInternal.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        struct OBJECT **this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v11; // rcx
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  unsigned int v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // edi
  __int64 v17; // rcx
  struct OBJECT *v18; // rax
  __int64 UserSessionState; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // rcx
  _DWORD *v24; // r8
  int j; // edx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // r9d
  unsigned int v31; // eax
  _DWORD *v32; // r10
  int k; // edx
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  int v38; // r8d
  _DWORD *v39; // r9
  int m; // edx
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  int v44; // eax
  int v45; // r8d
  struct OBJECT *v46; // rax
  int v47; // ecx
  int v48; // ecx
  struct OBJECT *v49; // rbx
  __int64 inserted; // rax
  struct OBJECT *v51; // rcx
  char *v53; // rcx
  struct OBJECT *v54; // rdi
  __int64 v55; // rbx
  _DWORD *v56; // rdx
  int v57; // r13d
  _DWORD *v58; // r9
  const unsigned int *v59; // rcx
  _QWORD *Pool2; // rax
  unsigned int n; // r8d
  int v62; // eax
  unsigned __int64 v63; // rdx
  _DWORD *i; // rax
  int v65; // r13d
  unsigned __int64 Buffer; // [rsp+20h] [rbp-138h]
  PVOID Buffera; // [rsp+20h] [rbp-138h]
  __int64 Bufferb; // [rsp+20h] [rbp-138h]
  unsigned __int64 v69; // [rsp+28h] [rbp-130h]
  __int64 v70; // [rsp+48h] [rbp-110h]
  _BYTE v71[32]; // [rsp+50h] [rbp-108h] BYREF
  struct OBJECT *v72; // [rsp+70h] [rbp-E8h]
  _DWORD *v73; // [rsp+78h] [rbp-E0h]
  PVOID BackTrace[27]; // [rsp+80h] [rbp-D8h] BYREF
  char v75; // [rsp+168h] [rbp+10h]
  unsigned int v76; // [rsp+170h] [rbp+18h]

  v76 = a3;
  v11 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v70 = v11;
  v12 = 4;
  if ( a2 == 16 )
    goto LABEL_2;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v13 = a8 & 0x3100300;
      v76 = 0;
      v14 = a5;
      if ( !a5 )
        return 0LL;
      v16 = a7;
      if ( !a7 )
        return 0LL;
      v15 = a6;
      if ( !a6 )
        return 0LL;
      v12 = 52;
      goto LABEL_4;
    }
    if ( a2 != 4 && a2 != 8 )
      return 0LL;
LABEL_2:
    v13 = a8 & 0x3100100 | 0x200;
    v76 = 0;
    if ( a2 == 16 )
    {
LABEL_3:
      v14 = a5;
      v15 = a6;
      v16 = a7;
      goto LABEL_4;
    }
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
    v12 = 52;
LABEL_4:
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v11) + 88) + 4272LL) + 8LL);
    if ( v17 )
      v18 = (struct OBJECT *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v17 + 48));
    else
      v18 = 0LL;
    *this = v18;
    if ( !v18 )
      return 0LL;
    if ( v12 )
    {
      UserSessionState = W32GetUserSessionState();
      v20 = v12;
      Buffer = v12;
      v21 = UserSessionState + 72032;
      v22 = *(_DWORD *)(UserSessionState + 72032);
      switch ( v22 )
      {
        case 0:
          goto LABEL_9;
        case 1:
          if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                 (NSInstrumentation::CLeakTrackingAllocator *)v21,
                 0x6C706147u)
            && Buffer + 16 >= Buffer )
          {
            Pool2 = (_QWORD *)ExAllocatePool2(256LL, Buffer + 16, 1819304263LL);
            Buffera = Pool2;
            if ( !Pool2
              || (_InterlockedIncrement64((volatile signed __int64 *)(v21 + 112)),
                  *Pool2 = 1819304263LL,
                  v23 = (__int64)(Pool2 + 2),
                  Buffera = Pool2 + 2,
                  Pool2 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *(NSInstrumentation::CPointerHashTable **)(v21 + 8),
                0x6C706147uLL);
              v23 = (__int64)Buffera;
            }
            goto LABEL_11;
          }
          break;
        case 2:
          if ( (*(_DWORD *)(v21 + 80) & 0x6C706147) != 0x6C706147 )
          {
LABEL_9:
            v23 = ExAllocatePool2(256LL, v20, 1819304263LL);
            if ( v23 )
              _InterlockedIncrement64((volatile signed __int64 *)(v21 + 112));
            goto LABEL_11;
          }
          v63 = 0LL;
          for ( i = (_DWORD *)(v21 + 48); ; ++i )
          {
            v69 = v63;
            if ( v63 >= *(unsigned int *)(v21 + 84) )
              goto LABEL_9;
            if ( *i == 1819304263 )
              break;
            ++v63;
          }
          v75 = 0;
          if ( v20 < 0x1000 || (v20 & 0xFFF) != 0 )
          {
            v75 = 1;
            v20 += 16LL;
          }
          Bufferb = ExAllocatePool2(256LL, v20, 1819304263LL);
          if ( Bufferb )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v21 + 128));
            memset(BackTrace, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v75 && (unsigned __int64)(Bufferb & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v21,
                                      Bufferb,
                                      v69,
                                      BackTrace) )
              {
                v23 = Bufferb + 16;
                goto LABEL_11;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v21,
                                         Bufferb,
                                         v69,
                                         BackTrace) )
            {
              v23 = Bufferb;
              goto LABEL_11;
            }
            _InterlockedIncrement64((volatile signed __int64 *)(v21 + 136));
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Bufferb);
          }
          break;
      }
    }
    v23 = 0LL;
LABEL_11:
    *((_QWORD *)*this + 16) = v23;
    if ( *((_QWORD *)*this + 16) )
    {
      *((_DWORD *)*this + 6) = v13 | a2;
      *((_DWORD *)*this + 7) = v76;
      *((_DWORD *)*this + 8) = _InterlockedIncrement((volatile signed __int32 *)(v70 + 3672));
      *((_QWORD *)*this + 5) = 0LL;
      *((_QWORD *)*this + 6) = 0LL;
      *((_DWORD *)*this + 15) = 0;
      *((_DWORD *)*this + 14) = 0;
      *((_QWORD *)*this + 9) = 0LL;
      *((_QWORD *)*this + 10) = 0LL;
      *((_QWORD *)*this + 11) = 0LL;
      *((_DWORD *)*this + 9) = 0;
      *((_QWORD *)*this + 13) = 0LL;
      *((_QWORD *)*this + 15) = *this;
      *((_QWORD *)*this + 14) = *((_QWORD *)*this + 16);
      if ( a2 == 8 )
      {
LABEL_13:
        **((_DWORD **)*this + 14) = v14;
        *(_DWORD *)(*((_QWORD *)*this + 14) + 4LL) = v15;
        *(_DWORD *)(*((_QWORD *)*this + 14) + 8LL) = v16;
        if ( v14 == 255 && v15 == 65280 && v16 == 16711680 )
        {
          *((_DWORD *)*this + 6) |= 4u;
        }
        else if ( v14 == 63488 && v15 == 2016 && v16 == 31 )
        {
          *((_DWORD *)*this + 6) |= 0x400000u;
        }
        else if ( v14 == 31744 && v15 == 992 && v16 == 31 )
        {
          *((_DWORD *)*this + 6) |= 0x200000u;
        }
        v24 = (_DWORD *)*((_QWORD *)*this + 14);
        for ( j = 0; (v14 & 1) == 0; ++j )
          v14 >>= 1;
        v26 = j;
        do
        {
          v27 = v26;
          v14 >>= 1;
          ++v26;
        }
        while ( (v14 & 1) != 0 );
        v28 = v26 - j;
        v24[9] = v28;
        v29 = v27 - 7;
        if ( v28 <= 8 )
          v29 = j;
        v24[6] = v29;
        v30 = 8;
        if ( v28 > 8 )
          v31 = 0;
        else
          v31 = 8 - v28;
        v24[3] = v31;
        v32 = (_DWORD *)*((_QWORD *)*this + 14);
        for ( k = 0; (v15 & 1) == 0; ++k )
          v15 >>= 1;
        v34 = k;
        do
        {
          v35 = v34;
          v15 >>= 1;
          ++v34;
        }
        while ( (v15 & 1) != 0 );
        v36 = v34 - k;
        v32[10] = v36;
        v37 = v35 - 7;
        if ( v36 <= 8 )
          v37 = k;
        v32[7] = v37;
        v38 = 16;
        if ( v36 <= 8 )
          v30 = 16 - v36;
        v32[4] = v30;
        v39 = (_DWORD *)*((_QWORD *)*this + 14);
        for ( m = 0; (v16 & 1) == 0; ++m )
          v16 >>= 1;
        v41 = m;
        do
        {
          v42 = v41;
          v16 >>= 1;
          ++v41;
        }
        while ( (v16 & 1) != 0 );
        v43 = v41 - m;
        v39[11] = v43;
        v44 = v42 - 7;
        if ( v43 <= 8 )
          v44 = m;
        v39[8] = v44;
        if ( v43 <= 8 )
          v38 = 24 - v43;
        v39[5] = v38;
        goto LABEL_41;
      }
      v57 = a2 - 1;
      if ( v57 )
      {
        v65 = v57 - 1;
        if ( !v65 || v65 == 2 )
          goto LABEL_13;
      }
      else
      {
        v58 = (_DWORD *)*((_QWORD *)*this + 14);
        v59 = a4;
        if ( a4 )
        {
          for ( n = 0; n < v76; ++n )
          {
            v62 = *v59++;
            *v58++ = v62;
            v73 = v58;
          }
          v45 = 4;
LABEL_42:
          v46 = *this;
          if ( *((_DWORD *)*this + 7) )
          {
            v48 = 2;
            v45 = 1;
            goto LABEL_47;
          }
          v47 = *((_DWORD *)v46 + 6);
          if ( (v47 & 2) == 0 )
          {
            if ( (v47 & 8) != 0 )
              v45 = 6;
            else
              v45 = 8 - ((v47 & 0x10) != 0);
            goto LABEL_46;
          }
          v56 = (_DWORD *)*((_QWORD *)v46 + 14);
          if ( v56[2] == 31 )
          {
            if ( v56[1] == 2016 && *v56 == 63488 )
            {
              v45 = 3;
              goto LABEL_46;
            }
            if ( v56[1] == 992 && *v56 == 31744 )
              goto LABEL_46;
          }
          v45 = 5;
LABEL_46:
          v48 = v45;
LABEL_47:
          *((_DWORD *)v46 + 25) = v45;
          *((_DWORD *)*this + 24) = v48;
          HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v71);
          v49 = *this;
          inserted = 0LL;
          if ( !v72 )
          {
            inserted = HmgInsertObjectInternal(*this);
            v51 = v72;
            if ( inserted )
              v51 = v49;
            v72 = v51;
          }
          if ( inserted )
          {
            HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v71);
            return 1LL;
          }
          HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v71);
          v53 = (char *)*((_QWORD *)*this + 16);
          if ( v53 )
            GreDeleteFastMutex(v53);
          v54 = *this;
          v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v53) + 88) + 4272LL) + 8LL);
          if ( v55 )
          {
            memset(v54, 0, 0x90uLL);
            ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v55 + 48), v54);
          }
          *this = 0LL;
          return 0LL;
        }
        if ( v76 )
          memset(*((void **)*this + 14), 0, 4LL * v76);
      }
LABEL_41:
      v45 = 4;
      goto LABEL_42;
    }
    XEPALOBJ_FreePaletteMemory((__int64)this);
    return 0LL;
  }
  v12 = 4 * a3 + 4;
  v13 = a8 & 0x3102F00;
  if ( a3 )
    goto LABEL_3;
  return 0LL;
}
