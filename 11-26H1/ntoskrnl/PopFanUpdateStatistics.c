/*
 * XREFs of PopFanUpdateStatistics @ 0x140B6BA6C
 * Callers:
 *     PopFanSxEntry @ 0x14042474C (PopFanSxEntry.c)
 *     PopFanUpdateSpeed @ 0x1407DEFE0 (PopFanUpdateSpeed.c)
 *     PopFanReadFanNoiseInfo @ 0x140B1C7E8 (PopFanReadFanNoiseInfo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopFanFindBucketIndex @ 0x140B58448 (PopFanFindBucketIndex.c)
 */

void __fastcall PopFanUpdateStatistics(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int BucketIndex; // r8d
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-45h] BYREF
  __int64 v7; // [rsp+38h] [rbp-41h] BYREF
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+78h] [rbp-1h]
  __int64 *v13; // [rsp+80h] [rbp+7h]
  __int64 v14; // [rsp+88h] [rbp+Fh]
  __int64 *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  int *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  int *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]

  v2 = MEMORY[0xFFFFF78000000008];
  if ( !*(_BYTE *)(a1 + 200) )
  {
    if ( *(_QWORD *)(a1 + 208) )
    {
      BucketIndex = PopFanFindBucketIndex(a1, *(_DWORD *)(a1 + 84), 0LL, 0LL);
      *(_QWORD *)(a1 + 8LL * BucketIndex + 216) += v2 - *(_QWORD *)(a1 + 208);
      if ( (unsigned int)dword_140E07560 > 5 )
      {
        v6 = BucketIndex;
        v11 = &v7;
        v8 = *(_QWORD *)(a1 + 208);
        v7 = a1;
        v13 = &v8;
        v15 = &v9;
        v5 = *(_DWORD *)(a1 + 84);
        v17 = &v5;
        v19 = (int *)&v6;
        v12 = 8LL;
        v14 = 8LL;
        v9 = v2;
        v16 = 8LL;
        v18 = 4LL;
        v20 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07560,
          (unsigned __int8 *)byte_14004F413,
          0LL,
          v4,
          7u,
          &v10);
      }
    }
    *(_QWORD *)(a1 + 208) = v2;
  }
}
