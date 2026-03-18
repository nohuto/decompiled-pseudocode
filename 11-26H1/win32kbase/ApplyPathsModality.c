/*
 * XREFs of ApplyPathsModality @ 0x1401F498C
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 * Callees:
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14007EC3C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x14014E374 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1401518AC (ApplyPathModalityToCdsRegistryStore.c)
 *     DrvNotifyModeChangeStartStop @ 0x140188CE8 (DrvNotifyModeChangeStartStop.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        char a3,
        void *a4,
        char *a5,
        _BYTE *a6,
        bool *a7,
        char **a8,
        int *a9,
        enum _DXGK_DIAG_SDC_STAGE *a10,
        __int64 a11)
{
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int *v21; // r15
  __int64 *v22; // r14
  unsigned int *v23; // rbp
  __int64 DxgkWin32kInterface; // rax
  int v25; // eax
  int v26; // ebx
  unsigned int v27; // ecx
  __int64 *v28; // r13
  int v29; // ebx
  unsigned int v30; // edi
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned int v36; // ebx
  unsigned int i; // r8d
  char **v38; // rdi
  char *v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // r9d
  __int64 v44; // rcx
  unsigned int j; // edx
  __int64 v46; // r8
  unsigned __int8 v47; // [rsp+50h] [rbp-38h] BYREF
  int v48[3]; // [rsp+54h] [rbp-34h] BYREF

  v48[0] = 0;
  *a6 = 0;
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    *a7 = 0;
  v17 = ApplyPathModalityToCdsRegistryStore(a1, v14, v15, v16);
  if ( v17 < 0 )
  {
    *a9 = v17;
    *(_DWORD *)a10 = 50;
    return 0xFFFFFFFFLL;
  }
  DrvNotifyModeChangeStartStop(1LL);
  v21 = (unsigned int *)(a1 + 40);
  v22 = (__int64 *)(a1 + 48);
  v23 = (unsigned int *)(a1 + 40);
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( !*v22 )
      goto LABEL_9;
    v23 = (unsigned int *)(a1 + 40);
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 12406;
LABEL_9:
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v20, v19);
  v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(DxgkWin32kInterface + 160))(a2 | 0x20000, a1, a11);
  if ( v25 >= 0 )
  {
    v27 = *v21;
    v28 = (__int64 *)(a1 + 48);
    if ( *v21 )
    {
      v21 = v23;
      if ( *v22 )
        goto LABEL_15;
      v28 = (__int64 *)(a1 + 48);
    }
    WdLogSingleEntry0(1LL);
    v27 = *v21;
    v23 = v21;
    WdLogGlobalForLineNumber = 12431;
LABEL_15:
    v29 = HIWORD(a2) & 0x40;
    v30 = 0;
    if ( v27 )
    {
      v31 = *v22;
      do
      {
        v32 = v27;
        if ( (v29 & 0x40) != 0 )
        {
          v33 = 340LL * v30;
          v34 = *(unsigned int *)(v33 + v31 + 88);
          v35 = *(unsigned int *)(v33 + v31 + 120);
          if ( (_DWORD)v34 != (_DWORD)v35 )
          {
            WdLogSingleEntry4(4LL, *(int *)(v33 + v31 + 4), *(unsigned int *)(v33 + v31), v34, v35);
            v32 = *v23;
            v29 &= ~0x40u;
            WdLogGlobalForLineNumber = 12460;
          }
        }
        v31 = *v28;
        v27 = v32;
        if ( *(_BYTE *)(340LL * v30 + *v28 + 76) )
          a3 = 1;
        ++v30;
      }
      while ( v30 < v32 );
    }
    v36 = v29 & 0xFFFFFFF6;
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 20); ++i )
    {
      if ( !_bittest64((const signed __int64 *)(296LL * i + a1 + 56), 0x24u) )
      {
        v38 = a8;
        v39 = a5;
        v26 = DrvChangeDisplaySettingsInternal(
                0LL,
                0LL,
                (struct D3DKMT_GETPATHSMODALITY *)a1,
                a4,
                a5,
                a8,
                0,
                v36 | (8 * (a3 & 1)) | 0x86,
                a7);
        goto LABEL_29;
      }
    }
    v39 = a5;
    v38 = a8;
    v47 = 0;
    DrvChangeDisplayFallback(a4, a3, 1, (struct _MDEV *)a5, (struct _MDEV **)a8, a10, (bool *)&v47, v48);
    v26 = v48[0];
LABEL_29:
    if ( v26 >= 0 )
    {
      if ( v26 == 1 )
      {
        v26 = -1;
        *(_DWORD *)a10 = 52;
        *a9 = -1073741823;
      }
    }
    else
    {
      *(_DWORD *)a10 = 16;
      *a9 = -1073741823;
      *a6 = 1;
    }
    v42 = DxDdGetDxgkWin32kInterface(v41, v40);
    (*(void (__fastcall **)(__int64))(v42 + 168))(a1);
    if ( v26 == 2 )
    {
      v43 = *(_DWORD *)(a1 + 40);
      if ( v43 )
      {
        v44 = *(_QWORD *)(a1 + 48);
        if ( v44 )
        {
          for ( j = 0; j < v43; ++j )
          {
            v46 = 340LL * j;
            if ( *(_DWORD *)(v46 + v44 + 88)
              || *(_DWORD *)(v46 + v44 + 92)
              || *(_DWORD *)(v46 + v44 + 124)
              || *(_DWORD *)(v46 + v44 + 132) )
            {
              LOBYTE(v44) = 1;
              *v38 = v39;
              v26 = 0;
              GreIncrementDisplaySettingsUniqueness(v44);
              goto LABEL_44;
            }
          }
        }
      }
    }
    goto LABEL_44;
  }
  v26 = -1;
  *a6 = 1;
  *a9 = v25;
  *(_DWORD *)a10 = 51;
LABEL_44:
  DrvNotifyModeChangeStartStop(0LL);
  return (unsigned int)v26;
}
