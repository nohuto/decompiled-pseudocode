/*
 * XREFs of PfTLbInitialize @ 0x140AF73D8
 * Callers:
 *     PfTAllocateBuffers @ 0x1407C6158 (PfTAllocateBuffers.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PfTLbInitialize(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    memset_0(a1 + 3, 0, a2 - 24LL);
  }
  else
  {
    memset_0(a1, 0, a2);
    a1[1] = a1;
    *a1 = a1;
  }
  *((_DWORD *)a1 + 4) = 0;
  result = (a2 - 24) >> 4;
  *((_DWORD *)a1 + 5) = result;
  return result;
}
