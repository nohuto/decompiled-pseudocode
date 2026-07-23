/*
 * XREFs of ?RtlpProcessAvailableCpusNotificationCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180148EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpProcessAvailableCpusNotificationCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall **a4)(_QWORD, _QWORD, _QWORD))
{
  ((void (__fastcall **)(_QWORD, __int64, struct _WNF_TYPE_ID *))a4)[1](a4[2], a2, a3);
  return 0LL;
}
