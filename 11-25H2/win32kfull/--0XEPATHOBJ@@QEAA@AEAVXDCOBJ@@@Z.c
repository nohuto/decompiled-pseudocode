/*
 * XREFs of ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6028
 * Callers:
 *     NtGdiStrokeAndFillPath @ 0x1400E5050 (NtGdiStrokeAndFillPath.c)
 *     NtGdiSelectClipPath @ 0x1400E5210 (NtGdiSelectClipPath.c)
 *     NtGdiWidenPath @ 0x1400E53B0 (NtGdiWidenPath.c)
 *     NtGdiStrokePath @ 0x1400E5B50 (NtGdiStrokePath.c)
 *     NtGdiPathToRegion @ 0x1400E5CB0 (NtGdiPathToRegion.c)
 *     NtGdiFillPath @ 0x1400E5DF0 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1400E5F50 (NtGdiCloseFigure.c)
 *     NtGdiFlattenPath @ 0x140226630 (NtGdiFlattenPath.c)
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400E58DC (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61B8 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, DC **a2, __int64 a3, __int64 a4)
{
  DC **v5; // rdi
  int v6; // eax
  __int64 v7; // rax
  struct HPATH__ *v9; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-108h] BYREF
  struct HPATH__ **v11; // [rsp+28h] [rbp-100h]
  _BYTE v12[8]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v13; // [rsp+A8h] [rbp-80h]

  *((_QWORD *)this + 9) = 0LL;
  v5 = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  v6 = *((_DWORD *)*a2 + 62);
  if ( (v6 & 2) != 0 )
  {
    *((_DWORD *)*a2 + 62) = v6 & 0xFFFFFFFD;
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v12, *((struct HPATH__ **)*a2 + 25), a3, a4);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v10);
    if ( v11 && v13 && EPATHOBJ::bClone((EPATHOBJ *)v10, (const struct EPATHOBJ *)v12) )
      v9 = *v11;
    else
      v9 = 0LL;
    DC::hpath(*v5, v9);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v10);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v12);
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap, a4);
    *((_DWORD *)this + 28) = 1;
  }
  LOBYTE(a2) = 7;
  v7 = HmgShareLock(*((_QWORD *)*v5 + 25), a2, a3, a4);
  *((_QWORD *)this + 1) = v7;
  if ( v7 )
  {
    *((_DWORD *)this + 1) = *(_DWORD *)(v7 + 96);
    *(_DWORD *)this = *(_DWORD *)(v7 + 92);
  }
  return this;
}
