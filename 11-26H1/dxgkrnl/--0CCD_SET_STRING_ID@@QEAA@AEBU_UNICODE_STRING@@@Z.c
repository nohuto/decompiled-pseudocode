/*
 * XREFs of ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14033DA1C
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1403391F0 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x14033A604 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x14033D528 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140349264 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14033DB6C (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::CCD_SET_STRING_ID(
        CCD_SET_STRING_ID *this,
        const struct _UNICODE_STRING *a2)
{
  int v2; // edi
  unsigned __int16 Length; // ax
  unsigned __int16 v6; // r14
  void *v7; // rax
  void *v8; // rbp
  _QWORD *v9; // rsi
  unsigned int v10; // r8d
  __int64 v11; // rdx

  v2 = 0;
  *(_DWORD *)this = 0;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  Length = a2->Length;
  v6 = a2->Length >> 1;
  if ( v6 <= *((_WORD *)this + 5) )
  {
    v9 = (_QWORD *)((char *)this + 16);
  }
  else
  {
    v7 = (void *)operator new[](v6, 0x63644356u, 256LL);
    v8 = v7;
    if ( !v7 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 1863;
      v2 = -1073741801;
      goto LABEL_8;
    }
    v9 = (_QWORD *)((char *)this + 16);
    memmove(v7, *((const void **)this + 2), *((unsigned __int16 *)this + 4));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2));
    *((_QWORD *)this + 2) = v8;
    *((_WORD *)this + 5) = v6;
    Length = a2->Length;
  }
  v10 = 0;
  if ( (Length & 0xFFFE) != 0 )
  {
    do
    {
      v11 = v10++;
      *(_BYTE *)(v11 + *v9) = a2->Buffer[v11];
    }
    while ( v10 < a2->Length >> 1 );
    Length = a2->Length;
  }
  *((_WORD *)this + 4) = Length >> 1;
LABEL_8:
  *(_DWORD *)this = v2;
  if ( *((_WORD *)this + 4) > 0x4000u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1246;
  }
  CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
  return this;
}
