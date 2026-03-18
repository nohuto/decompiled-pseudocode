/*
 * XREFs of NtUserCalculatePopupWindowPosition @ 0x140159D30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1400446B8 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x140045B58 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     FindBestPos @ 0x140159FA4 (FindBestPos.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCalculatePopupWindowPosition(__int64 a1, __int64 a2, int a3, __int128 *a4, _DWORD *a5)
{
  __int64 *v7; // rsi
  unsigned __int64 *v8; // rdi
  int v9; // ebx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagMONITOR *v16; // r13
  int BestPos; // ebx
  _BYTE *v18; // rcx
  int v20; // ecx
  __int64 v21; // [rsp+50h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-98h]
  __int64 v23[7]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-50h] BYREF

  v7 = (__int64 *)a2;
  v8 = (unsigned __int64 *)a1;
  v23[2] = a1;
  v23[3] = a2;
  v24 = 0LL;
  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( (a3 & 0xFFFE0200) != 0 )
  {
    v20 = 1004;
LABEL_24:
    UserSetLastError(v20);
    goto LABEL_22;
  }
  if ( !a5 )
  {
    v20 = 87;
    goto LABEL_24;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int128 *)MmUserProbeAddress;
    v24 = *a4;
    a4 = &v24;
  }
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v21 = *v7;
  if ( (int)*v7 < 0 || (HIDWORD(*v7) & 0x80000000) != 0 )
  {
    UserSetLastError(87);
  }
  else
  {
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (unsigned __int64 *)MmUserProbeAddress;
    v10 = *v8;
    v23[4] = v10;
    v22 = v10;
    v12 = HIDWORD(v10);
    v13 = MonitorFromPoint(v10, 2u, 0);
    v16 = (struct tagMONITOR *)v13;
    if ( (a3 & 4) != 0 )
    {
      LODWORD(v10) = v10 - (int)v21 / 2;
    }
    else if ( (a3 & 8) != 0 )
    {
      LODWORD(v10) = v10 - v21;
    }
    if ( (a3 & 0x10) != 0 )
    {
      LODWORD(v12) = SHIDWORD(v21) / -2 + v12;
    }
    else if ( (a3 & 0x20) != 0 )
    {
      LODWORD(v12) = v12 - HIDWORD(v21);
    }
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>((__int64)v23, 0LL, v14, v15);
    BestPos = FindBestPos(v10, v12, (__int64)a4, a3 | 0x20000u, (__int64)v23, v16, v22);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v23);
    v18 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v18 = (_BYTE *)MmUserProbeAddress;
    *v18 = *v18;
    v18[15] = v18[15];
    *a5 = (__int16)BestPos;
    a5[1] = SHIWORD(BestPos);
    a5[2] = v21 + (__int16)BestPos;
    v11 = (unsigned int)(SHIWORD(BestPos) + HIDWORD(v21));
    a5[3] = v11;
    v9 = 1;
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
