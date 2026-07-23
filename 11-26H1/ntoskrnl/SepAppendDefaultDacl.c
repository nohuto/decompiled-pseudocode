/*
 * XREFs of SepAppendDefaultDacl @ 0x140AFC098
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1404050D0 (SepAppendAceToTokenDefaultDacl.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall SepAppendDefaultDacl(__int64 a1, unsigned __int16 *a2)
{
  int v3; // edi
  void *v4; // rbx
  void *result; // rax

  v3 = a2[1];
  v4 = (void *)(*(_QWORD *)(a1 + 176) + 8LL + 4LL * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL));
  result = memmove(v4, a2, a2[1]);
  *(_DWORD *)(a1 + 140) -= v3;
  *(_QWORD *)(a1 + 184) = v4;
  return result;
}
