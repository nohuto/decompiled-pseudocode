/*
 * XREFs of ndisEtwWriteMiniportDriverRundown @ 0x1400991A0
 * Callers:
 *     ndisEtwRundownMiniportDrivers @ 0x140098E64 (ndisEtwRundownMiniportDrivers.c)
 * Callees:
 *     McTemplateK0wwwuuqqq_EtwWriteTransfer @ 0x14009998C (McTemplateK0wwwuuqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisEtwWriteMiniportDriverRundown(__int64 a1)
{
  const wchar_t *v2; // rbx
  unsigned __int16 v3; // r9
  int v4; // r10d
  const wchar_t *v5; // rsi
  unsigned __int16 v6; // dx
  const wchar_t *v7; // rdi
  unsigned __int16 v8; // cx
  __int64 result; // rax
  char v10; // r11

  v2 = L"NULL";
  v3 = 4;
  LOBYTE(v4) = 0;
  v5 = L"NULL";
  v6 = 4;
  v7 = L"NULL";
  v8 = 4;
  if ( *(_QWORD *)(a1 + 496) )
  {
    v2 = *(const wchar_t **)(a1 + 496);
    v3 = *(_WORD *)(a1 + 488) >> 1;
  }
  if ( *(_QWORD *)(a1 + 880) )
  {
    v5 = *(const wchar_t **)(a1 + 880);
    v6 = *(_WORD *)(a1 + 872) >> 1;
  }
  result = *(_QWORD *)(a1 + 56);
  if ( result )
  {
    v7 = *(const wchar_t **)(a1 + 56);
    v8 = *(_WORD *)(a1 + 48) >> 1;
  }
  v10 = *(_BYTE *)(a1 + 24);
  if ( (unsigned __int8)v10 >= 6u )
    v4 = *(_DWORD *)(a1 + 120);
  if ( (byte_14011D046 & 8) != 0 )
    return McTemplateK0wwwuuqqq_EtwWriteTransfer(
             v8,
             v6,
             a1,
             v3,
             (__int64)v2,
             v6,
             (__int64)v5,
             v8,
             (__int64)v7,
             v10,
             *(_BYTE *)(a1 + 25),
             *(_DWORD *)(a1 + 480),
             *(_WORD *)(a1 + 26),
             v4);
  return result;
}
