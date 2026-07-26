/*
 * XREFs of ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016770
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140010D10 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400126D0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140014040 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140014610 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     NdisFreeRefCount @ 0x14001B450 (NdisFreeRefCount.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140027820 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140016890 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 */

ULONG __fastcall ndisGetAnyActiveRefTag(struct NDIS_REFCOUNT_HANDLE__ *a1)
{
  struct _NDIS_REFCOUNT_BLOCK *v1; // rax
  struct _NDIS_REFCOUNT_BLOCK *v2; // rdi
  int Type; // eax
  __int64 v4; // rbx
  ULONG result; // eax
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // rax
  unsigned int i; // ebx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)a1);
  v2 = v1;
  if ( !v1 )
    return -2;
  Type = v1->Type;
  if ( Type )
  {
    if ( Type == 1 )
    {
      for ( i = 0; i < v2->NumRefTags; ++i )
      {
        if ( ((*((_DWORD *)&v2->RefWithStack[i] + 14) >> 1) & 0x7FFF) != *((_DWORD *)&v2->RefWithStack[i] + 14) >> 17 )
          return i;
      }
    }
  }
  else
  {
    BitMapHeader.SizeOfBitMap = v2->NumRefTags;
    v4 = 0LL;
    *(&BitMapHeader.SizeOfBitMap + 1) = 0;
    BitMapHeader.Buffer = v2->TaggedRefCounts.RefMask;
    result = RtlFindSetBits(&BitMapHeader, 1u, 0);
    if ( result != -1 )
      return result;
    while ( (unsigned int)v4 < v2->NumOverflowTaggedEntries )
    {
      Tags = v2->TaggedRefCounts.Tags;
      if ( Tags[v4].RefCount )
        return Tags[v4].Tag;
      v4 = (unsigned int)(v4 + 1);
    }
  }
  result = -2;
  if ( (v2->Flags & 2) != 0 )
    return 255;
  return result;
}
