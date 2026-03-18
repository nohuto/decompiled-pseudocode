/*
 * XREFs of EngAssociateSurface @ 0x1400C72B0
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1401299F0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14008D308 (--0SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1400C7380 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1401A0934 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  _BYTE v10[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  if ( !hdev )
    return 0;
  SURFREF::SURFREF((SURFREF *)v10);
  LOBYTE(v7) = 5;
  v8 = HmgShareLockCheckIgnoreStockBit(hsurf, v7);
  v11 = v8;
  if ( !v8 )
  {
    SURFREF::~SURFREF((SURFREF *)v10);
    return 0;
  }
  if ( (*(_DWORD *)(v8 + 112) & 0x200000) != 0 )
  {
    *(_QWORD *)(v8 + 136) = 0LL;
    v3 = 1;
    *(_QWORD *)(v11 + 48) = hdev;
    *(_QWORD *)(v11 + 40) = *((_QWORD *)hdev + 223);
    *(_DWORD *)(v11 + 112) |= v4;
  }
  else
  {
    TraceLoggingWriteUnsupportedGdiUsage(3LL, *(unsigned int *)(v8 + 112), 0LL, 0LL, 0LL);
  }
  SURFREF::~SURFREF((SURFREF *)v10);
  return v3;
}
