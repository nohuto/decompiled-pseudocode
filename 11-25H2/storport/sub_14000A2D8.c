/*
 * XREFs of sub_14000A2D8 @ 0x14000A2D8
 * Callers:
 *     sub_140009C20 @ 0x140009C20 (sub_140009C20.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 */

__int64 __fastcall sub_14000A2D8(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rdx
  _DWORD *v9; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+2Ch] [rbp-Ch]

  v4 = -1073741637;
  if ( !byte_14016841D )
    goto LABEL_2;
  v9 = *(_DWORD **)(*(_QWORD *)(a1 + 8) + 64LL);
  if ( *v9 != 1431193940 )
  {
    if ( *v9 != 1094997074 )
      goto LABEL_2;
    if ( byte_140168D6C )
      goto LABEL_10;
    v10 = v9[1535];
    goto LABEL_9;
  }
  if ( !byte_140168D6C )
  {
    v10 = v9[903];
LABEL_9:
    if ( (v10 & 1) == 0 )
      goto LABEL_2;
  }
LABEL_10:
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v11 + 32) == 5 && *(_DWORD *)(v11 + 24) == 4 && (unsigned __int8)sub_1400215B0(a1, 15LL) )
  {
    v6 = 0LL;
    v7 = 15LL;
    return (unsigned int)sub_140021760(*(_QWORD *)(a1 + 24) + 376LL, v7, v6);
  }
LABEL_2:
  if ( (unsigned __int8)sub_1400215B0(a1, 3LL) )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v12 = a1 + 96;
    v6 = &v12;
    v7 = 3LL;
    v13 = *(_DWORD *)(v5 + 32);
    v14 = *(_DWORD *)(v5 + 24);
    return (unsigned int)sub_140021760(*(_QWORD *)(a1 + 24) + 376LL, v7, v6);
  }
  return v4;
}
