/*
 * XREFs of TtmpTsmIterate @ 0x1407F2540
 * Callers:
 *     TtmpUpdateTerminalState @ 0x1407F2640 (TtmpUpdateTerminalState.c)
 * Callees:
 *     TtmpTsmTestTimeout @ 0x1407F2624 (TtmpTsmTestTimeout.c)
 */

bool __fastcall TtmpTsmIterate(int *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r10
  int *v4; // r9
  int v5; // ecx
  int v6; // r11d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  bool result; // al
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[11];
  v3 = a2;
  v4 = a1;
  if ( v2 == 2 )
  {
    v5 = 1;
  }
  else
  {
    if ( v2 != 1 )
    {
      v5 = *a1;
      v6 = 0;
      goto LABEL_7;
    }
    v5 = 3;
  }
  v6 = v4[12];
LABEL_7:
  if ( *((_BYTE *)v4 + 41) || v2 == 1 )
  {
    *(_QWORD *)(a2 + 16) = *((_QWORD *)v4 + 2);
    v8 = 0LL;
  }
  else
  {
    v7 = *((_QWORD *)v4 + 1);
    *(_QWORD *)(a2 + 16) = v7;
    v8 = *((_QWORD *)v4 + 2) - v7;
  }
  if ( (unsigned int)(v5 - 2) > 1 )
    goto LABEL_14;
  if ( *((_BYTE *)v4 + 40) )
  {
    v5 = 3;
LABEL_14:
    *(_QWORD *)(v3 + 24) = 0LL;
    goto LABEL_22;
  }
  v9 = *((_QWORD *)v4 + 4);
  v13 = 0LL;
  if ( (unsigned __int8)TtmpTsmTestTimeout(v9, v8, &v13) )
    v5 = 1;
  else
    v5 = 3 - ((unsigned __int8)TtmpTsmTestTimeout(*((_QWORD *)v4 + 3), v10, &v13) != 0);
  v11 = v13;
  if ( v13 )
    v11 = v13 - v10;
  *(_QWORD *)(v3 + 24) = v11;
  if ( (unsigned int)(v5 - 1) <= 1 )
    v6 = 12;
LABEL_22:
  *(_DWORD *)v3 = v5;
  result = *v4 != v5;
  *(_BYTE *)(v3 + 4) = result;
  *(_DWORD *)(v3 + 8) = v6;
  return result;
}
