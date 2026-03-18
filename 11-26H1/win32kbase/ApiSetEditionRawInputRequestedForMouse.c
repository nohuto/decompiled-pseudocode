/*
 * XREFs of ApiSetEditionRawInputRequestedForMouse @ 0x140199B60
 * Callers:
 *     ?ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DATA@@PEBUMouseInputProcessingState@@@Z @ 0x1401B0E7C (-ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DAT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionRawInputRequestedForMouse(__int64 a1)
{
  unsigned int v1; // ebx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  unsigned int (*v4)(void); // rax

  v1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6504LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v4 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 6512LL);
      if ( v4 )
        return v4();
    }
  }
  return v1;
}
