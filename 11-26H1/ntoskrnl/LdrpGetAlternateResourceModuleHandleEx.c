/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1403DF598
 * Callers:
 *     LdrpAccessResourceData @ 0x140A8E9F8 (LdrpAccessResourceData.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1403DF758 (LdrpGetMappingFromCacheEntry.c)
 *     KeReleaseMutant @ 0x1403E02A0 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     LdrpInitMuiCrits @ 0x1403E0804 (LdrpInitMuiCrits.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int WaitBlockList; // ebx
  int i; // ecx
  __int64 v9; // rdx
  int j; // edi
  unsigned __int16 Magic; // cx
  __int64 SizeOfImage; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp-20h] BYREF

  v14 = 0LL;
  SizeOfImage = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&NormalizationListLock.FirstArgument, Executive, 0, 0, 0LL);
  *a4 = 0LL;
  WaitBlockList = (int)NormalizationListLock.WaitBlockList;
  for ( i = LODWORD(NormalizationListLock.WaitBlockList) - 1; i >= 0; --i )
  {
    v9 = (__int64)i << 6;
    if ( *(_QWORD *)(v9 + NormalizationListLock.WaitStatus + 8) == a1 )
    {
      if ( v14 )
      {
        for ( j = WaitBlockList; j >= 0; --j )
        {
          if ( *(_QWORD *)(((__int64)j << 6) + NormalizationListLock.WaitStatus + 8) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)j, a3, &v14, &SizeOfImage) )
          {
            WaitBlockList = j;
            goto LABEL_12;
          }
        }
        WaitBlockList = (int)NormalizationListLock.WaitBlockList;
        break;
      }
      v14 = *(_QWORD *)(v9 + NormalizationListLock.WaitStatus + 32);
      SizeOfImage = *(_QWORD *)(v9 + NormalizationListLock.WaitStatus + 48);
      WaitBlockList = i;
    }
  }
LABEL_12:
  if ( WaitBlockList == LODWORD(NormalizationListLock.WaitBlockList) )
  {
    v14 = 0LL;
  }
  else
  {
    if ( !SizeOfImage )
    {
      OutHeaders = 0LL;
      RtlImageNtHeaderEx(1u, (PVOID)(v14 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
      if ( OutHeaders )
      {
        Magic = OutHeaders->OptionalHeader.Magic;
        if ( Magic == 267 || Magic == 523 )
          SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  KeReleaseMutantEx((struct _KTHREAD *)&NormalizationListLock.FirstArgument);
  return v14;
}
