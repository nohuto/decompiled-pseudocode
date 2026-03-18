/*
 * XREFs of EngMarkBandingSurface @ 0x140306310
 * Callers:
 *     NtGdiEngMarkBandingSurface @ 0x14026EB30 (NtGdiEngMarkBandingSurface.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14009A8F4 (--0SURFREF@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x14026A5A0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

BOOL __stdcall EngMarkBandingSurface(HSURF hsurf)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  BOOL v4; // ebx
  __int64 v5; // rcx
  int v7; // eax
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v8);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, v2);
  v4 = 0;
  v9 = v3;
  v5 = v3;
  if ( v3 )
  {
    v7 = *(_DWORD *)(v3 + 112);
    if ( (v7 & 0x200000) != 0 )
    {
      v4 = 1;
      *(_DWORD *)(v5 + 112) = v7 | 0x2000000;
    }
    else
    {
      TraceLoggingWriteUnsupportedGdiUsage();
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
    return v4;
  }
  else
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
    return 0;
  }
}
