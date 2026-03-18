/*
 * XREFs of OPMInitialize @ 0x1401585AC
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??0COPM@@QEAA@PEAJ@Z @ 0x14019A900 (--0COPM@@QEAA@PEAJ@Z.c)
 */

__int64 __fastcall OPMInitialize(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v3; // rsi
  COPM *Pool2; // rax
  COPM *v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  v7 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  Pool2 = (COPM *)ExAllocatePool2(258LL, 64LL, 1297108807LL);
  if ( Pool2 )
  {
    v5 = COPM::COPM(Pool2, &v7);
    v2 = v7;
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(v3 + 3648) = v5;
  if ( !v5 )
    return 3221225495LL;
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v1;
}
