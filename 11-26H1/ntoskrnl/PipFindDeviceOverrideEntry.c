/*
 * XREFs of PipFindDeviceOverrideEntry @ 0x1409DAC70
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x1409DA988 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x14041C340 (NLS_UPCASE.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     PipCallbackHasDeviceOverrides @ 0x140B6B784 (PipCallbackHasDeviceOverrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipFindDeviceOverrideEntry(_WORD *Src, __int64 a2, __int64 a3)
{
  _WORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int16 *Pool2; // rax
  __int16 *v9; // rdi
  __int16 v10; // bx
  __int16 *v11; // rcx
  __int16 v12; // ax
  const WCHAR *v13; // r15
  int v14; // ebx
  unsigned int v15; // r14d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  wchar_t *Buffer; // rbx
  __int64 Flink; // r12
  int v19; // edx
  int v20; // r11d
  const UNICODE_STRING **v21; // r12
  const UNICODE_STRING *i; // r14
  __int64 v23; // rax
  HANDLE v25; // rdx
  __int128 v26; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v28; // [rsp+80h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+48h] BYREF

  v4 = Src;
  v28 = 0LL;
  v26 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( *Src )
  {
    LODWORD(v5) = 0;
    do
    {
      v6 = -1LL;
      do
        ++v6;
      while ( Src[v6] );
      v5 = (unsigned int)(v6 + v5 + 1);
      Src = &v4[v5];
    }
    while ( *Src );
    v7 = v5 + 1;
    Pool2 = (__int16 *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, v4, 2LL * v7);
      *((_QWORD *)&v26 + 1) = v9;
      LOWORD(v26) = 2 * v7;
      WORD1(v26) = 2 * v7;
      v10 = (unsigned __int16)(2 * v7) >> 1;
      if ( v10 )
      {
        v11 = v9;
        do
        {
          --v10;
          v12 = *v11;
          if ( *v11 == 92 || v12 == 47 )
            v12 = 35;
          *v11++ = v12;
        }
        while ( v10 );
      }
      v13 = (const WCHAR *)v9;
      v14 = -1073741772;
      if ( *v9 )
      {
        do
        {
          RtlInitUnicodeString(&DestinationString, v13);
          v15 = 0;
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          Buffer = DestinationString.Buffer;
          Flink = (__int64)CurrentServerSiloGlobals[75].Flink;
          if ( DestinationString.Length >> 1 )
          {
            do
            {
              v19 = *Buffer++;
              v15 = (unsigned __int16)NLS_UPCASE(Flink, v19) + 65599 * v15;
            }
            while ( v20 != 1 );
          }
          v14 = -1073741772;
          v21 = (const UNICODE_STRING **)(PnpDeviceOverrideHashList + 16LL * (v15 % PnpDeviceOverrideHashListSize));
          for ( i = *v21; i != (const UNICODE_STRING *)v21; i = *(const UNICODE_STRING **)&i->Length )
          {
            if ( RtlEqualUnicodeString(&DestinationString, i + 1, 1u) )
            {
              v25 = v28;
              if ( !v28 )
              {
                LODWORD(v26) = 8781956;
                *((_QWORD *)&v26 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DeviceOverrides";
                v14 = IopOpenRegistryKeyEx(&v28, 0LL, &v26, 131097LL);
                if ( v14 < 0 )
                  goto LABEL_20;
                v25 = v28;
              }
              v14 = IopOpenRegistryKeyEx(&Handle, v25, &DestinationString, 131097LL);
              if ( v14 >= 0 )
              {
                if ( (unsigned __int8)PipCallbackHasDeviceOverrides(Handle, a3) )
                {
                  ZwClose(Handle);
                  goto LABEL_20;
                }
                ZwClose(Handle);
                v14 = -1073741772;
              }
              break;
            }
          }
          v23 = -1LL;
          do
            ++v23;
          while ( v13[v23] );
          v13 += v23 + 1;
        }
        while ( *v13 );
      }
    }
    else
    {
      v14 = -1073741670;
    }
LABEL_20:
    if ( v28 )
      ZwClose(v28);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v14;
}
