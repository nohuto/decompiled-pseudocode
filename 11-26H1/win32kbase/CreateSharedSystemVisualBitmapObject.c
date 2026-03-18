/*
 * XREFs of CreateSharedSystemVisualBitmapObject @ 0x140228640
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x140057834 (CreateSharedResourceObject.c)
 */

__int64 __fastcall CreateSharedSystemVisualBitmapObject(_QWORD *a1)
{
  __int64 result; // rax
  struct DirectComposition::ResourceObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = CreateSharedResourceObject((void *)0x9D, &v3);
  *a1 = v3;
  return result;
}
