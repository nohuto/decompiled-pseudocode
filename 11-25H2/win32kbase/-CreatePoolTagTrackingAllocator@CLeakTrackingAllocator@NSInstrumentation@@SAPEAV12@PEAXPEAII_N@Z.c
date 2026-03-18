/*
 * XREFs of ?CreatePoolTagTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAXPEAII_N@Z @ 0x1401D3474
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x14015BAE4 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     <none>
 */

struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::CreatePoolTagTrackingAllocator(
        _QWORD *a1,
        unsigned int *a2,
        unsigned int a3)
{
  unsigned int v5; // ecx
  __int64 v6; // r10
  int v7; // eax

  if ( a3 > 8 )
    return 0LL;
  v5 = 0;
  a1[1] = 0LL;
  a1[5] = 0LL;
  a1[2] = 0LL;
  *((_DWORD *)a1 + 8) = 0;
  a1[10] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  *((_BYTE *)a1 + 144) = 0;
  *(_DWORD *)a1 = 2;
  if ( a3 )
  {
    v6 = a3;
    do
    {
      *((_DWORD *)a1 + v5 + 12) = *a2;
      ++*((_DWORD *)a1 + 21);
      v7 = *a2++;
      *((_DWORD *)a1 + 20) |= v7;
      v5 = *((_DWORD *)a1 + 21);
      --v6;
    }
    while ( v6 );
  }
  return (struct NSInstrumentation::CLeakTrackingAllocator *)a1;
}
