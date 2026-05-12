/*
 * XREFs of sub_14001B35C @ 0x14001B35C
 * Callers:
 *     sub_14001C020 @ 0x14001C020 (sub_14001C020.c)
 *     sub_140065044 @ 0x140065044 (sub_140065044.c)
 *     sub_1400A1750 @ 0x1400A1750 (sub_1400A1750.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_14001E2C0 @ 0x14001E2C0 (sub_14001E2C0.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140030070 @ 0x140030070 (sub_140030070.c)
 *     sub_140036A1C @ 0x140036A1C (sub_140036A1C.c)
 *     sub_140043488 @ 0x140043488 (sub_140043488.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14001B35C(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r8d
  unsigned int v15; // r8d
  char v16; // cl
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // eax
  char v28; // [rsp+28h] [rbp-D8h]
  char v29; // [rsp+28h] [rbp-D8h]
  char v30; // [rsp+28h] [rbp-D8h]
  _BYTE Dst[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-C8h]
  _BYTE *v33; // [rsp+50h] [rbp-B0h]
  __int16 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-70h] BYREF
  __int128 v37; // [rsp+98h] [rbp-68h]
  _OWORD v38[6]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+110h] [rbp+10h]
  int v40; // [rsp+118h] [rbp+18h]
  _QWORD *v41; // [rsp+120h] [rbp+20h]

  memset_0(Dst, 0, 0x60uLL);
  result = sub_14001D220(a1, a2, Dst);
  if ( (int)result < 0 )
    return result;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && _bittest((const signed __int32 *)&off_140168120->Timer + 1, 0xEu)
    && BYTE1(off_140168120->Timer) >= 5u )
  {
    sub_140067F78(off_140168120->AttachedDevice, 10LL, &unk_14014B290, Dst[4], Dst[5], Dst[6]);
  }
  v5 = sub_14001E2C0((unsigned int)&unk_1401482E0, (_DWORD)a1, a2, (unsigned int)Dst, 36, v28);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && _bittest((const signed __int32 *)&off_140168120->Timer + 1, 0xEu)
    && BYTE1(off_140168120->Timer) >= 5u )
  {
    sub_140055BD4(off_140168120->AttachedDevice, 11LL, &unk_14014B290, (unsigned int)v5);
  }
  if ( v5 < 0 )
    goto LABEL_58;
  v6 = sub_14001E2C0((unsigned int)&unk_140148330, (_DWORD)a1, a2, (unsigned int)Dst, 255, v29);
  v5 = v6;
  if ( v6 != -1073741801 && v6 != -1073741670 )
  {
    if ( (Dst[0] & 1) == 0
      || (v7 = sub_14001E2C0((unsigned int)&unk_140148340, (_DWORD)a1, a2, (unsigned int)Dst, 255, v30),
          v5 = v7,
          v7 != -1073741801)
      && v7 != -1073741670 )
    {
      if ( (Dst[0] & 2) == 0
        || (v8 = sub_14001E2C0((unsigned int)&unk_1401482F0, (_DWORD)a1, a2, (unsigned int)Dst, 255, v30),
            v5 = v8,
            v8 != -1073741801)
        && v8 != -1073741670 )
      {
        if ( !byte_1401688B4 && ((*v33 & 0x1F) == 0 || (*v33 & 0x1F) == 0x14) )
        {
          v9 = (unsigned __int8)v33[4];
          if ( (unsigned __int8)v9 >= 0x37u )
          {
            v10 = v9 + 5;
            if ( (unsigned __int64)(v9 + 5) > 0xFF )
              v10 = 255;
            sub_14001E2C0((unsigned int)&unk_140148310, (_DWORD)a1, a2, (unsigned int)Dst, v10, v30);
          }
        }
        if ( (Dst[0] & 4) != 0 )
        {
          sub_14001E2C0((unsigned int)&unk_140148320, (_DWORD)a1, a2, (unsigned int)Dst, 572, v30);
LABEL_36:
          v16 = *v33 & 0x1F;
          if ( v16 == 20 )
          {
            v34 |= 2u;
          }
          else if ( !v16 && (Dst[0] & 0x18) == 0x18 )
          {
            sub_14001E2C0((unsigned int)&unk_140148300, (_DWORD)a1, a2, (unsigned int)Dst, 64, v30);
          }
          if ( (unsigned int)sub_1400567A0() )
          {
            if ( v32 )
            {
              if ( qword_140169290 != &qword_140169290 )
              {
                if ( (unsigned __int8)sub_1400215B0(v32, 16LL) )
                {
                  v17 = *a1;
                  v36 = 24LL;
                  v37 = (unsigned __int64)(v32 + 12);
                  v5 = sub_140021760(v17 + 376, 16LL, &v36);
                  if ( v5 >= 0 )
                  {
                    v18 = *((_QWORD *)&v37 + 1);
                    v32[450] = *((_QWORD *)&v37 + 1);
                    if ( v18 )
                    {
                      v19 = *(_QWORD *)(v18 + 104);
                      if ( v19 )
                      {
                        v20 = v32[1];
                        if ( v20 )
                        {
                          v21 = *(unsigned __int8 *)(v19 + 5);
                          if ( v21 > *(_DWORD *)(v20 + 152) )
                            *(_DWORD *)(v20 + 152) = v21;
                          v22 = *(unsigned __int8 *)(*(_QWORD *)(v18 + 104) + 5LL);
                          v23 = v32[3];
                          if ( v22 > *(_DWORD *)(v23 + 432) )
                            *(_DWORD *)(v23 + 432) = v22;
                        }
                      }
                      v24 = *(_QWORD *)(v18 + 104);
                      if ( v24 )
                      {
                        v25 = *(_DWORD *)(v24 + 8);
                        if ( v25 )
                        {
                          v26 = v32[3];
                          v27 = *(_DWORD *)(v26 + 408);
                          if ( v27 >= v25 )
                            v27 = v25;
                          *(_DWORD *)(v26 + 408) = v27;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_58:
          sub_140043488(a1, Dst);
          goto LABEL_59;
        }
        if ( !v32 || !(unsigned __int8)sub_1400215B0(v32, 11LL) )
          goto LABEL_36;
        memset_0((char *)v38 + 8, 0, 0x68uLL);
        v11 = *a1 + 376;
        v41 = v32 + 12;
        *(_QWORD *)&v38[0] = 0x7800000002LL;
        v5 = sub_140021760(v11, 11LL, v38);
        if ( v5 < 0 )
        {
          v12 = *a1 + 376;
          *(_QWORD *)&v38[0] = 0x6C00000001LL;
          v5 = sub_140021760(v12, 11LL, v38);
          if ( v5 < 0 )
          {
            v5 = 0;
            goto LABEL_36;
          }
        }
        v13 = sub_1400143E0(64LL, 108LL, 842096978LL, *(_QWORD *)(*a1 + 8));
        v35 = v13;
        if ( v13 )
        {
          *(_OWORD *)v13 = v38[0];
          *(_OWORD *)(v13 + 16) = v38[1];
          *(_OWORD *)(v13 + 32) = v38[2];
          *(_OWORD *)(v13 + 48) = v38[3];
          *(_OWORD *)(v13 + 64) = v38[4];
          *(_OWORD *)(v13 + 80) = v38[5];
          *(_QWORD *)(v13 + 96) = v39;
          *(_DWORD *)(v13 + 104) = v40;
          sub_140036A1C(v35 + 8, 17LL);
          sub_140036A1C(v35 + 25, (unsigned int)(v14 + 48));
          sub_140036A1C(v35 + 90, v15);
          goto LABEL_36;
        }
        v5 = -1073741801;
      }
    }
  }
LABEL_59:
  sub_140030070(a1, Dst);
  if ( v5 != -1073741801 && v5 != -1073741670 )
    return 0;
  return (unsigned int)v5;
}
