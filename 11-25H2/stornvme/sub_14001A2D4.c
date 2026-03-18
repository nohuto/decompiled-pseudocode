/*
 * XREFs of sub_14001A2D4 @ 0x14001A2D4
 * Callers:
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_14001A5C4 @ 0x14001A5C4 (sub_14001A5C4.c)
 *     sub_140020508 @ 0x140020508 (sub_140020508.c)
 *     sub_14002ACA4 @ 0x14002ACA4 (sub_14002ACA4.c)
 * Callees:
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14001A2D4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _BYTE *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _BYTE *a10,
        __int64 a11,
        _BYTE *a12,
        __int64 a13,
        _BYTE *a14,
        __int64 a15,
        _BYTE *a16,
        __int64 a17,
        _BYTE *a18,
        __int64 a19,
        _BYTE *a20,
        __int64 a21,
        _BYTE *a22,
        __int64 a23,
        _BYTE *a24,
        __int64 a25)
{
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  unsigned int v28; // ebx
  unsigned int v29; // eax
  _BYTE *v30; // rcx
  unsigned int v31; // eax
  _BYTE *v32; // rcx
  unsigned int v33; // eax
  _BYTE *v34; // rcx
  unsigned int v35; // eax
  _BYTE *v36; // rcx
  unsigned int v37; // eax
  _BYTE *v38; // rcx
  unsigned int v39; // eax
  _BYTE *v40; // rcx
  unsigned int v41; // eax
  _BYTE *v42; // rcx
  unsigned int v43; // eax
  _BYTE *v44; // rcx
  _DWORD v48[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v49[32]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  _BYTE v51[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-40h]
  _BYTE v53[32]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v54; // [rsp+E8h] [rbp-18h]
  _BYTE v55[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v56; // [rsp+110h] [rbp+10h]
  _BYTE v57[32]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v58; // [rsp+138h] [rbp+38h]
  _BYTE v59[32]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v60; // [rsp+160h] [rbp+60h]
  _BYTE v61[32]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v62; // [rsp+188h] [rbp+88h]
  _BYTE v63[32]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v64; // [rsp+1B0h] [rbp+B0h]
  _BYTE v65[32]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v66; // [rsp+1D8h] [rbp+D8h]

  sub_140032C80(v48, 0LL, 384LL);
  v26 = 0;
  v48[1] = a4;
  v48[0] = 1;
  v27 = a5;
  v28 = 32;
  while ( *v27 )
  {
    ++v26;
    ++v27;
    if ( v26 >= 0x20 )
    {
      v26 = 32;
      break;
    }
  }
  sub_140032980(v49, a5, v26);
  v50 = 1LL;
  if ( a10 )
  {
    v29 = 0;
    v30 = a10;
    while ( *v30 )
    {
      ++v29;
      ++v30;
      if ( v29 >= 0x20 )
      {
        v29 = 32;
        break;
      }
    }
    sub_140032980(v51, a10, v29);
    v52 = a11;
  }
  if ( a12 )
  {
    v31 = 0;
    v32 = a12;
    while ( *v32 )
    {
      ++v31;
      ++v32;
      if ( v31 >= 0x20 )
      {
        v31 = 32;
        break;
      }
    }
    sub_140032980(v53, a12, v31);
    v54 = a13;
  }
  if ( a14 )
  {
    v33 = 0;
    v34 = a14;
    while ( *v34 )
    {
      ++v33;
      ++v34;
      if ( v33 >= 0x20 )
      {
        v33 = 32;
        break;
      }
    }
    sub_140032980(v55, a14, v33);
    v56 = a15;
  }
  if ( a16 )
  {
    v35 = 0;
    v36 = a16;
    while ( *v36 )
    {
      ++v35;
      ++v36;
      if ( v35 >= 0x20 )
      {
        v35 = 32;
        break;
      }
    }
    sub_140032980(v57, a16, v35);
    v58 = a17;
  }
  if ( a18 )
  {
    v37 = 0;
    v38 = a18;
    while ( *v38 )
    {
      ++v37;
      ++v38;
      if ( v37 >= 0x20 )
      {
        v37 = 32;
        break;
      }
    }
    sub_140032980(v59, a18, v37);
    v60 = a19;
  }
  if ( a20 )
  {
    v39 = 0;
    v40 = a20;
    while ( *v40 )
    {
      ++v39;
      ++v40;
      if ( v39 >= 0x20 )
      {
        v39 = 32;
        break;
      }
    }
    sub_140032980(v61, a20, v39);
    v62 = a21;
  }
  if ( a22 )
  {
    v41 = 0;
    v42 = a22;
    while ( *v42 )
    {
      ++v41;
      ++v42;
      if ( v41 >= 0x20 )
      {
        v41 = 32;
        break;
      }
    }
    sub_140032980(v63, a22, v41);
    v64 = a23;
  }
  if ( a24 )
  {
    v43 = 0;
    v44 = a24;
    while ( *v44 )
    {
      ++v43;
      ++v44;
      if ( v43 >= 0x20 )
        goto LABEL_53;
    }
    v28 = v43;
LABEL_53:
    sub_140032980(v65, a24, v28);
    v66 = a25;
  }
  return StorPortExtendedFunction(96LL, a1, a2, v48);
}
