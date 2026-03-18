/*
 * XREFs of CommitResources_0 @ 0x1400DCFC8
 * Callers:
 *     ?CommitResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400DCFB0 (-CommitResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400DD220 (-VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W.c)
 */

__int64 __fastcall CommitResources_0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r14
  int v6; // ebp
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 **v9; // rcx
  VIDMM_SEGMENT *v10; // r9
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  _QWORD **v17; // r10
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *i; // r9
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned __int16 v31; // ax
  char v32; // dl
  unsigned __int16 v33; // ax
  unsigned int v34; // edx
  signed __int32 v35[8]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v36[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 56);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, (struct DXGFASTMUTEX *const)(*a2 + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2[16] + 32LL))(a2[16], a2);
  if ( v6 < 0 )
  {
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v36);
    return (unsigned int)v6;
  }
  else
  {
    v7 = (__int64 *)(v2 + 240);
    a2[17] = a2[14];
    v8 = a2[8] + 136;
    a2[14] = 0LL;
    v9 = *(__int64 ***)(v8 + 8);
    if ( *v9 != (__int64 *)v8 )
      __fastfail(3u);
    *v7 = v8;
    *(_QWORD *)(v2 + 248) = v9;
    *v9 = v7;
    *(_QWORD *)(v8 + 8) = v7;
    *(_DWORD *)(v2 + 72) = 2;
    *(_BYTE *)(v2 + 42) = 1;
    *((_DWORD *)a2 + 14) |= 3u;
    v10 = (VIDMM_SEGMENT *)a2[8];
    v11 = *((_DWORD *)v10 + 27);
    v12 = 0;
    if ( v11 == 1 )
      v12 = 16;
    v13 = *((_DWORD *)a2 + 11);
    v14 = (2 * v12) | v12 & 0xFFFFFFDF | (2 * (v11 != 1 ? 4 : 0)) & 0xDF | (v11 != 1 ? 4 : 0) | a2[7] & 0xFFFFFFC3;
    *((_DWORD *)a2 + 14) = v14;
    if ( !v13
      || (v31 = VIDMM_SEGMENT::DriverId(v10), (v32 & 0x1F) == v31)
      || (v33 = VIDMM_SEGMENT::DriverId(v10), ((v34 >> 6) & 0x1F) == v33) )
    {
      v15 = 128;
    }
    else
    {
      v15 = 0;
    }
    v16 = a2[2];
    v17 = (_QWORD **)(v2 + 112);
    *((_DWORD *)a2 + 14) = v15 | v14 & 0xFFFFFF7F;
    v18 = 1728LL;
    v19 = *((_DWORD *)v10 + 27);
    v20 = 1728LL;
    if ( v19 != 1 )
      v20 = 1736LL;
    v21 = *(_QWORD *)(v20 + a1) + v16;
    if ( v19 != 1 )
      v18 = 1736LL;
    *(_QWORD *)(v18 + a1) = v21;
    for ( i = *v17; i != v17; i = (_QWORD *)*i )
    {
      v23 = 304LL * ((*((_DWORD *)a2 + 13) >> 2) & 0x3F)
          + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 5) + 32LL) + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 24) + 240LL))
                      + 8LL);
      v24 = *(_DWORD *)(a2[8] + 108);
      v25 = 232LL;
      if ( v24 != 1 )
        v25 = 240LL;
      v26 = *(_QWORD *)(v25 + v23 + 8) + a2[2];
      v27 = 232LL;
      if ( v24 != 1 )
        v27 = 240LL;
      *(_QWORD *)(v27 + v23 + 8) = v26;
    }
    v28 = *(_QWORD *)(v2 + 48);
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 8);
      if ( v29 )
        VidMmRecordAlloc(a1, a2, v29, 0LL);
    }
    _InterlockedOr(v35, 0);
    ++*(_QWORD *)(v4 + 48);
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v36);
    return 0LL;
  }
}
