/*
 * XREFs of ObQueryTypeInfo @ 0x140923260
 * Callers:
 *     NtQueryObject @ 0x140921430 (NtQueryObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall ObQueryTypeInfo(__int64 a1, _BYTE *a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int v9; // r14d
  void *v10; // rcx
  void *v11; // rsi
  _BYTE v13[112]; // [rsp+30h] [rbp-B8h] BYREF

  v9 = -1073741820;
  memset_0(v13, 0, 0x68uLL);
  v10 = 0LL;
  v11 = a2 + 104;
  if ( a5 )
  {
    v10 = a2;
    a2 = v13;
  }
  *a4 += ((*(unsigned __int16 *)(a1 + 16) + 9) & 0xFFFFFFF8) + 104;
  if ( a3 >= *a4 )
  {
    *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 44);
    *((_DWORD *)a2 + 5) = *(_DWORD *)(a1 + 48);
    *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 52);
    *((_DWORD *)a2 + 11) = *(_DWORD *)(a1 + 56);
    *((_DWORD *)a2 + 16) = *(_DWORD *)(a1 + 72);
    *(_OWORD *)(a2 + 68) = *(_OWORD *)(a1 + 76);
    *((_DWORD *)a2 + 21) = *(_DWORD *)(a1 + 92);
    a2[88] = (*(_BYTE *)(a1 + 66) & 8) != 0;
    a2[89] = (*(_BYTE *)(a1 + 66) & 0x10) != 0;
    *((_DWORD *)a2 + 23) = *(_DWORD *)(a1 + 100);
    *((_DWORD *)a2 + 24) = *(_DWORD *)(a1 + 104);
    *((_DWORD *)a2 + 25) = *(_DWORD *)(a1 + 108);
    a2[90] = *(_BYTE *)(a1 + 40);
    a2[91] = 0;
    *((_QWORD *)a2 + 1) = v11;
    *(_WORD *)a2 = *(_WORD *)(a1 + 16);
    *((_WORD *)a2 + 1) = *(_WORD *)(a1 + 16) + 2;
    v9 = 0;
    if ( a5 )
    {
      RtlCopyToUser(v10, a2, 0x68uLL);
      RtlCopyToUser(v11, *(void **)(a1 + 24), *(unsigned __int16 *)(a1 + 16));
      RtlWriteUShortToUser((_WORD *)v11 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 16) >> 1), 0);
    }
    else
    {
      memmove(v11, *(const void **)(a1 + 24), *(unsigned __int16 *)(a1 + 16));
      *((_WORD *)v11 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 16) >> 1)) = 0;
    }
  }
  return v9;
}
