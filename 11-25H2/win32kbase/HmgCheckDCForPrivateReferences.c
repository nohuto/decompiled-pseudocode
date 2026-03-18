/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x140178FFC
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400856CC (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140002250 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x140075780 (HmgIsObjectOwnedByW32Pid.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x140090010 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400C6308 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400C637C (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(struct OBJECT **this, int a2)
{
  struct OBJECT *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct HPATH__ *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // [rsp+40h] [rbp-59h] BYREF
  int v13; // [rsp+44h] [rbp-55h] BYREF
  int v14; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v15[8]; // [rsp+50h] [rbp-49h] BYREF
  struct OBJECT *v16; // [rsp+58h] [rbp-41h]
  __int64 v17; // [rsp+D0h] [rbp+37h] BYREF
  int v18; // [rsp+D8h] [rbp+3Fh]

  W32GetSessionState(this);
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[17], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[18], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[19], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[11], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[141], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[148], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[20], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[147], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[21], a2) )
    return 1LL;
  v4 = DC::prgnRao((DC *)this);
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v4, a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(this[62], a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(this[262], a2) )
  {
    return 1LL;
  }
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[12], a2) )
  {
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 0x400000000000LL) )
    {
      v12 = 0;
      v13 = 1;
      v17 = 0x1000000LL;
      v14 = 83417;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (__int64)&unk_140279A14,
        v6,
        v7,
        (__int64)&v14,
        (__int64)&v17,
        (__int64)&v13,
        (__int64)&v12);
    }
    return 1LL;
  }
  v9 = this[25];
  if ( v9 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v15, v9);
    if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v16, a2) )
    {
      v17 = 0x102F1D3C3LL;
      v18 = 1;
      RtlLogUnexpectedCodepath(&v17);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v15, v11);
      return 1LL;
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v15, v10);
  }
  return 0LL;
}
