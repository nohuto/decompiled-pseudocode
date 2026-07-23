/*
 * XREFs of CmpCompareLayerDescriptors @ 0x140B51000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCompareLayerDescriptors(const void *a1, const void *a2)
{
  __int64 result; // rax

  result = (*(_DWORD *)(*(_QWORD *)a2 + 1312LL) & 1) - (*(_DWORD *)(*(_QWORD *)a1 + 1312LL) & 1u);
  if ( !(_DWORD)result )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 1308LL) - *(_DWORD *)(*(_QWORD *)a2 + 1308LL));
  return result;
}
