/*
 * XREFs of ndisEtwWriteFilterDriverRundown @ 0x140099078
 * Callers:
 *     ndisEtwRundownFilterDrivers @ 0x140098DAC (ndisEtwRundownFilterDrivers.c)
 * Callees:
 *     McTemplateK0wwwwuuuuqq_EtwWriteTransfer @ 0x140099ABC (McTemplateK0wwwwuuuuqq_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisEtwWriteFilterDriverRundown(__int64 a1)
{
  const wchar_t *v1; // r11
  unsigned __int16 v2; // r9
  const wchar_t *v4; // rdi
  unsigned __int16 v5; // r8
  const wchar_t *v6; // rsi
  unsigned __int16 v7; // dx
  const wchar_t *v8; // rbx
  unsigned __int16 v9; // cx
  __int64 result; // rax

  v1 = L"NULL";
  v2 = 4;
  v4 = L"NULL";
  v5 = 4;
  v6 = L"NULL";
  v7 = 4;
  v8 = L"NULL";
  v9 = 4;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v1 = *(const wchar_t **)(a1 + 152);
    v2 = *(_WORD *)(a1 + 144) >> 1;
  }
  if ( *(_QWORD *)(a1 + 136) )
  {
    v4 = *(const wchar_t **)(a1 + 136);
    v5 = *(_WORD *)(a1 + 128) >> 1;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    v6 = *(const wchar_t **)(a1 + 120);
    v7 = *(_WORD *)(a1 + 112) >> 1;
  }
  result = *(_QWORD *)(a1 + 352);
  if ( result )
  {
    v8 = *(const wchar_t **)(a1 + 352);
    v9 = *(_WORD *)(a1 + 344) >> 1;
  }
  if ( (byte_14011D046 & 8) != 0 )
    return McTemplateK0wwwwuuuuqq_EtwWriteTransfer(
             v9,
             v7,
             v5,
             v2,
             (__int64)v1,
             v5,
             (__int64)v4,
             v7,
             (__int64)v6,
             v9,
             (__int64)v8,
             *(_BYTE *)(a1 + 100),
             *(_BYTE *)(a1 + 101),
             *(_BYTE *)(a1 + 102),
             *(_BYTE *)(a1 + 103),
             *(_DWORD *)(a1 + 48),
             *(_DWORD *)(a1 + 104));
  return result;
}
