/*
 * XREFs of PnpGetDevicePropertyData @ 0x140A9C6C0
 * Callers:
 *     IoGetDevicePropertyData @ 0x140A9C5D0 (IoGetDevicePropertyData.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404E8A68 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PnpCompareInterruptInformation @ 0x140AE5CBC (PnpCompareInterruptInformation.c)
 */

__int64 __fastcall PnpGetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        ULONG a5,
        void *a6,
        ULONG *a7,
        _DWORD *a8)
{
  __int64 v11; // rbx
  wchar_t *Buffer; // rax
  unsigned int ObjectProperty; // ebx
  __int64 v15; // rax
  ULONG *v16; // rdx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v18[176]; // [rsp+70h] [rbp-F8h] BYREF

  memset_0(v18, 0, 0xAAuLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741808;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !v11 || !*(_QWORD *)(v11 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    DestinationString.Buffer = (wchar_t *)v18;
    DestinationString.MaximumLength = 170;
    if ( a3 == 4096 )
      return (unsigned int)-1073741823;
    DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
    if ( (int)DownLevelLangIDToLanguageName(a3, word_140E623D0, 64, 2) <= 0 )
      return (unsigned int)-1073741823;
    RtlInitUnicodeString(&DestinationString, word_140E623D0);
    Buffer = DestinationString.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(v11 + 48),
                     1,
                     0LL,
                     (__int64)Buffer,
                     a2,
                     a8,
                     (__int64)a6,
                     a5,
                     (__int64)a7,
                     0);
  if ( *(_DWORD *)(a2 + 16) != 2 )
    goto LABEL_7;
  v15 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
  if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
    v15 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
  if ( v15 )
    goto LABEL_7;
  if ( ObjectProperty == -1073741772 || ObjectProperty == -1073741275 )
  {
    v16 = *(ULONG **)(*(_QWORD *)(a1 + 312) + 88LL);
    if ( v16 )
    {
      if ( a7 )
        *a7 = *v16;
      if ( a5 >= *v16 )
      {
        memmove(a6, v16 + 1, *v16);
        ObjectProperty = 0;
      }
      else
      {
        ObjectProperty = -1073741789;
      }
    }
    else
    {
      ObjectProperty = -1073741772;
    }
LABEL_7:
    if ( ObjectProperty == -1073741275 )
      return (unsigned int)-1073741772;
    return ObjectProperty;
  }
  if ( !ObjectProperty )
    PnpCompareInterruptInformation(a1, a6, *a7);
  return ObjectProperty;
}
