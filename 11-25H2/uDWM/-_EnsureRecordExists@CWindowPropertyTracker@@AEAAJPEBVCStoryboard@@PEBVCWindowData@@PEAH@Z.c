/*
 * XREFs of ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180043950
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180043858 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800C58DC (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x1800C59E8 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800C5AA4 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180044A78 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x180059100 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowPropertyTracker::_EnsureRecordExists(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        HWND *a3,
        int *a4)
{
  unsigned int v6; // r15d
  int Record; // eax
  int v8; // r14d
  CWindowPropertyTracker::CPropertyChangeRecord *v9; // rax
  const int *v10; // rdx
  CWindowPropertyTracker::CPropertyChangeRecord *v11; // r9
  HWND *v12; // r14
  CWindowPropertyTracker::CPropertyChangeRecord *v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // r8d
  int v16; // edi
  unsigned int v17; // ebx
  unsigned int v18; // r13d
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // r8d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r10
  unsigned int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // eax
  unsigned __int64 v34; // [rsp+28h] [rbp-28h]
  CWindowPropertyTracker::CPropertyChangeRecord *v35[4]; // [rsp+30h] [rbp-20h] BYREF
  const struct CStoryboard *v36; // [rsp+98h] [rbp+48h] BYREF
  HWND *v37; // [rsp+A0h] [rbp+50h]
  int *v38; // [rsp+A8h] [rbp+58h]

  v38 = a4;
  v37 = a3;
  v36 = a2;
  v35[1] = (CWindowPropertyTracker::CPropertyChangeRecord *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v35[0] = 0LL;
  Record = CWindowPropertyTracker::_FindRecord(this, a3[5]);
  v8 = Record;
  if ( Record >= 0 )
  {
    v26 = 0LL;
    v27 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    while ( (unsigned int)v26 < *(_DWORD *)(v27 + 32) )
    {
      if ( *(const struct CStoryboard **)(*(_QWORD *)(v27 + 8) + 8 * v26) == v36 )
        goto LABEL_16;
      v26 = (unsigned int)(v26 + 1);
    }
    _mm_lfence();
    v28 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    v29 = *(_DWORD *)(v28 + 32);
    v30 = v29 + 1;
    if ( v29 + 1 >= v29 )
    {
      if ( v30 > *(_DWORD *)(v28 + 28) )
      {
        v33 = DynArrayImpl<0>::AddMultipleAndSet(v28 + 8, 8, 1, &v36);
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0xBEu, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8LL * *(unsigned int *)(v28 + 32)) = v36;
        *(_DWORD *)(v28 + 32) = v30;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
    }
    goto LABEL_16;
  }
  v9 = (CWindowPropertyTracker::CPropertyChangeRecord *)DefaultHeap::AllocClear(0xA0uLL);
  v35[2] = v9;
  if ( v9 && (DynArrayImpl<0>::DynArrayImpl<0>((__int64)v9 + 8, 0LL, 0), (v35[0] = v11) != 0LL) )
  {
    v12 = v37;
    *(_QWORD *)v11 = v37[5];
    v13 = v35[0];
    v14 = *((_DWORD *)v35[0] + 8);
    v15 = v14 + 1;
    v16 = -2147024362;
    v17 = (_DWORD)v10 + 20;
    v18 = 179;
    if ( v14 + 1 < v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, v10, 0LL, -2147024362, 0xB3u, (void *)((unsigned __int64)v10 & v34));
    }
    else if ( v15 <= *((_DWORD *)v35[0] + 7) )
    {
      *(_QWORD *)(*((_QWORD *)v35[0] + 1) + 8LL * *((unsigned int *)v35[0] + 8)) = v36;
      *((_DWORD *)v13 + 8) = v15;
    }
    else
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v35[0] + 8, (int)v10 + 8, 1, &v36);
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v19, 0xBEu, 0LL);
    }
    *((_BYTE *)v35[0] + 44) = *((_BYTE *)v12 + 676) & 1;
    *((_DWORD *)v35[0] + 12) = *((_DWORD *)v12 + 55);
    *((_DWORD *)v35[0] + 13) = *((_DWORD *)v12 + 56);
    v20 = 0;
    if ( *((_DWORD *)v12 + 57) - *((_DWORD *)v12 + 55) >= 0 )
      v20 = *((_DWORD *)v12 + 57) - *((_DWORD *)v12 + 55);
    *((_DWORD *)v35[0] + 14) = v20;
    v21 = 0;
    if ( *((_DWORD *)v12 + 58) - *((_DWORD *)v12 + 56) >= 0 )
      v21 = *((_DWORD *)v12 + 58) - *((_DWORD *)v12 + 56);
    *((_DWORD *)v35[0] + 15) = v21;
    *((_OWORD *)v35[0] + 4) = *(_OWORD *)((char *)v12 + 236);
    *((_OWORD *)v35[0] + 5) = *(_OWORD *)((char *)v12 + 252);
    *((_DWORD *)v35[0] + 24) = *((_DWORD *)v12 + 29);
    v22 = v35[0];
    *(_OWORD *)((char *)v35[0] + 100) = *(_OWORD *)((char *)v35[0] + 44);
    *(_OWORD *)((char *)v22 + 116) = *(_OWORD *)((char *)v22 + 60);
    *(_OWORD *)((char *)v22 + 132) = *(_OWORD *)((char *)v22 + 76);
    *(_QWORD *)((char *)v22 + 148) = *(_QWORD *)((char *)v22 + 92);
    v23 = *((_DWORD *)this + 6);
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      v6 = -2147024362;
    }
    else
    {
      v16 = 0;
      if ( v24 <= *((_DWORD *)this + 5) )
      {
        *(CWindowPropertyTracker::CPropertyChangeRecord **)(*(_QWORD *)this + 8LL * v23) = v35[0];
        *((_DWORD *)this + 6) = v24;
LABEL_15:
        v6 = v16;
        v8 = *((_DWORD *)this + 6) - 1;
LABEL_16:
        *v38 = v8;
        goto LABEL_17;
      }
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8, 1, v35);
      v6 = v16;
      if ( v16 >= 0 )
        goto LABEL_15;
      v18 = 190;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, v18, 0LL);
    v31 = 141;
  }
  else
  {
    v17 = 20;
    v6 = -2147024882;
    v16 = -2147024882;
    v31 = 124;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, v31, 0LL);
  if ( v35[0] )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v35[0], v32);
LABEL_17:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
