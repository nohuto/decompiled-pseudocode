/*
 * XREFs of sub_1400A9114 @ 0x1400A9114
 * Callers:
 *     sub_1400AEFC8 @ 0x1400AEFC8 (sub_1400AEFC8.c)
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400F9964 @ 0x1400F9964 (sub_1400F9964.c)
 *     sub_14010E334 @ 0x14010E334 (sub_14010E334.c)
 *     sub_14010E978 @ 0x14010E978 (sub_14010E978.c)
 *     sub_14010FEF0 @ 0x14010FEF0 (sub_14010FEF0.c)
 *     sub_140110708 @ 0x140110708 (sub_140110708.c)
 *     sub_140111A1C @ 0x140111A1C (sub_140111A1C.c)
 *     sub_140183278 @ 0x140183278 (sub_140183278.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1400A9114(__int64 a1, int a2, int a3, __int64 a4, void *a5, char a6, void *a7, char a8)
{
  __int64 v8; // rbx
  NTSTATUS result; // eax
  __int64 v11; // rdi
  EVENT_DESCRIPTOR v12; // xmm0
  int v13; // r11d
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r8d
  const wchar_t *v17; // rax
  const int *v18; // rdx
  const int *v19; // r8
  __int64 v20; // rax
  int v21; // eax
  const int *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rdx
  int v30; // edx
  void *v31; // rax
  int v32; // ecx
  NTSTATUS v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int128 v40; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  const wchar_t *v46; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  const int *v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+ECh] [rbp-14h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  NTSTATUS *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  __int64 v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  const int *v58; // [rsp+120h] [rbp+20h]
  int v59; // [rsp+128h] [rbp+28h]
  int v60; // [rsp+12Ch] [rbp+2Ch]
  __int64 v61; // [rsp+130h] [rbp+30h]
  int v62; // [rsp+138h] [rbp+38h]
  int v63; // [rsp+13Ch] [rbp+3Ch]
  __int64 v64; // [rsp+140h] [rbp+40h]
  int v65; // [rsp+148h] [rbp+48h]
  int v66; // [rsp+14Ch] [rbp+4Ch]
  __int64 v67; // [rsp+150h] [rbp+50h]
  int v68; // [rsp+158h] [rbp+58h]
  int v69; // [rsp+15Ch] [rbp+5Ch]
  void *v70; // [rsp+160h] [rbp+60h]
  int v71; // [rsp+168h] [rbp+68h]
  int v72; // [rsp+16Ch] [rbp+6Ch]
  char *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  void *v75; // [rsp+180h] [rbp+80h]
  int v76; // [rsp+188h] [rbp+88h]
  int v77; // [rsp+18Ch] [rbp+8Ch]
  char *v78; // [rsp+190h] [rbp+90h]
  __int64 v79; // [rsp+198h] [rbp+98h]
  const int *v80; // [rsp+1A0h] [rbp+A0h]
  __int64 v81; // [rsp+1A8h] [rbp+A8h]
  __int64 *v82; // [rsp+1B0h] [rbp+B0h]
  __int64 v83; // [rsp+1B8h] [rbp+B8h]
  const int *v84; // [rsp+1C0h] [rbp+C0h]
  __int64 v85; // [rsp+1C8h] [rbp+C8h]
  __int64 *v86; // [rsp+1D0h] [rbp+D0h]
  __int64 v87; // [rsp+1D8h] [rbp+D8h]
  const int *v88; // [rsp+1E0h] [rbp+E0h]
  __int64 v89; // [rsp+1E8h] [rbp+E8h]
  __int64 *v90; // [rsp+1F0h] [rbp+F0h]
  __int64 v91; // [rsp+1F8h] [rbp+F8h]
  const int *v92; // [rsp+200h] [rbp+100h]
  __int64 v93; // [rsp+208h] [rbp+108h]
  __int64 *v94; // [rsp+210h] [rbp+110h]
  __int64 v95; // [rsp+218h] [rbp+118h]
  const int *v96; // [rsp+220h] [rbp+120h]
  __int64 v97; // [rsp+228h] [rbp+128h]
  __int64 *v98; // [rsp+230h] [rbp+130h]
  __int64 v99; // [rsp+238h] [rbp+138h]
  const int *v100; // [rsp+240h] [rbp+140h]
  __int64 v101; // [rsp+248h] [rbp+148h]
  __int64 *v102; // [rsp+250h] [rbp+150h]
  __int64 v103; // [rsp+258h] [rbp+158h]

  v8 = *(_QWORD *)(a1 + 16);
  result = *(_DWORD *)(a1 + 56);
  v39 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v33 = result;
  ActivityId = 0LL;
  v11 = *(_QWORD *)(v8 + 128);
  v40 = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    if ( a3 == 2 )
    {
      v12 = (EVENT_DESCRIPTOR)xmmword_14014A8F0;
    }
    else if ( a3 == 3 )
    {
      v12 = (EVENT_DESCRIPTOR)xmmword_14014A5C0;
    }
    else
    {
      v12 = (EVENT_DESCRIPTOR)xmmword_140149EA8;
    }
  }
  else if ( a3 == 2 )
  {
    v12 = (EVENT_DESCRIPTOR)xmmword_14014A450;
  }
  else if ( a3 == 3 )
  {
    v12 = (EVENT_DESCRIPTOR)xmmword_140149A20;
  }
  else
  {
    v12 = (EVENT_DESCRIPTOR)xmmword_140149E38;
  }
  EventDescriptor = v12;
  if ( (*(_BYTE *)(v8 + 136) & 2) != 0 )
    EventDescriptor.Keyword |= 0x8000uLL;
  sub_1400403EC(*(_QWORD *)(v11 + 16), (__int64)&v40);
  UserData.Ptr = v11 + 56;
  v14 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v44 = v11 + 1032;
  v45 = 16LL;
  if ( *((_QWORD *)&v40 + 1) )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(*((_QWORD *)&v40 + 1) + 2 * v15) );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v47 = v16;
  v17 = L"NULL";
  v48 = 0;
  if ( *((_QWORD *)&v40 + 1) )
    v17 = (const wchar_t *)*((_QWORD *)&v40 + 1);
  v18 = &dword_140149108;
  v46 = v17;
  v19 = *(const int **)(v8 + 792);
  if ( v19 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *((_BYTE *)v19 + v20) );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 1;
    v19 = &dword_140149108;
  }
  v50 = v21;
  v52 = v8 + 4;
  v54 = &v33;
  v56 = v8 + 744;
  v49 = v19;
  v51 = 0;
  v53 = 2LL;
  v55 = 4LL;
  v57 = 1LL;
  v22 = *(const int **)(v8 + 752);
  if ( v22 )
    v18 = *(const int **)(v8 + 752);
  else
    v22 = &dword_140149108;
  v23 = -1LL;
  do
    ++v23;
  while ( *((_BYTE *)v18 + v23) );
  v58 = v22;
  v59 = v23 + 1;
  v24 = -1LL;
  v60 = 0;
  do
    ++v24;
  while ( *(_BYTE *)(v8 + 800 + v24) );
  v61 = v8 + 800;
  v62 = v24 + 1;
  v25 = v8 + 841;
  v26 = -1LL;
  v63 = 0;
  do
    ++v26;
  while ( *(_BYTE *)(v25 + v26) );
  v64 = v25;
  v65 = v26 + 1;
  v27 = -1LL;
  v66 = 0;
  v67 = a4;
  do
    ++v27;
  while ( *(_WORD *)(a4 + 2 * v27) );
  v69 = 0;
  v68 = 2 * v27 + 2;
  v28 = a5;
  if ( a5 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *((_WORD *)a5 + v29) );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = v13;
    v28 = &unk_140149394;
  }
  v70 = v28;
  v73 = &a6;
  v31 = a7;
  v71 = v30;
  v72 = 0;
  v74 = 8LL;
  if ( a7 )
  {
    do
      ++v14;
    while ( *((_WORD *)a7 + v14) );
    v32 = 2 * v14 + 2;
  }
  else
  {
    v32 = v13;
    v31 = &unk_140149394;
  }
  v75 = v31;
  v76 = v32;
  v78 = &a8;
  v80 = &dword_140149108;
  v82 = &v34;
  v84 = &dword_140149108;
  v86 = &v35;
  v88 = &dword_140149108;
  v90 = &v36;
  v94 = &v37;
  v98 = &v38;
  v102 = &v39;
  v92 = &dword_140149108;
  v96 = &dword_140149108;
  v100 = &dword_140149108;
  v77 = 0;
  v79 = 8LL;
  v81 = 2LL;
  v83 = 8LL;
  v85 = 2LL;
  v87 = 8LL;
  v89 = 2LL;
  v91 = 8LL;
  v93 = 2LL;
  v95 = 8LL;
  v97 = 2LL;
  v99 = 8LL;
  v101 = 2LL;
  v103 = 8LL;
  return EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 1u, &ActivityId, 0LL, 0x1Bu, &UserData);
}
