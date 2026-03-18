/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401ECCD0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?vInc_cRef@SURFACE@@QEAAXXZ @ 0x140012190 (-vInc_cRef@SURFACE@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400254D4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1401ECE90 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HSURF a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  struct _FAST_MUTEX **v10; // rbx
  unsigned int *v11[4]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v12; // [rsp+40h] [rbp-18h]

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  SURFREF::SURFREF((SURFREF *)v11, a3);
  if ( v12 )
  {
    v8 = (_QWORD *)PALLOCNOZ(0x18u, 0x6C646247u);
    if ( v8 )
    {
      SURFACE::vInc_cRef(v12);
      *v8 = a2;
      v8[1] = a3;
      v9 = *((_QWORD *)this + 11);
      v8[2] = v9;
      v10 = *(struct _FAST_MUTEX ***)(W32GetSessionState(v9) + 88);
      KeAcquireGuardedMutex(*v10 + 26);
      *((_QWORD *)this + 11) = v8;
      KeReleaseGuardedMutex(*v10 + 26);
      v6 = 1;
    }
  }
  SURFREF::~SURFREF(v11);
  return v6;
}
