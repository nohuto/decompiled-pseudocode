/*
 * XREFs of sub_140059BAC @ 0x140059BAC
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_14007AEF8 @ 0x14007AEF8 (sub_14007AEF8.c)
 *     sub_140178410 @ 0x140178410 (sub_140178410.c)
 *     sub_1401785C4 @ 0x1401785C4 (sub_1401785C4.c)
 */

__int64 __fastcall sub_140059BAC(__int64 a1, __int16 a2)
{
  _QWORD *v3; // rcx
  bool v4; // zf
  __int64 v5; // rdx
  unsigned int v6; // edi
  int v7; // r8d
  int v8; // r9d
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // dx
  unsigned __int8 v12; // si
  int v13; // eax
  int v14; // edx
  int v15; // [rsp+20h] [rbp-48h]
  char v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-28h] BYREF
  _OWORD v18[2]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int8 v19; // [rsp+90h] [rbp+28h] BYREF
  char v20; // [rsp+98h] [rbp+30h] BYREF
  unsigned __int8 v21; // [rsp+A0h] [rbp+38h] BYREF
  int v22; // [rsp+A8h] [rbp+40h] BYREF

  v22 = 0;
  v17 = 0;
  v3 = (_QWORD *)(a1 + 360);
  v21 = 0;
  v18[0] = 0LL;
  v20 = 0;
  v4 = *v3 == 0LL;
  v19 = 0;
  if ( !v4 && *(_QWORD *)(a1 + 368) )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 4368);
    v6 = sub_14007AEF8(
           (_DWORD)v3,
           a2,
           (unsigned int)&v22,
           (unsigned int)&v21,
           (__int64)&v17,
           (__int64)&v20,
           (__int64)v18,
           (__int64)&v19);
    if ( (v6 & 0x80000000) == 0 )
    {
      if ( *(_BYTE *)(a1 + 4368) )
      {
        v12 = v19;
        LOBYTE(v5) = v19;
        v13 = sub_140178410(a1, v5);
      }
      else
      {
        v12 = v21;
        v14 = v22;
        LOBYTE(v8) = v21;
        LOBYTE(v7) = v21;
        v16 = v20;
        *(_BYTE *)(a1 + 4369) = 0;
        v13 = sub_1401785C4(a1, v14, v7, v8, v15, v16, (__int64)v18);
      }
      v6 = v13;
      if ( v13 >= 0 )
      {
        *(_DWORD *)(a1 + 856) = v12;
        return v6;
      }
      v9 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
        || (HIDWORD(off_140168120->Timer) & 0x2000) == 0
        || BYTE1(off_140168120->Timer) < 2u )
      {
        return v6;
      }
      v10 = 21;
    }
    else
    {
      v9 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
        || (HIDWORD(off_140168120->Timer) & 0x2000) == 0
        || BYTE1(off_140168120->Timer) < 2u )
      {
        return v6;
      }
      v10 = 20;
    }
    sub_140055930((__int64)v9->AttachedDevice, v10, (__int64)&unk_14014A2D8);
    return v6;
  }
  return 0LL;
}
