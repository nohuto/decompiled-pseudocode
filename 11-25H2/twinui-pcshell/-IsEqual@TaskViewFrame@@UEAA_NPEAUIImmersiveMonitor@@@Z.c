/*
 * XREFs of ?IsEqual@TaskViewFrame@@UEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18023DCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall TaskViewFrame::IsEqual(TaskViewFrame *this, struct IImmersiveMonitor *a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v4 = 0;
  return (*(int (__fastcall **)(__int64, struct IImmersiveMonitor *, int *))(*(_QWORD *)v2 + 96LL))(v2, a2, &v4) >= 0
      && v4 != 0;
}
