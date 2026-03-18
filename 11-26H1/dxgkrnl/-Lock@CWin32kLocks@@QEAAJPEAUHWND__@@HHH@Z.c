/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x140041E4C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403C9104 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x140039654 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  int v17; // edx
  int v18; // r8d

  v5 = 0;
  v8 = *((_QWORD *)this + 8);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v8 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 579;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pAdapter->IsCoreResourceSharedOwner()",
      579LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_QWORD *)this || *((_QWORD *)this + 1) || *((_QWORD *)this + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 581;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          581,
          v17,
          v18,
          0LL,
          2,
          -1,
          (__int64)L"m_hWindowDc == NULL && m_hFullscreenDc == NULL && m_hDevLocked == NULL",
          581LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v11 = (*(__int64 (__fastcall **)(HWND, unsigned __int64))(*((_QWORD *)this + 3) + 48LL))(
          a2,
          ((unsigned __int64)this + 8) & -(__int64)(a5 != 0));
  *(_QWORD *)this = v11;
  if ( v11 )
  {
    if ( a5 && !*((_QWORD *)this + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 587;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"((! bFullscreen) || (m_hFullscreenDc))",
        587LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)this + 3) + 304LL))(*(_QWORD *)this, 1LL);
    v12 = *((_QWORD *)this + 8);
    v13 = *(_QWORD *)this;
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = a3;
    if ( *((_DWORD *)this + 13) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 477;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bSpriteLockTaken == NULL", 477LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v13 )
    {
      if ( v12 )
      {
        v14 = *((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = v12;
        *((_DWORD *)this + 14) = (*(__int64 (__fastcall **)(__int64))(v14 + 272))(v13);
        if ( a4 )
        {
          (*(void (__fastcall **)(_QWORD, bool))(*((_QWORD *)this + 4) + 288LL))(
            *((_QWORD *)this + 5),
            *((_DWORD *)this + 12) == 0);
          *((_DWORD *)this + 13) = 1;
        }
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v15;
    if ( !v15 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 600;
      CWin32kLocks::Unlock(this);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v5 = -1071775731;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 608;
  }
  return v5;
}
