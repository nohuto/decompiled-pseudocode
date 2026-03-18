/*
 * XREFs of ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1401DEC60
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D8368 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     EngCreateDriverObj @ 0x140318C60 (EngCreateDriverObj.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x140320D20 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     NtGdiCreateServerMetaFile @ 0x140325C10 (NtGdiCreateServerMetaFile.c)
 * Callees:
 *     <none>
 */

void __fastcall HmgInsertObjectHelper::~HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 && !*((_BYTE *)this + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(v1 + 12));
  PopThreadGuardedObject(this);
}
