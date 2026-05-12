/*
 * XREFs of sub_14001AB28 @ 0x14001AB28
 * Callers:
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 * Callees:
 *     sub_140014460 @ 0x140014460 (sub_140014460.c)
 *     sub_14001C020 @ 0x14001C020 (sub_14001C020.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     sub_140056120 @ 0x140056120 (sub_140056120.c)
 *     sub_140065044 @ 0x140065044 (sub_140065044.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14001AB28(__int64 a1, int *a2, _BYTE *a3)
{
  char v3; // r13
  char v4; // bp
  bool v5; // bl
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // esi
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-B8h] BYREF
  char Dst[112]; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v18[3]; // [rsp+98h] [rbp-40h] BYREF

  v3 = *(_BYTE *)(a1 + 106);
  v4 = 0;
  v5 = 0;
  if ( !v3 && (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
    return 0LL;
  memset_0(Dst, 0, sizeof(Dst));
  v16 = a1;
  v18[1] = v18;
  v12 = 0;
  v18[0] = v18;
  if ( v3 )
  {
    *(_BYTE *)(a1 + 106) = 0;
    *(_QWORD *)(a1 + 4264) = MEMORY[0xFFFFF78000000014];
    if ( (unsigned __int8)sub_140020090(a1 + 376, 11LL) )
      sub_1400296E0(a1 + 376, 11LL);
    v14 = *(_DWORD *)(a1 + 4824);
    v12 = sub_14001C020(a1, v13, &v16);
    v4 = 1;
    v5 = v14 != *(_DWORD *)(a1 + 4824);
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
  {
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 4828) & 4) != 0 && (*(_DWORD *)(a1 + 4832) & 1) != 0 && *(_QWORD *)(a1 + 4880) )
        RtlSetBit((PRTL_BITMAP)(a1 + 4864), *(unsigned __int8 *)(*(_QWORD *)(a1 + 4840) + 8LL));
    }
    else
    {
      LOBYTE(v11) = v4;
      v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_140065044)(a1, v10, &v16, v11);
      if ( !v4 )
        v12 = v15;
      if ( a2 )
        *a2 = v15;
      if ( a3 )
        *a3 = 1;
    }
  }
  if ( v12 >= 0 )
    sub_140056120(&v16);
  sub_140014460((__int64)&v16);
  return (unsigned int)v12;
}
