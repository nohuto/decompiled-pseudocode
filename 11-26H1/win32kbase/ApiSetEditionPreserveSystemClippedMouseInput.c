/*
 * XREFs of ApiSetEditionPreserveSystemClippedMouseInput @ 0x140120508
 * Callers:
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1401203D8 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPreserveSystemClippedMouseInput(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (*v5)(void); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6848LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v5 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 6856LL);
      if ( v5 )
        return v5();
    }
  }
  return v1;
}
