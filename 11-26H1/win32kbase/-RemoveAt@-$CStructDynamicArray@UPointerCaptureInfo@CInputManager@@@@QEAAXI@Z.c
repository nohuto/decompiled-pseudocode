/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x140165B64
 * Callers:
 *     ?ClearPointerListEntries@CInputManager@@SAXI@Z @ 0x1400B4A0C (-ClearPointerListEntries@CInputManager@@SAXI@Z.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x140165A28 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rcx

  v5 = a2;
  GreDeleteFastMutex(*(char **)(*(_QWORD *)a1 + 8LL * (unsigned int)a2), a2, a3, a4);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
  for ( *(_DWORD *)(a1 + 8) = result; v5 < *(_DWORD *)(a1 + 8); *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = result )
  {
    v7 = v5++;
    result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v5);
  }
  return result;
}
