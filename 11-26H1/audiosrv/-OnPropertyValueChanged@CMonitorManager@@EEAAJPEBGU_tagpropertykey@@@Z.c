/*
 * XREFs of ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x180027640
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180028290 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x180042A10 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x180060140 (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_S_guid_D @ 0x180120A74 (WPP_SF_S_guid_D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::OnPropertyValueChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  struct _tagpropertykey *v3; // r14
  unsigned __int64 i; // rcx
  __int64 v7; // rdx
  __int64 v9; // rax
  PropertyChangedContext *v10; // rax
  unsigned int v11; // edx
  PropertyChangedContext *v12; // rsi
  PropertyChangedContext *v13; // rbx
  DWORD pid; // eax
  struct _TP_WORK *ThreadpoolWork; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // edi
  signed int LastError; // eax
  ATL::CAtlException *v19; // rbx
  __int64 *v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-88h] BYREF
  __int64 v22; // [rsp+20h] [rbp-68h]
  int v23; // [rsp+30h] [rbp-58h]
  PropertyChangedContext *v24; // [rsp+38h] [rbp-50h]
  PropertyChangedContext *v25; // [rsp+40h] [rbp-48h]
  ATL::CAtlException *v26; // [rsp+48h] [rbp-40h] BYREF
  struct _tagpropertykey *v27; // [rsp+50h] [rbp-38h]

  v3 = a3;
  v27 = a3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_D(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, (_DWORD)a3, (_DWORD)a2, (__int64)a3, a3->pid);
  }
  for ( i = 0LL; ; i += 16LL )
  {
    if ( i >= 0x50 )
      return 0LL;
    v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + i);
    if ( v3->pid == *(_DWORD *)(v7 + 16) )
    {
      v9 = *(_QWORD *)&v3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&v3->fmtid.Data1 == *(_QWORD *)v7 )
        v9 = *(_QWORD *)v3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
      if ( !v9 )
        break;
    }
  }
  v10 = (PropertyChangedContext *)operator new[](0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v10;
  v25 = v10;
  if ( v10 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v10);
    *((_QWORD *)v12 + 4) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v12 + 5) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v24 = v12;
  v13 = v12;
  v25 = v12;
  if ( !v12 )
  {
    v17 = -2147024882;
    v16 = WPP_GLOBAL_Control;
    goto LABEL_28;
  }
  try
  {
    v17 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(v12, a2);
  }
  catch ( ATL::CAtlException *v26 )
  {
    v20 = &v21;
    v19 = v26;
    if ( *(_DWORD *)v26 == -1073741571 )
      _o__resetstkoflw();
    v23 = *(_DWORD *)v19;
    v17 = v23;
    if ( v23 < 0 )
    {
      PropertyChangedContext::`scalar deleting destructor'(v24, (unsigned int)v20);
      v13 = v25;
      goto LABEL_19;
    }
    v13 = v25;
    v12 = v24;
    v3 = v27;
  }
  pid = v3->pid;
  *(GUID *)((char *)v12 + 8) = v3->fmtid;
  *((_DWORD *)v12 + 6) = pid;
  ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::HandlePropertyValueChanged, v12, 0LL);
  *((_QWORD *)v12 + 5) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v13 = 0LL;
LABEL_19:
    v16 = WPP_GLOBAL_Control;
    goto LABEL_20;
  }
  LastError = GetLastError();
  v17 = LastError;
  if ( LastError > 0 )
    v17 = (unsigned __int16)LastError | 0x80070000;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, v17, v22);
    goto LABEL_19;
  }
LABEL_20:
  if ( (v17 & 0x80000000) != 0 )
  {
LABEL_28:
    if ( v16 != &WPP_GLOBAL_Control && (*((_DWORD *)v16 + 7) & 0x800000) != 0 && *((_BYTE *)v16 + 25) >= 2u )
      WPP_SF_d(v16[2], 38LL, &WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, v17, v22);
  }
  if ( v13 )
    PropertyChangedContext::`scalar deleting destructor'(v13, v11);
  return v17;
}
