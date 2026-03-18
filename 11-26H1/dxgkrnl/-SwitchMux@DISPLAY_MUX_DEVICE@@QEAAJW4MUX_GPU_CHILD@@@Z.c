/*
 * XREFs of ?SwitchMux@DISPLAY_MUX_DEVICE@@QEAAJW4MUX_GPU_CHILD@@@Z @ 0x14008FBA4
 * Callers:
 *     ?SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z @ 0x14008FCEC (-SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DISPLAY_MUX_DEVICE::SwitchMux(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // esi

  if ( a2 == *(_DWORD *)(a1 + 72) )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225505LL;
    WdLogGlobalForLineNumber = 1530;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 152))(*(_QWORD *)(a1 + 112), a2);
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a1 + 72) = a2;
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1540;
    }
    return (unsigned int)v5;
  }
  return result;
}
