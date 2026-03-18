/*
 * XREFs of ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400B4CB8
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1400B0EA0 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x14022AAE0 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1400AE4E0 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1400B4E50 (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1400B4EA4 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::OpenChannel(struct _EPROCESS ***this)
{
  __int64 v2; // r9
  struct _EPROCESS **v3; // rdi
  struct _EPROCESS **v4; // rcx
  struct _EPROCESS *v5; // rbp
  __int64 v6; // rsi
  void *v7; // rax
  struct _EPROCESS **v8; // rcx
  bool v9; // cf
  char v10; // al
  int v11; // eax
  int v12; // eax
  DirectComposition::CConnection *v13; // rcx
  BOOL v14; // ecx
  int v15; // [rsp+20h] [rbp-18h]
  void *v16; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CBatchSharedMemoryPoolSet *)(this + 329),
    *this[5]);
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v3 = this[24];
  this[24] = (struct _EPROCESS **)*v3;
  *v3 = 0LL;
  *((_DWORD *)v3 + 5) = 5;
  v4 = this[334];
  v3[17] = (struct _EPROCESS *)this[333];
  v3[18] = (struct _EPROCESS *)v4;
  ++*((_DWORD *)this + 672);
  v5 = v3[18];
  v6 = *((_QWORD *)v3[17] + 7);
  *(_DWORD *)((char *)v5 + v6 + 16) = *((_DWORD *)this + 7);
  *(_DWORD *)((char *)v5 + v6 + 20) = *((_DWORD *)this + 684);
  *(_QWORD *)((char *)v5 + v6 + 24) = this[341];
  v7 = 0LL;
  v8 = this[29];
  v16 = 0LL;
  if ( v8 )
  {
    if ( (int)OpenDwmHandle(v8[1], (POBJECT_TYPE)ExEventObjectType, 2u, v2, v15, &v16) < 0 )
    {
      v7 = 0LL;
      v16 = 0LL;
    }
    else
    {
      v7 = v16;
    }
  }
  *(_QWORD *)((char *)v5 + v6 + 32) = v7;
  v9 = v16 != 0LL;
  *((_BYTE *)this + 267) = 0;
  v10 = *((_BYTE *)this + 265);
  ++*((_DWORD *)this + 102);
  *((_BYTE *)this + 265) = (v9 ? 0x10 : 0) | v10 & 0xEF;
  v11 = *((_DWORD *)this + 102);
  *((_BYTE *)v3 + 32) &= ~1u;
  *((_DWORD *)v3 + 4) = v11;
  v12 = *((_DWORD *)this + 102);
  v13 = (DirectComposition::CConnection *)this[5];
  ++*((_DWORD *)this + 63);
  *((_DWORD *)this + 103) = v12;
  DirectComposition::CConnection::PostBatch(
    v13,
    (struct DirectComposition::CBatch *)v3,
    (struct DirectComposition::CBatch *)v3);
  v14 = *((_BYTE *)this[5] + 253) != 0;
  *((_BYTE *)this + 264) |= 0x40u;
  *((_BYTE *)this + 48) |= 2u;
  *((_DWORD *)this + 673) = v14;
  *((_DWORD *)this + 6) = 0;
}
