/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180070EE4
 * Callers:
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180080F14 (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002CE70 (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v4 = (__int64 *)(a1 + 16);
  v5 = 2LL;
  do
  {
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(--v4);
    --v5;
  }
  while ( v5 );
}
