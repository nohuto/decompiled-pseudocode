/*
 * XREFs of sub_14013AEC0 @ 0x14013AEC0
 * Callers:
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 * Callees:
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 */

__int64 __fastcall sub_14013AEC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v5; // rdi
  int v6; // r9d
  int v7; // eax
  unsigned __int16 v8; // dx
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  PDEVICE_OBJECT v10; // r10
  int v11; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a2 + 12) = 0;
  result = sub_14013B5CC(a1, a2 + 16);
  if ( (int)result < 0 )
    return result;
  ++*(_DWORD *)(a2 + 12);
  v5 = *(_DWORD **)(a2 + 16);
  v6 = v5[2];
  if ( *((_QWORD *)v5 + 1) != 0x80000000FLL )
  {
    v10 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
      return 3221225861LL;
    v8 = 31;
LABEL_16:
    AttachedDevice = v10->AttachedDevice;
    v7 = v5[3];
    goto LABEL_17;
  }
  result = sub_14013B5CC(a1, *(_QWORD *)(a2 + 16));
  if ( (int)result < 0 )
    return result;
  ++*(_DWORD *)(a2 + 12);
  v5 = *(_DWORD **)v5;
  v6 = v5[2];
  if ( *((_QWORD *)v5 + 1) != 0x80000000FLL )
  {
    v10 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
      return 3221225861LL;
    v8 = 32;
    goto LABEL_16;
  }
  result = sub_14013B5CC(a1, v5);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a2 + 12);
    v6 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
    if ( v6 != 5 )
    {
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
        return 3221225861LL;
      v7 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
      v8 = 33;
      AttachedDevice = off_140168120->AttachedDevice;
LABEL_17:
      v11 = v7;
      sub_140067F28((__int64)AttachedDevice, v8, (__int64)&unk_1401552C8, v6, v11);
      return 3221225861LL;
    }
  }
  return result;
}
