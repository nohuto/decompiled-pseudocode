/*
 * XREFs of ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1400300E0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?bUnMap@SURFACE@@QEAAHXZ @ 0x140030160 (-bUnMap@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SURFREFVIEW::bUnMap(SURFACE **this)
{
  __int64 result; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  result = 0LL;
  if ( *this )
  {
    if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(this) + 88) + 4368LL) )
    {
      v3 = *((unsigned int *)*this + 16);
      if ( (_DWORD)v3 )
      {
        v4 = *((_QWORD *)*this + 9);
        if ( v4 )
        {
          v5 = v4 + v3;
          while ( v4 < v5 )
            v4 += 4096LL;
        }
      }
    }
    result = SURFACE::bUnMap(*this);
  }
  *this = 0LL;
  return result;
}
