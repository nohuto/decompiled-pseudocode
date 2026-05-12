/*
 * XREFs of sub_14000CCB0 @ 0x14000CCB0
 * Callers:
 *     sub_14000BC30 @ 0x14000BC30 (sub_14000BC30.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_140077C80 @ 0x140077C80 (sub_140077C80.c)
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000CCB0(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, _DWORD *); // rax
  int v7; // eax
  _DWORD *v9; // rax
  int v10; // eax
  __int64 v11; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+34h] [rbp-14h]

  v4 = -1073741637;
  if ( !byte_14016841D )
    goto LABEL_2;
  v9 = *(_DWORD **)(a1[1] + 64LL);
  if ( *v9 == 1431193940 )
  {
    if ( !byte_140168D6C )
    {
      v10 = v9[903];
      goto LABEL_10;
    }
  }
  else
  {
    if ( *v9 != 1094997074 )
      goto LABEL_2;
    if ( !byte_140168D6C )
    {
      v10 = v9[1535];
LABEL_10:
      if ( (v10 & 1) == 0 )
        goto LABEL_2;
    }
  }
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v11 + 32) == 5 && *(_DWORD *)(v11 + 24) == 4 && (unsigned __int8)sub_140020090(a1 + 47, 26LL) )
    return (unsigned int)sub_1400296E0(a1 + 47, 26LL);
LABEL_2:
  if ( (unsigned __int8)sub_140020090(a1 + 47, 6LL) )
  {
    v13 = 0LL;
    v5 = *(_QWORD *)(a2 + 184);
    v12[0] = 1;
    v12[1] = 24;
    v14 = *(_DWORD *)(v5 + 32);
    v15 = *(_DWORD *)(v5 + 24);
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1[76] + 120LL);
    if ( v6 )
    {
      v7 = v6(a1[77] + 16LL, 6LL, v12);
      if ( v7 )
      {
        v4 = -1073741823;
        if ( v7 == 2 )
          return (unsigned int)-2147483631;
      }
      else
      {
        return 0;
      }
    }
  }
  return v4;
}
