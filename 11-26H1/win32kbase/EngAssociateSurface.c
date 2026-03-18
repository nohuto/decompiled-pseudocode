/*
 * XREFs of EngAssociateSurface @ 0x1401F0E20
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121FD0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1401C35F4 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  unsigned int v6; // ebp
  __int64 v8; // rcx
  __int64 SessionState; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int *v13[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  v6 = (unsigned int)hsurf;
  if ( !hdev )
    return 0;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v13, (__int64)hdev);
  v14 = 0LL;
  SessionState = W32GetSessionState(v8);
  v10 = HmgShareLock(*(_QWORD *)(SessionState + 88), v6, 5, 16);
  v14 = v10;
  v11 = v10;
  if ( !v10 )
  {
    SURFREF::~SURFREF(v13);
    return 0;
  }
  v12 = *(_DWORD *)(v10 + 112);
  if ( (v12 & 0x200000) != 0 )
  {
    *(_QWORD *)(v11 + 136) = 0LL;
    v3 = 1;
    *(_QWORD *)(v14 + 48) = hdev;
    *(_QWORD *)(v14 + 40) = *((_QWORD *)hdev + 223);
    *(_DWORD *)(v14 + 112) |= v4;
  }
  else
  {
    TraceLoggingWriteUnsupportedGdiUsage(v11, v12);
  }
  SURFREF::~SURFREF(v13);
  return v3;
}
