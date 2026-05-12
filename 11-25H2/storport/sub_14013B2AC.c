/*
 * XREFs of sub_14013B2AC @ 0x14013B2AC
 * Callers:
 *     sub_14013B440 @ 0x14013B440 (sub_14013B440.c)
 * Callees:
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 *     sub_14013BB14 @ 0x14013BB14 (sub_14013BB14.c)
 *     sub_14013BC18 @ 0x14013BC18 (sub_14013BC18.c)
 */

__int64 __fastcall sub_14013B2AC(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  int v4; // r9d
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // dx
  __int64 *v7; // r14
  unsigned int v8; // ebp
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  __int64 v12; // r8

  v2 = sub_14013B5CC(a1 + 56, a1 + 80);
  if ( v2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    v4 = *(_DWORD *)(v3 + 8);
    if ( v4 != 5 )
    {
      v5 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
        return (unsigned int)-1073741435;
      v6 = 17;
LABEL_6:
      sub_140055BD4((__int64)v5->AttachedDevice, v6, (__int64)&unk_1401552C8, v4);
      return (unsigned int)-1073741435;
    }
    v4 = *(_DWORD *)(v3 + 12);
    if ( v4 != 3 )
    {
      v5 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120 || BYTE1(off_140168120->Timer) < 2u )
        return (unsigned int)-1073741435;
      v6 = 18;
      goto LABEL_6;
    }
    v7 = *(__int64 **)(v3 + 16);
    v8 = 0;
    while ( v8 < 3 )
    {
      if ( v7 )
      {
        v9 = *((_DWORD *)v7 + 2);
        if ( v9 == 8 )
        {
          if ( !v8 )
          {
            v10 = *((unsigned __int8 *)v7 + 16);
            *(_BYTE *)(a1 + 88) = v10;
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 4u )
              sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x14u, (__int64)&unk_1401552C8, v10);
          }
        }
        else
        {
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
            sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x13u, (__int64)&unk_1401552C8, v9);
          v2 = -1073741435;
        }
        v7 = (__int64 *)*v7;
        ++v8;
        if ( v2 >= 0 )
          continue;
      }
      if ( v2 < 0 )
        return (unsigned int)v2;
      break;
    }
    if ( *(_BYTE *)(a1 + 88) )
    {
      v11 = sub_14013BB14(a1);
      v2 = v11;
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_14013BC18(off_140168120->AttachedDevice, 21LL, v12, *(unsigned __int8 *)(a1 + 88), v11);
    }
  }
  return (unsigned int)v2;
}
