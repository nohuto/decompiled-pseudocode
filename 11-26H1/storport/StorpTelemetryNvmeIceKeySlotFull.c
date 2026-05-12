/*
 * XREFs of StorpTelemetryNvmeIceKeySlotFull @ 0x1400BE190
 * Callers:
 *     RaidAcquireNvmeIceKeyResources @ 0x140058BB4 (RaidAcquireNvmeIceKeyResources.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryNvmeIceKeySlotFull(__int64 a1, int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // rcx
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  char v10; // [rsp+32h] [rbp-CEh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  char *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  char *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  char *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 4);
    if ( !v3 || (a1 = MEMORY[0xFFFFF78000000014] - v3, MEMORY[0xFFFFF78000000014] - v3 >= 864000000000LL) )
    {
      *((_QWORD *)a2 + 4) = MEMORY[0xFFFFF78000000014];
      if ( (unsigned int)dword_140172178 > 5 )
      {
        if ( tlgKeywordOn(a1, 0x400000000000LL) )
        {
          v7 = *(_QWORD *)(v5 + 24);
          v17 = 16LL;
          v19 = 16LL;
          v16 = v7 + 5128;
          v18 = v5 + 2104;
          v11 = *(_DWORD *)(v7 + 56);
          v20 = &v11;
          v8 = *(_BYTE *)(v5 + 104);
          v22 = &v8;
          v9 = *(_BYTE *)(v5 + 105);
          v24 = &v9;
          v10 = *(_BYTE *)(v5 + 106);
          v26 = &v10;
          v12 = *a2;
          v28 = &v12;
          v30 = &v13;
          v14 = a2[7];
          v32 = &v14;
          v21 = 4LL;
          v23 = 1LL;
          v25 = 1LL;
          v27 = 1LL;
          v29 = 4LL;
          v13 = v6;
          v31 = 4LL;
          v33 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(v7, (unsigned __int8 *)dword_1401609EA, v4, v5, 0xBu, &v15);
        }
      }
      a2[7] = 0;
    }
  }
}
