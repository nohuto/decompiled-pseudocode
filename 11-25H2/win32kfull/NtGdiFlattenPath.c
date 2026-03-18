/*
 * XREFs of NtGdiFlattenPath @ 0x140226630
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6028 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1400E6190 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61B8 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiFlattenPath(HDC a1)
{
  ULONG v1; // ecx
  __int64 v2; // r8
  __int64 v3; // r9
  DC *v5[14]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v6[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v7; // [rsp+98h] [rbp-68h]

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( !v5[0] )
  {
    v1 = 6;
LABEL_3:
    EngSetLastError(v1);
    goto LABEL_10;
  }
  if ( !(unsigned int)DC::bInactive(v5[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, v5, v2, v3);
  if ( v7 && EPATHOBJ::bFlatten((EPATHOBJ *)v6) )
  {
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return 1LL;
  }
  EngSetLastError(8u);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
LABEL_10:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return 0LL;
}
