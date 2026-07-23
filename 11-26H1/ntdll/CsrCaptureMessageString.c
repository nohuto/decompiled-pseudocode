/*
 * XREFs of CsrCaptureMessageString @ 0x1800C8020
 * Callers:
 *     CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x1800C7F00 (CsrCaptureMessageMultiUnicodeStringsInPlace.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

void __fastcall CsrCaptureMessageString(__int64 a1, const void *a2, int a3, unsigned int a4, unsigned __int16 *a5)
{
  unsigned __int16 *v6; // r8
  __int64 v7; // r11
  unsigned __int16 v8; // r8
  unsigned __int16 *v9; // rdx

  if ( LdrpIsSecureProcess )
    return;
  if ( !a2 )
  {
    a5[1] = a4;
    *a5 = 0;
    v9 = a5 + 4;
    if ( a4 )
    {
      *((_QWORD *)a5 + 1) = *(_QWORD *)(a1 + 24);
      if ( a4 >= 0x7FFFFFFF )
        goto LABEL_16;
      *(_QWORD *)(a1 + 24) += (a4 + 3) & 0xFFFFFFFC;
    }
    else
    {
      *((_QWORD *)a5 + 1) = 0LL;
      v9 = 0LL;
    }
    *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 16))++ + 32) = v9;
    if ( !a4 )
      return;
LABEL_16:
    **((_BYTE **)a5 + 1) = 0;
    return;
  }
  *a5 = a3;
  v6 = a5 + 4;
  LOWORD(v7) = a4;
  if ( a4 )
  {
    *((_QWORD *)a5 + 1) = *(_QWORD *)(a1 + 24);
    if ( a4 >= 0x7FFFFFFF )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v7 = (a4 + 3) & 0xFFFFFFFC;
    *(_QWORD *)(a1 + 24) += v7;
  }
  else
  {
    v6 = 0LL;
    *((_QWORD *)a5 + 1) = 0LL;
  }
  *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 16) + 32) = v6;
  v8 = v7;
  ++*(_DWORD *)(a1 + 16);
LABEL_7:
  a5[1] = v8;
  if ( a3 )
    memmove(*((void **)a5 + 1), a2, a4);
  if ( *a5 < a5[1] )
    *(_BYTE *)(*a5 + *((_QWORD *)a5 + 1)) = 0;
}
