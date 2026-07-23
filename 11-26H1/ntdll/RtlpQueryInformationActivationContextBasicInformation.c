/*
 * XREFs of RtlpQueryInformationActivationContextBasicInformation @ 0x1800CA7F0
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpQueryInformationActivationContextBasicInformation(
        char a1,
        volatile signed __int32 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  int v8; // ecx
  signed __int32 v10; // eax

  if ( a7 )
    *a7 = 0LL;
  if ( a6 < 0x10 )
  {
    if ( a7 )
      *a7 = 16LL;
    return 3221225507LL;
  }
  else
  {
    if ( a3 )
      v8 = *(_DWORD *)(a3 + 28);
    else
      v8 = 0;
    *(_DWORD *)(a5 + 8) = v8;
    if ( (a1 & 1) == 0 && a2 && (((unsigned __int64)a2 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *a2 != 0x7FFFFFFF )
    {
      do
      {
        if ( *a2 == 0x7FFFFFFF )
          break;
        v10 = *a2;
      }
      while ( v10 != _InterlockedCompareExchange(a2, v10 + 1, v10) );
    }
    *(_QWORD *)a5 = a2;
    if ( a7 )
      *a7 = 16LL;
    return 0LL;
  }
}
