/*
 * XREFs of ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1401DEC90
 * Callers:
 *     NtGdiCreateServerMetaFile @ 0x140325C10 (NtGdiCreateServerMetaFile.c)
 * Callees:
 *     <none>
 */

HmgInsertObjectHelper *__fastcall HmgInsertObjectHelper::HmgInsertObjectHelper(HmgInsertObjectHelper *this)
{
  HmgInsertObjectHelper *result; // rax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  PushThreadGuardedObject(
    this,
    this,
    UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 40) = 0;
  return result;
}
