/*
 * XREFs of ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0730
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1402C7800 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0A14 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0D0C (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B1A40 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPointerPositionChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2)
{
  __int64 VidPnSourceId; // rdx
  __int64 v5; // rax
  DXGFASTMUTEX *v6; // rdi
  DXGFASTMUTEX *v7; // rcx
  OUTPUTDUPL_CONTEXT **v8; // rdi
  int v9; // r14d
  unsigned int i; // ebp
  OUTPUTDUPL_CONTEXT *v11; // r8
  OUTPUTDUPL_MGR *v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  DXGFASTMUTEX *v15; // rbx
  __int64 v17; // [rsp+20h] [rbp-58h]
  DXGFASTMUTEX *v18; // [rsp+50h] [rbp-28h] BYREF
  char v19; // [rsp+58h] [rbp-20h]

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 19) )
  {
    WdLogSingleEntry2(3LL, VidPnSourceId, this);
    WdLogGlobalForLineNumber = 1242;
  }
  else
  {
    v5 = *((_QWORD *)this + 2);
    v19 = 0;
    v6 = (DXGFASTMUTEX *)(v5 + 72 * VidPnSourceId);
    v7 = v6;
    v18 = v6;
    if ( !v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
      v7 = 0LL;
    }
    if ( DXGFASTMUTEX::IsOwner(v7) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 635;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
    v8 = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v6 + 6);
    v9 = 1;
    for ( i = 0; i < *((_DWORD *)this + 2); ++i )
    {
      v11 = *v8;
      if ( *v8 && *((_DWORD *)v11 + 79) )
      {
        if ( v9 )
        {
          if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
          {
            OUTPUTDUPL_MGR::LogPointerPositionChangeParams(v12, a2);
            v11 = *v8;
          }
          v9 = 0;
        }
        v13 = OUTPUTDUPL_CONTEXT::ProcessPointerPosition(v11, a2);
        if ( v13 < 0 )
        {
          v14 = v13;
          WdLogSingleEntry3(2LL, a2->VidPnSourceId, i, v13);
          v17 = a2->VidPnSourceId;
          WdLogGlobalForLineNumber = 1272;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Process pointer position failed in vidpn: 0x%I64x, idx: 0x%I64x, status: 0x%I64x",
            v17,
            i,
            v14,
            0LL,
            0LL);
          break;
        }
      }
      ++v8;
    }
    if ( v19 )
    {
      v15 = v18;
      v19 = 0;
      if ( *((struct _KTHREAD **)v18 + 3) != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v18, 0LL, 0LL);
        WdLogGlobalForLineNumber = 553;
      }
      if ( *((int *)v15 + 8) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 556;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*((_DWORD *)v15 + 8))-- == 1 )
      {
        *((_QWORD *)v15 + 3) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v15 + 8, 0LL);
      }
      KeLeaveCriticalRegion();
    }
  }
}
