/*
 * XREFs of sub_14006BD30 @ 0x14006BD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_14006BC10 @ 0x14006BC10 (sub_14006BC10.c)
 *     sub_14006BC34 @ 0x14006BC34 (sub_14006BC34.c)
 *     sub_14006BFEC @ 0x14006BFEC (sub_14006BFEC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006BD30(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v9; // rax
  __int64 *v10; // rcx
  _QWORD *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      v5 = -2147024809;
    }
    else
    {
      v6 = (_QWORD *)sub_140049338(24LL, (__int64)&unk_1400C75FC);
      if ( v6 )
        v7 = sub_14006BC10(v6, a1);
      else
        v7 = 0LL;
      v11 = v7;
      if ( v7 )
      {
        v5 = sub_1400B6010(v7);
        if ( v5 >= 0 )
        {
          v9 = sub_14006BFEC(a1 + 16, &v11, *(_QWORD *)(a1 + 24));
          v10 = *(__int64 **)(a1 + 24);
          if ( v10 )
            *v10 = v9;
          else
            *(_QWORD *)(a1 + 16) = v9;
          *(_QWORD *)(a1 + 24) = v9;
          *a3 = 0LL;
          return (unsigned int)v5;
        }
      }
      else
      {
        v5 = -2147024882;
      }
      if ( v7 )
        sub_14006BC34(v7);
    }
  }
  else
  {
    v5 = -2147467261;
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0xAu, (__int64)&unk_1400CA258, v5);
  }
  sub_14005A470("CProtectedOutputController::CreateVirtualProtectedOutput", 86, v5);
  return (unsigned int)v5;
}
