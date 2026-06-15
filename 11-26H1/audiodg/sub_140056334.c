/*
 * XREFs of sub_140056334 @ 0x140056334
 * Callers:
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_140024510 @ 0x140024510 (sub_140024510.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14005C67C @ 0x14005C67C (sub_14005C67C.c)
 *     sub_14005D2AC @ 0x14005D2AC (sub_14005D2AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_140056334(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int8 a5, __int64 a6)
{
  __int64 *v9; // r15
  __int64 v10; // rbx
  int v11; // r12d
  int v12; // r8d
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // edi
  __int64 v17; // rsi
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // r9d
  int v21; // edx
  __int64 v22; // r15
  int v23; // eax
  int v24; // eax
  int v25; // esi
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rbx
  __int128 v29; // xmm6
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rax
  __int64 v34; // [rsp+48h] [rbp-39h] BYREF
  __int64 v35; // [rsp+50h] [rbp-31h] BYREF
  __int64 v36; // [rsp+58h] [rbp-29h] BYREF
  int v37; // [rsp+60h] [rbp-21h] BYREF
  __int64 v38[2]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v39; // [rsp+78h] [rbp-9h] BYREF
  __int128 v40; // [rsp+88h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh]
  __int64 v42; // [rsp+E8h] [rbp+67h] BYREF

  v9 = *(__int64 **)(*(_QWORD *)sub_140024510(a3 + 16, (__int64)a2) + 32LL);
  v38[0] = 0LL;
  sub_140019444(v38);
  v10 = *v9;
  v38[0] = v10;
  if ( v10 )
    sub_1400B6010(v10);
  v11 = *(_DWORD *)(a1 + 128);
  v12 = *(_DWORD *)(a1 + 140);
  v13 = 4 * a5;
  v14 = *(_DWORD *)(a4 + 100);
  if ( v14 == 2 || (unsigned int)(v14 - 3) <= 1 )
    v15 = 8;
  else
    v15 = 0;
  v16 = v15 | v13 | ((v12 == 0) + 1);
  if ( (*(_BYTE *)(a4 + 212) & 1) != 0 )
    v16 = v15 | v13 | (10 - (v12 != 0));
  v34 = 0LL;
  v17 = a6;
  if ( a6 )
  {
    v35 = 0LL;
    v18 = sub_1400B6010(*v9);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = v18;
      v21 = 1046;
LABEL_14:
      sub_14000C2A8((int)retaddr, v21, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v20);
      sub_140003238(&v35);
      goto LABEL_24;
    }
    v22 = *(_QWORD *)(a1 + 144);
    v34 = 0LL;
    v38[1] = v17;
    v39 = v35;
    *(_QWORD *)&v40 = v22;
    LODWORD(v42) = v11;
    v37 = v16;
    v23 = sub_14005D2AC((unsigned int)&v34, (unsigned int)&v37, (unsigned int)&v42, (unsigned int)&v40, (__int64)&v39);
    v19 = v23;
    if ( v23 < 0 )
    {
      sub_14000C2A8((int)retaddr, 143, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump_dsp.cpp", v23);
      v20 = v19;
      v21 = 1048;
      goto LABEL_14;
    }
    sub_140003238(&v35);
  }
  else
  {
    v42 = 0LL;
    sub_140019444(&v42);
    v24 = sub_1400B6010(*(_QWORD *)(a1 + 144));
    v25 = v24;
    if ( v24 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1053, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v24);
      sub_140003238(&v42);
      v19 = v25;
      goto LABEL_24;
    }
    v26 = *(_QWORD *)(a1 + 392);
    v34 = 0LL;
    v27 = sub_14005C67C((unsigned int)&v34, v16, v11, v42, v10, v26);
    v19 = v27;
    if ( v27 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1055, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v27);
      sub_140003238(&v42);
      goto LABEL_24;
    }
    sub_140003238(&v42);
  }
  v36 = 0LL;
  sub_1400B6010(v34);
  v28 = v36;
  v29 = *(_OWORD *)(a1 + 344);
  sub_140006470(v30);
  v40 = v29;
  v31 = sub_1400B6010(v28);
  v19 = v31;
  if ( v31 >= 0 )
  {
    v32 = v34;
    v34 = 0LL;
    *a2 = v32;
    sub_140003238(&v36);
    v19 = 0;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 1061, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", v31);
    sub_140003238(&v36);
  }
LABEL_24:
  sub_140056130(&v34);
  sub_140003238(v38);
  return v19;
}
