/*
 * XREFs of sub_140066A10 @ 0x140066A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018110 @ 0x140018110 (sub_140018110.c)
 *     sub_140026E80 @ 0x140026E80 (sub_140026E80.c)
 *     sub_140027680 @ 0x140027680 (sub_140027680.c)
 *     sub_14002A5E0 @ 0x14002A5E0 (sub_14002A5E0.c)
 */

char __fastcall sub_140066A10(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // eax

  v4 = *(_QWORD *)(a1 + 64);
  a4[19] = a3;
  if ( (int)sub_140018110(a4, v4, 1) < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 48;
    v7 = a4[21];
    if ( *(_BYTE *)(v7 + 2) == 40 )
      *(_DWORD *)(v7 + 44) = -1073741670;
    else
      *(_DWORD *)(v7 + 64) = -1073741670;
    sub_14002A5E0(a4[28], 0LL, (__int64)a4);
    goto LABEL_8;
  }
  v8 = sub_140027680(v4, (__int64)a4, v6);
  if ( v8 < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 4;
LABEL_8:
    LOBYTE(v8) = sub_140026E80(v4, (__int64)a4, 1);
  }
  return v8;
}
