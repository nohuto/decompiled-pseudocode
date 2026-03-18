/*
 * XREFs of _SetActivationFilter @ 0x1401B3A4C
 * Callers:
 *     NtUserSetActivationFilter @ 0x14015C1B0 (NtUserSetActivationFilter.c)
 * Callees:
 *     _FindActivationFilterWindow @ 0x1401B3B0C (_FindActivationFilterWindow.c)
 */

__int64 __fastcall SetActivationFilter(__int64 a1, int a2)
{
  __int64 ActivationFilterWindow; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  ActivationFilterWindow = FindActivationFilterWindow(a1);
  v5 = 0;
  v6 = ActivationFilterWindow;
  if ( a2 )
  {
    if ( !ActivationFilterWindow )
    {
      v7 = Win32AllocPoolZInit(32LL, 1869443925LL);
      v6 = v7;
      if ( v7 )
      {
        v12[1] = a1;
        v12[0] = v7 + 16;
        HMAssignmentLock(v12, 0LL);
        v8 = *(_QWORD *)(a1 + 24) + 312LL;
        v9 = *(_QWORD *)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
          __fastfail(3u);
        *(_QWORD *)v6 = v9;
        *(_QWORD *)(v6 + 8) = v8;
        *(_QWORD *)(v9 + 8) = v6;
        *(_QWORD *)v8 = v6;
        goto LABEL_8;
      }
    }
  }
  v10 = v6 == 0;
  if ( v6 )
  {
LABEL_8:
    *(_DWORD *)(v6 + 24) = a2;
    v10 = v6 == 0;
  }
  LOBYTE(v5) = !v10;
  return v5;
}
