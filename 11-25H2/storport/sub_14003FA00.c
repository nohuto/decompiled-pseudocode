/*
 * XREFs of sub_14003FA00 @ 0x14003FA00
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

__int64 __fastcall sub_14003FA00(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  PVOID v12; // rax

  v4 = 0;
  if ( !a4 )
  {
    v8 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 0x10) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 42LL;
LABEL_6:
    sub_140055930(v8->AttachedDevice, v9, &unk_140149070);
    return (unsigned int)-1056964602;
  }
  *a4 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v10 = *(_QWORD *)(a2 + 96);
    else
      v10 = *(_QWORD *)(a2 + 48);
    if ( a3 )
      v11 = *(_QWORD *)(v10 + 136);
    else
      v11 = *(_QWORD *)(v10 + 104);
    if ( !v11 )
    {
      v8 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
        || (HIDWORD(off_140168120->Timer) & 0x10) == 0
        || BYTE1(off_140168120->Timer) < 2u )
      {
        return (unsigned int)-1056964602;
      }
      v9 = 44LL;
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
      v12 = *(PVOID *)(v11 + 24);
    else
      v12 = MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000010u);
    *a4 = v12;
    if ( !v12 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x10) != 0
        && BYTE1(off_140168120->Timer) >= 2u )
      {
        sub_140055930(off_140168120->AttachedDevice, 45LL, &unk_140149070);
      }
      return (unsigned int)-1056964605;
    }
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 43LL, &unk_140149070);
    }
    return (unsigned int)-1056964600;
  }
  return v4;
}
