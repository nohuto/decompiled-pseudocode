/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x180031F90
 * Callers:
 *     LdrpGetImageSize @ 0x1800317E0 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpResGetMappingSize @ 0x1800A7DC0 (LdrpResGetMappingSize.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x180032024 (LdrpInitMuiCrits.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
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
      v4 = (_QWORD *)(LoadAsDataTable + 48LL * --v3);
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
