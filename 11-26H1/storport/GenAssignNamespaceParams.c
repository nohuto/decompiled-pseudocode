/*
 * XREFs of GenAssignNamespaceParams @ 0x140132220
 * Callers:
 *     <none>
 * Callees:
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 *     GenDataBytes @ 0x140137DC0 (GenDataBytes.c)
 *     GenNamedValueInt @ 0x1401380EC (GenNamedValueInt.c)
 */

__int64 __fastcall GenAssignNamespaceParams(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 result; // rax
  int v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = *a4;
  TcglibReverseBytes((char *)&v6, 4u);
  result = GenDataBytes(a3, &v6, 4LL);
  if ( (int)result >= 0 )
    return GenNamedValueInt(a3, 2LL, 1LL);
  return result;
}
