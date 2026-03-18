/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14011D380
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x14007FA6C (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DrvIsUniformSpaceMapping @ 0x14011D8F0 (DrvIsUniformSpaceMapping.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x14011D93C (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x14011D99C (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     IntersectRect @ 0x14011D9FC (IntersectRect.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x14011DA70 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x14011DBC0 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x14011DC04 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *a1, unsigned int a2, int a3)
{
  struct tagMONITOR *Monitor; // rdi
  __int64 v4; // rbx
  int v5; // r15d
  __int64 v6; // r12
  unsigned __int16 MonitorLogicalDPI; // r14
  __int64 v8; // r13
  HDEV v9; // rbp
  int v10; // edx
  int v11; // ecx
  HDC DisplayDC; // rbx
  int v13; // r8d
  int v14; // eax
  unsigned __int8 v15; // si
  __int64 UserSessionState; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  struct _REFCOUNTED_DPI_INFORMATION *MonitorDpiInfo; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  HDEV v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  int v33; // ecx
  _DWORD *v34; // rdx
  __int64 v35; // rcx
  int v36; // r8d
  _QWORD *v37; // rdx
  char *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int128 v44; // [rsp+20h] [rbp-58h]
  unsigned __int16 MonitorPhysicalDPI; // [rsp+88h] [rbp+10h]

  Monitor = a1;
  v4 = a2;
  v5 = 1;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 56968) + 16LL);
  MonitorLogicalDPI = 96;
  v8 = v6 + 56 * v4;
  MonitorPhysicalDPI = 96;
  v9 = *(HDEV *)(v8 + 40);
  v44 = *(_OWORD *)(((unsigned int)DrvIsUniformSpaceMapping(v6) != 0 ? 0x14 : 0) + v8 + 56);
  DisplayDC = (HDC)GreCreateDisplayDC(v9, 0, 0);
  v14 = v44;
  if ( DisplayDC )
  {
    if ( (GreGetDeviceCaps(DisplayDC, 94) & 0x4000) != 0 )
    {
      v5 = 0;
    }
    else
    {
      MonitorLogicalDPI = GetMonitorLogicalDPI(v9);
      MonitorPhysicalDPI = GetMonitorPhysicalDPI(v9);
    }
    GrepDeleteDC(DisplayDC, 0x400000);
    if ( !v5 )
      goto LABEL_36;
    v14 = v44;
  }
  if ( !DWORD1(v44) && !v14 )
  {
    v15 = 1;
    UserSessionState = W32GetUserSessionState(v11, v10, v13);
    MonitorDpiInfo = *(struct _REFCOUNTED_DPI_INFORMATION **)(UserSessionState + 71200);
    *(_QWORD *)(UserSessionState + 71200) = 0LL;
    goto LABEL_5;
  }
LABEL_36:
  v15 = 0;
  MonitorDpiInfo = CreateMonitorDpiInfo();
  if ( !MonitorDpiInfo )
    return 0LL;
LABEL_5:
  if ( !Monitor )
  {
    if ( v15 )
    {
      v43 = W32GetUserSessionState(v18, v17, v19);
      Monitor = *(struct tagMONITOR **)(v43 + 71192);
      *(_QWORD *)(v43 + 71192) = 0LL;
      goto LABEL_6;
    }
    Monitor = CreateMonitor();
    if ( !Monitor )
    {
      GreDeleteFastMutex((char *)MonitorDpiInfo, v40, v41, v42);
      return 0LL;
    }
  }
LABEL_6:
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = MonitorLogicalDPI;
  if ( (unsigned int)DrvIsUniformSpaceMapping(v6) )
    MonitorLogicalDPI = *(_WORD *)(v6 + 32);
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 60LL) = MonitorLogicalDPI;
  v24 = *((_QWORD *)Monitor + 5);
  *((_WORD *)Monitor + 36) = MonitorPhysicalDPI;
  *(_WORD *)(v24 + 84) = *(_WORD *)(v8 + 92);
  v25 = (_DWORD *)*((_QWORD *)Monitor + 16);
  if ( v25 )
  {
    --*v25;
    v39 = (char *)*((_QWORD *)Monitor + 16);
    if ( !*(_DWORD *)v39 )
      GreDeleteFastMutex(v39, v21, v22, v23);
    *((_QWORD *)Monitor + 16) = 0LL;
  }
  GetMonitorDpiInfo(
    v9,
    v15,
    (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL),
    (struct _REFCOUNTED_DPI_INFORMATION *)((char *)MonitorDpiInfo + 4));
  *(_DWORD *)MonitorDpiInfo = 1;
  *((_QWORD *)Monitor + 16) = MonitorDpiInfo;
  v26 = *((_QWORD *)Monitor + 5);
  if ( v5 )
    *(_DWORD *)(v26 + 24) |= 1u;
  else
    *(_DWORD *)(v26 + 24) &= ~1u;
  v27 = *((_QWORD *)Monitor + 5);
  v28 = *(_QWORD *)(v27 + 28) - v44;
  if ( !v28 )
    v28 = *(_QWORD *)(v27 + 36) - *((_QWORD *)&v44 + 1);
  if ( v28 )
  {
    *(_DWORD *)(v27 + 44) += v44 - *(_DWORD *)(v27 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += DWORD1(v44) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += DWORD2(v44) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += HIDWORD(v44) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
  }
  *(_OWORD *)(*((_QWORD *)Monitor + 5) + 28LL) = v44;
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 68LL) = *(_DWORD *)(v8 + 56);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 72LL) = *(_DWORD *)(v8 + 60);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 76LL) = *(_DWORD *)(v8 + 64);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = *(_DWORD *)(v8 + 68);
  v29 = v9;
  if ( !v5 )
    v29 = *(HDEV *)v6;
  *((_QWORD *)Monitor + 10) = v29;
  v30 = *((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 11) = v9;
  v31 = *(_DWORD *)(v30 + 44);
  if ( *(_DWORD *)(v30 + 52) < v31 )
    *(_DWORD *)(v30 + 52) = v31;
  v32 = *((_QWORD *)Monitor + 5);
  v33 = *(_DWORD *)(v32 + 48);
  if ( *(_DWORD *)(v32 + 56) < v33 )
    *(_DWORD *)(v32 + 56) = v33;
  if ( !(unsigned int)IntersectRect(
                        *((_QWORD *)Monitor + 5) + 44LL,
                        *((_QWORD *)Monitor + 5) + 44LL,
                        *((_QWORD *)Monitor + 5) + 28LL) )
  {
    v34 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v34[11] = v34[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v34[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v34[9];
    v35 = *((_QWORD *)Monitor + 5);
    *(_DWORD *)(v35 + 56) = v34[10];
  }
  if ( v15 )
  {
    v37 = *(_QWORD **)(W32GetUserSessionState(v35, (_DWORD)v34, v36) + 56968);
    *(_QWORD *)(*v37 + 8LL) = *((_QWORD *)Monitor + 6);
    v37[12] = Monitor;
  }
  return Monitor;
}
