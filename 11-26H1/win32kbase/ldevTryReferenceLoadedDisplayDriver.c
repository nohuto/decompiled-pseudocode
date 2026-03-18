/*
 * XREFs of ldevTryReferenceLoadedDisplayDriver @ 0x14000C83C
 * Callers:
 *     ldevLoadCdd @ 0x14000CC38 (ldevLoadCdd.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1401A2CA0 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ldevTryReferenceLoadedDisplayDriver(PCUNICODE_STRING String2, int a2, int a3)
{
  __int64 i; // rbx
  const UNICODE_STRING *v7; // rcx
  __int64 result; // rax

  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(String2) + 88) + 1816LL); i; i = *(_QWORD *)i )
  {
    v7 = *(const UNICODE_STRING **)(i + 16);
    if ( v7
      && (*(_DWORD *)(i + 32) == 5) == a2
      && (*(_DWORD *)(i + 40) & 4u) >> 2 == a3
      && RtlEqualUnicodeString(v7, String2, 1u) )
    {
      WdLogSingleEntry0(5LL);
      ++*(_DWORD *)(i + 36);
      result = i;
      WdLogGlobalForLineNumber = 821;
      return result;
    }
  }
  return 0LL;
}
