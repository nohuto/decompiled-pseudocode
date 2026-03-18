/*
 * XREFs of HmgIncProcessHandleCountExFast @ 0x1401C83D4
 * Callers:
 *     HmgInsertObjectInternal @ 0x14001F910 (HmgInsertObjectInternal.c)
 *     HmgIncProcessHandleCountEx @ 0x1400D9490 (HmgIncProcessHandleCountEx.c)
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 * Callees:
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x14003B440 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1400BC6B0 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1401461C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4B40 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 */

__int64 __fastcall HmgIncProcessHandleCountExFast(__int64 a1, int a2, int a3)
{
  unsigned int v5; // esi
  struct _W32PROCESS *W32ProcessFromId; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  HSEMAPHORE v13[4]; // [rsp+38h] [rbp-20h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v5 = 1;
  if ( a2 && a2 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a2, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
      SEMOBJ<20>::SEMOBJ<20>(v13, (_QWORD *)a1, IsEnabledDeviceUsageNoInline != 0);
      if ( a3 || *((_DWORD *)W32ProcessFromId + 15) < *(_DWORD *)(a1 + 2216) )
      {
        HmgpIncProcessHandleCountEx(W32ProcessFromId);
      }
      else
      {
        v8 = *((_DWORD *)W32ProcessFromId + 69);
        v5 = 0;
        if ( (v8 & 8) == 0 )
        {
          *((_DWORD *)W32ProcessFromId + 69) = v8 | 8;
          if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL) )
          {
            v12 = 0x1000000LL;
            v14 = v9;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (__int64)&dword_14029EF38,
              byte_140279A57,
              v9,
              v10,
              (__int64)&v14,
              (__int64)&v12);
          }
        }
      }
      SEMOBJ<20>::vUnlock(v13);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return v5;
}
