/*
 * XREFs of ??0CWindowIconic@@IEAA@XZ @ 0x180038600
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003852C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 */

CWindowIconic *__fastcall CWindowIconic::CWindowIconic(CWindowIconic *this)
{
  __int64 v1; // rcx

  CBaseObject::CBaseObject(this);
  *(_QWORD *)v1 = &CWindowIconic::`vftable';
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 40) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_DWORD *)(v1 + 56) = 0;
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_QWORD *)(v1 + 96) = 0LL;
  *(_QWORD *)(v1 + 104) = 0LL;
  *(_QWORD *)(v1 + 112) = 0LL;
  return (CWindowIconic *)v1;
}
