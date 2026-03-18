/*
 * XREFs of VidSchCreateSystemDevices @ 0x1400FC140
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400A320C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x14002C758 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchiCreateContextInternal @ 0x14002D178 (VidSchiCreateContextInternal.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1400379BC (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x140046D68 (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     VidSchiCreateDeviceInternal @ 0x1400FC6AC (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateSystemDevices(struct _VIDSCH_GLOBAL *a1)
{
  __int64 *v1; // r14
  int DeviceInternal; // edi
  __int64 v4; // rcx
  struct _VIDSCH_DEVICE **v5; // r12
  int v6; // eax
  int SoftwareOnlyNodeForDriverEngine; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int i; // edi
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int j; // esi
  struct _VIDSCH_DEVICE *v22; // rcx
  __int64 v23; // r14
  __int64 v24; // r15
  int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int128 v31; // [rsp+50h] [rbp-30h] BYREF
  __int128 v32; // [rsp+60h] [rbp-20h]
  int v33; // [rsp+70h] [rbp-10h]

  v1 = (__int64 *)((char *)a1 + 264);
  v31 = 0LL;
  LODWORD(v31) = 1;
  *(_QWORD *)&v32 = 0LL;
  DeviceInternal = VidSchiCreateDeviceInternal(a1);
  if ( DeviceInternal < 0 )
  {
    WdLogSingleEntry1(1LL, *((_QWORD *)a1 + 2));
    v4 = *((_QWORD *)a1 + 2);
    WdLogGlobalForLineNumber = 1144;
LABEL_3:
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return (unsigned int)DeviceInternal;
  }
  v5 = (struct _VIDSCH_DEVICE **)((char *)a1 + 320);
  v31 = 0LL;
  LODWORD(v31) = 17;
  *(_QWORD *)&v32 = 0LL;
  DeviceInternal = VidSchiCreateDeviceInternal(a1);
  if ( DeviceInternal < 0 )
  {
    WdLogSingleEntry1(1LL, *((_QWORD *)a1 + 2));
    WdLogGlobalForLineNumber = 1155;
    goto LABEL_3;
  }
  v33 = 0;
  v31 = 0LL;
  HIDWORD(v31) = 7;
  LODWORD(v31) = 268;
  v6 = *((_DWORD *)a1 + 12) * *((_DWORD *)a1 + 40);
  v32 = 0LL;
  HIDWORD(v32) = 2 * v6;
  SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine((__int64)a1, 0);
  v8 = *v1;
  DWORD1(v31) = SoftwareOnlyNodeForDriverEngine;
  v9 = VidSchiCreateContextInternal(v8, &v31, 0LL);
  *((_QWORD *)a1 + 34) = v9;
  if ( !v9 )
  {
    WdLogSingleEntry1(1LL, *((_QWORD *)a1 + 2));
    WdLogGlobalForLineNumber = 1184;
LABEL_35:
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return (unsigned int)-1073741823;
  }
  for ( i = 0; i < *((_DWORD *)a1 + 23); ++i )
  {
    v12 = *((_QWORD *)a1 + 87);
    v13 = *((_DWORD *)a1 + 192);
    v14 = v12 + 8LL * i;
    if ( i >= v13 )
      v14 = *((_QWORD *)a1 + 87);
    if ( (*(_DWORD *)(*(_QWORD *)v14 + 12LL) & 2) == 0 )
    {
      v15 = v12 + 8LL * i;
      if ( i >= v13 )
        v15 = *((_QWORD *)a1 + 87);
      if ( (*(_DWORD *)(*(_QWORD *)v15 + 12LL) & 0x40) == 0 )
      {
        v33 = 0;
        HIDWORD(v31) = 7;
        DWORD1(v31) = i;
        LODWORD(v31) = 20;
        v32 = 0LL;
        v16 = VidSchiSchedulerNodeToDriverEngine((__int64)a1, i);
        v17 = *v1;
        DWORD2(v31) = v16;
        v18 = VidSchiCreateContextInternal(v17, &v31, 0LL);
        v19 = *((_QWORD *)a1 + 87) + 8LL * i;
        if ( i >= *((_DWORD *)a1 + 192) )
          v19 = *((_QWORD *)a1 + 87);
        *(_QWORD *)(*(_QWORD *)v19 + 32LL) = v18;
        v20 = *((_QWORD *)a1 + 87) + 8LL * i;
        if ( i >= *((_DWORD *)a1 + 192) )
          v20 = *((_QWORD *)a1 + 87);
        if ( !*(_QWORD *)(*(_QWORD *)v20 + 32LL) )
        {
          WdLogSingleEntry2(1LL, i, *((_QWORD *)a1 + 2));
          WdLogGlobalForLineNumber = 1219;
          goto LABEL_35;
        }
      }
    }
    RtlSetBitEx((char *)a1 + 552, i);
  }
  for ( j = 0; j < *((_DWORD *)a1 + 21); ++j )
  {
    v22 = *v5;
    v23 = 352LL * j;
    v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 3032LL);
    v25 = *((unsigned __int8 *)a1 + j + 96) + *(unsigned __int16 *)(v23 + v24 + 2);
    v33 = 0;
    DWORD1(v31) = v25;
    LODWORD(v31) = 29;
    v32 = 0LL;
    *((_QWORD *)&v31 + 1) = j | 0x700000000LL;
    if ( *((_BYTE *)a1 + 63) )
    {
      LODWORD(v31) = 2077;
      *(_QWORD *)(*((_QWORD *)a1 + 42) + 8LL * j) = VidSchiCreateHwContextInternal(
                                                      v22,
                                                      (struct _VIDSCH_CONTEXT_DATA *)&v31,
                                                      0LL);
      if ( !*(_QWORD *)(*((_QWORD *)a1 + 42) + 8LL * j) )
      {
        WdLogSingleEntry2(1LL, j, *((_QWORD *)a1 + 2));
        WdLogGlobalForLineNumber = 1268;
        goto LABEL_35;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 41) + 8LL * j) = VidSchiCreateContextInternal((__int64)v22, &v31, 0LL);
      v26 = *(_QWORD *)(*((_QWORD *)a1 + 41) + 8LL * j);
      if ( !v26 )
      {
        WdLogSingleEntry2(1LL, j, *((_QWORD *)a1 + 2));
        WdLogGlobalForLineNumber = 1283;
        goto LABEL_35;
      }
      *(_BYTE *)(v26 + 649) = 1;
      if ( (*(_BYTE *)(v23 + v24 + 16) & 0xC) == 0xC )
      {
        v27 = *((unsigned __int8 *)a1 + j + 96);
        LODWORD(v31) = v31 | 0x200;
        v28 = (__int64)*v5;
        DWORD1(v31) = *(_DWORD *)(v23 + v24 + 20) + v27;
        *(_QWORD *)(*((_QWORD *)a1 + 44) + 8LL * j) = VidSchiCreateContextInternal(v28, &v31, 0LL);
        v29 = *(_QWORD *)(*((_QWORD *)a1 + 44) + 8LL * j);
        if ( !v29 )
        {
          WdLogSingleEntry2(1LL, j, *((_QWORD *)a1 + 2));
          WdLogGlobalForLineNumber = 1303;
          goto LABEL_35;
        }
        *(_BYTE *)(v29 + 649) = 1;
      }
    }
  }
  return 0LL;
}
