/*
 * XREFs of ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x140093BC0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateBitmap @ 0x14008BDE0 (GreCreateBitmap.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140093C3C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

HSURF GrepCreateDefaultBitmap(void)
{
  HSURF v0; // rbx
  HSURF result; // rax
  __int64 v2; // rcx
  HSURF v3; // rdi
  __int64 SessionState; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v0 = 0LL;
  result = (HSURF)GreCreateBitmap(1, 1, 1, 1, 0LL);
  v3 = result;
  if ( result )
  {
    SessionState = W32GetSessionState(v2);
    SURFREF::SURFREF((SURFREF *)v5, v3, *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
    if ( v6 )
    {
      *(_WORD *)(v6 + 14) |= 0x40u;
      v0 = v3;
    }
    SURFREF::~SURFREF((SURFREF *)v5);
    return v0;
  }
  return result;
}
