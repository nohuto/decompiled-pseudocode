/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x18001D0F0
 * Callers:
 *     LdrpGetImageSize @ 0x18001C940 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpResGetMappingSize @ 0x1800A6EF0 (LdrpResGetMappingSize.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x18001D184 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // edx
  _QWORD *v4; // rax

  if ( !a1 )
    return 0LL;
  v2 = 0LL;
  LdrpInitMuiCrits();
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      v4 = (char *)LoadAsDataTable + 48 * --v3;
      if ( *v4 == a1 )
      {
        v2 = v4[2];
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v2;
}
