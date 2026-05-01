/*
 * XREFs of SdbpGetPathSystem @ 0x180091E20
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x180091EE0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1800A17F8 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall SdbpGetPathSystem(int a1, int a2, int a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-28h]
  _WORD v13[2]; // [rsp+30h] [rbp-18h] BYREF
  _WORD v14[10]; // [rsp+34h] [rbp-14h] BYREF

  v14[0] = 0;
  v13[0] = 0;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(v14, v13, a4);
  v8 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v9 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v10 = 1054LL;
LABEL_5:
    LODWORD(v12) = ProcessHostGuestArchitectures;
    AslLogCallPrintf(1LL, "SdbpGetPathSystem", v10, v9, v12);
    return v8;
  }
  ProcessHostGuestArchitectures = AslEnvGetSystem32DirPathBuf(a1, a2, a3, v14[0], (__int64)v13);
  v8 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures < 0 )
  {
    v9 = "AslEnvGetSystem32DirPathBuf failed [%x]";
    v10 = 1060LL;
    goto LABEL_5;
  }
  return v8;
}
