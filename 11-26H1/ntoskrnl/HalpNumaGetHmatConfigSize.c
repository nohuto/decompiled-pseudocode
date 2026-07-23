/*
 * XREFs of HalpNumaGetHmatConfigSize @ 0x140594348
 * Callers:
 *     HalpNumaParseHmat @ 0x140CB82E0 (HalpNumaParseHmat.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     HalpNumaCalculateSllbiSize @ 0x1405942D8 (HalpNumaCalculateSllbiSize.c)
 *     HalpNumaQueryProximityNode @ 0x1405948B0 (HalpNumaQueryProximityNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HalpVerifyHmatEntryValidity @ 0x140CB89B4 (HalpVerifyHmatEntryValidity.c)
 */

__int64 __fastcall HalpNumaGetHmatConfigSize(__int64 a1, _DWORD *a2, _DWORD *a3, int *a4, _DWORD *a5)
{
  unsigned __int64 v5; // r15
  int v6; // r13d
  int v7; // r14d
  int v8; // ecx
  int v9; // edi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  char v14; // al
  __int64 v15; // r14
  unsigned int i; // esi
  unsigned int v17; // r15d
  __int64 j; // rsi
  unsigned int v19; // ebx
  _BYTE v21[4]; // [rsp+30h] [rbp-91h] BYREF
  int v22; // [rsp+34h] [rbp-8Dh]
  int v23; // [rsp+38h] [rbp-89h] BYREF
  int v24; // [rsp+3Ch] [rbp-85h] BYREF
  __int64 v25; // [rsp+40h] [rbp-81h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-79h]
  _DWORD *v27; // [rsp+50h] [rbp-71h]
  _DWORD *v28; // [rsp+58h] [rbp-69h]
  int *v29; // [rsp+60h] [rbp-61h]
  _DWORD *v30; // [rsp+68h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+70h] [rbp-51h] BYREF
  int *v32; // [rsp+90h] [rbp-31h]
  __int64 v33; // [rsp+98h] [rbp-29h]
  int *v34; // [rsp+A0h] [rbp-21h]
  __int64 v35; // [rsp+A8h] [rbp-19h]
  __int64 *v36; // [rsp+B0h] [rbp-11h]
  __int64 v37; // [rsp+B8h] [rbp-9h]

  v27 = a2;
  v5 = a1;
  v28 = a3;
  v6 = 0;
  v25 = a1;
  v7 = 0;
  v8 = 0;
  v29 = a4;
  v9 = 1;
  v10 = v5 + *(unsigned int *)(v5 + 4);
  v30 = a5;
  v23 = 0;
  v22 = 0;
  v24 = 0;
  v26 = v10;
  if ( v10 > v5 )
  {
    v11 = v5 + 40;
    while ( 1 )
    {
      if ( v11 + 8 > v10
        || (v12 = *(unsigned int *)(v11 + 4), (unsigned int)v12 < 8)
        || (v13 = v11 + v12, v11 + v12 > v10) )
      {
        v19 = 0;
        *v27 = v6;
        *v28 = v8;
        *v29 = v7;
        *v30 = v6 + v7 + v8 + 24;
        return v19;
      }
      if ( !(unsigned __int8)HalpVerifyHmatEntryValidity(v11) )
      {
        v9 = 2;
        break;
      }
      if ( *(_BYTE *)(v5 + 8) < 2u && *(_WORD *)v11 <= 1u )
      {
        v8 = v22;
        v11 = v13;
        goto LABEL_10;
      }
      if ( *(_WORD *)v11 )
      {
        if ( *(_WORD *)v11 == 1 )
        {
          if ( (*(_BYTE *)(v11 + 8) & 0xF) != 0 && (unsigned __int8)((*(_BYTE *)(v11 + 8) & 0xF) - 1) > 2u )
          {
            v9 = 6;
            break;
          }
          v14 = *(_BYTE *)(v11 + 9);
          if ( v14 && (unsigned __int8)(v14 - 1) > 4u )
          {
            v9 = 7;
            break;
          }
          v15 = *(unsigned int *)(v11 + 12);
          for ( i = 0; i < (unsigned int)v15; ++i )
          {
            if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 4LL * i + 32), v21) < 0 )
              goto LABEL_38;
          }
          v17 = *(_DWORD *)(v11 + 16);
          for ( j = 0LL; (unsigned int)j < v17; j = (unsigned int)(j + 1) )
          {
            if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 4 * v15 + 4 * j + 32), v21) < 0 )
              goto LABEL_38;
          }
          if ( v17 > 0xFFFF || (unsigned int)v15 > 0xFFFF )
          {
            v9 = 4;
            break;
          }
          if ( (int)HalpNumaCalculateSllbiSize(v15, v17, &v23) < 0 )
          {
            v9 = 5;
            break;
          }
          v8 = v23 + v22;
          v7 = v24;
          v5 = v25;
          v22 += v23;
          goto LABEL_37;
        }
        if ( *(_WORD *)v11 == 2 )
        {
          if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 8), v21) < 0 )
            goto LABEL_38;
          v7 += 40;
          v24 = v7;
        }
      }
      else
      {
        if ( (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 16), v21) < 0
          || (*(_BYTE *)(v11 + 8) & 1) != 0 && (int)HalpNumaQueryProximityNode(*(unsigned int *)(v11 + 12), v21) < 0 )
        {
LABEL_38:
          v9 = 3;
          break;
        }
        v6 += 12;
      }
      v8 = v22;
LABEL_37:
      v11 += *(unsigned int *)(v11 + 4);
LABEL_10:
      v10 = v26;
    }
  }
  v19 = -1072431089;
  if ( (unsigned int)dword_140E024C8 > 5 && tlgKeywordOn((__int64)&dword_140E024C8, 0x400000000000LL) )
  {
    v24 = -1072431089;
    v32 = &v24;
    v33 = 4LL;
    v34 = &v23;
    v23 = v9;
    v36 = &v25;
    v35 = 4LL;
    v25 = 0x1000000LL;
    v37 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E024C8,
      (unsigned __int8 *)&dword_140044E1C,
      0LL,
      0LL,
      5u,
      &v31);
  }
  return v19;
}
