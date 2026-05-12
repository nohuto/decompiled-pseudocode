/*
 * XREFs of sub_14013B0FC @ 0x14013B0FC
 * Callers:
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 * Callees:
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 */

__int64 __fastcall sub_14013B0FC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  unsigned int v5; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // r8
  int v10; // r9d
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // dx
  __int64 Source2; // [rsp+50h] [rbp+20h] BYREF

  v4 = *(_QWORD **)(a1 + 72);
  v5 = 0;
  if ( *((_DWORD *)v4 + 2) == 4 && *((_DWORD *)v4 + 3) == 3 )
  {
    v8 = (_QWORD *)v4[2];
    Source2 = a2;
    sub_1401352EC((char *)&Source2, 8u);
    v9 = Source2;
    if ( v8[1] == 0x80000000FLL )
    {
      if ( RtlCompareMemory(v8 + 2, &Source2, 8uLL) == 8 )
      {
        v8 = (_QWORD *)*v8;
        Source2 = a3;
        sub_1401352EC((char *)&Source2, 8u);
        v9 = Source2;
        if ( v8[1] == 0x80000000FLL )
        {
          if ( RtlCompareMemory(v8 + 2, &Source2, 8uLL) == 8 )
          {
            v4 = (_QWORD *)*v8;
            goto LABEL_8;
          }
          v9 = Source2;
        }
        v11 = off_140168120;
        if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
          return (unsigned int)-1073741435;
        v12 = 26;
LABEL_17:
        sub_1400680F0((__int64)v11->AttachedDevice, v12, (__int64)&unk_1401552C8, v8[2], v9);
        return (unsigned int)-1073741435;
      }
      v9 = Source2;
    }
    v11 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
      return (unsigned int)-1073741435;
    v12 = 25;
    goto LABEL_17;
  }
LABEL_8:
  v10 = *((_DWORD *)v4 + 2);
  if ( v10 != 5 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0x1Bu, (__int64)&unk_1401552C8, v10, *((_DWORD *)v4 + 3));
    return (unsigned int)-1073741435;
  }
  if ( a4 )
    *a4 = v4;
  return v5;
}
