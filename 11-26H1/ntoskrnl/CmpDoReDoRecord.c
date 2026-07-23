/*
 * XREFs of CmpDoReDoRecord @ 0x140869C08
 * Callers:
 *     CmpRmReDoPhase @ 0x140864830 (CmpRmReDoPhase.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x140729B40 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     ZwSetInformationKey @ 0x14072B520 (ZwSetInformationKey.c)
 *     ZwSetSecurityObject @ 0x14072B700 (ZwSetSecurityObject.c)
 *     CmpDoReDoCreateKey @ 0x140869B10 (CmpDoReDoCreateKey.c)
 *     CmpDoReOpenTransKey @ 0x140869E38 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoRecord(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // esi
  SECURITY_INFORMATION v5; // edx
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  NTSTATUS v8; // edi
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF
  HANDLE KeySetInformation; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 8) & 0x1C) == 0 )
  {
    switch ( *(_DWORD *)(a2 + 12) )
    {
      case 1:
        return (unsigned int)CmpDoReDoCreateKey(a1, a2);
      case 2:
        Handle = 0LL;
        v8 = CmpDoReOpenTransKey(a1, a2 + 32, 0x10000LL, &Handle);
        if ( v8 >= 0 )
        {
          v8 = ZwDeleteKey(Handle);
          ZwClose(Handle);
        }
        return (unsigned int)v8;
      case 3:
      case 4:
        Handle = 0LL;
        v4 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &Handle);
        if ( v4 >= 0 )
        {
          v6 = ZwSetValueKey(
                 Handle,
                 (PUNICODE_STRING)(a2 + 48),
                 0,
                 *(_DWORD *)(a2 + 64),
                 *(PVOID *)(a2 + 72),
                 *(_DWORD *)(a2 + 68));
          goto LABEL_24;
        }
        break;
      case 5:
        Handle = 0LL;
        v4 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &Handle);
        if ( v4 >= 0 )
        {
          v6 = ZwDeleteValueKey(Handle, (PUNICODE_STRING)(a2 + 48));
          goto LABEL_24;
        }
        break;
      case 6:
        KeySetInformation = 0LL;
        v4 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &KeySetInformation);
        if ( v4 >= 0 )
        {
          LODWORD(Handle) = *(_DWORD *)(a2 + 48);
          v6 = ZwSetInformationKey(KeySetInformation, KeyWow64FlagsInformation, &Handle, 4u);
          v7 = KeySetInformation;
LABEL_25:
          v4 = v6;
          ZwClose(v7);
        }
        break;
      case 7:
        Handle = 0LL;
        v4 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &Handle);
        if ( v4 >= 0 )
        {
          KeySetInformation = *(HANDLE *)(a2 + 48);
          v6 = ZwSetInformationKey(Handle, KeyWriteTimeInformation, &KeySetInformation, 8u);
          goto LABEL_24;
        }
        break;
      case 8:
        Handle = 0LL;
        v4 = CmpDoReOpenTransKey(a1, a2 + 32, 0x40000LL, &Handle);
        if ( v4 >= 0 )
        {
          v5 = 4;
          goto LABEL_15;
        }
        break;
      case 0xA:
        Handle = 0LL;
        v4 = CmpDoReOpenTransKey(a1, a2 + 32, 17563648LL, &Handle);
        if ( v4 >= 0 )
        {
          v5 = 65920;
LABEL_15:
          v6 = ZwSetSecurityObject(Handle, v5, *(PSECURITY_DESCRIPTOR *)(a2 + 56));
LABEL_24:
          v7 = Handle;
          goto LABEL_25;
        }
        break;
      default:
        return v2;
    }
    return (unsigned int)v4;
  }
  return 0LL;
}
