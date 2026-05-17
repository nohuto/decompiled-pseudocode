/*
 * XREFs of RtlpFcMapSingleBuffer @ 0x180013A3C
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800137F4 (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 */

__int64 __fastcall RtlpFcMapSingleBuffer(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  v4 = a1[1];
  if ( v4 )
  {
    v6 = 0LL;
    v7 = 0LL;
    result = ZwMapViewOfSection(v4, -1LL, &v6, 0LL, 0LL, 0LL, &v7, 1, 0, 2);
    if ( (int)result < 0 )
      return result;
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[1] = v6;
    a2[2] = a1[2];
    *a2 = *a1;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *a2 = *a1;
  }
  return 0LL;
}
