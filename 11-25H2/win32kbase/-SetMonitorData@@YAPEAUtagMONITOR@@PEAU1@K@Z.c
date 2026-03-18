/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1400CDC30
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     GreGetDeviceCaps @ 0x140043070 (GreGetDeviceCaps.c)
 *     IntersectRect @ 0x1400CE748 (IntersectRect.c)
 *     DrvIsUniformSpaceMapping @ 0x1400CE9D0 (DrvIsUniformSpaceMapping.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1400CEA1C (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1400CEAF8 (--4-$SharedMixedObjectPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUta.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1400CEB94 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x1400CEC24 (-CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1401568E0 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x14015D57C (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagMONITOR *Monitor; // rdi
  __int64 UserSessionState; // rax
  int v5; // ebp
  unsigned __int16 MonitorLogicalDPI; // si
  __int64 v7; // r13
  unsigned __int16 MonitorPhysicalDPI; // r12
  HDEV v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  HDC DisplayDC; // rbx
  __int32 v13; // eax
  int v14; // r14d
  unsigned __int8 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _REFCOUNTED_DPI_INFORMATION *MonitorDpiInfo; // rbx
  HDEV v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  int v24; // ecx
  _DWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  char *v37; // rcx
  int v38; // [rsp+24h] [rbp-74h]
  __int64 v39; // [rsp+28h] [rbp-70h]
  __m128i v40; // [rsp+38h] [rbp-60h]

  v2 = (unsigned int)a2;
  Monitor = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = 1;
  MonitorLogicalDPI = 96;
  v7 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL) + 56 * v2;
  v39 = *(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL);
  MonitorPhysicalDPI = 96;
  v9 = *(HDEV *)(v7 + 40);
  v40 = *(__m128i *)(((unsigned int)DrvIsUniformSpaceMapping(v39) != 0 ? 0x14 : 0) + v7 + 56);
  DisplayDC = GreCreateDisplayDC(v9, 0, 0);
  v13 = v40.m128i_i32[0];
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v40, 4));
  v38 = v14;
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
    GrepDeleteDC(DisplayDC, 0x400000u);
    if ( !v5 )
      goto LABEL_5;
    v13 = v40.m128i_i32[0];
  }
  if ( !v14 && !v13 )
  {
    v15 = 1;
    v35 = W32GetUserSessionState(v11, v10);
    MonitorDpiInfo = *(struct _REFCOUNTED_DPI_INFORMATION **)(v35 + 71216);
    *(_QWORD *)(v35 + 71216) = 0LL;
    goto LABEL_17;
  }
LABEL_5:
  v15 = 0;
  MonitorDpiInfo = CreateMonitorDpiInfo();
  if ( !MonitorDpiInfo )
    return 0LL;
LABEL_17:
  if ( !Monitor )
  {
    if ( v15 )
    {
      v36 = W32GetUserSessionState(v17, v16);
      Monitor = *(struct tagMONITOR **)(v36 + 71208);
      *(_QWORD *)(v36 + 71208) = 0LL;
    }
    else
    {
      Monitor = CreateMonitor();
      if ( !Monitor )
      {
        GreDeleteFastMutex((char *)MonitorDpiInfo);
        return 0LL;
      }
    }
  }
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = MonitorLogicalDPI;
  if ( (unsigned int)DrvIsUniformSpaceMapping(v39) )
    MonitorLogicalDPI = *(_WORD *)(v39 + 32);
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 60LL) = MonitorLogicalDPI;
  v28 = *((_QWORD *)Monitor + 5);
  *((_WORD *)Monitor + 36) = MonitorPhysicalDPI;
  *(_WORD *)(v28 + 84) = *(_WORD *)(v7 + 92);
  v29 = (_DWORD *)*((_QWORD *)Monitor + 16);
  if ( v29 )
  {
    --*v29;
    v37 = (char *)*((_QWORD *)Monitor + 16);
    if ( !*(_DWORD *)v37 )
      GreDeleteFastMutex(v37);
    *((_QWORD *)Monitor + 16) = 0LL;
  }
  GetMonitorDpiInfo(
    v9,
    v15,
    (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL),
    (struct _REFCOUNTED_DPI_INFORMATION *)((char *)MonitorDpiInfo + 4));
  *(_DWORD *)MonitorDpiInfo = 1;
  *((_QWORD *)Monitor + 16) = MonitorDpiInfo;
  v30 = *((_QWORD *)Monitor + 5);
  v31 = *(_DWORD *)(v30 + 24);
  if ( v5 )
    v32 = v31 | 1;
  else
    v32 = v31 & 0xFFFFFFFE;
  *(_DWORD *)(v30 + 24) = v32;
  v33 = *((_QWORD *)Monitor + 5);
  v34 = *(_QWORD *)(v33 + 28) - v40.m128i_i64[0];
  if ( !v34 )
    v34 = *(_QWORD *)(v33 + 36) - v40.m128i_i64[1];
  if ( v34 )
  {
    *(_DWORD *)(v33 + 44) += v40.m128i_i32[0] - *(_DWORD *)(v33 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += v38 - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += v40.m128i_i32[2] - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += v40.m128i_i32[3] - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
  }
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 28LL) = v40.m128i_i32[0];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = v38;
  *(_QWORD *)(*((_QWORD *)Monitor + 5) + 36LL) = v40.m128i_i64[1];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 68LL) = *(_DWORD *)(v7 + 56);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 72LL) = *(_DWORD *)(v7 + 60);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 76LL) = *(_DWORD *)(v7 + 64);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = *(_DWORD *)(v7 + 68);
  if ( v5 )
    v20 = v9;
  else
    v20 = *(HDEV *)v39;
  *((_QWORD *)Monitor + 10) = v20;
  v21 = *((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 11) = v9;
  v22 = *(_DWORD *)(v21 + 44);
  if ( *(_DWORD *)(v21 + 52) < v22 )
    *(_DWORD *)(v21 + 52) = v22;
  v23 = *((_QWORD *)Monitor + 5);
  v24 = *(_DWORD *)(v23 + 48);
  if ( *(_DWORD *)(v23 + 56) < v24 )
    *(_DWORD *)(v23 + 56) = v24;
  if ( !(unsigned int)IntersectRect(
                        *((_QWORD *)Monitor + 5) + 44LL,
                        *((_QWORD *)Monitor + 5) + 44LL,
                        *((_QWORD *)Monitor + 5) + 28LL) )
  {
    v25 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v25[11] = v25[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v25[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v25[9];
    v26 = *((_QWORD *)Monitor + 5);
    *(_DWORD *)(v26 + 56) = v25[10];
  }
  if ( v15 )
  {
    v27 = W32GetUserSessionState(v26, v25);
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      *(_QWORD *)(v27 + 56968) + 104LL,
      Monitor);
  }
  return Monitor;
}
