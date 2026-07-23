/*
 * XREFs of ViDeadlockAnalyze @ 0x140C3CE68
 * Callers:
 *     ViDeadlockAnalyze @ 0x140C3CE68 (ViDeadlockAnalyze.c)
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140263490 (KeQueryCurrentStackInformation.c)
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 *     ViDeadlockAddParticipant @ 0x140C3CACC (ViDeadlockAddParticipant.c)
 *     ViDeadlockAnalyze @ 0x140C3CE68 (ViDeadlockAnalyze.c)
 *     ViDeadlockCertify @ 0x140C3D0DC (ViDeadlockCertify.c)
 *     ViDeadlockPreprocessOptions @ 0x140C3DDD0 (ViDeadlockPreprocessOptions.c)
 */

__int64 __fastcall ViDeadlockAnalyze(ULONG_PTR a1, ULONG_PTR a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned int v8; // edi
  _DWORD *v9; // rcx
  bool v10; // zf
  _DWORD *v11; // rbx
  int v12; // edx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 *v16; // r12
  unsigned int v17; // r8d
  __int64 *i; // rbx
  __int64 *v19; // r14
  __int64 v20; // rdx
  int v21; // r9d
  unsigned int v22; // ecx
  int v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v8 = 1;
  if ( a3 )
  {
    v9 = ViDeadlockGlobals;
    ++*((_DWORD *)ViDeadlockGlobals + 8201);
    v10 = v9[8201] == 1073741822;
    v9[8199] = 0;
    v9[8216] = 0;
    *((_QWORD *)v9 + 4107) = 0LL;
    if ( v10 )
      ViDeadlockState |= 8u;
    KeQueryCurrentStackInformation((__int64)(v9 + 8283), (__int64)(v9 + 8284), (__int64)(v9 + 8286));
    a4 = v23;
  }
  v11 = ViDeadlockGlobals;
  v12 = *((_DWORD *)ViDeadlockGlobals + 8201);
  if ( *(_DWORD *)(a2 + 72) >> 3 == v12 )
    return 0LL;
  ++*((_DWORD *)ViDeadlockGlobals + 8199);
  *(_DWORD *)(a2 + 72) = (8 * v12) | *(_DWORD *)(a2 + 72) & 7;
  if ( a4 > v11[8202] )
  {
    ++v11[8204];
    return 0LL;
  }
  if ( v11[8199] >= v11[8203] )
  {
    ++v11[8205];
    return 0LL;
  }
  v14 = *((_QWORD *)v11 + 4142);
  if ( (unsigned __int64)&KeGetCurrentStackPointer()[-v14] <= 0x1630 )
  {
    ++*((_DWORD *)ViDeadlockGlobals + 8206);
    return 0LL;
  }
  v15 = *(_QWORD *)(a2 + 56);
  if ( a1 != *(_QWORD *)(v15 + 8) || (*(_DWORD *)(a2 + 72) & 4) != 0 )
  {
    v16 = (__int64 *)(v15 + 24);
    v17 = 0;
    for ( i = *(__int64 **)(v15 + 24); ; i = (__int64 *)*i )
    {
      v8 = v17;
      if ( i == v16 )
        break;
      v19 = i - 5;
      v20 = *(i - 5);
      *((_DWORD *)i + 8) = i[4] & 7 | (8 * *((_DWORD *)ViDeadlockGlobals + 8201));
      if ( v20 )
      {
        v21 = v23 + 1;
        if ( v19 == (__int64 *)a2 )
          v21 = v23;
        v8 = ViDeadlockAnalyze(a1, v20, 0, v21, a5);
        v17 = v8;
        if ( v8 )
        {
          ViDeadlockAddParticipant((__int64)(i - 5));
          if ( v19 == (__int64 *)a2 )
            goto LABEL_26;
          goto LABEL_15;
        }
      }
    }
    if ( v17 )
      goto LABEL_26;
    if ( !a3 )
      return v8;
  }
  else
  {
LABEL_15:
    ViDeadlockAddParticipant(a2);
LABEL_26:
    if ( !a3 )
      return v8;
    if ( (unsigned int)ViDeadlockCertify(a5, a2) )
    {
      *((_QWORD *)ViDeadlockGlobals + 4107) = a1;
      ViDeadlockPreprocessOptions(
        byte_140E0EB48,
        "Type !deadlock in the debugger for more information.",
        4097LL,
        a1,
        a2,
        0LL);
      VfReportIssueWithOptions(0xC4u, 0x1001uLL, a1, a2, 0LL, byte_140E0EB48);
      return 0LL;
    }
    v8 = 0;
  }
  v22 = *((_DWORD *)ViDeadlockGlobals + 8199);
  if ( v22 > *((_DWORD *)ViDeadlockGlobals + 8200) )
    *((_DWORD *)ViDeadlockGlobals + 8200) = v22;
  return v8;
}
