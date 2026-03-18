/*
 * XREFs of ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1801A81CC
 * Callers:
 *     ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x1801A8180 (--_ECRedirectedGDISurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CLogicalSurfaceHandleMap@@@Z @ 0x1801A825C (-RemoveElement@-$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CL.c)
 */

void __fastcall CRedirectedGDISurface::~CRedirectedGDISurface(CRedirectedGDISurface *this)
{
  bool v1; // zf
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]

  v1 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = &CRedirectedGDISurface::`vftable';
  if ( !v1 )
    DwmHLSurfCloseCompositorRef(*((_QWORD *)this + 3));
  v3 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 2);
  v8 = 0LL;
  Buffer = v3;
  v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 8), &Buffer);
  if ( v6 )
  {
    if ( v6[2] == v4 )
      CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::RemoveElement(v5 + 8, v6);
  }
}
