/*
 * XREFs of sub_140056120 @ 0x140056120
 * Callers:
 *     sub_14001AB28 @ 0x14001AB28 (sub_14001AB28.c)
 * Callees:
 *     sub_140031B18 @ 0x140031B18 (sub_140031B18.c)
 *     sub_140068AB8 @ 0x140068AB8 (sub_140068AB8.c)
 *     sub_14006914C @ 0x14006914C (sub_14006914C.c)
 *     sub_14009FC80 @ 0x14009FC80 (sub_14009FC80.c)
 */

__int64 __fastcall sub_140056120(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 *v4; // r12
  __int64 *v5; // rsi
  int v6; // ebp
  int v7; // r14d
  unsigned int v9; // r15d
  int v10; // eax
  const char *v11; // rcx
  int v12; // ecx

  v3 = *a1;
  v4 = a1 + 15;
  v5 = (__int64 *)a1[15];
  v6 = 0;
  v7 = 0;
  v9 = 0;
  while ( v5 != v4 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      v10 = *((_DWORD *)v5 + 18);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v11 = "new";
        }
        else
        {
          v11 = "matched";
          if ( v10 != 2 )
            v11 = "invalid";
        }
      }
      else
      {
        v11 = "unmatched";
      }
      sub_14006914C(
        off_140168120->AttachedDevice,
        *((unsigned __int8 *)v5 - 11),
        *((unsigned __int8 *)v5 - 12),
        v3,
        *(v5 - 1),
        *((_BYTE *)v5 - 12),
        *((_BYTE *)v5 - 11),
        *((_BYTE *)v5 - 10),
        (__int64)v11);
    }
    v12 = *((_DWORD *)v5 + 18);
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        sub_140031B18((__int64)a1, (__int64)(v5 - 2));
        ++v6;
        v9 = 1;
      }
    }
    else
    {
      v9 = (unsigned __int8)sub_14009FC80(*(v5 - 1));
      ++v7;
    }
    v5 = (__int64 *)*v5;
  }
  if ( *(_BYTE *)(v3 + 4370) && (v6 || v7) && (byte_1401694F6 & 1) != 0 )
    sub_140068AB8(*(_DWORD *)(v3 + 56), a2, a3, *(_QWORD *)(v3 + 4720), *(_DWORD *)(v3 + 56), v3 + 5064, v6, v7);
  return v9;
}
