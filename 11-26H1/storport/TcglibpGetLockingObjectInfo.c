/*
 * XREFs of TcglibpGetLockingObjectInfo @ 0x140132D48
 * Callers:
 *     RaidGetTcgLockingObject @ 0x140094918 (RaidGetTcgLockingObject.c)
 *     TcglibGetLockingObjects @ 0x1401310E0 (TcglibGetLockingObjects.c)
 * Callees:
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibpGetLockingObjectInfo(int a1, int a2, int a3, __int64 a4)
{
  int v5; // r8d
  unsigned int v6; // edi
  int v7; // ecx
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v10[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+70h] [rbp-90h] BYREF
  int v12; // [rsp+78h] [rbp-88h]
  int v13; // [rsp+7Ch] [rbp-84h]
  __int64 v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h]
  int v16; // [rsp+8Ch] [rbp-74h]
  __int64 v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+9Ch] [rbp-64h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  int v25; // [rsp+BCh] [rbp-44h]
  __int64 v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+CCh] [rbp-34h]
  __int64 v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  int v31; // [rsp+DCh] [rbp-24h]
  __int64 v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]
  __int64 v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]
  __int64 v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+108h] [rbp+8h]
  int v40; // [rsp+10Ch] [rbp+Ch]
  __int64 v41; // [rsp+110h] [rbp+10h]
  int v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+11Ch] [rbp+1Ch]
  __int64 v44; // [rsp+120h] [rbp+20h]
  int v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+12Ch] [rbp+2Ch]
  __int64 v47; // [rsp+130h] [rbp+30h]
  int v48; // [rsp+138h] [rbp+38h]
  int v49; // [rsp+13Ch] [rbp+3Ch]
  __int64 v50; // [rsp+140h] [rbp+40h]
  int v51; // [rsp+148h] [rbp+48h]
  int v52; // [rsp+14Ch] [rbp+4Ch]
  __int64 v53; // [rsp+150h] [rbp+50h]
  int v54; // [rsp+158h] [rbp+58h]
  int v55; // [rsp+15Ch] [rbp+5Ch]
  __int64 v56; // [rsp+160h] [rbp+60h]
  int v57; // [rsp+168h] [rbp+68h]
  int v58; // [rsp+16Ch] [rbp+6Ch]
  __int64 v59; // [rsp+170h] [rbp+70h]
  int v60; // [rsp+178h] [rbp+78h]
  int v61; // [rsp+17Ch] [rbp+7Ch]
  int *v62; // [rsp+180h] [rbp+80h]
  int v63; // [rsp+188h] [rbp+88h]
  int v64; // [rsp+18Ch] [rbp+8Ch]
  __int64 v65; // [rsp+190h] [rbp+90h]
  int v66; // [rsp+198h] [rbp+98h]
  int v67; // [rsp+19Ch] [rbp+9Ch]
  __int64 v68; // [rsp+1A0h] [rbp+A0h]
  int v69; // [rsp+1A8h] [rbp+A8h]
  int v70; // [rsp+1ACh] [rbp+ACh]
  __int64 v71; // [rsp+1B0h] [rbp+B0h]
  int v72; // [rsp+1B8h] [rbp+B8h]
  int v73; // [rsp+1BCh] [rbp+BCh]
  __int64 v74; // [rsp+1C0h] [rbp+C0h]
  int v75; // [rsp+1C8h] [rbp+C8h]
  int v76; // [rsp+1CCh] [rbp+CCh]

  *(_DWORD *)(a4 + 8) = a3;
  v10[2] = 11LL;
  v9 = 0;
  v10[1] = &v11;
  v20 = a4 + 12;
  v10[0] = 0LL;
  v11 = 0LL;
  v26 = a4 + 48;
  v12 = 1;
  v32 = a4 + 56;
  v38 = a4 + 64;
  v44 = a4 + 65;
  v50 = a4 + 66;
  v56 = a4 + 67;
  v62 = &v9;
  v68 = a4 + 72;
  v13 = 8;
  v14 = a4;
  v15 = 8;
  v16 = 15;
  v17 = 2LL;
  v18 = 1;
  v19 = 8;
  v21 = 32;
  v22 = 16;
  v23 = 3LL;
  v24 = 1;
  v25 = 8;
  v27 = 8;
  v28 = 15;
  v29 = 4LL;
  v30 = 1;
  v31 = 8;
  v33 = 8;
  v34 = 15;
  v35 = 5LL;
  v36 = 1;
  v37 = 8;
  v39 = 1;
  v40 = 8;
  v41 = 6LL;
  v42 = 1;
  v43 = 8;
  v45 = 1;
  v46 = 8;
  v47 = 7LL;
  v48 = 1;
  v49 = 8;
  v51 = 1;
  v52 = 8;
  v53 = 8LL;
  v54 = 1;
  v55 = 8;
  v57 = 1;
  v58 = 8;
  v59 = 9LL;
  v60 = 1;
  v61 = 8;
  v63 = 4;
  v64 = 8;
  v65 = 20LL;
  v66 = 1;
  v67 = 8;
  v69 = 4;
  v70 = 15;
  v71 = 21LL;
  v72 = 1;
  v74 = a4 + 70;
  v73 = 8;
  v75 = 1;
  v76 = 8;
  if ( a3 )
    v5 = a3 + 196608;
  else
    v5 = 1;
  v6 = TcglibpCallMethod(
         a1,
         a2,
         v5,
         22,
         (__int64)GenGetTableColumnParams,
         (__int64)v10,
         0LL,
         0LL,
         (__int64)ParseLockingObjectInfo,
         (__int64)v10);
  TcglibReverseBytes((char *)a4, 8u);
  v7 = v9;
  if ( v9 )
  {
    *(_BYTE *)(a4 + 68) = 1;
    *(_BYTE *)(a4 + 69) = v7 != 1;
  }
  else
  {
    *(_WORD *)(a4 + 68) = 0;
  }
  return v6;
}
