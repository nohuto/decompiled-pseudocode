/*
 * XREFs of XmDivOp @ 0x1405B0CA0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

_WORD *__fastcall XmDivOp(__int64 a1)
{
  unsigned __int64 v1; // r8
  int v2; // eax
  unsigned int v3; // ett
  unsigned int v4; // r10d
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rtt
  __int64 v8; // r9
  __int64 v9; // r11
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+30h] [rbp+8h]

  v1 = *(unsigned int *)(a1 + 108);
  if ( !(_DWORD)v1 )
    longjmp((_JBTYPE *)(a1 + 160), 2);
  v2 = *(_DWORD *)(a1 + 120);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v4 = *(unsigned __int16 *)(a1 + 32);
      v7 = *(unsigned __int16 *)(a1 + 24) | (unsigned __int64)(v4 << 16);
      LODWORD(v6) = v7 % (unsigned int)v1;
      LODWORD(v5) = v7 / (unsigned int)v1;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 32);
      LODWORD(v12) = *(_DWORD *)(a1 + 24);
      HIDWORD(v12) = v4;
      v5 = v12 / v1;
      v6 = v12 % v1;
    }
  }
  else
  {
    v3 = *(unsigned __int16 *)(a1 + 24);
    v4 = v3 >> 8;
    LODWORD(v5) = v3 / (unsigned int)v1;
    LODWORD(v6) = v3 % (unsigned int)v1;
  }
  if ( v4 >= (unsigned int)v1 )
    longjmp((_JBTYPE *)(a1 + 160), 3);
  XmStoreResult(a1, v5);
  *(_QWORD *)(v8 + 88) = v9;
  return XmStoreResult(v10, v6);
}
