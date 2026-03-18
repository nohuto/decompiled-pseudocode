/*
 * XREFs of CcReferenceVacbArray @ 0x140414F60
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x140414840 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

_DWORD *__fastcall CcReferenceVacbArray(unsigned int a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // r9

  result = 0LL;
  v2 = *(_DWORD **)(*(_QWORD *)&EmpParseLock.AbWaitEntryCount + 8LL * a1);
  if ( v2 )
  {
    ++v2[1];
    result = v2;
    if ( *v2 != a1 )
      KeBugCheckEx(0x34u, 0x176uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return result;
}
