/*
 * XREFs of ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x14002F050
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x14000A5B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013990 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x14002F850 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A6920 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(__int64 a1, _DWORD *a2)
{
  struct DXGTHREAD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGTHREAD *Current; // rax
  int v8; // eax
  KIRQL v9; // r14
  KIRQL v10; // al
  __int64 v11; // r13
  struct DXGTHREAD *v12; // rsi
  int v13; // r12d
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGGLOBAL *Global; // r14
  int v21; // edx
  int v22; // ecx
  struct DXGPROCESS *v23; // rax
  int v24; // ecx
  DXGGLOBAL *v25; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v27; // rcx
  struct DXGTHREAD *v28; // rax
  KIRQL v29; // al
  __int64 v30; // [rsp+20h] [rbp-D8h]
  __int64 v31; // [rsp+28h] [rbp-D0h]
  __int64 v32; // [rsp+30h] [rbp-C8h]
  KIRQL CurrentIrql; // [rsp+60h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-88h]
  char v35; // [rsp+78h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  v34 = qword_1401664C0 & 2;
  v4 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v4 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 186;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ProfilerEntryCount >= 0", 186LL, 0LL, 0LL, 0LL, 0LL);
      }
      v8 = *((_DWORD *)v4 + 13);
      if ( !v8 )
        *((_DWORD *)v4 + 14) = 5122;
      *((_DWORD *)v4 + 13) = v8 + 1;
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v32) = a2[2];
    LODWORD(v31) = a2[1];
    LODWORD(v30) = *a2;
    McTemplateK0pqtq_EtwWriteTransfer(v5, &DdiSetVidPnMultiPlaneOverlay3Enter, v6, *(_QWORD *)(a1 + 16), v30, v31, v32);
  }
  CurrentIrql = KeGetCurrentIrql();
  v9 = CurrentIrql;
  if ( !CurrentIrql )
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(a1 + 16), 1LL);
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 4852LL), 1u);
  v10 = KeGetCurrentIrql();
  v11 = v10;
  v12 = 0LL;
  if ( v10 < 2u && (v28 = DXGTHREAD::GetCurrent(), (v12 = v28) != 0LL) )
    v13 = *((_DWORD *)v28 + 12);
  else
    v13 = 0;
  v14 = *(_QWORD *)(a1 + 16);
  v35 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( *((_DWORD *)Global + 417) )
    {
      v22 = *(_DWORD *)(v14 + 444);
      if ( (v22 & 0x20) == 0 && (v22 & 4) == 0 )
      {
        v23 = DXGPROCESS::GetCurrent();
        if ( v23 )
        {
          if ( (*((_BYTE *)v23 + 408) & 1) == 0 && (*((_DWORD *)v23 + 102) & 2) == 0 )
          {
            v24 = *((_DWORD *)Global + 417);
            if ( v24 == 2 || v24 == 1 && *((_BYTE *)v23 + 573) )
            {
              v25 = DXGGLOBAL::GetGlobal();
              SessionData = DXGGLOBAL::GetSessionData(v25);
              if ( SessionData )
              {
                v27 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                if ( v27 )
                {
                  KeStackAttachProcess(v27, &ApcState);
                  v35 = 1;
                }
              }
            }
          }
        }
      }
    }
    v9 = CurrentIrql;
  }
  v15 = (*(int (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 16) + 1032LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL),
          a2);
  if ( v35 )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v11 != KeGetCurrentIrql() )
  {
    v29 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, a1, v11, v29);
    WdLogGlobalForLineNumber = 1134;
  }
  if ( v12 )
  {
    v16 = *((int *)v12 + 12);
    if ( (_DWORD)v16 != v13 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v12 + 12), v13, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 4852LL));
  if ( (_DWORD)v15 != -2147483631 && (_DWORD)v15 != -1073741267 )
  {
    if ( (_DWORD)v15 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1137;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v16,
            v21,
            v17,
            0LL,
            0,
            -1,
            (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  if ( !v9 )
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(a1 + 16));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v32) = a2[2];
    LODWORD(v31) = a2[1];
    LODWORD(v30) = *a2;
    McTemplateK0pqtq_EtwWriteTransfer(v16, &DdiSetVidPnMultiPlaneOverlay3Exit, v17, *(_QWORD *)(a1 + 16), v30, v31, v32);
  }
  if ( v4 )
  {
    if ( *((int *)v4 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 196;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ProfilerEntryCount > 0", 196LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v4 + 13))-- == 1 )
      *((_DWORD *)v4 + 14) = -1;
  }
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
  return (unsigned int)v15;
}
