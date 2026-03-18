/*
 * XREFs of ?Execute@VIDMM_TASK_STATE_CHANGE@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400B86D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_TASK_STATE_CHANGE::Execute(
        VIDMM_TASK_STATE_CHANGE *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK_CONTEXT *a3)
{
  unsigned int v3; // ebp
  _BYTE *v4; // rdi
  struct _KEVENT *v7; // rcx
  char v8; // al
  struct _KEVENT *v9; // rcx

  v3 = 0;
  v4 = (char *)a2 + 212;
  if ( *((_BYTE *)a2 + 213) == 6 )
  {
    v7 = (struct _KEVENT *)(*((_QWORD *)a2 + 3) + 48LL);
    *((_BYTE *)a2 + 213) = *v4;
    KeSetEvent(v7, 0, 0);
  }
  v8 = *((_BYTE *)a2 + 213);
  if ( v8 != *v4 )
  {
    v9 = (struct _KEVENT *)(*((_QWORD *)a2 + 3) + 48LL);
    *v4 = v8;
    KeSetEvent(v9, 0, 0);
    if ( *((_BYTE *)a2 + 213) == 2 )
      v3 = -1073741077;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 18);
  return v3;
}
