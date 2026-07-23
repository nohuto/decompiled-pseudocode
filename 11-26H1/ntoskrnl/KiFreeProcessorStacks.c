/*
 * XREFs of KiFreeProcessorStacks @ 0x1405EDC50
 * Callers:
 *     KiFreeProcessorStateInitializationParameters @ 0x1405EDD74 (KiFreeProcessorStateInitializationParameters.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     MmSetPageProtection @ 0x1405031A0 (MmSetPageProtection.c)
 *     MmFreeIsrStack @ 0x14087C2CC (MmFreeIsrStack.c)
 *     KiDeleteKernelShadowStack @ 0x140A7BD54 (KiDeleteKernelShadowStack.c)
 */

__int64 __fastcall KiFreeProcessorStacks(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int128 v13; // [rsp+50h] [rbp-18h]

  v1 = a1[8];
  v3 = 5LL;
  if ( v1 )
  {
    v10 = 0LL;
    DWORD1(v10) = 5;
    v11 = 0LL;
    v13 = 0LL;
    v12 = v1;
    MmDeleteKernelStack((int *)&v10);
  }
  if ( a1[9] )
    MmFreeIsrStack();
  if ( a1[10] )
    MmFreeIsrStack();
  v4 = a1 + 11;
  v5 = 5LL;
  do
  {
    if ( *v4 )
      MmFreeIsrStack();
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = a1[16];
  if ( v6 )
    KiDeleteKernelShadowStack(0, a1[17], 4, 0, v6 + 8);
  v7 = a1[28];
  if ( v7 )
  {
    MmSetPageProtection(v7, 0x1000uLL, 4u);
    MmFreeIndependentPages(a1[28], 0x1000uLL);
  }
  v8 = a1 + 23;
  do
  {
    result = *(v8 - 5);
    if ( result )
      result = KiDeleteKernelShadowStack(0, *v8, 3, 0, *(v8 - 5));
    ++v8;
    --v3;
  }
  while ( v3 );
  return result;
}
