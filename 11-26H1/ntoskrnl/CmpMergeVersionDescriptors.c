/*
 * XREFs of CmpMergeVersionDescriptors @ 0x14085C554
 * Callers:
 *     CmpLoadSystemVersionData @ 0x14085C2E4 (CmpLoadSystemVersionData.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 */

void __fastcall CmpMergeVersionDescriptors(__int64 a1, __int64 a2)
{
  int v4; // ecx
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // r14
  _DWORD *v9; // rsi
  const UNICODE_STRING *v10; // rdx
  _DWORD *v11; // r14
  _DWORD *v12; // rdi
  _DWORD *v13; // rsi

  v4 = 0;
  v5 = (_DWORD *)(a1 + 1312);
  if ( (*(_DWORD *)(a2 + 1312) & 0x20) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    v4 = 1;
    *v5 |= 0x20u;
    *(_DWORD *)(a1 + 8) = v6;
  }
  if ( (*(_DWORD *)(a2 + 1312) & 0x40) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 12);
    v8 = (_DWORD *)(a1 + 1312);
    *v5 |= 0x40u;
    v4 = 1;
    *(_DWORD *)(a1 + 12) = v7;
  }
  else
  {
    v8 = (_DWORD *)(a1 + 1312);
  }
  v9 = (_DWORD *)(a1 + 1312);
  if ( *(_QWORD *)(a2 + 40) )
  {
    v10 = (const UNICODE_STRING *)(a2 + 32);
    v9 = v8;
    if ( v10->Length )
    {
      RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 32), v10);
      *v5 |= 0x80u;
      v4 = 1;
    }
  }
  v11 = v9;
  if ( *(_QWORD *)(a2 + 56) && *(_WORD *)(a2 + 48) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 48), (PCUNICODE_STRING)(a2 + 48));
    *v9 |= 0x100u;
    v11 = (_DWORD *)(a1 + 1312);
    v4 = 1;
  }
  v12 = v9;
  if ( *(_QWORD *)(a2 + 72) )
  {
    v12 = v11;
    if ( *(_WORD *)(a2 + 64) )
    {
      RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 64), (PCUNICODE_STRING)(a2 + 64));
      *v9 |= 0x200u;
      v4 = 1;
    }
  }
  v13 = v12;
  if ( *(_QWORD *)(a2 + 88) && *(_WORD *)(a2 + 80) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 80), (PCUNICODE_STRING)(a2 + 80));
    *v12 |= 0x400u;
    v13 = (_DWORD *)(a1 + 1312);
    v4 = 1;
  }
  if ( *(_QWORD *)(a2 + 104) && *(_WORD *)(a2 + 96) )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 96), (PCUNICODE_STRING)(a2 + 96));
    *v12 |= 0x800u;
  }
  else
  {
    v13 = v12;
    if ( !v4 )
      return;
  }
  *v13 |= 4u;
}
