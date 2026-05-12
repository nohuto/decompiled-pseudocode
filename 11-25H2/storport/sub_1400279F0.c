/*
 * XREFs of sub_1400279F0 @ 0x1400279F0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400279F0(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rbp
  int v7; // ebx
  int v8; // edx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rdx

  if ( !a1 )
  {
    v10 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 0x10) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 19LL;
    goto LABEL_36;
  }
  if ( !a2 )
  {
    v10 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 0x10) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 20LL;
    goto LABEL_36;
  }
  if ( !a3 )
  {
    v10 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 0x10) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 21LL;
    goto LABEL_36;
  }
  v5 = a3[1];
  if ( v5 < 0x10 )
  {
    v10 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 0x10) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 22LL;
LABEL_36:
    sub_140055930(v10->AttachedDevice, v11, &unk_140148B00);
    return 3238002694LL;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_QWORD *)(a2 + 96);
  else
    v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 20);
    memset_0(a3 + 2, 0, v5 - 8);
    if ( a3[1] >= 0x14u && *a3 == 2 )
      a3[4] = v7;
    else
      *a3 = 1;
    a3[3] = *(_DWORD *)(v6 + 24);
    if ( *(_DWORD *)a1 == 1094997074 )
    {
      if ( (*(_BYTE *)(a1 + 4660) & 2) == 0
        || (unsigned __int16)v7 >= *(_WORD *)(a1 + 4662)
        || (v8 = *(unsigned __int8 *)(BYTE2(v7) + ((unsigned __int16)v7 << 6) + *(_QWORD *)(a1 + 4680)),
            a3[2] = v8,
            v8 == 255) )
      {
        a3[2] = 0;
      }
      return 0LL;
    }
    else
    {
      return 3238002694LL;
    }
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 23LL, &unk_140148B00);
    }
    return 3238002694LL;
  }
}
