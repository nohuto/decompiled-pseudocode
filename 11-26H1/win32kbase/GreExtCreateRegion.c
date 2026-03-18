/*
 * XREFs of GreExtCreateRegion @ 0x140011690
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1400101C0 (NtGdiExtCreateRegion.c)
 * Callees:
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x14000ECF0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140011400 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x140011570 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x14001161C (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x140011B40 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140011C5C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400163D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x14001FA3C (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140021730 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1400238A0 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     vConvertXformToMatrix @ 0x140038CB0 (vConvertXformToMatrix.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x1400C116C (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1400C2A7C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

HRGN __fastcall GreExtCreateRegion(__int64 a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // edi
  REGION *v6; // rbx
  int v7; // ebx
  HRGN v8; // rbx
  struct REGION *v10; // rbx
  unsigned __int64 v11; // r15
  unsigned int sizeScan; // eax
  const struct BaseRustExports *v13; // rdi
  const struct REGION_CORE *v14; // rsi
  struct REGION *Region; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v16; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __m128 *v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  float *v22; // [rsp+58h] [rbp-A8h] BYREF
  char v23; // [rsp+60h] [rbp-A0h]
  char v24[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  __m128 v26; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v27; // [rsp+100h] [rbp+0h]
  int v28; // [rsp+110h] [rbp+10h]

  right = a3->right;
  if ( a3->left != 32 || right > 0xFFFFFFD || 16 * (right + 2) > a2 )
    return 0LL;
  Region = RGNMEMOBJ::AllocateRegion(0x70u);
  v6 = Region;
  if ( !Region )
    goto LABEL_27;
  RGNMEMOBJ::vInit((RGNMEMOBJ *)&Region);
  if ( !AcquireReferenceCountedObjectHandle(2LL, v6, (_QWORD *)v6 + 14) )
  {
    REGION::vDeleteREGION(v6);
    Region = 0LL;
    goto LABEL_27;
  }
  if ( !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&Region, right, a3 + 2) )
  {
LABEL_27:
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&Region);
    EngSetLastError(8u);
    return 0LL;
  }
  if ( !a1 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&Region) == 1 )
    goto LABEL_44;
  v26 = 0LL;
  v28 = 0;
  v27 = 0LL;
  vConvertXformToMatrix(a1, &v26);
  DWORD2(v27) *= 16;
  HIDWORD(v27) *= 16;
  v18 = &v26;
  v26 = _mm_mul_ps(v26, (__m128)_xmm);
  *((float *)&v27 + 1) = *((float *)&v27 + 1) * 16.0;
  *(float *)&v27 = *(float *)&v27 * 16.0;
  EXFORMOBJ::vComputeAccelFlags((float **)&v18, 8);
  if ( !v18 )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&Region);
    return 0LL;
  }
  if ( (v18[2].m128_i8[0] & 0x43) == 0x43 )
  {
LABEL_44:
    RGNOBJ::vTighten((RGNOBJ *)&Region);
    if ( (*((_DWORD *)Region + 13) & 0xF8000000) != 0 && (*((_DWORD *)Region + 13) & 0xF8000000) != 0xF8000000
      || (*((_DWORD *)Region + 16) & 0xF8000000) != 0 && (*((_DWORD *)Region + 16) & 0xF8000000) != 0xF8000000
      || (*((_DWORD *)Region + 15) & 0xF8000000) != 0 && (*((_DWORD *)Region + 15) & 0xF8000000) != 0xF8000000
      || (*((_DWORD *)Region + 14) & 0xF8000000) != 0 && (*((_DWORD *)Region + 14) & 0xF8000000) != 0xF8000000 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&Region);
      return 0LL;
    }
    else
    {
      v8 = RGNOBJ::hrgnAssociate((RGNOBJ *)&Region);
      if ( !v8 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&Region);
    }
    return v8;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v24);
  if ( v25 )
  {
    v22 = (float *)v18;
    v23 = 1;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v7 = (*(__int64 (__fastcall **)(unsigned __int64, char *, float **))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                         + 272LL))(
             ((unsigned __int64)Region + 24) & -(__int64)(Region != 0LL),
             v24,
             &v22);
    }
    else
    {
      v10 = Region;
      v11 = (unsigned __int64)Region + 24;
      sizeScan = REGION_CORE::get_sizeScan((struct REGION *)((char *)Region + 24));
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19, sizeScan);
      if ( v19 )
      {
        if ( WPP_MAIN_CB.Dpc.DeferredContext )
        {
          v13 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
          v14 = (const struct REGION_CORE *)((v19 + 24) & -(__int64)(v19 != 0));
          (*(void (__fastcall **)(const struct REGION_CORE *, unsigned __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                               + 48LL))(
            v14,
            v11 & -(__int64)(v10 != 0LL));
          RgnCaptureLiveMemoryDumpOnZeroSizedScan(v13, v14);
        }
        else
        {
          v21 = (v19 + 24) & -(__int64)(v19 != 0);
          v20 = v11 & -(__int64)(v10 != 0LL);
          RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v21, (const struct RGNCOREOBJ *)&v20);
        }
        v7 = RGNOBJ::bOutline((RGNOBJ *)&v19, (struct EPATHOBJ *)v24, (const struct EXFORMOBJR *)&v22);
      }
      else
      {
        EngSetLastError(8u);
        v7 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
    }
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&Region);
    if ( v7 )
    {
      v17 = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v17, (struct EPATHOBJ *)v24, 1u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
      if ( v17 )
      {
        v16 = 0LL;
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v16, 0x70u);
        if ( v16 )
        {
          RGNMEMOBJ::iReduce((RGNMEMOBJ *)&v16, (struct RGNOBJ *)&v17);
          RGNOBJ::vTighten((RGNOBJ *)&v16);
          if ( ((v16[13] & 0xF8000000) == 0 || (v16[13] & 0xF8000000) == 0xF8000000)
            && ((v16[16] & 0xF8000000) == 0 || (v16[16] & 0xF8000000) == 0xF8000000)
            && ((v16[15] & 0xF8000000) == 0 || (v16[15] & 0xF8000000) == 0xF8000000)
            && ((v16[14] & 0xF8000000) == 0 || (v16[14] & 0xF8000000) == 0xF8000000) )
          {
            v8 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v16);
            if ( !v8 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
          }
          else
          {
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
            v8 = 0LL;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v24);
          return v8;
        }
      }
      EngSetLastError(8u);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
    }
  }
  else
  {
    EngSetLastError(8u);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&Region);
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v24);
  return 0LL;
}
