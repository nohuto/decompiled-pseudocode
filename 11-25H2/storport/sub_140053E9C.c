/*
 * XREFs of sub_140053E9C @ 0x140053E9C
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_140053E9C(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  PDEVICE_OBJECT v5; // rcx
  __int64 v6; // rdx
  signed __int32 v7; // r10d
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rax
  int *v11; // [rsp+40h] [rbp+8h] BYREF
  int *v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !a1 || !a2 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_1400680F0(off_140168120->AttachedDevice, 67LL, &unk_140149070, a1, a2);
    }
    return (unsigned int)-1056964602;
  }
  if ( !*(_QWORD *)a2 )
  {
    v5 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 1) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      return (unsigned int)-1056964607;
    }
    v6 = 68LL;
LABEL_33:
    sub_140055930(v5->AttachedDevice, v6, &unk_140149070);
    return (unsigned int)-1056964607;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 69LL, &unk_140149070);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 70LL, &unk_140149070);
    }
    return (unsigned int)-1056964600;
  }
  sub_1400273F0(a1, &v11, &v12);
  if ( !v11 && !v12 )
    return 3238002694LL;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 24), v7, 1);
  if ( !v9 )
  {
    IoFreeWorkItem(*(PIO_WORKITEM *)a2);
    *(_QWORD *)a2 = 0LL;
    ExFreePoolWithTag((PVOID)a2, 0x49576152u);
    if ( v11 )
      v10 = v11 + 1222;
    else
      v10 = v12 + 270;
    _InterlockedDecrement(v10);
    return v2;
  }
  if ( v9 == v7 )
  {
    v5 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 1) == 0
      || BYTE1(off_140168120->Timer) < (unsigned __int8)v7 )
    {
      return (unsigned int)-1056964607;
    }
    v6 = 71LL;
    goto LABEL_33;
  }
  return v2;
}
