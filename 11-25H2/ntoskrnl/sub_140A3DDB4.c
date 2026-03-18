/*
 * XREFs of sub_140A3DDB4 @ 0x140A3DDB4
 * Callers:
 *     sub_140908780 @ 0x140908780 (sub_140908780.c)
 * Callees:
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     WbHeapExecutionUnloadModule @ 0x140A3DEC0 (WbHeapExecutionUnloadModule.c)
 *     sub_140A3DFCC @ 0x140A3DFCC (sub_140A3DFCC.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A3DDB4(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rdi
  int v6; // ebx
  __int64 Pool2; // rax
  unsigned __int64 v8; // rax
  _QWORD *v10; // [rsp+58h] [rbp+20h]

  v5 = 0LL;
  v10 = 0LL;
  if ( a3 >= 0x10 && *a2 == 9LL )
  {
    v6 = 0;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v5 = (_QWORD *)Pool2;
      v10 = (_QWORD *)Pool2;
    }
    else
    {
      v6 = -1073741801;
    }
    SddlpFree(0LL);
    if ( v6 >= 0 )
    {
      v8 = a2[1];
      if ( v8 + 16 > 0x7FFFFFFF0000LL || v8 + 16 < v8 )
        v5 = v10;
      *(_OWORD *)v5 = *(_OWORD *)a2[1];
      if ( *(_DWORD *)v5 )
      {
        v6 = -1073741811;
      }
      else
      {
        WbHeapExecutionUnloadModule(a1, v5[1]);
        sub_140A3DFCC(a1, v5[1]);
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  SddlpFree(v5);
  return (unsigned int)v6;
}
