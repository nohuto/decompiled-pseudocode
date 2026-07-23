/*
 * XREFs of MiMarkKernelStack @ 0x1403D4CC4
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMarkKernelStack(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  signed __int64 v3; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v5 = _InterlockedCompareExchange64(
         (volatile signed __int64 *)(a2 + 40),
         v3 & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL,
         v3);
  if ( v3 != v5 )
  {
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a2 + 40),
             v5 & 0x8FFFFFFFFFFFFFFFuLL | 0x2000000000000000LL,
             v5);
    }
    while ( v6 != v5 );
  }
  *(_QWORD *)a2 = (a3 >> 3) ^ (*(_QWORD *)a2 ^ (a3 >> 3)) & 0xFFFFF00000000001uLL;
  if ( a3 && (*(_QWORD *)a2 & 1) == 0 )
    *(_QWORD *)a2 |= 1uLL;
  *(_QWORD *)(a2 + 16) |= 0x3E0uLL;
  result = *(_QWORD *)(a2 + 40);
  if ( (result & 0x20000000000000LL) == 0 )
  {
    result = *(_DWORD *)(a2 + 32) & 0xF8FFFFFF | 0x5000000;
    *(_DWORD *)(a2 + 32) = result;
  }
  return result;
}
