/*
 * XREFs of FastGetProfileStringW @ 0x1400A9AF0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A57B0 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileStringFromIDW @ 0x1400A95E0 (FastGetProfileStringFromIDW.c)
 *     FastGetProfileIntW @ 0x1400A96F0 (FastGetProfileIntW.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400AA420 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FastGetProfileStringW(
        PCUNICODE_STRING Source,
        __int64 a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int64 a6,
        int a7)
{
  void *v10; // rsi
  __int64 v11; // rbx
  NTSTATUS v12; // eax
  int v13; // ecx
  unsigned int v15; // edi
  __int64 v16; // r10
  __int64 v17; // rax
  ULONG Length; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+34h] [rbp-44h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  Length = 0;
  DestinationString = 0LL;
  v19 = *(_DWORD *)(W32GetUserSessionState(Source, a2) + 62784) | a7;
  while ( 1 )
  {
    v10 = (void *)OpenCacheKeyEx(Source);
    if ( !v10 )
    {
      if ( (a7 & 0x10) != 0 )
        return 0LL;
      goto LABEL_11;
    }
    Length = 2 * a6 + 12;
    v11 = Win32AllocPoolWithQuotaZInitImpl(Length, Length, 0x72707355u);
    if ( !v11 )
      goto LABEL_9;
    RtlInitUnicodeString(&DestinationString, a3);
    v12 = ZwQueryValueKey(v10, &DestinationString, KeyValuePartialInformation, (PVOID)v11, Length, &Length);
    v13 = 0;
    if ( v12 != -2147483643 )
      v13 = v12;
    if ( v13 >= 0 )
      break;
    if ( !v19 )
    {
      GreDeleteFastMutex((char *)v11);
LABEL_9:
      ZwClose(v10);
LABEL_11:
      if ( a4 && (int)RtlStringCchCopyW(a5, (unsigned int)a6, a4) >= 0 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( *(_WORD *)(v16 + 2 * v17) );
        return (unsigned int)(v17 + 1);
      }
      return 0LL;
    }
    GreDeleteFastMutex((char *)v11);
    ZwClose(v10);
  }
  v15 = a6;
  if ( *(_DWORD *)(v11 + 8) >> 1 < (unsigned int)a6 )
    v15 = *(_DWORD *)(v11 + 8) >> 1;
  if ( *(_DWORD *)(v11 + 8) < 2u )
  {
    *a5 = 0;
  }
  else
  {
    *(_WORD *)(v11 + 2LL * (v15 - 1) + 12) = 0;
    RtlStringCchCopyW(a5, (unsigned int)a6, (const unsigned __int16 *)(v11 + 12));
  }
  GreDeleteFastMutex((char *)v11);
  ZwClose(v10);
  return v15;
}
