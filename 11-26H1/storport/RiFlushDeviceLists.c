/*
 * XREFs of RiFlushDeviceLists @ 0x1400232C0
 * Callers:
 *     RaidStartNextIoPacket @ 0x140018C10 (RaidStartNextIoPacket.c)
 *     RiFastInsertDeviceQueue @ 0x140023B9C (RiFastInsertDeviceQueue.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RiFlushDeviceLists(union _SLIST_HEADER *a1)
{
  __int128 *v2; // rax
  union _SLIST_HEADER *v3; // rbx
  ULONG v4; // r9d
  struct _SLIST_ENTRY *v5; // r10
  struct _SLIST_ENTRY *v6; // r8
  _QWORD *Alignment; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  PSLIST_ENTRY v11; // rax
  __int64 v12; // rdx
  struct _SLIST_ENTRY *Next; // r8
  char *v14; // rcx
  union _SLIST_HEADER *v15; // rdx
  __int128 **Region; // rcx
  union _SLIST_HEADER **v17; // rax
  __int128 v19; // [rsp+20h] [rbp-18h] BYREF

  v19 = 0LL;
  LOWORD(v2) = ExQueryDepthSList(a1 + 6);
  if ( (_WORD)v2 )
  {
    *((_QWORD *)&v19 + 1) = &v19;
    *(_QWORD *)&v19 = &v19;
    v11 = ExpInterlockedFlushSList(a1 + 6);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = v19;
        Next = v11->Next;
        v14 = (char *)(&v11[-1].Next + 1);
        if ( *(__int128 **)(v19 + 8) != &v19 )
          break;
        *(_QWORD *)v14 = v19;
        v11->Next = (_SLIST_ENTRY *)&v19;
        v11 = Next;
        *(_QWORD *)(v12 + 8) = v14;
        *(_QWORD *)&v19 = v14;
        v14[20] &= ~2u;
        if ( !Next )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      v2 = &v19;
      if ( (__int128 *)v19 == &v19 )
        goto LABEL_2;
      v15 = a1 + 8;
      if ( *(union _SLIST_HEADER **)(a1[8].Alignment + 8) == &a1[8] )
      {
        Region = (__int128 **)a1[8].Region;
        if ( *Region == (__int128 *)v15 && *(__int128 **)(v19 + 8) == &v19 && **((__int128 ***)&v19 + 1) == &v19 )
        {
          *Region = &v19;
          v17 = (union _SLIST_HEADER **)*((_QWORD *)&v19 + 1);
          a1[8].Region = *((_QWORD *)&v19 + 1);
          *v17 = v15;
          v2 = (__int128 *)v19;
          *((_QWORD *)&v19 + 1) = Region;
          if ( *(__int128 **)(v19 + 8) == &v19 && *Region == &v19 )
          {
            *Region = (__int128 *)v19;
            *((_QWORD *)v2 + 1) = Region;
            goto LABEL_2;
          }
        }
      }
    }
LABEL_26:
    __fastfail(3u);
  }
LABEL_2:
  v3 = a1 + 8;
  if ( (union _SLIST_HEADER *)v3->Alignment != v3 )
  {
    LOWORD(v2) = ExQueryDepthSList(a1 + 7);
    if ( !(_WORD)v2 )
    {
      v4 = 0;
      v5 = 0LL;
      v6 = 0LL;
      while ( 1 )
      {
        Alignment = (_QWORD *)v3->Alignment;
        if ( (union _SLIST_HEADER *)v3->Alignment == v3 || v4 >= 0x40 )
          break;
        v8 = *Alignment;
        if ( *(_QWORD **)(*Alignment + 8LL) != Alignment )
          goto LABEL_26;
        v9 = (_QWORD *)Alignment[1];
        if ( (_QWORD *)*v9 != Alignment )
          goto LABEL_26;
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *((_BYTE *)Alignment + 20) |= 2u;
        v10 = ((unsigned __int64)Alignment + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v6 )
          v6->Next = (_SLIST_ENTRY *)v10;
        else
          v5 = (struct _SLIST_ENTRY *)v10;
        v6 = (struct _SLIST_ENTRY *)v10;
        ++v4;
      }
      v6->Next = 0LL;
      LOWORD(v2) = (unsigned __int16)InterlockedPushListSList(a1 + 7, v5, v6, v4);
    }
  }
  return (__int16)v2;
}
