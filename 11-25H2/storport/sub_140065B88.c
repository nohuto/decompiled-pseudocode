/*
 * XREFs of sub_140065B88 @ 0x140065B88
 * Callers:
 *     sub_1401B2CE0 @ 0x1401B2CE0 (sub_1401B2CE0.c)
 * Callees:
 *     sub_14008D1F0 @ 0x14008D1F0 (sub_14008D1F0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140065B88(__int64 a1, _DWORD *a2, size_t *a3)
{
  size_t v6; // r8
  unsigned __int64 v7; // rax
  char v9; // r14
  int v10; // eax
  _OWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF

  v6 = *a3;
  memset(v11, 0, sizeof(v11));
  memset_0(a2, 0, v6);
  v7 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 0LL;
    return 3221225507LL;
  }
  if ( v7 >= 0xC )
  {
    if ( v7 >= 0x10 )
    {
      v9 = 1;
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
        return 2147483665LL;
      v10 = sub_14008D1F0(a1, v11);
      *a2 = 16;
      a2[1] = 16;
      if ( v10 >= 0 && **(_DWORD **)(a1 + 6064) == 512 )
        a2[3] = 2;
      else
        v9 = 0;
      *((_BYTE *)a2 + 8) = v9;
      *a3 = 16LL;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
    }
    else
    {
      *a2 = 12;
      a2[1] = 12;
      *((_BYTE *)a2 + 8) = 0;
      *a3 = 12LL;
    }
  }
  else
  {
    *a2 = 16;
    a2[1] = 16;
    *a3 = 8LL;
  }
  return 0LL;
}
