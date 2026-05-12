/*
 * XREFs of StorPortDeviceReady @ 0x140073B60
 * Callers:
 *     sub_1401B71B0 @ 0x1401B71B0 (sub_1401B71B0.c)
 * Callees:
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 */

char __fastcall StorPortDeviceReady(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // edi
  int v5; // ebp
  __int64 v6; // r14
  int *v7; // rsi
  int *v8; // rcx
  int *v9; // r9
  __int64 *v10; // rax
  char *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+40h] [rbp-38h]
  int *v16; // [rsp+48h] [rbp-30h] BYREF
  int *v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  HIBYTE(v15) = 0;
  v4 = a3;
  v5 = a2;
  v6 = a4;
  sub_1400273F0(a1, &v16, &v17);
  v7 = v16;
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v8 = v17;
    v9 = v17;
    if ( v16 )
    {
      v9 = v16;
      v8 = v16;
    }
    sub_14000FB90((__int64)v8, 21, retaddr, (__int64)v9, 0LL, v6 | ((v4 | (unsigned int)(v5 << 8)) << 8), 0LL);
  }
  if ( v7 )
  {
    LOBYTE(v15) = v5;
    BYTE1(v15) = v4;
    BYTE2(v15) = v6;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x20) != 0
      && BYTE1(off_140168120->Timer) >= 3u )
    {
      LODWORD(v14) = v6;
      LODWORD(v13) = v4;
      sub_140067F78((__int64)off_140168120->AttachedDevice, 0x14u, (__int64)&unk_140149070, v5, v13, v14);
    }
    v10 = sub_14001F350((__int64)v7, v15);
    if ( v10 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)v10 + 420, 134684676, 134684677) == 134684677
        && v10 != (__int64 *)-1664LL )
      {
        v11 = (char *)(v16 + 252);
        *((_DWORD *)v10 + 424) = 10;
        *((_DWORD *)v10 + 425) = v15;
        sub_14000F5E0(v11, (struct _SLIST_ENTRY *)v10 + 104);
        return 1;
      }
      _InterlockedIncrement(&dword_1401688B8);
      if ( (qword_140168458 & 0x800) != 0 )
        sub_14000FB90((__int64)v16, 22, retaddr, 1008LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
