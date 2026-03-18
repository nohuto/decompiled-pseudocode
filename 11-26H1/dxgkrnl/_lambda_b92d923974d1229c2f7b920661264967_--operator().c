/*
 * XREFs of _lambda_b92d923974d1229c2f7b920661264967_::operator() @ 0x1401B3D4C
 * Callers:
 *     _DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400737A0 (_DXGKCALLONEXIT__lambda_b92d923974d1229c2f7b920661264967____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140049164 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

char __fastcall lambda_b92d923974d1229c2f7b920661264967_::operator()(int **a1)
{
  __int64 *v1; // rax
  __int64 v3; // r9
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  unsigned __int64 *v7; // rdx
  int *v8; // rax
  int *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int16 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h]
  __int128 v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+7Ch] [rbp-84h]
  int v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+84h] [rbp-7Ch]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int16 *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  __int64 *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  v1 = (__int64 *)a1[2];
  v19 = 0LL;
  v20 = 0LL;
  v23 = 0;
  v3 = *v1;
  v4 = *a1[1];
  v5 = **a1;
  v6 = (*a1)[1];
  v26 = v5;
  v7 = (unsigned __int64 *)a1[3];
  v25 = v6;
  v18[0] = 30;
  v18[1] = 72;
  v22 = 0;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v24 = 110;
  v27 = v4;
  v28 = v3;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v18, *v7);
  v8 = a1[4];
  if ( *(_BYTE *)v8 )
  {
    if ( (unsigned int)dword_140166660 > 5 )
    {
      LOBYTE(v8) = tlgKeywordOn((__int64)&dword_140166660, 0x800000000004LL);
      if ( (_BYTE)v8 )
      {
        v9 = *a1;
        v37 = 8LL;
        v35 = 8LL;
        v33 = 2LL;
        v10 = *(_QWORD *)v9;
        v11 = (__int64 *)a1[2];
        v15 = v10;
        v31 = 8LL;
        v12 = *v11;
        v14 = 1;
        v36 = &v15;
        v34 = &v16;
        v32 = &v14;
        v30 = &v17;
        v16 = v12;
        v17 = 2048LL;
        LOBYTE(v8) = tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140166660, byte_14014188D, 0LL, 0LL, 6u, &v29);
      }
    }
  }
  return (char)v8;
}
