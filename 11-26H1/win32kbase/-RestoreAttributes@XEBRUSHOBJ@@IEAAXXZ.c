/*
 * XREFs of ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x14003437C
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400346C8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreSetBrushGlobal @ 0x14003470C (GreSetBrushGlobal.c)
 * Callees:
 *     <none>
 */

void __fastcall XEBRUSHOBJ::RestoreAttributes(XEBRUSHOBJ *this)
{
  _DWORD *v2; // r8
  __int64 v3; // rax
  _QWORD *v4; // rcx

  v2 = (_DWORD *)((char *)this + 8);
  if ( *((_DWORD *)this + 2) )
  {
    v3 = *(_QWORD *)this;
    v4 = (_QWORD *)(*(_QWORD *)this + 64LL);
    if ( *(_QWORD **)(v3 + 48) == v4 )
    {
      **(_QWORD **)(v3 + 56) = *v4;
      *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)(*(_QWORD *)this + 56LL);
    }
  }
  *v2 = 0;
}
