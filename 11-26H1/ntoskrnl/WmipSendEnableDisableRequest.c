/*
 * XREFs of WmipSendEnableDisableRequest @ 0x140A0A3D0
 * Callers:
 *     WmipSendEnableRequest @ 0x140A0A1B0 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x140A0A320 (WmipDoDisableRequest.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0B87C (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0CDA0 (WmipEnableCollectionForNewGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140A0ED40 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(char a1, __int64 a2, char a3)
{
  int v6; // eax
  bool v7; // r13
  __int64 v8; // rbp
  int v9; // r14d
  _BYTE *Pool2; // rdi
  __int64 *i; // rbx
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // eax
  ULONG_PTR v15; // rcx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  _BYTE *v20; // rsi
  __int64 v21; // rbx
  _BYTE v24[16]; // [rsp+38h] [rbp-290h] BYREF
  _OWORD v25[3]; // [rsp+48h] [rbp-280h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-248h] BYREF

  memset_0(P, 0, sizeof(P));
  v6 = *(_DWORD *)(a2 + 16);
  memset(v25, 0, sizeof(v25));
  if ( (v6 & 1) != 0 )
    return 0LL;
  v7 = ((a1 - 4) & 0xFD) == 0;
  v8 = 0LL;
  v9 = a3 != 0 ? 0x2000 : 0x4000;
  if ( *(_DWORD *)(a2 + 36) > 0x40u )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  for ( i = *(__int64 **)(a2 + 56); i != (__int64 *)(a2 + 56) && (unsigned int)v8 < *(_DWORD *)(a2 + 36); i = (__int64 *)*i )
  {
    v12 = *((_DWORD *)i + 4);
    if ( (v12 & 0x1000) == 0 && (a3 || (v12 & 4) != 0) )
    {
      v13 = i[8];
      if ( (*(_DWORD *)(v13 + 16) & 0x20000000) == 0 )
      {
        v14 = v12 & v9;
        if ( v7 )
        {
          if ( !v14 )
          {
LABEL_12:
            v15 = i[8];
            *(_QWORD *)&Pool2[8 * v8] = v13;
            WmipReferenceEntry(v15);
            v8 = (unsigned int)(v8 + 1);
          }
        }
        else if ( v14 )
        {
          goto LABEL_12;
        }
        v16 = *((_DWORD *)i + 4);
        if ( v7 )
          v17 = v16 | v9;
        else
          v17 = v16 & ~v9;
        *((_DWORD *)i + 4) = v17;
        continue;
      }
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v8 )
  {
    v19 = *(_OWORD *)(a2 + 72);
    LODWORD(v25[0]) = 48;
    v20 = Pool2;
    *(_OWORD *)((char *)&v25[1] + 8) = v19;
    do
    {
      v21 = *(_QWORD *)v20;
      LOBYTE(v18) = a1;
      WmipSendWmiIrp(v18, *(unsigned int *)(*(_QWORD *)v20 + 56LL), (char *)&v25[1] + 8, 48LL, v25, v24);
      WmipUnreferenceEntry(&WmipDSChunkInfo, v21);
      v20 += 8;
      --v8;
    }
    while ( v8 );
  }
  if ( Pool2 != P )
    ExFreePoolWithTag(Pool2, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
