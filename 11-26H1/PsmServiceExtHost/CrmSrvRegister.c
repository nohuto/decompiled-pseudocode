/*
 * XREFs of CrmSrvRegister @ 0x180031590
 * Callers:
 *     CrmGlobalsStartCrmRegistrations @ 0x18007788C (CrmGlobalsStartCrmRegistrations.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CrmRegistrationInitialize @ 0x1800309EC (CrmRegistrationInitialize.c)
 *     CrmRegistrationStart @ 0x180030A3C (CrmRegistrationStart.c)
 *     CrmLogSrvRegisterStart @ 0x180031810 (CrmLogSrvRegisterStart.c)
 *     CrmLogSrvRegisterStop @ 0x180031A90 (CrmLogSrvRegisterStop.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CrmRegistrationCleanup @ 0x180032430 (CrmRegistrationCleanup.c)
 */

__int64 __fastcall CrmSrvRegister(_QWORD *a1, int a2, __int64 a3, void *a4, __int64 a5)
{
  _QWORD *Heap; // rax
  unsigned int v10; // ebx
  void *v11; // rdi
  int v12; // r15d

  CrmLogSrvRegisterStart();
  if ( a2 >= 309 )
  {
    v10 = -1073741811;
  }
  else
  {
    Heap = HampAllocateHeap(0x98uLL);
    v10 = 0;
    v11 = Heap;
    if ( Heap )
    {
      CrmRegistrationInitialize(Heap);
      v12 = CrmRegistrationStart((__int64)v11, a4, a2, a5);
      if ( v12 >= 0 )
      {
        *a1 = v11;
      }
      else
      {
        CrmRegistrationCleanup(v11, 1LL);
        HampFreeHeap(v11);
        v10 = v12;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  CrmLogSrvRegisterStop((unsigned int)a2, a3, a4, v10);
  return v10;
}
