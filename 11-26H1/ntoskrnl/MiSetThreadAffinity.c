/*
 * XREFs of MiSetThreadAffinity @ 0x1403CD3E0
 * Callers:
 *     MiThreadWorker @ 0x1403CD1F0 (MiThreadWorker.c)
 * Callees:
 *     MiSetIdealProcessorThread @ 0x14020453C (MiSetIdealProcessorThread.c)
 *     MiReferenceAccelerator @ 0x140501738 (MiReferenceAccelerator.c)
 */

__int64 __fastcall MiSetThreadAffinity(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // rax

  result = (__int64)KeGetCurrentThread();
  *(_QWORD *)a2 = result;
  *(_DWORD *)(a2 + 8) = -1;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = a1;
  v4 = *(_DWORD *)(a1 + 44);
  if ( v4 != -2 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( v4 == -1 )
    {
      result = MiReferenceAccelerator(*(unsigned int *)(v5 + 84));
      *(_QWORD *)(a2 + 16) = result;
    }
    else
    {
      result = *(unsigned int *)(v5 + 16);
      if ( (result & 4) == 0 )
      {
        result = MiSetIdealProcessorThread(a1 + 40);
        *(_DWORD *)(a2 + 8) = result;
      }
    }
  }
  return result;
}
