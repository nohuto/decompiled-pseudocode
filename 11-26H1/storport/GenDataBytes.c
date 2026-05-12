/*
 * XREFs of GenDataBytes @ 0x140137DC0
 * Callers:
 *     GenAssignNamespaceParams @ 0x140132220 (GenAssignNamespaceParams.c)
 *     GenDeassignNamespaceParams @ 0x140132280 (GenDeassignNamespaceParams.c)
 *     GenSetTableColumnParams @ 0x1401336A0 (GenSetTableColumnParams.c)
 *     GenSetACEBooleanExpr @ 0x1401344D0 (GenSetACEBooleanExpr.c)
 *     GenAuthenticateParams @ 0x1401358A0 (GenAuthenticateParams.c)
 *     GenSetTPerPropertiesParams @ 0x140135910 (GenSetTPerPropertiesParams.c)
 *     GenStartSessionParams @ 0x140135AD0 (GenStartSessionParams.c)
 *     GenCallMethodBegin @ 0x140137C78 (GenCallMethodBegin.c)
 *     GenDataBytes @ 0x140137DC0 (GenDataBytes.c)
 *     GenNamedValueBytes @ 0x140138084 (GenNamedValueBytes.c)
 * Callees:
 *     GenDataBytes @ 0x140137DC0 (GenDataBytes.c)
 *     GenLongDataBytes @ 0x140137EC8 (GenLongDataBytes.c)
 *     GenMediumDataBytes @ 0x140137F98 (GenMediumDataBytes.c)
 *     GenShortDataBytes @ 0x1401381C4 (GenShortDataBytes.c)
 */

__int64 __fastcall GenDataBytes(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a3 <= 0xF )
    return GenShortDataBytes();
  if ( a3 <= 0x7FF )
    return GenMediumDataBytes();
  if ( a3 <= 0xFFFFFF )
    return GenLongDataBytes(a1, a2, a3, 0LL);
  LOBYTE(a4) = 1;
  result = GenLongDataBytes(a1, a2, 0xFFFFFFLL, a4);
  if ( (int)result >= 0 )
    return GenDataBytes(a1, a2 + 0xFFFFFF, a3 - 0xFFFFFF);
  return result;
}
