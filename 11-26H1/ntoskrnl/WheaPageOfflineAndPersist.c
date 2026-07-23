/*
 * XREFs of WheaPageOfflineAndPersist @ 0x14084E5CC
 * Callers:
 *     WheapWmiExecuteMethod @ 0x1406DC8E8 (WheapWmiExecuteMethod.c)
 * Callees:
 *     WheaAttemptRowOffline @ 0x1406D9BC0 (WheaAttemptRowOffline.c)
 *     WheaGetNotifyAllOfflinesPolicy @ 0x1406D9E70 (WheaGetNotifyAllOfflinesPolicy.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WheapAttemptPhysicalPageOffline @ 0x14084EAA0 (WheapAttemptPhysicalPageOffline.c)
 *     WheapOfflinePage @ 0x14084F0B4 (WheapOfflinePage.c)
 *     WheapOfflineRow @ 0x14084F20C (WheapOfflineRow.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaPageOfflineAndPersist(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int8 v2; // al
  void *Pool2; // rbp
  int v6; // r9d
  char v7; // al
  char v8; // cl
  int v9; // ecx
  __int128 v10; // xmm1
  unsigned int v11; // eax
  unsigned int v12; // r14d
  int v13; // r9d
  unsigned int v14; // r15d
  __int64 v15; // rbx
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  __int128 v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+60h] [rbp-28h]

  v18 = 0;
  v1 = 0;
  v2 = *(_BYTE *)(a1 + 56);
  v16 = 0LL;
  v17 = 0LL;
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 2) != 0 )
      return (unsigned int)-1073741811;
LABEL_6:
    if ( v2 >= 8u )
      return (unsigned int)-1073741811;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v7 = *(_BYTE *)(a1 + 56);
    v8 = v7 & 1;
    if ( (v7 & 2) != 0 )
    {
      if ( !v8 )
      {
        v9 = *(_DWORD *)(a1 + 52);
        v18 = v9;
        v10 = *(_OWORD *)(a1 + 36);
        v16 = *(_OWORD *)(a1 + 20);
        v17 = v10;
        if ( !v9 )
          goto LABEL_14;
        if ( v9 == 1 )
          goto LABEL_17;
        if ( (unsigned int)(v9 - 2) <= 1 )
        {
LABEL_14:
          if ( ((v9 - 1) & 0xFFFFFFFD) != 0 )
          {
            if ( (v9 & 0xFFFFFFFD) != 0 )
            {
LABEL_30:
              ExFreePoolWithTag(Pool2, 0x61656857u);
              return v1;
            }
            v11 = WheapOfflinePage(&v16, Pool2);
LABEL_18:
            v1 = v11;
            goto LABEL_30;
          }
LABEL_17:
          v11 = WheapOfflineRow(&v16, Pool2);
          goto LABEL_18;
        }
LABEL_29:
        v1 = -1073741811;
        goto LABEL_30;
      }
    }
    else if ( !v8 )
    {
      goto LABEL_29;
    }
    if ( (v7 & 6) == 4 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      if ( v12 == 1 )
      {
        LOBYTE(v6) = 1;
        WheapAttemptPhysicalPageOffline(*(_QWORD *)(a1 + 8), *(__int64 *)(a1 + 8) >> 12, 0, v6, 0, 0, 0, (__int64)Pool2);
      }
      else if ( WheaGetNotifyAllOfflinesPolicy() && *(_BYTE *)off_140E09638 )
      {
        WheaAttemptRowOffline(*(__int64 *)(a1 + 8) >> 12, 0LL, v12, (__int64)Pool2);
      }
      else
      {
        v14 = 0;
        v15 = *(__int64 *)(a1 + 8) >> 12;
        if ( v12 )
        {
          do
          {
            LOBYTE(v13) = 1;
            WheapAttemptPhysicalPageOffline((_DWORD)v15 << 12, v15, 0, v13, 0, 0, 0, (__int64)Pool2);
            LODWORD(v15) = v15 + 1;
            ++v14;
          }
          while ( v14 < *(_DWORD *)(a1 + 16) );
        }
      }
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( (v2 & 2) != 0 )
    goto LABEL_6;
  return (unsigned int)-1073741811;
}
