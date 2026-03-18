/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1400C92D4
 * Callers:
 *     FreeHook @ 0x1400C8710 (FreeHook.c)
 * Callees:
 *     PhkFirstValid @ 0x1400C5E60 (PhkFirstValid.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1400C7900 (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1400C8280 (PhkFirstGlobalValid.c)
 */

void __fastcall CheckWHFBits(PRKPROCESS **a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rdx
  int v5; // r15d
  BOOL v6; // esi
  __int64 Valid; // rax
  __int64 CurrentProcessWin32Process; // rax
  PRKPROCESS *v9; // rcx
  int v10; // edx
  PERESOURCE v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h]

  v2 = a2;
  v11 = *(PERESOURCE *)(W32GetUserSessionState(a1, a2) + 42312);
  LockRefactorStagingAssertAny(&v11, v4);
  v5 = 1;
  v6 = 1;
  LODWORD(v11) = 1;
  Valid = PhkFirstValid((__int64)a1, v2);
  if ( Valid )
  {
    if ( (*(_DWORD *)(Valid + 64) & 1) != 0 )
    {
      v6 = 0;
    }
    else
    {
      v5 = 0;
      v6 = PhkFirstGlobalValid((__int64)a1, v2) == 0;
    }
    LODWORD(v11) = v6;
  }
  if ( v5 )
  {
    *((_DWORD *)a1 + 180) &= ~(1 << (v2 + 1));
    if ( a1[65] )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2 + 1);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v9 = a1[58];
      if ( v9 == (PRKPROCESS *)CurrentProcessWin32Process )
      {
        v10 = 0;
      }
      else
      {
        KeAttachProcess(*v9);
        v10 = 1;
      }
      v12 = v10;
      *((_DWORD *)a1[65] + 14) = *((_DWORD *)a1 + 180);
      if ( v10 )
        KeDetachProcess();
    }
  }
  if ( v6 )
    *((_DWORD *)*a1[63] + 4) &= ~(1 << (v2 + 1));
}
