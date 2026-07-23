/*
 * XREFs of EtwpCreateNtFileName @ 0x140A15C6C
 * Callers:
 *     EtwpDelayCreate @ 0x140A15A94 (EtwpDelayCreate.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpCreateNtFileName(_WORD *a1, wchar_t **a2, _BYTE *a3)
{
  __int64 v4; // rax
  _WORD *v5; // rbx
  int v6; // eax
  NTSTATUS result; // eax
  unsigned int v8; // eax
  const wchar_t *v9; // rsi
  int v10; // ecx
  unsigned int v11; // ebp
  wchar_t *Pool2; // rax
  wchar_t *v13; // rdi

  *a3 = 0;
  v4 = -1LL;
  v5 = a1;
  do
    ++v4;
  while ( a1[v4] );
  v6 = 2 * v4;
  if ( !v6 )
    return -1073741773;
  v8 = v6 + 2;
  if ( v8 > 0xA )
  {
    if ( *a1 != 92 )
    {
LABEL_7:
      v9 = L"\\DosDevices\\";
      v10 = 24;
      goto LABEL_8;
    }
    if ( a1[1] == 92 && a1[2] == 63 && a1[3] == 92 )
    {
      v8 -= 8;
      v5 = a1 + 4;
    }
  }
  if ( *v5 != 92 || v5[1] != 92 )
    goto LABEL_7;
  v9 = L"\\??\\UNC\\";
  *a3 = 1;
  v5 += 2;
  v10 = 12;
LABEL_8:
  v11 = v10 + v8;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v13 = Pool2;
  if ( Pool2 )
  {
    result = RtlStringCbPrintfW(Pool2, v11, L"%ws%ws", v9, v5);
    if ( !result )
    {
      *a2 = v13;
      return result;
    }
    ExFreePoolWithTag(v13, 0);
    result = -1073741811;
  }
  else
  {
    result = -1073741801;
  }
  *a2 = 0LL;
  return result;
}
