/*
 * XREFs of ?EnqueueTask@VIDMM_SCHCLASS_PAGING@@UEAAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400C03C0
 * Callers:
 *     <none>
 * Callees:
 *     CompareTaskRuntime @ 0x1400C0280 (CompareTaskRuntime.c)
 */

void __fastcall VIDMM_SCHCLASS_PAGING::EnqueueTask(
        VIDMM_SCHCLASS_PAGING *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK *a3)
{
  _QWORD *v3; // rdi
  char v4; // bl
  struct VIDMM_TASK *v5; // rsi
  _QWORD *v7; // rax

  v3 = (_QWORD *)*((_QWORD *)this + 3);
  v4 = 0;
  v5 = a3;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)CompareTaskRuntime((__int64 *)v5 + 7, (__int64)v3) < 0 )
      {
        v7 = (_QWORD *)*v3;
        if ( !*v3 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v3[1];
        if ( !v7 )
        {
          v4 = 1;
          break;
        }
      }
      v3 = v7;
    }
  }
  LOBYTE(a3) = v4;
  RtlAvlInsertNodeEx((char *)this + 24, v3, a3, (char *)v5 + 8);
  *((_QWORD *)v5 + 7) = *((_QWORD *)this + 4) - *((_QWORD *)v5 + 7);
}
