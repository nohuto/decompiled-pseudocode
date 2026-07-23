/*
 * XREFs of RtlCreateKernelScpFunctionTable @ 0x140625F7C
 * Callers:
 *     MiInitializeKernelScp @ 0x140D00EA8 (MiInitializeKernelScp.c)
 * Callees:
 *     RtlCalculateUnwindInfoSizeForKernelScp @ 0x140625E50 (RtlCalculateUnwindInfoSizeForKernelScp.c)
 *     RtlpGetKernelScpFunctionTable @ 0x140626080 (RtlpGetKernelScpFunctionTable.c)
 */

__int64 __fastcall RtlCreateKernelScpFunctionTable(__int64 a1, _DWORD *a2, int a3)
{
  PVOID v3; // rsi
  _DWORD *KernelScpFunctionTable; // r14
  __int64 result; // rax
  unsigned int v7; // r11d
  int v8; // edi
  _DWORD *v9; // r15
  __int64 v10; // rbp
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+54h] [rbp+Ch]

  v12 = HIDWORD(a1);
  v3 = PsNtosImageBase;
  v11 = 0;
  KernelScpFunctionTable = (_DWORD *)RtlpGetKernelScpFunctionTable(
                                       (_DWORD)PsNtosImageBase,
                                       (_DWORD)PsNtosImageBase,
                                       (_DWORD)a2,
                                       a3,
                                       (__int64)&v11);
  if ( !KernelScpFunctionTable )
    return 3221226021LL;
  v7 = v11;
  if ( v11 > 0x64 )
    return 2147483653LL;
  v8 = (_DWORD)a2 + *a2;
  if ( v11 )
  {
    v9 = &unk_141201AE4;
    v10 = v11;
    do
    {
      *(v9 - 1) = (_DWORD)v3 + *KernelScpFunctionTable - (_DWORD)a2;
      *v9 = (_DWORD)v3 + KernelScpFunctionTable[1] - (_DWORD)a2;
      v9[1] = v8 - (_DWORD)a2;
      v9 += 3;
      v8 += RtlCalculateUnwindInfoSizeForKernelScp((__int64)v3, (__int64)KernelScpFunctionTable, 0LL);
      KernelScpFunctionTable += 3;
      --v10;
    }
    while ( v10 );
  }
  RtlKernelScpFunctionTableSize = 12 * v7;
  dword_140E013E0 = 12 * v7;
  result = 0LL;
  qword_140E013D8 = (__int64)&RtlKernelScpFunctionTable;
  return result;
}
