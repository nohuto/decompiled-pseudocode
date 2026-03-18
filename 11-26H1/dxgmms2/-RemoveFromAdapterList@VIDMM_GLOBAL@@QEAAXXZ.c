/*
 * XREFs of ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400A20FC
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x14003A398 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveFromAdapterList(VIDMM_GLOBAL *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
    (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v5,
    (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
  v2 = (_QWORD *)((char *)this + 45240);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v5);
}
