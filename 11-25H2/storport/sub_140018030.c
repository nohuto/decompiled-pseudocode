/*
 * XREFs of sub_140018030 @ 0x140018030
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018110 @ 0x140018110 (sub_140018110.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140026E80 @ 0x140026E80 (sub_140026E80.c)
 *     sub_14002A5E0 @ 0x14002A5E0 (sub_14002A5E0.c)
 */

void __fastcall sub_140018030(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v6; // al
  char v7; // cl
  char v8; // al
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rax
  struct _DEVICE_OBJECT *v12; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_BYTE *)(a4 + 17);
  v7 = v6 & 0xDF;
  v8 = v6 | 0x20;
  if ( *(_DWORD *)v4 != 1094997074 )
    v7 = v8;
  *(_BYTE *)(a4 + 17) = v7;
  *(_QWORD *)(a4 + 216) = v4;
  *(_QWORD *)(a4 + 112) = a3;
  if ( (int)sub_140018110(a4, v4, 0LL) < 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 168) + 3LL) = 48;
    v11 = *(_QWORD *)(a4 + 168);
    if ( *(_BYTE *)(v11 + 2) == 40 )
      *(_DWORD *)(v11 + 44) = -1073741670;
    else
      *(_DWORD *)(v11 + 64) = -1073741670;
    sub_14002A5E0(*(_QWORD *)(a4 + 224), 0LL, a4);
    goto LABEL_13;
  }
  v9 = sub_1400184D0(v4, a4);
  if ( *(_BYTE *)(v4 + 105) )
  {
    v12 = *(struct _DEVICE_OBJECT **)(v4 + 32);
    *(_BYTE *)(v4 + 105) = 0;
    IoInvalidateDeviceRelations(v12, BusRelations);
  }
  if ( v9 < 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 168) + 3LL) = 4;
LABEL_13:
    LOBYTE(v10) = 1;
    sub_140026E80(v4, a4, v10);
  }
}
