/*
 * XREFs of KiEnableOptionalXStateFeatures @ 0x1403D5A0C
 * Callers:
 *     KiPreprocessFault @ 0x1403D5010 (KiPreprocessFault.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1403D3D00 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     KxEnableOptionalXStateFeatures @ 0x1405EF914 (KxEnableOptionalXStateFeatures.c)
 */

__int64 __fastcall KiEnableOptionalXStateFeatures(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  bool v4; // zf
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // esi
  int v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+24h] [rbp-2Ch]
  __int64 v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-20h]
  _BYTE v14[24]; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0LL;
  v15 = 0;
  v3 = 0LL;
  v12 = 0LL;
  v4 = (*(_DWORD *)(a1 + 116) & 0x800000) == 0;
  memset(v14, 0, sizeof(v14));
  if ( v4 )
  {
    v7 = *(unsigned int *)(a1 + 588);
    v10 = 32;
    v11 = 5;
    v13 = a1;
    LODWORD(v12) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[v7] + 192) + 138LL);
    result = MmCreateKernelStack((__int64)&v10);
    if ( (int)result < 0 )
      return result;
    v3 = *(_QWORD *)v14;
    v2 = *(_QWORD *)v14 - (unsigned int)KeDecoupledStateSaveAreaLength;
  }
  v9 = KxEnableOptionalXStateFeatures(a1, a2, v2, &v15);
  if ( v9 < 0 || !v15 )
  {
    if ( v3 )
    {
      v12 = 0LL;
      v10 = 8;
      *(_OWORD *)&v14[8] = 0LL;
      v11 = 5;
      v13 = a1;
      *(_QWORD *)v14 = v3;
      MmDeleteKernelStack(&v10);
    }
  }
  return (unsigned int)v9;
}
