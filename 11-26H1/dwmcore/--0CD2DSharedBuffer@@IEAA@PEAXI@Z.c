/*
 * XREFs of ??0CD2DSharedBuffer@@IEAA@PEAXI@Z @ 0x1802A4CA0
 * Callers:
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1802A4CD4 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::CD2DSharedBuffer(CD2DSharedBuffer *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  CD2DSharedBuffer *result; // rax
  int v5; // r8d

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
    (__int64)this,
    a2);
  *(_QWORD *)(v3 + 16) = v2;
  *(_QWORD *)v3 = &CD2DSharedBuffer::`vftable';
  result = (CD2DSharedBuffer *)v3;
  *(_DWORD *)(v3 + 24) = v5;
  *(_QWORD *)(v3 + 32) = 0LL;
  return result;
}
