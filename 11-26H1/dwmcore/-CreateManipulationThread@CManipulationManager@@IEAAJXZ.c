/*
 * XREFs of ?CreateManipulationThread@CManipulationManager@@IEAAJXZ @ 0x1801D6718
 * Callers:
 *     ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1801DDDAC (-Initialize@CManipulationManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::CreateManipulationThread(CManipulationManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  HANDLE v4; // rax
  DWORD v5; // ecx
  int v7; // r9d
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 152) )
  {
    v3 = -2147467260;
    dwCreationFlags = 918;
LABEL_10:
    v7 = v3;
    goto LABEL_7;
  }
  v2 = (*(__int64 (__fastcall **)(CManipulationManager *))(*(_QWORD *)this + 56LL))(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v7 = v2;
    dwCreationFlags = 921;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803732F8, 3u, v7, dwCreationFlags, 0LL);
    return v3;
  }
  ThreadId = 0;
  v4 = CreateThread(0LL, 0LL, CManipulationManager::s_ThreadMain, this, 4u, &ThreadId);
  v5 = ThreadId;
  *((_QWORD *)this + 18) = v4;
  CManipulationManager::s_dwManipulationThreadId = v5;
  if ( !v4 )
  {
    v3 = -2147024882;
    dwCreationFlags = 935;
    goto LABEL_10;
  }
  SetThreadDescription(v4, L"DWM Manipulation Thread");
  SetThreadPriority(*((HANDLE *)this + 18), 16);
  ResumeThread(*((HANDLE *)this + 18));
  WaitForSingleObject(CManipulationManager::s_hManipThreadInitializedWaitEvent, 0xFFFFFFFF);
  return v3;
}
