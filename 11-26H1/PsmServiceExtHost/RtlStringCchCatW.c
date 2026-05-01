/*
 * XREFs of RtlStringCchCatW @ 0x18008D074
 * Callers:
 *     SdbpGetCustomSdbFileName @ 0x180091620 (SdbpGetCustomSdbFileName.c)
 *     AslpFileQueryVersionString @ 0x18009E148 (AslpFileQueryVersionString.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009F250 (AslPathToSystemPathBuf.c)
 *     AslpEnvResolveVars @ 0x1800A1B48 (AslpEnvResolveVars.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1800642FC (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  _WORD *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 3221225485LL;
  v4 = a2;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v6 = (a2 - v4) & -(__int64)(v4 != 0);
    return RtlStringCopyWorkerW(&a1[v6], a2 - v6, v6, a3);
  }
  return result;
}
