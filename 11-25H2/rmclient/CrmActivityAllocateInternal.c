/*
 * XREFs of CrmActivityAllocateInternal @ 0x180008E10
 * Callers:
 *     SubscribeActivityCoordinatorPolicyInternal @ 0x18001BB08 (SubscribeActivityCoordinatorPolicyInternal.c)
 * Callees:
 *     ?CrmpActivityContextStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_ACTIVITY_ID@@PEAU_ACTIVITY_COORDINATOR_RESOURCE_CONDITIONS@@PEAGPEAKP6AXPEAX6W4_CRM_NOTIFICATION_TYPE@@66@Z6@Z @ 0x180009020 (-CrmpActivityContextStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM.c)
 *     HamFreeBuffer @ 0x1800091F0 (HamFreeBuffer.c)
 *     ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180009260 (-CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

__int64 __fastcall CrmActivityAllocateInternal(
        struct _CRMP_ACTIVITY_CONTEXT **a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _CRMP_ACTIVITY_CONTEXT *Heap; // rax
  struct _CRMP_ACTIVITY_CONTEXT *v13; // rbx
  int v14; // edi

  Heap = (struct _CRMP_ACTIVITY_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x68uLL);
  v13 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_OWORD *)Heap = 0LL;
  *((_OWORD *)Heap + 1) = 0LL;
  *((_OWORD *)Heap + 2) = 0LL;
  *((_OWORD *)Heap + 3) = 0LL;
  *((_OWORD *)Heap + 4) = 0LL;
  *((_OWORD *)Heap + 5) = 0LL;
  *((_QWORD *)Heap + 12) = 0LL;
  *(_DWORD *)Heap = 1601;
  *((_QWORD *)Heap + 1) = -1LL;
  v14 = CrmpActivityContextStart(Heap, a2, a3, a4, a5, a6, a7, a8);
  if ( v14 < 0 )
  {
    CrmpActivityContextCleanup(v13);
    HamFreeBuffer(v13);
    return (unsigned int)v14;
  }
  else
  {
    *a1 = v13;
    return 0LL;
  }
}
