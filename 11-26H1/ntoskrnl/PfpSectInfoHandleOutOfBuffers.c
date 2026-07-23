/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x1407C9D10
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x1404A5AF4 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  return PfFbBufferListAllocateTemporary(a2, 0x4000u);
}
