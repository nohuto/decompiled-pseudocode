/*
 * XREFs of FastGetProfileValue @ 0x1400E13A0
 * Callers:
 *     InitScancodeMap @ 0x1400E2C80 (InitScancodeMap.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall FastGetProfileValue(
        PCUNICODE_STRING Source,
        int a2,
        const WCHAR *a3,
        const void *a4,
        void *a5,
        size_t Size,
        int a7)
{
  const WCHAR *v8; // r14
  int v10; // ebx
  BYTE *Text; // rdx
  __int64 v12; // rbx
  int v13; // ecx
  void *v14; // rsi
  ULONG *v15; // rbx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG Length; // [rsp+30h] [rbp-A1h] BYREF
  int v25; // [rsp+34h] [rbp-9Dh]
  int v26; // [rsp+38h] [rbp-99h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+40h] [rbp-91h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-89h] BYREF
  __int128 v29; // [rsp+58h] [rbp-79h] BYREF
  _WORD v30[40]; // [rsp+70h] [rbp-61h] BYREF

  v26 = a2;
  Length = 0;
  v8 = a3;
  DestinationString = 0LL;
  v29 = 0LL;
  v25 = *(_DWORD *)(W32GetUserSessionState((_DWORD)Source, a2, (_DWORD)a3) + 62776) | a7;
  if ( ((unsigned __int64)v8 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v30[0] = 0;
    v10 = 0;
    MessageResourceEntry = 0LL;
    if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)v8, &MessageResourceEntry) >= 0 )
    {
      Text = MessageResourceEntry->Text;
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)&Text[2 * v12] );
      v10 = v12 - 2;
      if ( v10 < 0 )
        goto LABEL_6;
      if ( v10 > 39 )
        v10 = 39;
      memmove(v30, Text, 2LL * (unsigned int)v10);
    }
    v30[v10] = 0;
LABEL_6:
    v8 = v30;
    goto LABEL_7;
  }
  while ( 1 )
  {
LABEL_7:
    v14 = (void *)OpenCacheKeyEx(Source);
    if ( !v14 )
    {
      if ( (a7 & 0x10) == 0 )
      {
LABEL_19:
        if ( a4 )
        {
          memmove(a5, a4, (unsigned int)Size);
          return (unsigned int)Size;
        }
      }
      return 0LL;
    }
    if ( (_DWORD)Size )
    {
      Length = Size + 12;
      v15 = (ULONG *)Win32AllocPoolWithQuotaZInitImpl(v13, (unsigned int)(Size + 12), 0x72707355u);
      if ( !v15 )
        goto LABEL_18;
    }
    else
    {
      Length = 16;
      v15 = (ULONG *)&v29;
    }
    RtlInitUnicodeString(&DestinationString, v8);
    v16 = ZwQueryValueKey(v14, &DestinationString, KeyValuePartialInformation, v15, Length, &Length);
    if ( v16 >= 0 )
      break;
    if ( v16 == -2147483643 && !(_DWORD)Size )
    {
      ZwClose(v14);
      return v15[2];
    }
    if ( !v25 )
    {
      if ( (_DWORD)Size )
        GreDeleteFastMutex((char *)v15, v17, v18, v19);
LABEL_18:
      ZwClose(v14);
      goto LABEL_19;
    }
    if ( (_DWORD)Size )
      GreDeleteFastMutex((char *)v15, v17, v18, v19);
    ZwClose(v14);
  }
  Length = v15[2];
  memmove(a5, v15 + 3, Length);
  if ( (_DWORD)Size )
    GreDeleteFastMutex((char *)v15, v20, v21, v22);
  ZwClose(v14);
  return Length;
}
