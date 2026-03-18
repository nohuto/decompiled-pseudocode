/*
 * XREFs of AMLIReadNamespaceOverrideObject @ 0x14006DFE8
 * Callers:
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006DE90 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  Object = AMLIGetNamespaceOverrideObject(a2, &v8);
  if ( Object >= 0 )
  {
    v6 = v8;
    Object = ReadObject(a1, v8 + 64, a3);
    DereferenceObjectEx(v6);
  }
  return (unsigned int)Object;
}
