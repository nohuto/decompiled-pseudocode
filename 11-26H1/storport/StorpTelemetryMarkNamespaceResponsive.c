/*
 * XREFs of StorpTelemetryMarkNamespaceResponsive @ 0x1400BCF44
 * Callers:
 *     NvmeNamespaceClearUnresponsiveAttribute @ 0x140102080 (NvmeNamespaceClearUnresponsiveAttribute.c)
 *     NvmeNamespaceSetQOSIoctl @ 0x140112EC4 (NvmeNamespaceSetQOSIoctl.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMarkNamespaceResponsive(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
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
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int128 *v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  __int128 *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  __int64 *v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 v44; // [rsp+110h] [rbp+10h] BYREF
  char v45; // [rsp+118h] [rbp+18h]
  __int128 v46; // [rsp+120h] [rbp+20h] BYREF
  int v47; // [rsp+130h] [rbp+30h]
  char v48; // [rsp+134h] [rbp+34h]
  __int128 v49; // [rsp+138h] [rbp+38h] BYREF
  __int128 v50; // [rsp+148h] [rbp+48h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  char v52; // [rsp+160h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 16);
  v47 = 0;
  v46 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v51 = 0LL;
  v2 = a1;
  v50 = 0LL;
  v52 = 0;
  v44 = 0LL;
  v45 = 0;
  v3 = *(_QWORD *)(v1 + 592);
  if ( v3 )
  {
    v46 = *(_OWORD *)(v3 + 4);
    v47 = *(_DWORD *)(v3 + 20);
    v4 = *(_QWORD *)(v1 + 592);
    v49 = *(_OWORD *)(v4 + 24);
    v50 = *(_OWORD *)(v4 + 40);
    v51 = *(_QWORD *)(v4 + 56);
    a1 = *(_QWORD *)(*(_QWORD *)(v1 + 592) + 64LL);
    v44 = a1;
  }
  v5 = *(_DWORD *)(v2 + 112);
  if ( (v5 & 0x200) != 0 && (unsigned int)dword_140172178 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v10 = *(_QWORD *)(v8 + 128) + 1048LL;
      v22 = 16LL;
      v21 = v10;
      v23 = v7 + 160;
      v24 = 16LL;
      v15 = *(_DWORD *)(*(_QWORD *)(v8 + 128) + 56LL);
      v11 = -1LL;
      v25 = &v15;
      v12 = -1LL;
      v26 = 4LL;
      do
        ++v12;
      while ( *((_BYTE *)&v46 + v12) != (_BYTE)v9 );
      v29 = v9;
      v27 = &v46;
      v28 = v12 + 1;
      v13 = -1LL;
      do
        ++v13;
      while ( *((_BYTE *)&v49 + v13) != (_BYTE)v9 );
      v32 = v9;
      v31 = v13 + 1;
      v30 = &v49;
      do
        ++v11;
      while ( *((_BYTE *)&v44 + v11) != (_BYTE)v9 );
      v35 = v9;
      v33 = &v44;
      v37 = 4LL;
      v34 = v11 + 1;
      v16 = *(_DWORD *)(v7 + 56);
      v36 = &v16;
      v17 = *(unsigned __int16 *)(v7 + 654);
      v38 = &v17;
      v18 = *(_DWORD *)(v7 + 656);
      v40 = &v18;
      v19 = *(_DWORD *)(v7 + 660);
      v42 = &v19;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(v11, (unsigned __int8 *)dword_14016236E, v6, v7, 0xCu, &v20);
    }
  }
  return v5;
}
