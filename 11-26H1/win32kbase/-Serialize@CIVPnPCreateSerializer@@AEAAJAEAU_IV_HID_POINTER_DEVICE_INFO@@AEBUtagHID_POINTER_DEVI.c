/*
 * XREFs of ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x140225C8C
 * Callers:
 *     ?Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z @ 0x140226580 (-Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x14018673C (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEBUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x14022634C (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEBUtagHPD_CALIBRATION_INF.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEBU_HIDP_LINK_COLLECTION_NODE@@K_K_N@Z @ 0x140226494 (-Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEBU_HIDP_LINK_COL.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x14022663C (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1402266D4 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall CIVPnPCreateSerializer::Serialize(
        CIVPnPCreateSerializer *this,
        struct _IV_HID_POINTER_DEVICE_INFO *a2,
        const struct tagHID_POINTER_DEVICE_INFO *a3,
        bool a4)
{
  _WORD *v5; // rcx
  __int16 *v8; // rdx
  __int64 v10; // r8
  __int16 v11; // ax
  int v12; // ecx
  const struct tagHPD_CALIBRATION_INFO *v13; // r8
  _DWORD *v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // edx
  unsigned int v22; // r9d
  __int64 v23; // r10
  __int64 v24; // r11
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  __int64 v27; // r10
  __int64 v28; // rdx

  *(_DWORD *)a2 = *((_DWORD *)a3 + 6);
  v5 = (_WORD *)((char *)a2 + 8);
  v8 = (__int16 *)((char *)a3 + 30);
  v10 = 6LL;
  do
  {
    *(v5 - 2) = *(v8 - 1);
    v11 = *v8;
    v8 += 8;
    *v5 = v11;
    v5 += 10;
    *((_DWORD *)v5 - 4) = *(_DWORD *)(v8 - 7);
    *((_DWORD *)v5 - 3) = *(_DWORD *)(v8 - 5);
    *((_DWORD *)v5 - 2) = *(_DWORD *)(v8 - 3);
    --v10;
  }
  while ( v10 );
  *(_OWORD *)((char *)a2 + 124) = *(_OWORD *)((char *)a3 + 124);
  *(_OWORD *)((char *)a2 + 140) = *(_OWORD *)((char *)a3 + 140);
  *((_DWORD *)a2 + 39) = *((_DWORD *)a3 + 39);
  *((_OWORD *)a2 + 10) = *((_OWORD *)a3 + 10);
  *((_OWORD *)a2 + 11) = *((_OWORD *)a3 + 11);
  *((_OWORD *)a2 + 12) = *((_OWORD *)a3 + 12);
  *((_OWORD *)a2 + 13) = *((_OWORD *)a3 + 13);
  *((_DWORD *)a2 + 56) = *((_DWORD *)a3 + 56);
  *((_DWORD *)a2 + 59) = *((_DWORD *)a3 + 67);
  *((_DWORD *)a2 + 60) = *((_DWORD *)a3 + 68);
  *((_DWORD *)a2 + 61) = *((_DWORD *)a3 + 69);
  *((_DWORD *)a2 + 62) = *((_DWORD *)a3 + 70);
  *((_DWORD *)a2 + 63) = *((_DWORD *)a3 + 71);
  *((_DWORD *)a2 + 64) = *((_DWORD *)a3 + 72);
  *((_DWORD *)a2 + 65) = *((_DWORD *)a3 + 73);
  *((_DWORD *)a2 + 66) = *((_DWORD *)a3 + 74);
  *((_DWORD *)a2 + 67) = *((_DWORD *)a3 + 75);
  *((_DWORD *)a2 + 68) = *((_DWORD *)a3 + 76);
  *((_DWORD *)a2 + 69) = *((_DWORD *)a3 + 77);
  *((_DWORD *)a2 + 70) = *((_DWORD *)a3 + 78);
  *(_OWORD *)((char *)a2 + 284) = *(_OWORD *)((char *)a3 + 316);
  *(_OWORD *)((char *)a2 + 300) = *(_OWORD *)((char *)a3 + 332);
  *(_OWORD *)((char *)a2 + 316) = *(_OWORD *)((char *)a3 + 348);
  *((_DWORD *)a2 + 84) = *((_DWORD *)a3 + 92) & 1;
  *((_DWORD *)a2 + 85) = (*((_DWORD *)a3 + 92) & 2u) >> 1;
  *((_DWORD *)a2 + 86) = (*((_DWORD *)a3 + 92) & 4u) >> 2;
  *((_DWORD *)a2 + 87) = (*((_DWORD *)a3 + 92) & 8u) >> 3;
  *((_DWORD *)a2 + 88) = (*((_DWORD *)a3 + 92) & 0x10u) >> 4;
  *((_DWORD *)a2 + 89) = (*((_DWORD *)a3 + 92) & 0x20u) >> 5;
  *((_DWORD *)a2 + 90) = (*((_DWORD *)a3 + 92) & 0x40u) >> 6;
  *((_DWORD *)a2 + 91) = (*((_DWORD *)a3 + 92) & 0x80u) >> 7;
  *((_DWORD *)a2 + 92) = (*((_DWORD *)a3 + 92) & 0x100u) >> 8;
  *((_DWORD *)a2 + 93) = (*((_DWORD *)a3 + 92) & 0x200u) >> 9;
  *((_DWORD *)a2 + 94) = (*((_DWORD *)a3 + 92) & 0x400u) >> 10;
  *((_DWORD *)a2 + 95) = (*((_DWORD *)a3 + 92) & 0x800u) >> 11;
  *((_DWORD *)a2 + 96) = (*((_DWORD *)a3 + 92) & 0x1000u) >> 12;
  *((_DWORD *)a2 + 83) = *((_DWORD *)a3 + 91);
  *((_DWORD *)a2 + 97) = (*((_DWORD *)a3 + 92) & 0x2000u) >> 13;
  *((_DWORD *)a2 + 98) = (*((_DWORD *)a3 + 92) & 0x4000u) >> 14;
  *((_DWORD *)a2 + 99) = (*((_DWORD *)a3 + 92) & 0x8000u) >> 15;
  v12 = CIVSerializer::Serialize(
          this,
          (struct _UNICODE_STRING *)a2 + 25,
          (const struct _UNICODE_STRING *)((char *)a3 + 376),
          a4);
  if ( v12 >= 0 )
  {
    *((_QWORD *)a2 + 52) = *((unsigned int *)a3 + 98);
    v13 = (const struct tagHPD_CALIBRATION_INFO *)*((_QWORD *)a3 + 50);
    if ( v13 )
    {
      v12 = CIVPnPCreateSerializer::Serialize(this, (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 424), v13, a4);
      if ( v12 < 0 )
        return (unsigned int)v12;
      *((_DWORD *)a2 + 105) = 1;
    }
    v14 = (_DWORD *)((char *)a2 + 516);
    v15 = 6LL;
    v16 = (_DWORD *)((char *)a3 + 412);
    do
    {
      *((_WORD *)v14 - 2) = *((_WORD *)v16 - 2);
      v17 = *v16;
      v16 += 15;
      *v14 = v17;
      v14 += 16;
      *((_WORD *)v14 - 30) = *((_WORD *)v16 - 28);
      *((_WORD *)v14 - 28) = *((_WORD *)v16 - 27);
      *((_WORD *)v14 - 26) = *((_WORD *)v16 - 26);
      *(v14 - 12) = *(v16 - 12);
      *((_WORD *)v14 - 22) = *((_WORD *)v16 - 22);
      *(v14 - 10) = *(v16 - 10);
      *(v14 - 9) = *(v16 - 9);
      *(v14 - 8) = *(v16 - 8);
      *(v14 - 7) = *(v16 - 7);
      *(v14 - 6) = *(v16 - 6);
      *(v14 - 5) = *(v16 - 5);
      *(v14 - 4) = *(v16 - 4);
      *(v14 - 3) = *(v16 - 3);
      *((_WORD *)v14 - 4) = *((_WORD *)v16 - 4);
      --v15;
    }
    while ( v15 );
    *((_DWORD *)a2 + 224) = 0;
    v18 = *((_QWORD *)a3 + 96);
    if ( v18 )
    {
      *((_DWORD *)a2 + 226) = *(_DWORD *)v18;
      *((_WORD *)a2 + 454) = *(_WORD *)(v18 + 4);
      *((_WORD *)a2 + 456) = *(_WORD *)(v18 + 6);
      *((_WORD *)a2 + 458) = *(_WORD *)(v18 + 8);
      *((_WORD *)a2 + 460) = *(_WORD *)(v18 + 10);
      *((_DWORD *)a2 + 231) = *(_DWORD *)(v18 + 12);
      v12 = CIVPnPCreateSerializer::Serialize(
              this,
              (struct _IV_HIDP_LINK_COLLECTION_NODE **)a2 + 116,
              *(const struct _HIDP_LINK_COLLECTION_NODE **)(v18 + 16),
              *(_DWORD *)(v18 + 12),
              48LL * *(unsigned int *)(v18 + 12),
              a4);
      if ( v12 < 0 )
        return (unsigned int)v12;
      *((_DWORD *)a2 + 234) = *(_DWORD *)(v18 + 32) & 1;
      *((_DWORD *)a2 + 235) = *(_DWORD *)(v18 + 36);
      *((_DWORD *)a2 + 224) = 1;
    }
    *((_DWORD *)a2 + 236) = *((_DWORD *)a3 + 194);
    *((_DWORD *)a2 + 237) = *((_DWORD *)a3 + 195);
    *((_WORD *)a2 + 476) = *((_WORD *)a3 + 392);
    *((_DWORD *)a2 + 239) = *((_DWORD *)a3 + 200);
    *((_QWORD *)a2 + 120) = *((_QWORD *)a3 + 101);
    *((_DWORD *)a2 + 242) = *((_DWORD *)a3 + 204);
    v12 = CIVSerializer::Serialize(
            this,
            (void **)a2 + 122,
            *((void *const *)a3 + 103),
            2LL * *((unsigned int *)a3 + 262),
            a4);
    if ( v12 >= 0 )
    {
      *((_BYTE *)a2 + 984) = *((_BYTE *)a3 + 832);
      *((_DWORD *)a2 + 248) = *((_DWORD *)a3 + 210);
      *((_DWORD *)a2 + 249) = *((_DWORD *)a3 + 211);
      *((_DWORD *)a2 + 250) = *((_DWORD *)a3 + 212);
      *((_DWORD *)a2 + 251) = *((_DWORD *)a3 + 213);
      *((_DWORD *)a2 + 252) = *((_DWORD *)a3 + 214);
      *((_DWORD *)a2 + 253) = *((_DWORD *)a3 + 215);
      *((_DWORD *)a2 + 254) = *((_DWORD *)a3 + 216);
      *((_DWORD *)a2 + 255) = *((_DWORD *)a3 + 217);
      *((_QWORD *)a2 + 128) = *((_QWORD *)a3 + 109);
      *((_QWORD *)a2 + 129) = *((_QWORD *)a3 + 110);
      *((_DWORD *)a2 + 260) = *((_DWORD *)a3 + 222) & 1;
      *((_DWORD *)a2 + 262) = *((_DWORD *)a3 + 224);
      v12 = CIVSerializer::Serialize(
              this,
              (struct _UNICODE_STRING *)a2 + 66,
              (const struct _UNICODE_STRING *)((char *)a3 + 904),
              a4);
      if ( v12 >= 0 )
      {
        *((_WORD *)a2 + 540) = *((_WORD *)a3 + 472);
        *((_DWORD *)a2 + 271) = *((_DWORD *)a3 + 237);
        *((_QWORD *)a2 + 136) = *((_QWORD *)a3 + 119);
        *((_DWORD *)a2 + 274) = *((_DWORD *)a3 + 240);
        *((_DWORD *)a2 + 275) = *((_DWORD *)a3 + 241);
        v19 = *((_DWORD *)a3 + 6);
        if ( v19 == 6 || v19 == 5 )
          v20 = *((_DWORD *)a3 + 262);
        else
          v20 = *((_DWORD *)a3 + 194);
        v21 = (12 * v20 + 7) & 0xFFFFFFF8;
        if ( a4 )
        {
          *((_DWORD *)this + 2) += v21;
        }
        else
        {
          if ( !CIVSerializer::Ensure(this, v21) )
            return (unsigned int)-1073741801;
          v25 = v24 + *((_QWORD *)this + 2);
          *((_QWORD *)a2 + 138) = v25;
          if ( v22 )
          {
            v26 = (_DWORD *)(v25 + 4);
            v27 = v23 - v25;
            v28 = v22;
            do
            {
              *(v26 - 1) = *(_DWORD *)((char *)v26 + v27 - 4);
              *v26 = *(_DWORD *)((char *)v26 + v27);
              v26[1] = *(_DWORD *)((char *)v26 + v27 + 4);
              v26 += 3;
              --v28;
            }
            while ( v28 );
          }
          *((_QWORD *)a2 + 138) = (*((_QWORD *)a2 + 138) - *((_QWORD *)this + 2)) | 1LL;
        }
        v12 = 0;
        *((_DWORD *)a2 + 279) = *((_DWORD *)a3 + 262);
      }
    }
  }
  return (unsigned int)v12;
}
