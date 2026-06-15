/*
 * XREFs of ?OnExclusiveModeChange@CExclusiveModeListener@@AEAAXPEBUApplicationSpatialInformationWnf@@@Z @ 0x180150E08
 * Callers:
 *     ?SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801520D0 (-SpatialApplicationInfoUpdateCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800079F4 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@_ea_1800079F4.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetRecordFromWnf @ 0x180150D7C (GetRecordFromWnf.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x1801521CC (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveModeListener::OnExclusiveModeChange(
        struct _RTL_CRITICAL_SECTION *this,
        const struct ApplicationSpatialInformationWnf *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v5; // r8
  const char *v6; // r9
  unsigned int v7; // edi
  char v8; // r14
  unsigned int v9; // esi
  __int64 OwningThread_low; // rdx
  __int64 v11; // rdx
  _DWORD *SpinCount; // rcx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  int v16; // [rsp+78h] [rbp+48h] BYREF
  int v17; // [rsp+80h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+88h] [rbp+58h]

  v4 = this + 2;
  EnterCriticalSection(this + 2);
  v18 = v4;
  v7 = 0;
  v17 = 0;
  v8 = 0;
  if ( *((_DWORD *)a2 + 1) )
  {
    v9 = 0;
    v8 = 1;
    while ( v9 < *(_DWORD *)a2 )
    {
      v15 = 0LL;
      if ( (int)GetRecordFromWnf((unsigned int *)a2, v9, &v15, v6) >= 0 && *(_DWORD *)(v15 + 16) )
      {
        v7 = *(_DWORD *)(v15 + 24);
        break;
      }
      ++v9;
    }
    OwningThread_low = LODWORD(this[9].OwningThread);
    if ( (_DWORD)OwningThread_low && (_DWORD)OwningThread_low != v7 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, unsigned __int64))(*(_QWORD *)g_PolicyManager
                                                                                      + 344LL))(
        g_PolicyManager,
        OwningThread_low,
        (unsigned __int64)&this->LockCount & -(__int64)(this != 0LL));
      LODWORD(this[9].OwningThread) = 0;
    }
    if ( v7 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, int *))(*(_QWORD *)g_PolicyManager + 48LL))(
        g_PolicyManager,
        v7,
        &v17);
      if ( LODWORD(this[9].OwningThread) != v7 )
      {
        LODWORD(this[9].OwningThread) = v7;
        (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, unsigned __int64))(*(_QWORD *)g_PolicyManager
                                                                                       + 336LL))(
          g_PolicyManager,
          v7,
          (unsigned __int64)&this->LockCount & -(__int64)(this != 0LL));
      }
    }
  }
  else
  {
    v11 = LODWORD(this[9].OwningThread);
    if ( (_DWORD)v11 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, unsigned __int64))(*(_QWORD *)g_PolicyManager
                                                                                      + 344LL))(
        g_PolicyManager,
        v11,
        (unsigned __int64)&this->LockCount & -(__int64)(this != 0LL));
      LODWORD(this[9].OwningThread) = 0;
    }
  }
  if ( v8 == LOBYTE(this[9].LockSemaphore) )
  {
    if ( v17 == HIDWORD(this[9].OwningThread) )
      goto LABEL_24;
  }
  else
  {
    SpinCount = (_DWORD *)this[8].SpinCount;
    if ( *SpinCount > 4u )
    {
      LOBYTE(v15) = v8;
      LOBYTE(v16) = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (int)SpinCount,
        (int)&unk_1801AE633,
        v5,
        (__int64)v6,
        (__int64)&v16,
        (__int64)&v15);
    }
    LOBYTE(this[9].LockSemaphore) = v8;
  }
  HIDWORD(this[9].OwningThread) = v17;
  updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      498LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)updated);
LABEL_24:
  if ( v4 )
    LeaveCriticalSection(v4);
}
