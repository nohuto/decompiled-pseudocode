/*
 * XREFs of sub_140019D70 @ 0x140019D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 *     sub_14000D710 @ 0x14000D710 (sub_14000D710.c)
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 *     sub_14001A0DC @ 0x14001A0DC (sub_14001A0DC.c)
 *     sub_14001A5C4 @ 0x14001A5C4 (sub_14001A5C4.c)
 *     sub_14001FD58 @ 0x14001FD58 (sub_14001FD58.c)
 */

char __fastcall sub_140019D70(__int64 a1)
{
  char v1; // di
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 1560);
  if ( (*(_DWORD *)(a1 + 4056) & 0x1000) != 0 )
    return 1;
  StorPortExtendedFunction(55LL, a1, 0LL, &unk_140038B18);
  if ( *(_DWORD *)(v2 + 516) )
  {
    LOBYTE(v5) = 1;
    if ( (unsigned int)sub_1400073E0(a1, v5, 0LL, v6) )
      goto LABEL_13;
    v7 = 0xFFFFFFFFLL;
    v8 = *(unsigned __int16 *)(a1 + 330);
    v9 = v8 * (*(unsigned __int16 *)(a1 + 326) - 1LL);
    if ( v9 <= 0xFFFFFFFF )
    {
      v7 = v8 * (*(unsigned __int16 *)(a1 + 326) - 1LL);
      if ( !v9 )
        v7 = 128LL;
    }
    v10 = *(unsigned int *)(a1 + 152);
    if ( (_DWORD)v10 )
    {
      if ( v7 >= v10 )
        v7 = *(unsigned int *)(a1 + 152);
    }
    StorPortExtendedFunction(84LL, a1, v7, (unsigned int)v7);
  }
  if ( sub_14000FB60(a1, 0) )
  {
    sub_14001FD58(a1);
    v1 = 1;
    sub_14001A0DC(a1);
    sub_14001A5C4(a1);
    return v1;
  }
LABEL_13:
  sub_14000D710(a1);
  sub_14001A0DC(a1);
  return v1;
}
