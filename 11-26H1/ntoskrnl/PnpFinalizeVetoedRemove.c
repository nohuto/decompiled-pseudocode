/*
 * XREFs of PnpFinalizeVetoedRemove @ 0x140B61B54
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PiCheckRemovalPreconditions @ 0x1409B4930 (PiCheckRemovalPreconditions.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1409B568C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     McTemplateK0zqz_EtwWriteTransfer @ 0x1405DE2CC (McTemplateK0zqz_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall PnpFinalizeVetoedRemove(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  _DWORD *v3; // rax
  const wchar_t *v4; // rbx
  int v6; // ebp
  UNICODE_STRING *Buffer; // rcx
  NTSTATUS result; // eax
  UNICODE_STRING *v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9

  v3 = *(_DWORD **)(a1 + 48);
  v4 = 0LL;
  v6 = a2;
  if ( v3 )
    *v3 = a2;
  Buffer = *(UNICODE_STRING **)(a1 + 56);
  if ( Buffer && a3 )
    RtlCopyUnicodeString(Buffer, a3);
  result = *(_DWORD *)(a1 + 152);
  if ( (result & 8) != 0 && v6 == 6 )
  {
    Buffer = (UNICODE_STRING *)a3->Buffer;
    a2 = 0LL;
    v10 = (UNICODE_STRING *)((char *)Buffer + a3->Length);
    if ( Buffer < v10 )
    {
      while ( 1 )
      {
        if ( Buffer->Length == 92 )
        {
          a2 = (unsigned int)(a2 + 1);
          if ( (_DWORD)a2 == 3 )
            break;
        }
        Buffer = (UNICODE_STRING *)((char *)Buffer + 2);
        if ( Buffer >= v10 )
          goto LABEL_14;
      }
      LOWORD(Buffer) = (_WORD)Buffer - LOWORD(a3->Buffer);
      a3->Length = (unsigned __int16)Buffer;
    }
  }
LABEL_14:
  if ( (byte_140EF412C & 4) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 160);
    if ( v11 )
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
    else
      v12 = 0LL;
    if ( a3 )
      v4 = a3->Buffer;
    return McTemplateK0zqz_EtwWriteTransfer(
             (__int64)Buffer,
             a2,
             (const GUID *)(a1 + 88),
             *(const wchar_t **)(v12 + 48),
             v6,
             v4);
  }
  return result;
}
