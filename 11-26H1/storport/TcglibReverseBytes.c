/*
 * XREFs of TcglibReverseBytes @ 0x1401312C4
 * Callers:
 *     TcglibStackReset @ 0x140131DA0 (TcglibStackReset.c)
 *     GenAssignNamespaceParams @ 0x140132220 (GenAssignNamespaceParams.c)
 *     GenDeassignNamespaceParams @ 0x140132280 (GenDeassignNamespaceParams.c)
 *     ParseAssignNamespace @ 0x1401323D0 (ParseAssignNamespace.c)
 *     ParseLockingObjectInfo @ 0x1401326F0 (ParseLockingObjectInfo.c)
 *     TcglibpGetLockingObjectInfo @ 0x140132D48 (TcglibpGetLockingObjectInfo.c)
 *     TcglibpExecuteCommand @ 0x140133F84 (TcglibpExecuteCommand.c)
 *     GenActivateParams @ 0x140134410 (GenActivateParams.c)
 *     GenSetACEBooleanExpr @ 0x1401344D0 (GenSetACEBooleanExpr.c)
 *     TcglibpGetLockingInfoTable @ 0x140134CDC (TcglibpGetLockingInfoTable.c)
 *     TcglibpParseLevel0Data @ 0x140134FC4 (TcglibpParseLevel0Data.c)
 *     TcglibpGetSecretProtection @ 0x140135688 (TcglibpGetSecretProtection.c)
 *     GenAuthenticateParams @ 0x1401358A0 (GenAuthenticateParams.c)
 *     GenStartSessionParams @ 0x140135AD0 (GenStartSessionParams.c)
 *     InitTcgParser @ 0x140136C14 (InitTcgParser.c)
 *     ParseTcgMethodData @ 0x1401370EC (ParseTcgMethodData.c)
 *     GenCallMethodBegin @ 0x140137C78 (GenCallMethodBegin.c)
 *     GenTCGHeaders @ 0x140138330 (GenTCGHeaders.c)
 * Callees:
 *     <none>
 */

char __fastcall TcglibReverseBytes(char *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  char *v4; // r11
  char v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  char result; // al

  v3 = 0;
  if ( a2 >> 1 )
  {
    v4 = a1;
    do
    {
      v5 = *v4;
      v6 = a2 - v3++;
      v7 = v6 - 1;
      v8 = (unsigned int)v7;
      result = a1[v7];
      *v4++ = result;
      a1[v8] = v5;
    }
    while ( v3 < a2 >> 1 );
  }
  return result;
}
