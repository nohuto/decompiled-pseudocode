/*
 * XREFs of sub_140003520 @ 0x140003520
 * Callers:
 *     sub_1400024C0 @ 0x1400024C0 (sub_1400024C0.c)
 * Callees:
 *     sub_140001D70 @ 0x140001D70 (sub_140001D70.c)
 *     sub_140001EB0 @ 0x140001EB0 (sub_140001EB0.c)
 *     sub_140004AF0 @ 0x140004AF0 (sub_140004AF0.c)
 *     sub_14000CFB0 @ 0x14000CFB0 (sub_14000CFB0.c)
 *     sub_140020E0C @ 0x140020E0C (sub_140020E0C.c)
 *     sub_140021B90 @ 0x140021B90 (sub_140021B90.c)
 *     sub_14002208C @ 0x14002208C (sub_14002208C.c)
 *     sub_14002256C @ 0x14002256C (sub_14002256C.c)
 *     sub_140022760 @ 0x140022760 (sub_140022760.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140022B60 @ 0x140022B60 (sub_140022B60.c)
 *     sub_140022C1C @ 0x140022C1C (sub_140022C1C.c)
 *     sub_140022D58 @ 0x140022D58 (sub_140022D58.c)
 *     sub_140022F24 @ 0x140022F24 (sub_140022F24.c)
 *     sub_1400232F4 @ 0x1400232F4 (sub_1400232F4.c)
 */

__int64 __fastcall sub_140003520(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rsi

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 64);
  else
    v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(v4 + 16);
  if ( v5 > 0x2D282C )
  {
    if ( v5 == 2959408 )
    {
      result = sub_1400232F4(a1, a2);
      goto LABEL_14;
    }
    if ( v5 == 2987004 )
    {
      v8 = v4 + 4;
      if ( sub_140001EB0((__int64)"SETPROTO", 8u, v4 + 4, 8LL, 0LL) )
      {
        result = sub_140022B60(a1, a2);
        goto LABEL_14;
      }
      if ( sub_140001EB0((__int64)"CREATEQU", 8u, v8, 8LL, 0LL) )
      {
        result = sub_140021B90(a1, a2);
        goto LABEL_14;
      }
      if ( sub_140001EB0((__int64)"DELETEQU", 8u, v8, 8LL, 0LL) )
      {
        result = sub_14002208C(a1, a2);
        goto LABEL_14;
      }
    }
    else if ( v5 == 3002880 && sub_140001EB0((__int64)"SETTEMPT", 8u, v4 + 4, 8LL, 0LL) )
    {
      result = sub_140022C1C(a1, a2);
      goto LABEL_14;
    }
LABEL_13:
    *(_BYTE *)(a2 + 3) = 6;
    result = 3238002694LL;
    goto LABEL_14;
  }
  switch ( v5 )
  {
    case 0x2D282Cu:
      result = sub_140022D58(a1, a2);
      break;
    case 0x2D1400u:
      v7 = v4 + 4;
      if ( sub_140001EB0((__int64)"PROTOCOL", 8u, v4 + 4, 8LL, 0LL) )
      {
        result = sub_140001D70(a1, a2);
        break;
      }
      if ( sub_140001EB0((__int64)"TEMPERAT", 8u, v7, 8LL, 0LL) )
      {
        result = sub_1400229C8(a1, a2);
        break;
      }
      if ( sub_140001EB0((__int64)"QUEUEINF", 8u, v7, 8LL, 0LL) )
      {
        result = sub_140022760(a1, a2);
        break;
      }
      if ( sub_140001EB0((__int64)"ENDURINF", 8u, v7, 8LL, 0LL) )
      {
        result = sub_14002256C(a1, a2);
        break;
      }
      goto LABEL_13;
    case 0x1B0780u:
      result = sub_14000CFB0(a1, a2);
      break;
    case 0x1B0900u:
      result = sub_140020E0C(a1, a2);
      break;
    case 0x2D2828u:
      result = sub_140022F24(a1, a2);
      break;
    default:
      goto LABEL_13;
  }
LABEL_14:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    result = sub_140004AF0(a1, a2);
    if ( (_DWORD)result )
      *(_BYTE *)(a2 + 3) = 4;
  }
  return result;
}
