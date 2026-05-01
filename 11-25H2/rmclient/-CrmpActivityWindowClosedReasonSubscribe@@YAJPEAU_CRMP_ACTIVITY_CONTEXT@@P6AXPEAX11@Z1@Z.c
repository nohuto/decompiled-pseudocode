/*
 * XREFs of ?CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z @ 0x1800114E0
 * Callers:
 *     CrmActivityWindowClosedReasonSubscribe @ 0x180013740 (CrmActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180009320 (-CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

__int64 __fastcall CrmpActivityWindowClosedReasonSubscribe(
        struct _CRMP_ACTIVITY_CONTEXT *a1,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int Pointer; // ebx
  _QWORD *v10; // r14

  v6 = 1;
  v7 = *((_QWORD *)a1 + 2);
  v8 = *(_QWORD *)(v7 + 16);
  if ( v8 )
  {
    v10 = (_QWORD *)((char *)a1 + 88);
    Pointer = CrmpInProcActivityWindowClosedReasonSubscribe(*((_QWORD *)a1 + 1), v8, (char *)a1 + 88);
  }
  else
  {
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_18001EC20,
                              8u,
                              0LL,
                              *((_QWORD *)a1 + 1),
                              *(_QWORD *)(v7 + 8),
                              (char *)a1 + 88).Pointer;
    v10 = (_QWORD *)((char *)a1 + 88);
  }
  if ( Pointer >= 0 )
  {
    *((_QWORD *)a1 + 9) = a2;
    *((_QWORD *)a1 + 10) = a3;
    Pointer = RtlSubscribeWnfStateChangeNotification(
                (char *)a1 + 96,
                *v10,
                0LL,
                CrmpActivityWindowClosedWNFCallback,
                a1,
                0LL,
                0,
                0);
    if ( Pointer >= 0 )
    {
      v6 = 0;
      Pointer = 0;
    }
  }
  if ( v6 )
    CrmpActivityWindowClosedReasonUnsubscribe(a1);
  return (unsigned int)Pointer;
}
