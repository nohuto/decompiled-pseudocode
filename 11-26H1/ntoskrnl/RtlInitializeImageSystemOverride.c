/*
 * XREFs of RtlInitializeImageSystemOverride @ 0x140ACA95C
 * Callers:
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140D05BF4 (MiApplyFunctionOverrideToBootDriver.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_DWORD *__fastcall RtlInitializeImageSystemOverride(_DWORD *a1, int a2, int a3)
{
  int LastXStateSaveDebugInfo; // r11d
  unsigned int v7; // r9d
  int v8; // r10d
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *result; // rax
  _DWORD *v15; // rcx
  __int64 v16; // r8

  memset_0(a1, 0, 0xD4uLL);
  LastXStateSaveDebugInfo = stru_140E2D2D0.LastXStateSaveDebugInfo;
  v7 = (a2 + 4095) & 0xFFFFF000;
  v8 = a2 + LODWORD(stru_140E366D8.QuantumTarget) + HIDWORD(stru_140E366D8.SListFaultAddress);
  if ( v7 + LODWORD(stru_140E2D2D0.LastXStateSaveDebugInfo) + 4095 < 0x7FFFFFFF )
  {
    v15 = a1;
    v16 = 4LL;
    do
    {
      *v15 = LastXStateSaveDebugInfo + v7 + *(_DWORD *)((char *)v15 + (char *)RtlSystemOverrideInformation - (char *)a1);
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  if ( (unsigned int)(v8 + 0x1FFF) < 0x7FFFFFFF )
  {
    v9 = *(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[64];
    if ( (KeFeatureBits & 1) != 0 )
      v10 = *(_DWORD *)(*(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 84LL);
    else
      v10 = *(_DWORD *)(*(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 88LL);
    v11 = 15LL;
    a1[4] = v8 + v10;
    v12 = v9 - (_QWORD)a1;
    v13 = a1 + 6;
    do
    {
      *v13 = a2
           + HIDWORD(stru_140E366D8.SListFaultAddress)
           + LODWORD(stru_140E366D8.QuantumTarget)
           + *(_DWORD *)((char *)v13 + v12 + 68);
      ++v13;
      --v11;
    }
    while ( v11 );
  }
  if ( a3 )
  {
    *a1 = a1[1];
    a1[2] = a1[3];
    a1[21] = a1[22];
    a1[23] = a1[24];
    a1[25] = a1[26];
  }
  result = a1;
  a1[1] = 0;
  a1[3] = 0;
  a1[22] = 0;
  a1[24] = 0;
  a1[26] = 0;
  return result;
}
