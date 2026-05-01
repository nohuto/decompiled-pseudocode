/*
 * XREFs of ?QueryService@CRunnableTask@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180602DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRunnableTask::QueryService(
        unsigned int (__fastcall ***this)(char *, const struct _GUID *, void **),
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 v6; // rax

  *a4 = 0LL;
  v4 = -2147467259;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IQueryContinue.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IQueryContinue.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IQueryContinue.Data4;
  if ( !v5 )
    return (**(this - 1))((char *)this - 8, a3, a4);
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IObjectWithCancelEvent.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IObjectWithCancelEvent.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IObjectWithCancelEvent.Data4;
  if ( !v6 )
    return (**(this - 1))((char *)this - 8, a3, a4);
  return v4;
}
