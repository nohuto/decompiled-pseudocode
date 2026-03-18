/*
 * XREFs of DpiCompareAcpiPaths @ 0x1400934D8
 * Callers:
 *     ?DoesMuxAcpiNameMatch@DISPLAY_MUX_PAIRING@@QEBA_NPEBU_UNICODE_STRING@@@Z @ 0x14008BD00 (-DoesMuxAcpiNameMatch@DISPLAY_MUX_PAIRING@@QEBA_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?DpiAcpiDoesDepContainMux@@YAEPEAU_FDO_CONTEXT@@PEAU_ACPI_EVAL_OUTPUT_BUFFER_V1@@@Z @ 0x1400932E8 (-DpiAcpiDoesDepContainMux@@YAEPEAU_FDO_CONTEXT@@PEAU_ACPI_EVAL_OUTPUT_BUFFER_V1@@@Z.c)
 * Callees:
 *     memcmp @ 0x1400A6320 (memcmp.c)
 */

bool __fastcall DpiCompareAcpiPaths(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  UNICODE_STRING v2; // xmm1
  UNICODE_STRING v3; // xmm0
  _WORD *v4; // rdx
  _QWORD *v5; // r10
  __int64 v6; // r11
  __int64 v7; // r12
  signed int v8; // eax
  _WORD *v9; // r9
  __int64 v10; // r8
  _WORD *v11; // rax
  __int16 v12; // cx
  bool result; // al
  const void **p_Buffer; // rbx
  unsigned int i; // edi
  __int64 v16; // rsi
  _WORD *v17; // rdx
  unsigned int v18; // r14d
  __int16 v19; // r15
  char *v20; // r13
  UNICODE_STRING String1; // [rsp+20h] [rbp-79h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v23[6]; // [rsp+40h] [rbp-59h] BYREF
  _WORD v24[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD Buf2[15]; // [rsp+78h] [rbp-21h]

  v2 = *a2;
  v3 = *a1;
  v23[0] = L"\\SB.";
  v4 = v24;
  v23[1] = L"\\_SB_.";
  v5 = v23;
  v23[2] = L"_SB_.";
  v6 = 5LL;
  v23[3] = L"_SB.";
  v7 = 2LL;
  v23[4] = L"\\_SB.";
  v8 = 0;
  String1 = v3;
  String2 = v2;
  do
  {
    if ( v8 >= 0 )
    {
      v9 = (_WORD *)*v5;
      v8 = 0;
      *(_OWORD *)v4 = 0LL;
      if ( v9 )
      {
        v10 = 0x7FFFLL;
        v11 = v9;
        do
        {
          if ( !*v11 )
            break;
          ++v11;
          --v10;
        }
        while ( v10 );
        v8 = v10 == 0 ? 0xC000000D : 0;
        if ( v10 )
        {
          if ( v4 )
          {
            v12 = 2 * (0x7FFF - v10);
            *((_QWORD *)v4 + 1) = v9;
            *v4 = v12;
            v4[1] = v12 + 2;
          }
          else
          {
            v8 = -1073741811;
          }
        }
      }
    }
    ++v5;
    v4 += 8;
    --v6;
  }
  while ( v6 );
  if ( v8 >= 0 )
  {
    p_Buffer = (const void **)&String1.Buffer;
    do
    {
      for ( i = 0; i < 5; ++i )
      {
        v16 = -1LL;
        v17 = (_WORD *)Buf2[2 * i];
        do
          ++v16;
        while ( v17[v16] );
        v18 = *((unsigned __int16 *)p_Buffer - 4);
        v19 = 2 * v16;
        if ( v18 >= 2 * (int)v16 )
        {
          v20 = (char *)*p_Buffer;
          if ( !memcmp(*p_Buffer, v17, (unsigned __int16)v24[8 * i]) )
          {
            *((_WORD *)p_Buffer - 3) -= v19;
            *((_WORD *)p_Buffer - 4) = v18 - v19;
            *p_Buffer = &v20[2 * (unsigned int)v16];
            break;
          }
        }
      }
      p_Buffer += 2;
      --v7;
    }
    while ( v7 );
    return RtlCompareUnicodeString(&String1, &String2, 1u) == 0;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    result = 0;
    WdLogGlobalForLineNumber = 2473;
  }
  return result;
}
