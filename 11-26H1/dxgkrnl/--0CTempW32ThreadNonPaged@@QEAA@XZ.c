/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400306B0
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x14000B1C0 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1400304F0 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1403AF3A0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  _QWORD *CurrentThreadWin32Thread; // rax
  _QWORD *v3; // rsi
  CTempW32ThreadNonPaged *result; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  memset(this, 0, 0xF8uLL);
  *((_BYTE *)this + 248) = 0;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  v3 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    if ( *CurrentThreadWin32Thread )
    {
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentProcess = PsGetCurrentProcess(),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        if ( *(_DWORD *)(*v3 + 368LL) )
        {
          *(_QWORD *)this = *v3;
          if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2650;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v12,
                  v11,
                  v13,
                  0LL,
                  2,
                  -1,
                  (__int64)L"m_pGlobal != NULL",
                  2650LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
          if ( (*(int (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304968LL) + 8LL))(*v3) <= 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 101;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v6,
                  v5,
                  v7,
                  0LL,
                  2,
                  -1,
                  (__int64)L"newRefCount > 1",
                  101LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
        }
      }
    }
    return this;
  }
  else
  {
    ExInitializeFastOwnerEntry((char *)this + 32);
    ExInitializeFastOwnerEntry((char *)this + 104);
    ExInitializeFastOwnerEntry((char *)this + 176);
    *((_DWORD *)this + 6) |= 1u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), this, 0LL);
    result = this;
    *((_BYTE *)this + 248) = 1;
  }
  return result;
}
