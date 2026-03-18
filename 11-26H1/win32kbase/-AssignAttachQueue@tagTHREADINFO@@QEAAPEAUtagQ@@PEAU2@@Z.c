/*
 * XREFs of ?AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1401409E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x140140A0C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 */

struct tagQ *__fastcall tagTHREADINFO::AssignAttachQueue(tagTHREADINFO *this, struct tagQ *a2)
{
  return (struct tagQ *)tagTHREADINFO::AssignQueueWorker((_DWORD)this, (_DWORD)a2, 536, 1696, 688);
}
