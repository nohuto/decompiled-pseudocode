/*
 * XREFs of FastGetProfileStringW @ 0x1400E1B40
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400DFA30 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileStringFromIDW @ 0x1400E1630 (FastGetProfileStringFromIDW.c)
 *     FastGetProfileIntW @ 0x1400E1740 (FastGetProfileIntW.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400E2300 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FastGetProfileStringW(
        PCUNICODE_STRING Source,
        int a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int64 a6,
        int a7)
{
  void *v10; // rdi
  __int64 v11; // rbx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rax
  ULONG Length; // [rsp+30h] [rbp-48h] BYREF
  int v23; // [rsp+34h] [rbp-44h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  Length = 0;
  DestinationString = 0LL;
  v23 = *(_DWORD *)(W32GetUserSessionState((_DWORD)Source, a2, (_DWORD)a3) + 62776) | a7;
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
    v16 = 0;
    if ( v12 != -2147483643 )
      v16 = v12;
    if ( v16 >= 0 )
      break;
    if ( !v23 )
    {
      GreDeleteFastMutex((char *)v11, v13, v14, v15);
LABEL_9:
      ZwClose(v10);
LABEL_11:
      if ( a4 && (int)RtlStringCchCopyW(a5, (unsigned int)a6, a4) >= 0 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( *(_WORD *)(v20 + 2 * v21) );
        return (unsigned int)(v21 + 1);
      }
      return 0LL;
    }
    GreDeleteFastMutex((char *)v11, v13, v14, v15);
    ZwClose(v10);
  }
  v18 = a6;
  v19 = (unsigned int)a6;
  if ( *(_DWORD *)(v11 + 8) >> 1 < (unsigned int)a6 )
    v18 = *(_DWORD *)(v11 + 8) >> 1;
  if ( *(_DWORD *)(v11 + 8) < 2u )
  {
    *a5 = 0;
  }
  else
  {
    *(_WORD *)(v11 + 2LL * (v18 - 1) + 12) = 0;
    RtlStringCchCopyW(a5, (unsigned int)a6, (const unsigned __int16 *)(v11 + 12));
  }
  GreDeleteFastMutex((char *)v11, v19, v14, v15);
  ZwClose(v10);
  return v18;
}
