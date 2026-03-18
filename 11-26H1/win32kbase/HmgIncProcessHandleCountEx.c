/*
 * XREFs of HmgIncProcessHandleCountEx @ 0x1400C5508
 * Callers:
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 *     HmgIncProcessHandleCount @ 0x1400C5A0C (HmgIncProcessHandleCount.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001B5C0 (--$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1ReferencedW32Process@@QEAA@XZ @ 0x1400C5614 (--1ReferencedW32Process@@QEAA@XZ.c)
 *     ??0ReferencedW32Process@@QEAA@K@Z @ 0x1400C56AC (--0ReferencedW32Process@@QEAA@K@Z.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1400CF650 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140182EFC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall HmgIncProcessHandleCountEx(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // esi
  __int64 v6; // rcx
  struct _W32PROCESS *v7; // rbx
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax
  int v11; // r9d
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  HSEMAPHORE v14; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF
  struct _W32PROCESS *v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = 1;
  if ( a2 && a2 != -2147483630 )
  {
    ReferencedW32Process::ReferencedW32Process((ReferencedW32Process *)&v16, a2);
    v7 = v16;
    if ( v16 )
    {
      v14 = (HSEMAPHORE)(*(_QWORD *)a1 + 1512LL);
      GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(v6, v14);
      if ( a3 || (v9 = *((_DWORD *)v7 + 15), v9 < *(_DWORD *)(a1 + 2304)) )
      {
        HmgpIncProcessHandleCountEx(v7);
      }
      else
      {
        v10 = *((_DWORD *)v7 + 69);
        v5 = 0;
        if ( (v10 & 8) == 0 )
        {
          *((_DWORD *)v7 + 69) = v10 | 8;
          if ( (unsigned int)dword_1402A9F58 > 5 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1402A9F58, 0x400000000000LL) )
            {
              v13 = 0x1000000LL;
              v15 = v9;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                (unsigned int)&dword_1402A9F58,
                (unsigned int)&unk_140283C63,
                v9,
                v11,
                (__int64)&v15,
                (__int64)&v13);
            }
          }
        }
      }
      SEMOBJ<20>::vUnlock(&v14, v8, v9);
    }
    ReferencedW32Process::~ReferencedW32Process((ReferencedW32Process *)&v16);
  }
  return v5;
}
