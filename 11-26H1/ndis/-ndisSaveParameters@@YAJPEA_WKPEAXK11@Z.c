/*
 * XREFs of ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x140065F50
 * Callers:
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisSaveParameters(wchar_t *a1, int a2, _DWORD *a3, unsigned int a4, _QWORD *a5, void *a6)
{
  size_t v6; // rsi
  unsigned int v9; // ecx
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  _DWORD *v13; // rax

  v6 = a4;
  if ( a4 >= 0xFFFFFFE0 )
    return 3221225485LL;
  v9 = 32;
  if ( ((a2 - 1) & 0xFFFFFFF9) == 0 && a2 != 5 )
    v9 = a4 + 32;
  Pool2 = ExAllocatePool2(64LL, v9, 1852851278LL);
  v11 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v13 = (_DWORD *)(Pool2 + 8);
  *(_QWORD *)a6 = v13;
  switch ( a2 )
  {
    case 4:
      *v13 = 0;
      *(_DWORD *)(*(_QWORD *)a6 + 8LL) = *a3;
      break;
    case 1:
    case 7:
      *v13 = (a2 != 1) + 2;
      *(_QWORD *)(*(_QWORD *)a6 + 16LL) = v11 + 4;
      memmove(*(void **)(*(_QWORD *)a6 + 16LL), a3, v6);
      *(_WORD *)(*(_QWORD *)a6 + 8LL) = v6;
      *(_WORD *)(*(_QWORD *)a6 + 10LL) = v6;
      if ( a2 == 1 && !*((_BYTE *)a3 + (unsigned int)(v6 - 1)) && !*((_BYTE *)a3 + (unsigned int)(v6 - 2)) )
        *(_WORD *)(*(_QWORD *)a6 + 8LL) -= 2;
      break;
    case 3:
      *v13 = 4;
      *(_QWORD *)(*(_QWORD *)a6 + 16LL) = a3;
      *(_WORD *)(*(_QWORD *)a6 + 8LL) = v6;
      *(_QWORD *)(*(_QWORD *)a6 + 16LL) = v11 + 4;
      memmove(*(void **)(*(_QWORD *)a6 + 16LL), a3, v6);
      break;
    default:
      ExFreePoolWithTag(v11, 0);
      return 3221225524LL;
  }
  if ( a5 )
  {
    *v11 = a5[3];
    a5[3] = v11;
  }
  return 0LL;
}
