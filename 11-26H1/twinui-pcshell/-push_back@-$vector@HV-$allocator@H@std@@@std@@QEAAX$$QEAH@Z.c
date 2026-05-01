/*
 * XREFs of ?push_back@?$vector@HV?$allocator@H@std@@@std@@QEAAX$$QEAH@Z @ 0x180475A2C
 * Callers:
 *     GetColorFromColorString @ 0x18046D308 (GetColorFromColorString.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<int>::push_back(__int64 a1, int *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<int>::_Emplace_reallocate<int>((const void **)a1, v3, a2);
  result = (char *)(unsigned int)*a2;
  *(_DWORD *)v3 = (_DWORD)result;
  *(_QWORD *)(a1 + 8) += 4LL;
  return result;
}
