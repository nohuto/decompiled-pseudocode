/*
 * XREFs of DrpGetRecord @ 0x1406E24F8
 * Callers:
 *     SfsFwpGetRecord @ 0x1406E1184 (SfsFwpGetRecord.c)
 *     MicrocodeGetRecord @ 0x1406E18B8 (MicrocodeGetRecord.c)
 * Callees:
 *     DrpVerifyData @ 0x1406E25C0 (DrpVerifyData.c)
 */

__int64 DrpGetRecord()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  _QWORD *v3; // r9
  unsigned __int64 v4; // r11
  __int64 v5; // r10

  result = DrpVerifyData();
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    if ( v5 + *(_QWORD *)(v2 + 16) <= v4 )
    {
      *v3 = v5 + v1;
      return 0LL;
    }
    else
    {
      return 3221225990LL;
    }
  }
  return result;
}
