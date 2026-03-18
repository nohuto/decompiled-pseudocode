/*
 * XREFs of ?SelectTask@VIDMM_SCHCLASS_PAGING@@UEAAPEAUVIDMM_TASK@@PEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400C0530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct VIDMM_TASK *__fastcall VIDMM_SCHCLASS_PAGING::SelectTask(
        VIDMM_SCHCLASS_PAGING *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK_CONTEXT *a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r9
  struct VIDMM_TASK *result; // rax

  v3 = (_QWORD *)*((_QWORD *)this + 3);
  if ( !v3 )
    return 0LL;
  do
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
  }
  while ( v3 );
  *((_QWORD *)a3 + 1) = *((_QWORD *)a2 + 667) + 10000000LL;
  result = (struct VIDMM_TASK *)(v4 - 1);
  *((_QWORD *)this + 4) = v4[6];
  return result;
}
