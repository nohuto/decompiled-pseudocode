/*
 * XREFs of ?CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_MGR@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@PEAE1@Z @ 0x14008B138
 * Callers:
 *     DpiFdoIsMdmDeviceAndOwnsMux @ 0x1400905B8 (DpiFdoIsMdmDeviceAndOwnsMux.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_PAIRING@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@PEAE1@Z @ 0x14008B29C (-CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_PAIRING@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_S.c)
 *     ?DoesMuxAcpiNameMatch@DISPLAY_MUX_PAIRING@@QEBA_NPEBU_UNICODE_STRING@@@Z @ 0x14008BD00 (-DoesMuxAcpiNameMatch@DISPLAY_MUX_PAIRING@@QEBA_NPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::CheckMdmDeviceAndMuxOwnership(
        DISPLAY_MUX_PAIRING **this,
        const struct _DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  NTSTATUS v8; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(this + 2), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *((_DWORD *)this + 20) == 1 && this[9] )
  {
    DestinationString = 0LL;
    UnicodeString = 0LL;
    RtlInitAnsiString(&DestinationString, (PCSZ)a2 + 96);
    v8 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    if ( v8 >= 0 )
    {
      if ( DISPLAY_MUX_PAIRING::DoesMuxAcpiNameMatch(this[9], &UnicodeString) )
      {
        v8 = DISPLAY_MUX_PAIRING::CheckMdmDeviceAndMuxOwnership(this[9], a2, a3, a4);
      }
      else
      {
        v8 = -1073741823;
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 3441;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3434;
    }
    RtlFreeUnicodeString(&UnicodeString);
  }
  else
  {
    v8 = -1073741823;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3420;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return (unsigned int)v8;
}
