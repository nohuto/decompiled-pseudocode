/*
 * XREFs of KeUninitThread @ 0x140A7BCB0
 * Callers:
 *     KiFreeProcessorStateInitializationParameters @ 0x1405EDD74 (KiFreeProcessorStateInitializationParameters.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     KiDeleteXStateStack @ 0x1405EEF34 (KiDeleteXStateStack.c)
 *     KiDeleteKernelShadowStack @ 0x140A7BD54 (KiDeleteKernelShadowStack.c)
 */

__int64 __fastcall KeUninitThread(__int64 a1)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 result; // rax
  int v5[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  __int128 v9; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  v9 = 0LL;
  v5[0] = 2;
  v5[1] = 5;
  v2 = *(_QWORD *)(a1 + 56);
  v7 = a1;
  v8 = v2;
  MmDeleteKernelStack(v5);
  v3 = (*(_DWORD *)(a1 + 116) & 0x800000) == 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( !v3 )
    KiDeleteXStateStack(a1);
  result = *(_QWORD *)(a1 + 1032);
  if ( result )
  {
    result = KiDeleteKernelShadowStack(
               a1,
               *(_QWORD *)(a1 + 1048),
               *(_DWORD *)(a1 + 1056) & 7,
               0,
               *(_QWORD *)(a1 + 1032));
    *(_QWORD *)(a1 + 1032) = 0LL;
  }
  return result;
}
