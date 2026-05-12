/*
 * XREFs of sub_1400BBCD0 @ 0x1400BBCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400BBCD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v4; // r8
  __int64 v6; // rbp
  _BYTE *v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(unsigned __int8 **)(a2 + 184);
  v6 = *v4;
  if ( *(_DWORD *)v2 == 1431193940 )
  {
    v7 = *(_BYTE **)(v2 + 112);
    if ( v7 )
    {
      if ( (*v7 & 0x1F) == 0xD && *((_DWORD *)v4 + 6) == 2954240 )
      {
        v8 = *(_DWORD **)(a2 + 24);
        if ( v8 )
        {
          if ( !v8[1] && *v8 == 2 )
          {
            v9 = *((unsigned int *)v4 + 2);
            if ( (unsigned int)v9 >= 8 )
            {
              if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                && (HIDWORD(off_140168120->Timer) & 0x10) != 0
                && BYTE1(off_140168120->Timer) >= 4u )
              {
                sub_140055930((__int64)off_140168120->AttachedDevice, 0x12u, (__int64)&unk_14014EF40);
              }
              (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), __int64))(qword_1401682C8 + 8))(
                a1,
                a2,
                sub_1400BBDE0,
                v9);
            }
          }
        }
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))qword_1401682C8)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 8 * v6 + 32))(a1, a2);
}
