/*
 * XREFs of ?RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z @ 0x140106FA4
 * Callers:
 *     zzzDestroyQueue @ 0x1401667F0 (zzzDestroyQueue.c)
 * Callees:
 *     ?RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@@Z @ 0x1401A6A8C (-RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@@Z.c)
 */

char __fastcall tagTHREADINFO::RemoveThreadFromQSharingLists(tagTHREADINFO *this, struct tagQ *a2)
{
  char v4; // bl
  char v5; // r8
  char result; // al

  v4 = tagTHREADINFO::RemoveThreadFromListWorker(this, a2, 504LL, 1688LL);
  v5 = tagTHREADINFO::RemoveThreadFromListWorker(this, a2, 512LL, 1696LL);
  result = 0;
  if ( v4 || v5 )
    return 1;
  return result;
}
