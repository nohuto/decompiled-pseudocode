/*
 * XREFs of ??4CDelayUnpin@CD3DDevice@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D82BC
 * Callers:
 *     ??$move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1800D8214 (--$move@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterator@PEAVCDelayU.c)
 *     ??$move_backward@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x180296048 (--$move_backward@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterator@PE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall CD3DDevice::CDelayUnpin::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v5 = *a1;
    *a1 = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    a1[1] = a2[1];
    *((_DWORD *)a1 + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a1 + 5) = *((_DWORD *)a2 + 5);
  }
  return a1;
}
