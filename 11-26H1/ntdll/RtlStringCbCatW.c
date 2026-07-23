/*
 * XREFs of RtlStringCbCatW @ 0x180044DE4
 * Callers:
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x180043EB4 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x180137B20 (LdrpAppxGetRemediationRegistryKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCatW(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdx
  _WORD *v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // r8
  _WORD *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r11
  __int16 v13; // r8
  _WORD *v14; // rax

  v4 = a2 >> 1;
  if ( !(a2 >> 1) || v4 > 0x7FFFFFFF )
    return 3221225485LL;
  v5 = a2 >> 1;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    v8 = v4 - v5;
  else
    v8 = 0LL;
  if ( v5 )
  {
    v9 = &a1[v8];
    v10 = v4 - v8;
    if ( v4 != v8 )
    {
      v11 = 2147483646LL;
      v12 = a3 - (_QWORD)v9;
      do
      {
        if ( !v11 )
          break;
        v13 = *(_WORD *)((char *)v9 + v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
    return v10 == 0 ? 0x80000005 : 0;
  }
  return result;
}
