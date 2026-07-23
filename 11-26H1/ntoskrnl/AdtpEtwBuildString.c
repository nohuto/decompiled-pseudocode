/*
 * XREFs of AdtpEtwBuildString @ 0x140A94768
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpEtwBuildString(__int64 a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  unsigned __int16 v5; // r11
  const void **v6; // rsi
  unsigned int v9; // r10d
  unsigned int v10; // edi
  __int64 v11; // rbp
  bool v12; // zf
  void *Pool2; // rbx
  __int64 v14; // rax
  __int64 result; // rax

  v5 = a2[1];
  v6 = (const void **)(a2 + 4);
  v9 = *a2 >> 1;
  v10 = v9 + 1;
  v11 = v9;
  v12 = v5 == *a2;
  if ( v5 > *a2 )
  {
    Pool2 = (void *)*v6;
    if ( !*((_WORD *)*v6 + v9) )
      goto LABEL_8;
    v12 = v5 == *a2;
  }
  if ( v12 && v10 > 1 )
  {
    Pool2 = (void *)*v6;
    if ( !*((_WORD *)*v6 + v9 - 1) )
    {
      v10 = *a2 >> 1;
      goto LABEL_8;
    }
  }
  v14 = (unsigned int)*a4;
  if ( (unsigned int)v14 + v10 < 0x400 )
  {
    Pool2 = (void *)(a3 + 2 * v14);
    *a4 = v14 + v10;
LABEL_7:
    memmove(Pool2, *v6, *a2);
    *((_WORD *)Pool2 + v11) = 0;
LABEL_8:
    *(_QWORD *)a1 = Pool2;
    *(_DWORD *)(a1 + 8) = 2 * v10;
    result = 0LL;
    *(_DWORD *)(a1 + 12) = 0;
    return result;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    *a5 = 1;
    goto LABEL_7;
  }
  return 3221225495LL;
}
