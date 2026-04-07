/*
 * XREFs of ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x1800604B0
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x1800603B0 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800BEFF8 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x1800BF104 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800BF1C8 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180018EC0 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x18003EA68 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowPropertyTracker::_EnsureRecordExists(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        HWND *a3,
        int *a4)
{
  int v6; // edi
  int Record; // eax
  int v8; // r14d
  _QWORD *v9; // rax
  __int64 v10; // r9
  CWindowPropertyTracker::CPropertyChangeRecord **v11; // rdi
  CWindowPropertyTracker::CPropertyChangeRecord *v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // r12d
  unsigned int v16; // r13d
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // r8d
  int v24; // ebx
  unsigned int v25; // edx
  __int64 v26; // r8
  __int64 v27; // r10
  unsigned int v28; // eax
  unsigned int v29; // r8d
  int v30; // eax
  CWindowPropertyTracker::CPropertyChangeRecord *v31[4]; // [rsp+30h] [rbp-20h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  const struct CStoryboard *v33; // [rsp+98h] [rbp+48h] BYREF
  CWindowPropertyTracker::CPropertyChangeRecord **v34; // [rsp+A0h] [rbp+50h] BYREF
  int *v35; // [rsp+A8h] [rbp+58h]

  v35 = a4;
  v34 = (CWindowPropertyTracker::CPropertyChangeRecord **)a3;
  v33 = a2;
  v31[1] = (CWindowPropertyTracker::CPropertyChangeRecord *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v31[0] = 0LL;
  Record = CWindowPropertyTracker::_FindRecord(this, a3[5]);
  v8 = Record;
  if ( Record >= 0 )
  {
    v25 = 0;
    v26 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    while ( v25 < *(_DWORD *)(v26 + 32) )
    {
      if ( *(const struct CStoryboard **)(*(_QWORD *)(v26 + 8) + 8LL * v25) == v33 )
        goto LABEL_15;
      ++v25;
    }
    _mm_lfence();
    v27 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    v28 = *(_DWORD *)(v27 + 32);
    v29 = v28 + 1;
    if ( v28 + 1 < v28 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
    }
    else if ( v29 > *(_DWORD *)(v27 + 28) )
    {
      v30 = DynArrayImpl<0>::AddMultipleAndSet(v27 + 8, 8, 1, &v33);
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xC2u, 0LL);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v27 + 8) + 8LL * v28) = v33;
      *(_DWORD *)(v27 + 32) = v29;
    }
    goto LABEL_15;
  }
  v9 = DefaultHeap::AllocClear(0xA0uLL);
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v9[1] = 0LL;
  v9[2] = 0LL;
  v9[3] = 0LL;
  *((_DWORD *)v9 + 8) = 0;
  v31[0] = (CWindowPropertyTracker::CPropertyChangeRecord *)v9;
  v11 = v34;
  *v9 = v34[5];
  v12 = v31[0];
  v13 = *((_DWORD *)v31[0] + 8);
  v14 = v13 + 1;
  v15 = -2147024362;
  v16 = 194;
  if ( v13 + 1 < v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
  else if ( v14 <= *((_DWORD *)v31[0] + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v31[0] + 1) + 8LL * *((unsigned int *)v31[0] + 8)) = v33;
    *((_DWORD *)v12 + 8) = v14;
  }
  else
  {
    v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v31[0] + 8, 8, 1, &v33);
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xC2u, 0LL);
  }
  *((_BYTE *)v31[0] + 44) = *((_BYTE *)v11 + 740) & 1;
  *((_DWORD *)v31[0] + 12) = *((_DWORD *)v11 + 55);
  *((_DWORD *)v31[0] + 13) = *((_DWORD *)v11 + 56);
  v18 = 0;
  if ( *((_DWORD *)v11 + 57) - *((_DWORD *)v11 + 55) >= 0 )
    v18 = *((_DWORD *)v11 + 57) - *((_DWORD *)v11 + 55);
  *((_DWORD *)v31[0] + 14) = v18;
  v19 = 0;
  if ( *((_DWORD *)v11 + 58) - *((_DWORD *)v11 + 56) >= 0 )
    v19 = *((_DWORD *)v11 + 58) - *((_DWORD *)v11 + 56);
  *((_DWORD *)v31[0] + 15) = v19;
  *((_OWORD *)v31[0] + 4) = *(_OWORD *)((char *)v11 + 236);
  *((_OWORD *)v31[0] + 5) = *(_OWORD *)((char *)v11 + 252);
  *((_DWORD *)v31[0] + 24) = *((_DWORD *)v11 + 29);
  v20 = v31[0];
  *(_OWORD *)((char *)v31[0] + 100) = *(_OWORD *)((char *)v31[0] + 44);
  *(_OWORD *)((char *)v20 + 116) = *(_OWORD *)((char *)v20 + 60);
  *(_OWORD *)((char *)v20 + 132) = *(_OWORD *)((char *)v20 + 76);
  *(_QWORD *)((char *)v20 + 148) = *(_QWORD *)((char *)v20 + 92);
  v21 = *((_DWORD *)this + 6);
  v22 = v21 + 1;
  if ( v21 + 1 < v21 )
  {
    v24 = -2147024362;
    v6 = -2147024362;
    v16 = 183;
  }
  else
  {
    v6 = 0;
    if ( v22 <= *((_DWORD *)this + 5) )
    {
      *(CWindowPropertyTracker::CPropertyChangeRecord **)(*(_QWORD *)this + 8LL * v21) = v31[0];
      *((_DWORD *)this + 6) = v22;
LABEL_14:
      v8 = *((_DWORD *)this + 6) - 1;
LABEL_15:
      *v35 = v8;
      goto LABEL_16;
    }
    v34 = v31;
    v6 = DynArrayImpl<0>::Grow((__int64)this, 8u, 1, v10, (unsigned __int64 *)&v34);
    if ( v6 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)this + 6))++) + *(_QWORD *)this) = *v34;
      goto LABEL_14;
    }
    v15 = v6;
    v24 = v6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v16, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x8Du, 0LL);
  if ( v31[0] )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'((void **)v31[0]);
LABEL_16:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
