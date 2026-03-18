/*
 * XREFs of ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1402F0B04
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402ED638 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140005910 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     AllocateUnicodeString @ 0x1401EECB0 (AllocateUnicodeString.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14020A778 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1402F0E14 (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1402F11E4 (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1402F1308 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall SimpleHapticsController::Initialize(SimpleHapticsController *this, struct _UNICODE_STRING *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  NTSTATUS Caps; // eax
  __int64 OutputReportByteLength; // rcx
  __int64 v9; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+30h] [rbp-89h]
  struct _HIDP_PREPARSED_DATA *PreparsedDataa; // [rsp+30h] [rbp-89h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatab; // [rsp+30h] [rbp-89h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatac; // [rsp+30h] [rbp-89h]
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-75h]
  const char *v17; // [rsp+48h] [rbp-71h] BYREF
  const char *v18; // [rsp+50h] [rbp-69h] BYREF
  _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-59h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-19h] BYREF

  memset_0(&Capabilities, 0, sizeof(Capabilities));
  if ( (unsigned int)dword_14039BC30 > 4 )
  {
    v17 = "SimpleHapticsController::Initialize entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_14039BC30,
      byte_14036BAB6,
      0LL,
      0LL,
      (void **)&v17);
  }
  if ( !a2 )
  {
    v6 = -1073741811;
    goto LABEL_29;
  }
  if ( !(unsigned int)AllocateUnicodeString((struct _UNICODE_STRING *)this, &a2->Length) )
    goto LABEL_6;
  Caps = SimpleHapticsController::OpenHapticsDevice(this);
  v6 = Caps;
  if ( Caps < 0 )
  {
    if ( (unsigned int)dword_14039BC30 <= 2 )
      goto LABEL_29;
    goto LABEL_9;
  }
  Caps = SimpleHapticsController::IntializePreparssedData(this);
  v6 = Caps;
  if ( Caps >= 0 )
  {
    Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 2), &Capabilities);
    v6 = Caps;
    if ( Caps >= 0 )
    {
      if ( Capabilities.OutputReportByteLength )
      {
        OutputReportByteLength = Capabilities.OutputReportByteLength;
        *((_WORD *)this + 36) = Capabilities.OutputReportByteLength;
        v9 = Win32AllocPoolZInit(OutputReportByteLength, 1667787091LL);
        *((_QWORD *)this + 8) = v9;
        if ( !v9 )
        {
LABEL_6:
          v6 = -1073741670;
          goto LABEL_29;
        }
      }
      else
      {
        *((_WORD *)this + 36) = 0;
        *((_QWORD *)this + 8) = 0LL;
      }
      memset_0(&ValueCaps, 0, sizeof(ValueCaps));
      PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
      ValueCapsLength[0] = 1;
      if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x21u, &ValueCaps, ValueCapsLength, PreparsedData) >= 0 )
      {
        PreparsedDataa = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
        ValueCapsLength[0] = 1;
        if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x24u, &ValueCaps, ValueCapsLength, PreparsedDataa) >= 0 )
          *((_DWORD *)this + 19) |= 4u;
        PreparsedDatab = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
        ValueCapsLength[0] = 1;
        if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x25u, &ValueCaps, ValueCapsLength, PreparsedDatab) >= 0 )
          *((_DWORD *)this + 19) |= 8u;
        PreparsedDatac = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
        ValueCapsLength[0] = 1;
        if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x23u, &ValueCaps, ValueCapsLength, PreparsedDatac) >= 0 )
          *((_DWORD *)this + 19) |= 2u;
        SimpleHapticsController::InitializeSupportedWaveformList(this);
      }
      v6 = 0;
    }
    else if ( (unsigned int)dword_14039BC30 > 2 )
    {
      goto LABEL_9;
    }
  }
  else if ( (unsigned int)dword_14039BC30 > 2 )
  {
LABEL_9:
    v16 = Caps;
    v17 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BC30,
      (__int64)&unk_14036BA7F,
      v4,
      v5,
      &v17);
  }
LABEL_29:
  if ( (unsigned int)dword_14039BC30 > 4 )
  {
    LODWORD(v17) = *((_DWORD *)this + 22);
    v16 = v6;
    v18 = "SimpleHapticsController::Initialize exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BC30,
      (__int64)&unk_14036BBCE,
      v4,
      v5,
      &v18);
  }
  return v6;
}
