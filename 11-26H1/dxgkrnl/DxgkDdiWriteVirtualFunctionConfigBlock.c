/*
 * XREFs of DxgkDdiWriteVirtualFunctionConfigBlock @ 0x1402184E4
 * Callers:
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x140092F00 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 * Callees:
 *     ?WriteVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1402168EC (-WriteVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_WRITE.c)
 *     ?VgpuTraceFrequentWrite@@YAXEJPEAXPEBG1ZZ @ 0x14040C1FC (-VgpuTraceFrequentWrite@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DxgkDdiWriteVirtualFunctionConfigBlock(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  int v7; // edi
  __int64 v8; // rcx
  int v9; // ebp
  unsigned int v10; // ebx
  int v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+4Ch] [rbp-1Ch]
  int v18; // [rsp+50h] [rbp-18h]
  int v19; // [rsp+54h] [rbp-14h]

  v7 = a4;
  v8 = a1[396];
  v19 = 0;
  v9 = a3;
  v15 = a5;
  v16 = a3;
  v17 = a4;
  v18 = a6;
  v10 = ADAPTER_RENDER::WriteVirtualFunctionConfigBlock(v8, a2, (__int64)&v15, a4);
  if ( bTracingEnabled )
  {
    v13 = v7;
    v12 = v9;
    VgpuTraceFrequentWrite(
      1u,
      0,
      a1,
      L"DxgkDdiWriteVirtualFunctionBlock",
      (wchar_t *)L"(VF, BlockId, Length) %d %d %d",
      v12,
      v13,
      a6);
  }
  return v10;
}
