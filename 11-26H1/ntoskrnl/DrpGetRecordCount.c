/*
 * XREFs of DrpGetRecordCount @ 0x1406DE294
 * Callers:
 *     SfsFwpGetRecord @ 0x1406DCEE4 (SfsFwpGetRecord.c)
 *     MicrocodeGetRecord @ 0x1406DD618 (MicrocodeGetRecord.c)
 * Callees:
 *     DrpVerifyData @ 0x1406DE320 (DrpVerifyData.c)
 */

__int64 DrpGetRecordCount()
{
  __int64 result; // rax
  __int64 v1; // rcx
  _DWORD *v2; // r8
  int v3; // eax

  result = DrpVerifyData();
  if ( (int)result >= 0 )
  {
    v3 = *(_DWORD *)(v1 + 16);
    *v2 = v3;
    return v3 == 0 ? 0xC0000225 : 0;
  }
  return result;
}
