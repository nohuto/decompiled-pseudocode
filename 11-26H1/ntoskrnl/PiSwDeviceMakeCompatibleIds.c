/*
 * XREFs of PiSwDeviceMakeCompatibleIds @ 0x140B0E0E4
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1409AE200 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwDeviceMakeCompatibleIds(__int64 a1, __int64 *a2)
{
  const wchar_t *v2; // rbx
  unsigned int v3; // edi
  __int64 v6; // rbp
  __int64 Pool2; // rax
  __int64 v8; // r12
  _WORD *v9; // rbp
  _OWORD *v10; // rsi
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // r14

  v2 = *(const wchar_t **)(a1 + 32);
  v3 = 0;
  v6 = 0LL;
  if ( v2 )
  {
    while ( *v2 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v2[v12] );
      if ( wcsicmp(v2, &PiSwGenericRawCompatibleId) && wcsicmp(v2, &PiSwGenericCompatibleId) )
        v6 += 2 * v12 + 2;
      v2 += v12 + 1;
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    v9 = *(_WORD **)(a1 + 32);
    v10 = (_OWORD *)Pool2;
    if ( v9 )
    {
      while ( *v9 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( v9[v13] );
        if ( wcsicmp(v9, &PiSwGenericRawCompatibleId) && wcsicmp(v9, &PiSwGenericCompatibleId) )
        {
          memmove(v10, v9, 2 * v13 + 2);
          v10 = (_OWORD *)((char *)v10 + 2 * v13 + 2);
        }
        v9 += v13 + 1;
      }
    }
    if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    {
      *v10 = *(_OWORD *)&PiSwGenericRawCompatibleId;
      *((_QWORD *)v10 + 2) = 0x52006300690072LL;
      *((_DWORD *)v10 + 6) = 7798881;
      *((_WORD *)v10 + 14) = 0;
      v10 = (_OWORD *)((char *)v10 + 30);
    }
    *v10 = *(_OWORD *)&PiSwGenericCompatibleId;
    *((_QWORD *)v10 + 2) = 0x6300690072LL;
    *((_WORD *)v10 + 12) = 0;
  }
  else
  {
    v3 = -1073741670;
  }
  result = v3;
  *a2 = v8;
  return result;
}
