/*
 * XREFs of PnpGetDeviceInterfacePropertyData @ 0x140A17914
 * Callers:
 *     IoGetDeviceInterfacePropertyData @ 0x140A178D0 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404E8A68 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpGetDeviceInterfacePropertyData(
        unsigned __int16 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        ULONG a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v11; // rdi
  wchar_t *Buffer; // rbp
  __int64 v13; // r8
  _WORD *v14; // rcx
  unsigned __int64 v15; // rdx
  _WORD *Pool2; // rax
  _WORD *v17; // rbx
  unsigned int ObjectProperty; // ebx
  _WORD *v20; // rax
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v22[176]; // [rsp+70h] [rbp-F8h] BYREF

  memset_0(v22, 0, 0xAAuLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  v11 = 0LL;
  if ( !a1 || !*((_QWORD *)a1 + 1) || !*a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    DestinationString.MaximumLength = 170;
    DestinationString.Buffer = (wchar_t *)v22;
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
  v13 = a1[1];
  if ( (unsigned __int16)v13 < 2u || (v14 = (_WORD *)*((_QWORD *)a1 + 1)) == 0LL )
  {
    v11 = 0LL;
    goto LABEL_16;
  }
  v15 = *a1;
  if ( (unsigned __int16)v15 > (unsigned __int16)v13 )
  {
    ObjectProperty = -1073741811;
  }
  else
  {
    if ( (_WORD)v15 )
    {
      if ( !*v14
        || (_WORD)v15 == (_WORD)v13 && !v14[((unsigned __int64)*a1 >> 1) - 1]
        || v15 <= v13 - 2 && (!v14[(v15 >> 1) - 1] || !v14[v15 >> 1]) )
      {
        goto LABEL_23;
      }
      Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
      v17 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, *((const void **)a1 + 1), *a1);
        v11 = (__int64)v17;
        v17[(unsigned __int64)*a1 >> 1] = 0;
LABEL_16:
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v11,
                           3,
                           0LL,
                           (__int64)Buffer,
                           a2,
                           a8,
                           a6,
                           a5,
                           a7,
                           0);
        goto LABEL_17;
      }
    }
    else
    {
      if ( !*v14 )
      {
LABEL_23:
        v11 = *((_QWORD *)a1 + 1);
        goto LABEL_16;
      }
      v20 = (_WORD *)ExAllocatePool2(0x100uLL);
      if ( v20 )
      {
        *v20 = 0;
        v11 = (__int64)v20;
        goto LABEL_16;
      }
    }
    ObjectProperty = -1073741670;
  }
LABEL_17:
  PnpUnicodeStringToWstrFree(v11, a1);
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return ObjectProperty;
}
