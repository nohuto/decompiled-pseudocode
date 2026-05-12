/*
 * XREFs of sub_14013A45C @ 0x14013A45C
 * Callers:
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 * Callees:
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_1400859B4 @ 0x1400859B4 (sub_1400859B4.c)
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_140138090 @ 0x140138090 (sub_140138090.c)
 *     sub_14013839C @ 0x14013839C (sub_14013839C.c)
 *     sub_14013AC30 @ 0x14013AC30 (sub_14013AC30.c)
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 *     sub_14013C334 @ 0x14013C334 (sub_14013C334.c)
 */

__int64 __fastcall sub_14013A45C(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  ULONG_PTR v3; // r12
  int *v5; // r14
  int v7; // edi
  int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  int v13; // r9d
  __int64 result; // rax
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+48h] BYREF
  __int64 v17; // [rsp+98h] [rbp+50h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+58h] BYREF
  ULONG_PTR v19; // [rsp+A8h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  v3 = *(_QWORD *)(a2 + 48);
  v5 = *(int **)a1;
  v17 = 0LL;
  v7 = 0;
  v16 = 0;
  v15[0] = v2;
  v19 = v3;
  if ( v2 && v3 )
  {
    sub_1400859B4(v5, v2, &v17, &v16);
    v8 = v17;
    v9 = v16;
    *(_BYTE *)(v17 + 56) = -6;
    v7 = sub_14013C334(v8, v9, a2, 1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 4));
    if ( v7 < 0 )
    {
LABEL_19:
      sub_14013839C(v5, v15, (__int64 *)&v19);
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_QWORD *)(a2 + 48) = 0LL;
      goto LABEL_20;
    }
    v7 = sub_140138090(v5, v2, v10, 0);
    if ( v7 < 0 )
    {
      sub_140085D5C(*(int **)a1, "CloseSession-SEND failed", v7, *(_DWORD *)(a2 + 8), 0LL, 0LL);
      goto LABEL_19;
    }
    v7 = sub_140138090(v5, v3, v11, 1);
    if ( v7 < 0 )
    {
      sub_140085D5C(*(int **)a1, "CloseSession-RECV failed", v7, *(_DWORD *)(a2 + 8), 0LL, 0LL);
      goto LABEL_19;
    }
    _InterlockedDecrement(&dword_140168E20);
    sub_1400859FC(v5, "CloseSession success", *(_DWORD *)(a2 + 8), 0, 0LL, 0LL);
    sub_1400859B4(v5, v19, &v17, &v16);
    if ( !(unsigned int)sub_14013AC30(a1, v17, v16) )
    {
      v18 = 0LL;
      v12 = sub_14013B5CC(a1 + 56, &v18);
      if ( v12 >= 0 )
      {
        v13 = *(_DWORD *)(v18 + 8);
        if ( v13 != 3 )
        {
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
            sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x18u, (__int64)&unk_1401552C8, v13);
          v7 = -1073741435;
          LOBYTE(v12) = -123;
          goto LABEL_17;
        }
      }
      v7 = v12;
      if ( v12 < 0 )
LABEL_17:
        sub_140085D5C(*(int **)a1, "CloseSession-ParseTcgEndSession failed", v12, 0, 0LL, 0LL);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
    goto LABEL_19;
  }
LABEL_20:
  *(_QWORD *)(a2 + 4) = 0LL;
  result = (unsigned int)v7;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)(a2 + 24) = 0;
  return result;
}
