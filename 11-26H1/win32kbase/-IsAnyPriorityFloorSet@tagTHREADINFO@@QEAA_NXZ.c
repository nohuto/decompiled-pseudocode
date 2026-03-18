/*
 * XREFs of ?IsAnyPriorityFloorSet@tagTHREADINFO@@QEAA_NXZ @ 0x1400BC000
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagTHREADINFO::IsAnyPriorityFloorSet(tagTHREADINFO *this)
{
  tagTHREADINFO *v1; // rbx
  char *v2; // rdi

  v1 = this;
  v2 = (char *)this + 1728;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  LOBYTE(v1) = *((_WORD *)v1 + 868) != 0;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (char)v1;
}
