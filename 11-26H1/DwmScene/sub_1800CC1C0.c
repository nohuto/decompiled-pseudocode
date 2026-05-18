/*
 * XREFs of sub_1800CC1C0 @ 0x1800CC1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038B3C @ 0x180038B3C (sub_180038B3C.c)
 */

bool __fastcall sub_1800CC1C0(__int64 a1, _QWORD ***a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD **v8; // rcx
  __int64 v10; // rsi
  _QWORD **v11; // r9
  __int64 v12; // rdi

  v4 = a3 - 1;
  if ( !v4 )
  {
    v10 = a1 + 144;
    if ( *(_QWORD *)(a1 + 144) )
    {
      v11 = *a2;
      if ( *(_BYTE *)(a1 + 256) )
      {
        v12 = a1 + 160;
        sub_180038B3C(v11, a1 + 160, a1 + 128);
        v11 = *a2;
      }
      else
      {
        v12 = a1 + 128;
      }
      v7 = v12;
      v6 = v10;
      v8 = v11;
      goto LABEL_13;
    }
    return 0;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return *(_QWORD *)(a1 + 176) != 0LL;
  if ( v5 != 1 )
    return 0;
  v6 = a1 + 192;
  if ( !*(_QWORD *)(a1 + 192) )
    return 0;
  v7 = a1 + 128;
  v8 = *a2;
LABEL_13:
  sub_180038B3C(v8, v6, v7);
  return 1;
}
