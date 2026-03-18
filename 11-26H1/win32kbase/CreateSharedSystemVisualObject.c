/*
 * XREFs of CreateSharedSystemVisualObject @ 0x140167880
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x140057834 (CreateSharedResourceObject.c)
 */

__int64 __fastcall CreateSharedSystemVisualObject(_QWORD *a1)
{
  __int64 result; // rax
  struct DirectComposition::ResourceObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = CreateSharedResourceObject((void *)0x9C, &v3);
  *a1 = v3;
  return result;
}
