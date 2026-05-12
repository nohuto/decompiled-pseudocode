/*
 * XREFs of StorpTelemetryMarkNamespaceUnresponsive @ 0x1400BD168
 * Callers:
 *     NvmeNamespaceSetUnresponsiveAttribute @ 0x140113520 (NvmeNamespaceSetUnresponsiveAttribute.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMarkNamespaceUnresponsive(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  int *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int128 *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  __int128 *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  __int64 *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  int *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  __int64 v47; // [rsp+120h] [rbp+20h] BYREF
  char v48; // [rsp+128h] [rbp+28h]
  __int128 v49; // [rsp+130h] [rbp+30h] BYREF
  int v50; // [rsp+140h] [rbp+40h]
  char v51; // [rsp+144h] [rbp+44h]
  __int128 v52; // [rsp+148h] [rbp+48h] BYREF
  __int128 v53; // [rsp+158h] [rbp+58h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  char v55; // [rsp+170h] [rbp+70h]

  v1 = *(_QWORD *)(a1 + 16);
  v50 = 0;
  v49 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v54 = 0LL;
  v2 = a1;
  v53 = 0LL;
  v55 = 0;
  v47 = 0LL;
  v48 = 0;
  v3 = *(_QWORD *)(v1 + 592);
  if ( v3 )
  {
    v49 = *(_OWORD *)(v3 + 4);
    v50 = *(_DWORD *)(v3 + 20);
    v4 = *(_QWORD *)(v1 + 592);
    v52 = *(_OWORD *)(v4 + 24);
    v53 = *(_OWORD *)(v4 + 40);
    v54 = *(_QWORD *)(v4 + 56);
    a1 = *(_QWORD *)(*(_QWORD *)(v1 + 592) + 64LL);
    v47 = a1;
  }
  v5 = *(_DWORD *)(v2 + 112);
  if ( (v5 & 0x200) == 0 && (unsigned int)dword_140172178 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v10 = *(_QWORD *)(v7 + 128) + 1048LL;
      v23 = 16LL;
      v22 = v10;
      v24 = v8 + 160;
      v25 = 16LL;
      v15 = *(_DWORD *)(*(_QWORD *)(v7 + 128) + 56LL);
      v11 = -1LL;
      v26 = &v15;
      v12 = -1LL;
      v27 = 4LL;
      do
        ++v12;
      while ( *((_BYTE *)&v49 + v12) != (_BYTE)v9 );
      v30 = v9;
      v28 = &v49;
      v29 = v12 + 1;
      v13 = -1LL;
      do
        ++v13;
      while ( *((_BYTE *)&v52 + v13) != (_BYTE)v9 );
      v33 = v9;
      v32 = v13 + 1;
      v31 = &v52;
      do
        ++v11;
      while ( *((_BYTE *)&v47 + v11) != (_BYTE)v9 );
      v36 = v9;
      v34 = &v47;
      v38 = 4LL;
      v35 = v11 + 1;
      v16 = *(_DWORD *)(v8 + 56);
      v37 = &v16;
      v17 = *(unsigned __int16 *)(v8 + 654);
      v39 = &v17;
      v18 = *(_DWORD *)(v8 + 656);
      v41 = &v18;
      v19 = *(_DWORD *)(v8 + 660);
      v43 = &v19;
      v45 = &v20;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v20 = v9;
      v46 = 4LL;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(v11, (unsigned __int8 *)dword_1401631F2, v6, v7, 0xDu, &v21);
    }
  }
  return v5;
}
