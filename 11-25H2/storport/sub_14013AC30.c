/*
 * XREFs of sub_14013AC30 @ 0x14013AC30
 * Callers:
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 *     sub_14013A45C @ 0x14013A45C (sub_14013A45C.c)
 *     sub_14013AAA4 @ 0x14013AAA4 (sub_14013AAA4.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14013AC30(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // dx
  unsigned int v9; // edx
  unsigned __int64 v10; // r14
  unsigned int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // dx
  int v15; // [rsp+20h] [rbp-10h]
  int v16; // [rsp+20h] [rbp-10h]
  unsigned int v17; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int16 v18; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v4 = a3;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), 1, 0) )
  {
    v3 = -1073740024;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055930((__int64)off_140168120->AttachedDevice, 0xAu, (__int64)&unk_1401552C8);
    return v3;
  }
  if ( a3 < 0x14 )
  {
    v3 = -1073741435;
    v7 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
      return v3;
    v8 = 11;
    v15 = 20;
    goto LABEL_9;
  }
  v17 = *(_DWORD *)(a2 + 16);
  sub_1401352EC((char *)&v17, 4u);
  v10 = v17;
  if ( v17 < 0x18 || (unsigned __int64)v17 + 20 > v4 )
  {
    v3 = -1073741435;
    v12 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
      return v3;
    v13 = 12;
    v16 = v4 - 20;
LABEL_30:
    sub_140067F28((__int64)v12->AttachedDevice, v13, (__int64)&unk_1401552C8, v10, v16);
    return v3;
  }
  v17 = *(_DWORD *)(a2 + 40);
  sub_1401352EC((char *)&v17, v9);
  v4 = v17;
  if ( v17 < 0xC || (unsigned __int64)v17 + 24 > v10 )
  {
    v3 = -1073741435;
    v7 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
      return v3;
    v8 = 13;
    v15 = v10 - 24;
LABEL_9:
    sub_140067F28((__int64)v7->AttachedDevice, v8, (__int64)&unk_1401552C8, v4, v15);
    return v3;
  }
  v17 = *(_DWORD *)(a2 + 52);
  sub_1401352EC((char *)&v17, v11);
  LODWORD(v10) = v17;
  if ( (unsigned __int64)v17 + 12 > v4 )
  {
    v3 = -1073741435;
    v12 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
      return v3;
    v13 = 14;
    v16 = v4 - 12;
    goto LABEL_30;
  }
  v18 = *(_WORD *)(a2 + 4);
  sub_1401352EC((char *)&v18, 2u);
  LOWORD(v17) = *(_WORD *)(a2 + 50);
  sub_1401352EC((char *)&v17, 2u);
  if ( v18 != *(_WORD *)(a1 + 28) || (_WORD)v17 )
  {
    v3 = -1073741435;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0xFu, (__int64)&unk_1401552C8, v18, (unsigned __int16)v17);
  }
  else
  {
    memset_0((void *)(a1 + 68), 0, 0x181CuLL);
    *(_QWORD *)(a1 + 56) = a2 + 56;
    *(_DWORD *)(a1 + 64) = v10;
  }
  return v3;
}
