/*
 * XREFs of MapInSystemMemory @ 0x140115020
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400E8234 (-LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MapInSystemMemory(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 v3; // r9
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // [rsp+20h] [rbp-38h]
  char v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = **a1;
  if ( (*((_DWORD *)*a1 + 7) & 0x30) != 0 )
    return 0;
  v4 = *(_DWORD *)v1[46];
  if ( (v4 & 8) != 0 )
    return 0;
  if ( (v4 & 0x20000) != 0 )
    return (unsigned int)-1073741823;
  if ( (v1[3] & 0x8000000) == 0 )
  {
    if ( (v4 & 0x40000) != 0 )
    {
      v7 = v1[27];
      v8 = *(_QWORD *)(v3 + 16);
      v9 = v1[28];
      v17 = 0LL;
      v16 = 0;
      v15 = 1;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, char, char, __int64 *))(*(_QWORD *)v7 + 56LL))(
              v7,
              v9,
              0LL,
              v8,
              v15,
              v16,
              &v17);
      if ( !v10 )
      {
        v5 = -1073741801;
        _InterlockedIncrement(&dword_14008A80C);
        CurrentProcess = PsGetCurrentProcess(v11);
        WdLogSingleEntry3(6LL, v1, CurrentProcess, -1073741801LL);
        WdLogGlobalForLineNumber = 23180;
        PsGetCurrentProcess(v13);
        DxgkLogInternalTriageEvent(v14, 262145LL);
        return v5;
      }
      a1[2] = (__int64 *)v10;
      return 0;
    }
    return (unsigned int)-1073741823;
  }
  return 0;
}
