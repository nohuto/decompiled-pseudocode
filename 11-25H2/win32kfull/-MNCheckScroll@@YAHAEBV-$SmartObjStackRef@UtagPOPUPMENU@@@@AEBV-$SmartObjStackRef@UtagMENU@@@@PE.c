/*
 * XREFs of ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x140266DC0
 * Callers:
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1401597F0 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MNCheckScroll(__int64 **a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // rdx
  unsigned int v6; // ebx
  __int64 DPIMetrics; // rax
  int v8; // r8d
  unsigned int v9; // ebx
  __int64 i; // rdx
  __int64 v11; // rax
  unsigned int v12; // r9d
  int v13; // edx
  __int64 j; // r8
  int v15; // r8d
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rbx
  struct tagRECT v23; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v24[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a1;
  v23 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, *v4);
  MNGetPopupBoundsRect((__int64)v24, a3, &v23, 0);
  v6 = v23.bottom - v23.top;
  if ( *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) && *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) < v6 )
    v6 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL);
  if ( *(_QWORD *)(**a2 + 88)
    && *(_DWORD *)(**(_QWORD **)(**a2 + 88) + 72LL) == *(_DWORD *)(**a2 + 64)
    && *(_DWORD *)(**a2 + 68) + 6 > v6 )
  {
    DPIMetrics = GetDPIMetrics();
    v8 = 0;
    v9 = -6 - 2 * *(_DWORD *)(DPIMetrics + 28) + v6;
    for ( i = *(_QWORD *)(**a2 + 88); v8 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL); i += 96LL )
    {
      if ( *(_DWORD *)(*(_QWORD *)i + 68LL) > v9 )
        break;
      ++v8;
    }
    v11 = i - 96;
    if ( !v8 )
      v11 = i;
    v12 = 0;
    *(_DWORD *)(**a2 + 68) = *(_DWORD *)(*(_QWORD *)v11 + 68LL);
    v13 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1;
    for ( j = *(_QWORD *)(**a2 + 88) + 96LL * v13; v13 >= 0; --v13 )
    {
      v12 += *(_DWORD *)(*(_QWORD *)j + 76LL);
      if ( v12 > *(_DWORD *)(**a2 + 68) )
        break;
      j -= 96LL;
    }
    v15 = v13 + 1;
    if ( v13 == *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1 )
      v15 = v13;
    *(_DWORD *)(**a2 + 120) = v15;
    if ( *(_DWORD *)(**a2 + 116) > v15 )
      *(_DWORD *)(**a2 + 116) = v15;
    v16 = **a2;
    if ( *(_DWORD *)(v16 + 116) == v15 )
    {
      *(_DWORD *)(v16 + 124) |= 3u;
    }
    else
    {
      v17 = *(_DWORD *)(v16 + 116) == 0;
      v18 = **a2;
      v19 = *(_DWORD *)(v18 + 124);
      if ( v17 )
        v20 = v19 & 0xFFFFFFFC | 2;
      else
        v20 = v19 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v18 + 124) = v20;
    }
    v21 = **a2;
    return (unsigned int)(2 * *(_DWORD *)(GetDPIMetrics() + 28) + *(_DWORD *)(v21 + 68));
  }
  else
  {
    *(_DWORD *)(**a2 + 124) &= 0xFFFFFFFC;
    *(_DWORD *)(**a2 + 116) = 0;
    *(_DWORD *)(**a2 + 120) = 0;
    return *(unsigned int *)(**a2 + 68);
  }
}
