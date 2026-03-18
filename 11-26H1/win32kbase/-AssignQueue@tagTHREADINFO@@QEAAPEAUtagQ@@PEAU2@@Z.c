/*
 * XREFs of ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x140140960
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x140140A0C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 */

struct tagQ *__fastcall tagTHREADINFO::AssignQueue(tagTHREADINFO *this, struct tagQ *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax

  v4 = tagTHREADINFO::AssignQueueWorker((_DWORD)this, (_DWORD)a2, 528, 1688, 464);
  v5 = (__int64 *)*((_QWORD *)a2 + 15);
  v6 = 0LL;
  v7 = v4;
  if ( v5 )
    v8 = *v5;
  else
    v8 = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 60) + 32LL) = v8;
  v9 = (__int64 *)*((_QWORD *)a2 + 16);
  if ( v9 )
    v6 = *v9;
  *(_QWORD *)(*((_QWORD *)this + 60) + 40LL) = v6;
  return (struct tagQ *)v7;
}
