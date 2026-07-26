/*
 * XREFs of ?ndisCaptureStackTrace@@YAKK@Z @ 0x140006C40
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x140007300 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140018A70 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1400263F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 * Callees:
 *     ?ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z @ 0x140006510 (-ndisExpandStackTrace@@YAEPEAPEAU_NDIS_STACK_TRACE@@PEAU_RTL_DYNAMIC_HASH_TABLE_CONTEXT@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 */

__int64 __fastcall ndisCaptureStackTrace()
{
  unsigned int v0; // esi
  USHORT v1; // ax
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // r9
  _DWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  KIRQL v8; // bp
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rax
  struct _NDIS_STACK_TRACE *v10; // rdi
  unsigned int v12; // r15d
  __int64 Pool2; // rax
  struct _NDIS_STACK_TRACE *v14; // [rsp+20h] [rbp-68h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+28h] [rbp-60h] BYREF
  _OWORD Buf2[2]; // [rsp+40h] [rbp-48h] BYREF

  v0 = 0;
  Context.Signature = 0LL;
  if ( !byte_14011E738 )
    return 0LL;
  *(_OWORD *)&Context.ChainHead = 0LL;
  v1 = RtlCaptureStackBackTrace(3u, 4u, (PVOID *)Buf2, 0LL);
  v2 = v1;
  v3 = 0;
  if ( !v1 )
    goto LABEL_3;
  v5 = Buf2;
  v4 = v2;
  v6 = v2;
  do
  {
    v3 ^= *v5;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  if ( v3 < 2 )
  {
LABEL_3:
    v3 = 2;
    v4 = v2;
  }
  v7 = v3 & 0x3FFFFFF;
  if ( (unsigned int)v2 < 4 )
    memset((char *)Buf2 + 8 * v4, 0, 8LL * (unsigned int)(4 - v2));
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisStackTraces);
  v9 = RtlLookupEntryHashTable(&HashTable, v7, &Context);
  v14 = (struct _NDIS_STACK_TRACE *)v9;
  v10 = (struct _NDIS_STACK_TRACE *)v9;
  if ( !v9 )
    goto LABEL_10;
  v12 = (LODWORD(v9[1].Linkage.Flink) >> 30) + 1;
  while ( v0 < v12 )
  {
    if ( !memcmp((char *)v10 + 32 * v0 + 32, Buf2, 0x20uLL) )
      goto LABEL_10;
    ++v0;
  }
  if ( ndisExpandStackTrace((_RTL_DYNAMIC_HASH_TABLE_ENTRY **)&v14, &Context, (unsigned __int64 *)Buf2) )
  {
    v10 = v14;
LABEL_10:
    if ( v10 )
    {
      *((_DWORD *)v10 + 6) ^= (*((_DWORD *)v10 + 6) ^ (*((_DWORD *)v10 + 6) + 1)) & 0x3FFFFFFF;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 64LL, 1802716238LL);
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 24) = 1;
        *(_OWORD *)(Pool2 + 32) = Buf2[0];
        *(_OWORD *)(Pool2 + 48) = Buf2[1];
        RtlInsertEntryHashTable(&HashTable, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Pool2, v7, &Context);
      }
      else
      {
        ++dword_14011E768;
        v7 = 1;
      }
    }
    if ( v8 != 0xFF )
      KeReleaseSpinLock(&ndisStackTraces, v8);
    return v7;
  }
  ++dword_14011E768;
  if ( v8 != 0xFF )
    KeReleaseSpinLock(&ndisStackTraces, v8);
  return 1LL;
}
