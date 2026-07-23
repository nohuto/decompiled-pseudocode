/*
 * XREFs of DrpGetSectionAtIndex @ 0x1406E2560
 * Callers:
 *     SfsFwpGetRecord @ 0x1406E1184 (SfsFwpGetRecord.c)
 *     MicrocodeGetRecord @ 0x1406E18B8 (MicrocodeGetRecord.c)
 * Callees:
 *     DrpVerifyData @ 0x1406E25C0 (DrpVerifyData.c)
 */

__int64 DrpGetSectionAtIndex()
{
  __int64 result; // rax
  __int64 v1; // rcx
  unsigned int v2; // r8d
  unsigned __int64 v3; // r10
  _QWORD *v4; // r11
  unsigned __int64 v5; // rdx

  result = DrpVerifyData();
  if ( (int)result >= 0 )
  {
    if ( v2 <= *(_DWORD *)(v1 + 16) )
    {
      v5 = *(unsigned int *)(v1 + 20);
      if ( v5 < *(_QWORD *)(v1 + 8) && v5 + 32LL * (v2 + 1) <= v3 )
      {
        *v4 = v5 + v1 + 32LL * v2;
        return 0LL;
      }
      else
      {
        return 3221225990LL;
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
