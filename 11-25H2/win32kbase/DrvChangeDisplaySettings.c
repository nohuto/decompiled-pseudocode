/*
 * XREFs of DrvChangeDisplaySettings @ 0x14013C570
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x14000E350 (PopThreadGuardedObject.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140048BFC (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x140112D38 (--1AUTO_TGO@@MEAA@XZ.c)
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14013E238 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x14013E2BC (--0AUTO_TGO@@IEAA@XZ.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x14013E318 (DrvChangeDisplaySettingsPreValidate.c)
 *     LogDiagCDS @ 0x14019C390 (LogDiagCDS.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 */

__int64 DrvChangeDisplaySettings(
        const UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct _MDEV *a6,
        _QWORD *a7,
        int a8,
        ...)
{
  char *v9; // r13
  __int64 v11; // r15
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  int v14; // ebx
  unsigned int v15; // edi
  int v17; // edi
  __int64 v18; // r9
  struct tagGRAPHICS_DEVICE *v19; // rsi
  struct tagGRAPHICS_DEVICE *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // r14d
  int PruneFlag; // eax
  int v24; // r9d
  int v25; // r10d
  int v26; // eax
  int v27; // [rsp+90h] [rbp-80h] BYREF
  __int64 v28; // [rsp+94h] [rbp-7Ch] BYREF
  struct tagGRAPHICS_DEVICE *v29; // [rsp+A0h] [rbp-70h] BYREF
  void *v30; // [rsp+A8h] [rbp-68h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-60h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-50h]
  __int64 v33; // [rsp+D0h] [rbp-40h]
  __int64 v34; // [rsp+D8h] [rbp-38h]
  void **v35; // [rsp+E0h] [rbp-30h] BYREF
  int v36; // [rsp+E8h] [rbp-28h]
  _QWORD v37[4]; // [rsp+F0h] [rbp-20h] BYREF
  void *retaddr; // [rsp+148h] [rbp+38h]
  int v41; // [rsp+180h] [rbp+70h]
  __int64 v42; // [rsp+190h] [rbp+80h] BYREF
  va_list va; // [rsp+190h] [rbp+80h]
  __int64 v44; // [rsp+198h] [rbp+88h]
  __int64 v45; // [rsp+1A0h] [rbp+90h]
  va_list va1; // [rsp+1A8h] [rbp+98h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v42 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, _QWORD);
  v45 = va_arg(va1, _QWORD);
  v9 = 0LL;
  v27 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v11 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v12 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  *a7 = 0LL;
  v34 = v12 * TimeIncrement;
  v30 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v30, 2LL);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)&v35);
  v14 = v42;
  v35 = (void **)&off_140257A68;
  v15 = DrvChangeDisplaySettingsPreValidate(a1, -(v42 & 1), (__int64)&v29, (__int64)&v28);
  if ( v15 )
  {
    AUTO_TGO::~AUTO_TGO((AUTO_TGO *)&v35);
    AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v30, 3LL);
    return v15;
  }
  v17 = 1;
  if ( !(_DWORD)v28 )
  {
    if ( *(_DWORD *)(v11 + 1132) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 27171;
    }
    v18 = a4;
    v19 = v29;
    v20 = v29;
    *(_DWORD *)(v11 + 1132) = 1;
    v21 = DrvChangeDisplaySettingsInternal(v20, a3, 0LL, v18, a6, a7, a8, v14, 0LL);
    *(_DWORD *)(v11 + 1132) = 0;
    v22 = v21;
    v27 = 1;
    goto LABEL_26;
  }
  v19 = v29;
  LOBYTE(v42) = 0;
  v33 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( a3 )
  {
    if ( (((unsigned __int64)v29 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*((_DWORD *)v29 + 40) & 0x800000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 27207;
    }
    *(_QWORD *)&v31 = v19;
    *(_QWORD *)&v32 = a3;
    HIDWORD(v31) = v14;
    if ( a8 == -1 )
      PruneFlag = DrvGetPruneFlag(v19);
    else
      PruneFlag = a8 != 0;
    DWORD2(v31) = PruneFlag;
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
          (__int64)&v31,
          a6,
          (__int64)a7,
          (__int64)&v27,
          0LL,
          (__int64)va,
          v44,
          0LL,
          v45,
          0LL);
  v22 = v33;
  v9 = (char *)*((_QWORD *)&v32 + 1);
  HIDWORD(v28) = v26;
  v41 = HIDWORD(v33);
  if ( v26 < 0 )
  {
    if ( (int)v33 < 0 )
    {
      v17 = HIDWORD(v33);
      goto LABEL_26;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 27285;
  }
  else
  {
    if ( (int)v33 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 27275;
    }
    if ( (_BYTE)v42 )
    {
      if ( __CFSHR__(v14, 4) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 27279;
      }
      v22 = 2;
    }
  }
  v17 = v41;
LABEL_26:
  LogDiagCDS(a1, a3, v19, a5, v14, v34, v22, HIDWORD(v28), v17, v27, v9);
  if ( v9 )
    GreDeleteFastMutex(v9);
  v35 = &AUTO_TGO::`vftable';
  if ( v36 )
    PopThreadGuardedObject(v37);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v30, 3LL);
  return v22;
}
