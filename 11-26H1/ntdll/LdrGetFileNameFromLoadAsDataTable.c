/*
 * XREFs of LdrGetFileNameFromLoadAsDataTable @ 0x1800C52C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x1800C603C (LdrpGetLoadAsEntry.c)
 */

__int64 __fastcall LdrGetFileNameFromLoadAsDataTable(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, 48);
  if ( !a1 || !a2 )
    return 3221225485LL;
  result = LdrpGetLoadAsEntry(a1, v4);
  if ( (int)result >= 0 )
  {
    if ( v4[1] )
      *a2 = v4[1];
    else
      return 3221225473LL;
  }
  return result;
}
