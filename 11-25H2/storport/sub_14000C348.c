/*
 * XREFs of sub_14000C348 @ 0x14000C348
 * Callers:
 *     sub_14000BC30 @ 0x14000BC30 (sub_14000BC30.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 * Callees:
 *     sub_1400160C0 @ 0x1400160C0 (sub_1400160C0.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_1400536E8 @ 0x1400536E8 (sub_1400536E8.c)
 *     sub_1400681AC @ 0x1400681AC (sub_1400681AC.c)
 *     sub_1400715A8 @ 0x1400715A8 (sub_1400715A8.c)
 *     sub_14007ACB0 @ 0x14007ACB0 (sub_14007ACB0.c)
 */

__int64 __fastcall sub_14000C348(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v7; // r14d
  __int64 v8; // rcx
  _WORD *v9; // rbx
  bool v10; // cf
  int v11; // ecx
  __int64 v12; // rax
  char *v13; // rcx
  _QWORD *v14; // r11
  unsigned int v15; // eax
  unsigned int v16; // ebp
  _QWORD *v18; // r8
  _QWORD v19[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 184);
  v19[0] = 0LL;
  v7 = a1;
  if ( *(_DWORD *)v3 == 1431193940 )
    v3 = *(_QWORD *)(v3 + 24);
  v8 = *(_QWORD *)(v3 + 4552);
  v9 = (_WORD *)(v3 + 4384);
  if ( v8 )
    goto LABEL_4;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 3u )
  {
    sub_1400681AC(off_140168120->AttachedDevice, 59LL, &unk_14014C778, a2, v3 + 4384, v3);
  }
  sub_1400536E8(v3);
  v8 = *(_QWORD *)(v3 + 4552);
  if ( v8 )
  {
LABEL_4:
    v19[2] = v8 + 48;
    *(_BYTE *)(v3 + 4560) = 1;
    v19[3] = v8 + 928;
    v10 = *(_BYTE *)(v3 + 4561) != 0;
    v19[1] = v8 + 1184;
    v11 = v10 ? 2304 : 256;
    if ( *(_DWORD *)v3 == 1314275652 )
    {
      v12 = v3 + 274;
    }
    else
    {
      v12 = v3 + 482;
      if ( *(_DWORD *)v3 != 1094997074 )
        v12 = 98LL;
    }
    if ( *(_BYTE *)v12 == 1 )
    {
      *(_DWORD *)(v3 + 4408) = v11;
      *(_QWORD *)(v3 + 4480) = 0LL;
      *(_QWORD *)(v3 + 4464) = a2;
      *v9 = 8;
      *(_BYTE *)(v3 + 4386) = 40;
      *(_DWORD *)(v3 + 4392) = 1397899864;
      *(_DWORD *)(v3 + 4396) = 1;
      *(_DWORD *)(v3 + 4400) = 168;
      *(_DWORD *)(v3 + 4404) = 36;
      *(_WORD *)(v3 + 4420) = 2;
      *(_DWORD *)(v3 + 4424) = *(_DWORD *)(v3 + 5608);
      *(_DWORD *)(v3 + 4504) = 144;
      *(_DWORD *)(v3 + 4436) = 128;
      *(_QWORD *)(v3 + 4448) = 0LL;
      *(_DWORD *)(v3 + 4444) = 0;
      *(_DWORD *)(v3 + 4440) = 1;
      *(_WORD *)(v3 + 4512) = 1;
      *(_DWORD *)(v3 + 4516) = 4;
      *(_WORD *)(v3 + 4514) = *(_WORD *)(v3 + 56);
      *(_WORD *)(v3 + 4520) = 0;
      *(_BYTE *)(v3 + 4522) = 0;
      v13 = (char *)v9 + *(unsigned int *)(v3 + 4504);
      *(_DWORD *)v13 = 97;
      *((_DWORD *)v13 + 1) = 12;
      *((_DWORD *)v13 + 4) = *(_DWORD *)(v4 + 32);
      *((_DWORD *)v13 + 3) = *(_DWORD *)(v4 + 24);
      v13[8] = 1;
    }
    else
    {
      *(_QWORD *)(v3 + 4432) = 0LL;
      *(_BYTE *)(v3 + 4386) = 36;
      *(_QWORD *)(v3 + 4408) = 0LL;
      *(_DWORD *)(v3 + 4400) = 0;
      *v9 = 88;
      *(_DWORD *)(v3 + 4448) = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(v3 + 4392) = *(_DWORD *)(v4 + 24);
      *(_DWORD *)(v3 + 4396) = v11;
      *(_DWORD *)(v3 + 4404) = *(_DWORD *)(v3 + 5608);
      *(_DWORD *)(v3 + 4388) = 1;
    }
    sub_1400161E0(v3, v3 + 4384);
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 4) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      v18 = (_QWORD *)(v3 + 4488);
      if ( *(_BYTE *)(v3 + 4386) != 40 )
        v18 = v14;
      sub_1400715A8(off_140168120->AttachedDevice, 61LL, &unk_14014C778, a2, v3 + 4384, *v18, v3);
    }
    v15 = sub_1400160C0(v7, a2, (int)v3 + 4384, (unsigned int)v19, a3);
    v16 = v15;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 4) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      sub_14007ACB0(off_140168120->AttachedDevice, 62LL, &unk_14014C778, a2, v3 + 4384, v3, v15);
    }
    return v16;
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 4) != 0
      && BYTE1(off_140168120->Timer) >= 3u )
    {
      sub_1400681AC(off_140168120->AttachedDevice, 60LL, &unk_14014C778, a2, v3 + 4384, v3);
    }
    return 3221225495LL;
  }
}
