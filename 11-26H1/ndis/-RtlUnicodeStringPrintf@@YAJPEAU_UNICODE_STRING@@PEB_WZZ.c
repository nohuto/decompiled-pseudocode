/*
 * XREFs of ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x14005A630
 * Callers:
 *     GetModuleParameters @ 0x14014829C (GetModuleParameters.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1401627C0 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140162CD0 (-ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 RtlUnicodeStringPrintf(struct _UNICODE_STRING *a1, const wchar_t *a2, ...)
{
  unsigned __int16 Length; // cx
  unsigned __int64 MaximumLength; // rax
  wchar_t *Buffer; // r10
  unsigned __int64 v6; // rdi
  unsigned int v7; // esi
  int v8; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, a2);
  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return 3221225485LL;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return 3221225485LL;
  if ( Length > (unsigned __int16)MaximumLength )
    return 3221225485LL;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return 3221225485LL;
  Buffer = a1->Buffer;
  if ( !Buffer && (Length || (_WORD)MaximumLength) )
    return 3221225485LL;
  v6 = MaximumLength >> 1;
  v7 = 0;
  v8 = _vsnwprintf(Buffer, MaximumLength >> 1, a2, Args);
  if ( v8 < 0 || v8 > v6 )
  {
    LOWORD(v8) = v6;
    v7 = -2147483643;
  }
  a1->Length = 2 * v8;
  return v7;
}
