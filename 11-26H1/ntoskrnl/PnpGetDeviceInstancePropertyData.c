/*
 * XREFs of PnpGetDeviceInstancePropertyData @ 0x140B312E0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404E8A68 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PnpGetDeviceInstancePropertyData(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        ULONG a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *Buffer; // rcx
  __int64 result; // rax
  int v13; // [rsp+60h] [rbp-118h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v15[176]; // [rsp+80h] [rbp-F8h] BYREF

  memset_0(v15, 0, 0xAAuLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  v13 = 0;
  if ( a3 )
  {
    DestinationString.MaximumLength = 170;
    DestinationString.Buffer = (wchar_t *)v15;
    if ( a3 == 4096 )
      return 3221225473LL;
    DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
    if ( (int)DownLevelLangIDToLanguageName(a3, word_140E623D0, 64, 2) <= 0 )
      return 3221225473LL;
    RtlInitUnicodeString(&DestinationString, word_140E623D0);
    Buffer = DestinationString.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  result = PnpGetObjectProperty(*(__int64 *)&PiPnpRtlCtx, a1, 1, 0LL, (__int64)Buffer, a2, &v13, a6, a5, a7, 0);
  if ( (int)result >= 0 )
  {
    *a8 = v13;
  }
  else if ( (_DWORD)result == -1073741275 )
  {
    return 3221225524LL;
  }
  return result;
}
