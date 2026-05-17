/*
 * XREFs of RtlpGetBootStatusPathFromRegistry @ 0x18010C1AC
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x18010BE60 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpGetBootStatusPathFromRegistry(_QWORD *a1)
{
  size_t v2; // rax
  int v3; // ebx
  int v4; // eax
  __int64 Heap_0; // rdi
  void *v6; // rax
  void *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]
  __int128 v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+A8h] [rbp+38h] BYREF
  int v17; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF

  v17 = 0;
  v16 = 0;
  v10[1] = 0;
  DestinationString.Buffer = (wchar_t *)"\\\x00R\x00E\x00G\x00I\x00S\x00T\x00R\x00Y\x00\\\x00M\x00A\x00C\x00H\x00I\x00N\x00E\x00\\\x00S\x00Y\x00S\x00T\x00E\x00M\x00\\\x00C\x00u\x00r\x00r\x00e\x00n\x00t\x00C\x00o\x00n\x00t\x00r\x00o\x00l\x00S\x00e\x00t\x00\\\x00C\x00o\x00n\x00t\x00r\x00o\x00l";
  v14 = 0;
  Handle = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v2 = 2
     * wcslen((const wchar_t *)"\\\x00R\x00E\x00G\x00I\x00S\x00T\x00R\x00Y\x00\\\x00M\x00A\x00C\x00H\x00I\x00N\x00E\x00\\\x00S\x00Y\x00S\x00T\x00E\x00M\x00\\\x00C\x00u\x00r\x00r\x00e\x00n\x00t\x00C\x00o\x00n\x00t\x00r\x00o\x00l\x00S\x00e\x00t\x00\\\x00C\x00o\x00n\x00t\x00r\x00o\x00l");
  v10[0] = 48;
  v11 = 0LL;
  v13 = 64;
  if ( v2 >= 0xFFFE )
    LOWORD(v2) = -4;
  DestinationString.Length = v2;
  DestinationString.MaximumLength = v2 + 2;
  p_DestinationString = &DestinationString;
  v15 = 0LL;
  v3 = NtOpenKey(&Handle, 131097LL, v10);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OsBootstatPath");
    v4 = NtQueryValueKey(Handle, &DestinationString, 2LL, 0LL, 0, &v16);
    v3 = v4;
    if ( v4 == -1073741789 )
    {
      Heap_0 = RtlAllocateHeap_0();
      if ( Heap_0 )
      {
        v3 = NtQueryValueKey(Handle, &DestinationString, 2LL, Heap_0, v16, &v17);
        if ( v3 >= 0 )
        {
          v6 = (void *)RtlAllocateHeap_0();
          v7 = v6;
          if ( v6 )
          {
            memmove(v6, (const void *)(Heap_0 + 12), *(unsigned int *)(Heap_0 + 8));
            *a1 = v7;
          }
          else
          {
            v3 = -1073741801;
          }
        }
        RtlFreeHeap_0();
      }
      else
      {
        v3 = -1073741801;
      }
    }
    else if ( v4 >= 0 )
    {
      v3 = -1073741823;
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
