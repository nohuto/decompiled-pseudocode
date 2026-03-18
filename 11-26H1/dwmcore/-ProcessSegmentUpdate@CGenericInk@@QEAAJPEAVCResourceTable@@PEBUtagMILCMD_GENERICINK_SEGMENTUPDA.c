/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801254E0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800BACD0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?EnsureConsistentSegmentSize@CGenericInk@@AEAAJI@Z @ 0x180125458 (-EnsureConsistentSegmentSize@CGenericInk@@AEAAJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x180125A30 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180125C54 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?IncludeLastBatchMemoryInDump@CComposition@@SAXXZ @ 0x18020C2A0 (-IncludeLastBatchMemoryInDump@CComposition@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_SEGMENTUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // r12d
  unsigned int v9; // ecx
  int v10; // r13d
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // ecx
  __int64 v14; // r15
  int v15; // eax
  int v16; // edi
  unsigned int v17; // r14d
  unsigned int v18; // r13d
  unsigned int v19; // r14d
  __int128 *v20; // rdx
  __int64 v21; // rcx
  __int64 i; // rax
  int v24; // eax
  int v25; // [rsp+40h] [rbp-61h]
  struct D2D_RECT_F v26; // [rsp+48h] [rbp-59h] BYREF
  __int128 v27; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v28[5]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v29[16]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = 0;
  v28[0] = &CRectanglesShape::`vftable';
  v28[2] = v29;
  v28[1] = 0LL;
  v28[3] = v29;
  v28[4] = &v30;
  v30 = 0LL;
  if ( *((_DWORD *)a3 + 3)
    && (v24 = CGenericInk::EnsureConsistentSegmentSize(this, a5 / *((_DWORD *)a3 + 3)), v12 = v24, v24 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x3Fu, 0LL);
  }
  else
  {
    v9 = *((_DWORD *)this + 68);
    if ( v9 )
      v10 = *((_DWORD *)this + 66) / v9;
    else
      v10 = 0;
    *((_DWORD *)this + 66) = *((_DWORD *)a3 + 2) * v9;
    v11 = DynArray<unsigned char,0>::AddMultipleAndSet((char *)this + 240, a4, a5);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x47u, 0LL);
    }
    else
    {
      v13 = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 69) = v13;
      *((_DWORD *)this + 70) = *((_DWORD *)a3 + 5);
      v14 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
      if ( (_DWORD)v14 )
      {
        v15 = *((_DWORD *)a3 + 2);
        v16 = v15;
        v17 = *((_DWORD *)a3 + 3);
        if ( v13 > v17 )
          v16 = v15 + v17 - v13;
        v18 = v10 - v16;
        v19 = v15 + v17 - v16;
        v27 = 0LL;
        while ( v5 < (unsigned int)v14 )
        {
          v20 = &v27;
          if ( v5 )
            v20 = 0LL;
          v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL * v5) + 72LL);
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, __int128 *))(*(_QWORD *)v21 + 48LL))(
                  v21,
                  v18,
                  *((_QWORD *)this + 30) + (unsigned int)(v16 * *((_DWORD *)this + 68)),
                  v19,
                  *((_DWORD *)this + 69),
                  *((_DWORD *)this + 68),
                  v20);
          if ( v25 < 0 )
          {
            CComposition::IncludeLastBatchMemoryInDump();
            ModuleFailFastForHRESULT(v25, retaddr);
          }
          ++v5;
        }
        for ( i = 0LL; i < 16; i += 4LL )
          *(float *)((char *)&v26.left + i) = (float)*(int *)((char *)&v28[-1] + i);
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v28, &v26);
        *((_QWORD *)this + 36) = v28;
      }
      (*(void (__fastcall **)(CGenericInk *, __int64))(*(_QWORD *)this + 80LL))(this, 3LL);
      if ( *((_QWORD *)this + 36) )
        (*(void (__fastcall **)(CGenericInk *, __int64, CGenericInk *))(*(_QWORD *)this + 80LL))(this, 1LL, this);
      CSuperWetInkManager::OnUpdatedInkReceived(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
    }
  }
  *((_QWORD *)this + 36) = 0LL;
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
  return v12;
}
