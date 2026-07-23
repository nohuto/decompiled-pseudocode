/*
 * XREFs of MiSoloZeroHugeRange @ 0x14070A054
 * Callers:
 *     MiGroupZeroHugeRange @ 0x140709CF4 (MiGroupZeroHugeRange.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiReferenceAccelerator @ 0x140501738 (MiReferenceAccelerator.c)
 *     MiReleaseProcessorHugeMappingAtDpc @ 0x140709FF8 (MiReleaseProcessorHugeMappingAtDpc.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x14070A1CC (MiUseProcessorHugeMappingAtDpc.c)
 *     MiZeroHugeRangeWorker @ 0x14070A290 (MiZeroHugeRangeWorker.c)
 *     MiDereferenceAccelerator @ 0x140714388 (MiDereferenceAccelerator.c)
 *     MiInitializeAcceleratorDescriptor @ 0x140714428 (MiInitializeAcceleratorDescriptor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 */

int __fastcall MiSoloZeroHugeRange(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3, int a4)
{
  unsigned __int8 v5; // r12
  __int64 v8; // r13
  unsigned int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  void *v15; // rsp
  __int64 v16; // rdi
  unsigned int v17; // esi
  __int64 v18; // r15
  __int64 v19; // rax
  int result; // eax
  __int64 v21; // rbx
  _BYTE v22[4]; // [rsp+20h] [rbp+0h] BYREF
  unsigned int v23; // [rsp+24h] [rbp+4h]
  _QWORD v24[2]; // [rsp+28h] [rbp+8h] BYREF
  int v25; // [rsp+38h] [rbp+18h]
  int v26; // [rsp+3Ch] [rbp+1Ch]
  _QWORD *v27; // [rsp+40h] [rbp+20h]

  v23 = a3;
  v5 = 17;
  v26 = 0;
  v22[0] = 17;
  v8 = 0LL;
  v9 = MiPageToNode(a2);
  v10 = MiReferenceAccelerator(v9);
  v27 = v10;
  v12 = v10;
  if ( v10 )
  {
    v13 = v10[4] + 32LL;
    v14 = v10[4] + 47LL;
    if ( v14 <= v13 )
      v14 = 0xFFFFFFFFFFFFFF0LL;
    v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = MiInitializeAcceleratorDescriptor(v12, v22);
  }
  v25 = a4;
  v16 = 512LL;
  v24[0] = a1;
  v24[1] = a2;
  if ( a1 )
  {
    v21 = 0LL;
    do
    {
      result = MiZeroHugeRangeWorker(v24, v8, v21++);
      --v16;
    }
    while ( v16 );
  }
  else
  {
    v17 = v23;
    v18 = 0LL;
    do
    {
      if ( !a1 )
      {
        v19 = MiUseProcessorHugeMappingAtDpc(a2, v11, v17, v22);
        v5 = v22[0];
        a1 = v19;
        v24[0] = v19;
      }
      MiZeroHugeRangeWorker(v24, v8, v18);
      result = KeShouldYieldProcessor();
      if ( result )
      {
        result = MiReleaseProcessorHugeMappingAtDpc(a1, a2, v5);
        a1 = 0LL;
      }
      ++v18;
      --v16;
    }
    while ( v16 );
    v12 = v27;
    if ( a1 )
      result = MiReleaseProcessorHugeMappingAtDpc(a1, a2, v5);
  }
  if ( v12 )
    return MiDereferenceAccelerator(v12);
  return result;
}
