/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401C7230
 * Callers:
 *     <none>
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140086F7C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1401C7330 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, __int64 a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rdi
  struct _BASEOBJECT *v9; // rbx
  __int64 v10; // rcx
  struct _FAST_MUTEX **v11; // rbx
  _BYTE v12[32]; // [rsp+20h] [rbp-38h] BYREF
  struct _BASEOBJECT *v13; // [rsp+40h] [rbp-18h]

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  SURFREF::SURFREF((SURFREF *)v12, a3);
  if ( v13 )
  {
    v8 = (_QWORD *)PALLOCNOZ(24LL, 1818518087LL);
    if ( v8 )
    {
      v9 = v13;
      HmgIncrementShareReferenceCount(v13);
      ++*((_DWORD *)v9 + 42);
      *v8 = a2;
      v8[1] = a3;
      v10 = *((_QWORD *)this + 11);
      v8[2] = v10;
      v11 = *(struct _FAST_MUTEX ***)(W32GetSessionState(v10) + 88);
      KeAcquireGuardedMutex(*v11 + 26);
      *((_QWORD *)this + 11) = v8;
      KeReleaseGuardedMutex(*v11 + 26);
      v6 = 1;
    }
  }
  SURFREF::~SURFREF((SURFREF *)v12);
  return v6;
}
