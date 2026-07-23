/*
 * XREFs of XmMulOp @ 0x1405B0BA0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

__int64 __fastcall XmMulOp(_DWORD *a1)
{
  int v1; // r9d
  int v2; // eax
  __int64 v3; // rcx
  int v4; // r10d
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // r11
  int v8; // edx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // r11
  _WORD *v12; // r11
  __int64 result; // rax
  unsigned __int64 v14; // [rsp+30h] [rbp+8h]

  v1 = a1[26] * a1[27];
  v2 = a1[30];
  v14 = (unsigned int)a1[26] * (unsigned __int64)(unsigned int)a1[27];
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      XmStoreResult((__int64)a1, v1);
      *(_QWORD *)(v6 + 88) = v7;
      XmStoreResult(v6, SHIDWORD(v14));
      v5 = v8 == 0;
    }
    else
    {
      XmStoreResult((__int64)a1, (unsigned __int16)v1);
      *(_QWORD *)(v10 + 88) = v11;
      XmStoreResult(v10, HIWORD(v9));
      v5 = *v12 == (unsigned __int16)v4;
    }
  }
  else
  {
    a1[30] = 1;
    XmStoreResult((__int64)a1, v1);
    v5 = *(_BYTE *)(v3 + 25) == (unsigned __int8)v4;
  }
  LOBYTE(v4) = !v5;
  result = (v4 << 11) | v4 & 0xFFFFF7FF | *(_DWORD *)(v3 + 16) & 0xFFFFF7FE;
  *(_DWORD *)(v3 + 16) = result;
  return result;
}
