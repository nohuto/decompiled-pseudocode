/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019D494
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D9910 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x14003CB24 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x14003E5E8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     TdrBugcheckOnTimeout @ 0x14018EA50 (TdrBugcheckOnTimeout.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1401B0D68 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  ULONG v6; // ebp
  unsigned int v7; // esi
  int v9; // eax
  char v10; // [rsp+80h] [rbp+8h] BYREF
  char v11; // [rsp+81h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+88h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8743;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTdrContext", 8743LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 396) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8748;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pRenderCore != NULL", 8748LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 396) + 760LL) + 8LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 396) + 768LL));
  if ( !KeResetEvent((PRKEVENT)((char *)this + 256)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8772;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldDdiAccess != 0", 8772LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v10);
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 35));
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 35));
  v6 = IsResourceAcquiredSharedLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    if ( IsResourceAcquiredSharedLite )
      ExReleaseResourceLite(*((PERESOURCE *)this + 35));
    v7 = 0;
    while ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 35), 0) )
    {
      if ( v7 >= dword_140168AD0 )
      {
        KeSetEvent((PRKEVENT)((char *)this + 256), 0, 0);
        DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v10);
        return 3221225653LL;
      }
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      ++v7;
    }
    *((_DWORD *)a2 + 699) = v7;
  }
  v9 = ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 396));
  if ( v9 < 0 )
  {
    *((_QWORD *)a2 + 13) = *((_QWORD *)this + 72);
    TdrBugcheckOnTimeout(a2, v9, 3);
  }
  *((_BYTE *)this + 3094) = 1;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 35));
    if ( v6 )
      ExAcquireResourceSharedLite(*((PERESOURCE *)this + 35), 1u);
  }
  KeSetEvent((PRKEVENT)((char *)this + 256), 0, 0);
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v10);
  return 0LL;
}
