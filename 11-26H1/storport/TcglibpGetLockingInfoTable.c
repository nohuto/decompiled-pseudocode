/*
 * XREFs of TcglibpGetLockingInfoTable @ 0x140134CDC
 * Callers:
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 * Callees:
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 *     TcglibpGetTableColumns @ 0x140134170 (TcglibpGetTableColumns.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibpGetLockingInfoTable(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rbx
  char *v5; // r15
  int TableColumns; // esi
  bool v8; // zf
  char v10; // [rsp+20h] [rbp-E0h] BYREF
  char v11; // [rsp+21h] [rbp-DFh] BYREF
  _QWORD v12[3]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+48h] [rbp-B8h]
  int v15; // [rsp+4Ch] [rbp-B4h]
  __int64 v16; // [rsp+50h] [rbp-B0h]
  int v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+5Ch] [rbp-A4h]
  __int64 v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+6Ch] [rbp-94h]
  __int64 v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  char *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  char *v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+DCh] [rbp-24h]
  __int64 v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  __int64 v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+11Ch] [rbp+1Ch]

  v12[2] = 7LL;
  v4 = (_DWORD *)(a3 + 72);
  v10 = 0;
  v5 = (char *)(a3 + 88);
  v11 = 0;
  v12[0] = 0LL;
  v16 = a3 + 72;
  v31 = 7LL;
  v12[1] = &v13;
  v19 = 393216LL;
  v22 = a3 + 88;
  v15 = 8;
  v14 = 1;
  v18 = 10;
  v21 = 10;
  v20 = 3;
  v26 = 3;
  v24 = 15;
  v28 = &v10;
  v34 = &v11;
  v40 = a3 + 100;
  v46 = a3 + 104;
  v27 = 10;
  v42 = 10;
  v48 = 15;
  v49 = 10LL;
  v54 = 15;
  v52 = a3 + 112;
  v13 = 4LL;
  v17 = 4;
  v23 = 8;
  v25 = 393217LL;
  v29 = 1;
  v30 = 8;
  v32 = 1;
  v33 = 8;
  v35 = 1;
  v36 = 8;
  v37 = 8LL;
  v38 = 1;
  v39 = 8;
  v41 = 4;
  v43 = 9LL;
  v44 = 1;
  v45 = 8;
  v47 = 8;
  v50 = 1;
  v51 = 8;
  v53 = 8;
  TableColumns = TcglibpGetTableColumns((int **)a1, a2, 0x80100000001LL, (unsigned int *)v12);
  if ( TableColumns >= 0 )
  {
    *(_DWORD *)(a1 + 48) = ++*v4;
    TcglibReverseBytes(v5, 8u);
    v8 = v11 == 1;
    *(_BYTE *)(a3 + 96) = v10 == 1;
    *(_BYTE *)(a3 + 97) = v8;
  }
  return (unsigned int)TableColumns;
}
