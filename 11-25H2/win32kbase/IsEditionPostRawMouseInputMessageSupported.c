/*
 * XREFs of IsEditionPostRawMouseInputMessageSupported @ 0x1400EF74C
 * Callers:
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1400B9818 (ApiSetEditionPostRawMouseInputMessage.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x14018F744 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsEditionPostRawMouseInputMessageSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6928LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
