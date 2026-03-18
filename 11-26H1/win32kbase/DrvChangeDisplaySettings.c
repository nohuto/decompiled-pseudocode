/*
 * XREFs of DrvChangeDisplaySettings @ 0x140175A14
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x14002D790 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x14002F138 (--0AUTO_TGO@@IEAA@XZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140047270 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     LogDiagCDS @ 0x14014FA84 (LogDiagCDS.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x140175DF4 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x140177758 (DrvChangeDisplaySettingsPreValidate.c)
 */

__int64 DrvChangeDisplaySettings(
        const UNICODE_STRING *a1,
        __int64 a2,
        struct _devicemodeW *a3,
        __int64 a4,
        unsigned int a5,
        struct _MDEV *a6,
        struct _MDEV **a7,
        unsigned int a8,
        ...)
{
  struct _devicemodeW *v9; // r13
  __int64 v11; // r15
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edi
  int v17; // edi
  void *v18; // r9
  struct tagGRAPHICS_DEVICE *v19; // rsi
  struct tagGRAPHICS_DEVICE *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // r14d
  int PruneFlag; // eax
  int v24; // r9d
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v31; // [rsp+98h] [rbp-78h]
  struct tagGRAPHICS_DEVICE *v32; // [rsp+A0h] [rbp-70h] BYREF
  void *v33; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v34[2]; // [rsp+B0h] [rbp-60h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-50h]
  __int64 v36; // [rsp+D0h] [rbp-40h]
  __int64 v37; // [rsp+D8h] [rbp-38h]
  void **v38; // [rsp+E0h] [rbp-30h] BYREF
  int v39; // [rsp+E8h] [rbp-28h]
  _QWORD v40[4]; // [rsp+F0h] [rbp-20h] BYREF
  void *retaddr; // [rsp+148h] [rbp+38h]
  int v44; // [rsp+180h] [rbp+70h]
  __int64 v45; // [rsp+190h] [rbp+80h] BYREF
  va_list va; // [rsp+190h] [rbp+80h]
  __int64 v47; // [rsp+198h] [rbp+88h]
  __int64 v48; // [rsp+1A0h] [rbp+90h]
  va_list va1; // [rsp+1A8h] [rbp+98h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v45 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD);
  v31 = 0;
  v9 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v11 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v12 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  *a7 = 0LL;
  v37 = v12 * TimeIncrement;
  v33 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v33, 2LL);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)&v38);
  v14 = v45;
  v38 = (void **)&off_14025F5D0;
  v15 = DrvChangeDisplaySettingsPreValidate(a1, -(v45 & 1), (__int64)&v32, (__int64)&v30 + 4);
  if ( v15 )
  {
    AUTO_TGO::~AUTO_TGO((AUTO_TGO *)&v38);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v33, 3LL);
    return v15;
  }
  v17 = 1;
  if ( !HIDWORD(v30) )
  {
    if ( *(_DWORD *)(v11 + 1220) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 26019;
    }
    v18 = (void *)a4;
    v19 = v32;
    v20 = v32;
    *(_DWORD *)(v11 + 1220) = 1;
    v21 = DrvChangeDisplaySettingsInternal((__int64)v20, a3, 0LL, v18, (char *)a6, (char **)a7, a8, v14, 0LL);
    *(_DWORD *)(v11 + 1220) = 0;
    v22 = v21;
    LODWORD(v30) = 1;
    goto LABEL_26;
  }
  v19 = v32;
  LOBYTE(v45) = 0;
  v36 = 0LL;
  *(_OWORD *)v34 = 0LL;
  v35 = 0LL;
  if ( a3 )
  {
    if ( (((unsigned __int64)v32 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)v32 + 40) & 0x800000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 26055;
    }
    v34[0] = (__int64)v19;
    *(_QWORD *)&v35 = a3;
    HIDWORD(v34[1]) = v14;
    if ( a8 == -1 )
      PruneFlag = DrvGetPruneFlag(v19);
    else
      PruneFlag = a8 != 0;
    LODWORD(v34[1]) = PruneFlag;
  }
  v24 = 32;
  v25 = (__CFSHR__(v14, 2) ? 143 : 79) | (__CFSHR__(v14, 4) ? 0x100 : 0);
  if ( !a3 && __CFSHR__(v14, 2) )
  {
    v25 |= 0x800u;
    v24 = 34;
  }
  v26 = DrvSetDisplayConfig(
          0,
          0,
          v25,
          v24,
          a4,
          a5 != 0,
          0LL,
          (__int64)v34,
          a6,
          a7,
          (__int64)&v30,
          0LL,
          (__int64)va,
          v47,
          0LL,
          v48,
          0LL);
  v22 = v36;
  v9 = (struct _devicemodeW *)*((_QWORD *)&v35 + 1);
  v31 = v26;
  v44 = HIDWORD(v36);
  if ( v26 < 0 )
  {
    if ( (int)v36 < 0 )
    {
      v17 = HIDWORD(v36);
      goto LABEL_26;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 26133;
  }
  else
  {
    if ( (int)v36 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 26123;
    }
    if ( (_BYTE)v45 )
    {
      if ( __CFSHR__(v14, 4) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 26127;
      }
      v22 = 2;
    }
  }
  v17 = v44;
LABEL_26:
  LogDiagCDS((__int64)a1, a3, (__int64)v19, a5, v14, v37, v22, v31, v17, v30, v9);
  if ( v9 )
    GreDeleteFastMutex((char *)v9, v27, v28, v29);
  v38 = &AUTO_TGO::`vftable';
  if ( v39 )
    PopThreadGuardedObject(v40);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v33, 3LL);
  return v22;
}
