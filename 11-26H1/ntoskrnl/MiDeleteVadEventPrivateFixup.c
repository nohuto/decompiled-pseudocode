/*
 * XREFs of MiDeleteVadEventPrivateFixup @ 0x1404E0270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 MiDeleteVadEventPrivateFixup()
{
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  __int64 result; // rax

  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  result = ActiveProcessors[4].StaticBitmap[28] - 1;
  ActiveProcessors[4].StaticBitmap[28] = result;
  return result;
}
