/*
 * XREFs of ?XSetupFrameTypeInFilter@@_Y2PAGENPNP@@AXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140179E20
 * Callers:
 *     ?XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140033880 (-XNoteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

void __fastcall XSetupFrameTypeInFilter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  struct _NDIS_OPEN_BLOCK *v2; // rbx
  unsigned int FrameTypeArraySize; // edx
  unsigned int v5; // r10d
  __int64 v6; // r8
  unsigned int i; // esi
  unsigned int j; // r9d
  __int64 NumEntries; // r9
  _NDIS_FRAME_TYPE_AND_OPEN *v10; // rcx
  char v11; // [rsp+28h] [rbp-10h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      11,
      (struct _GUID *)&WPP_cfb1d228556e31bb75c9aaa9887f5d27_Traceguids,
      v11);
  }
  FrameTypeArraySize = v2->FrameTypeArraySize;
  if ( FrameTypeArraySize
    && (v5 = a1->FrameTypeRecord.NumEntries, v5 + FrameTypeArraySize >= FrameTypeArraySize)
    && v5 + FrameTypeArraySize < 0x10 )
  {
    v6 = 0LL;
    for ( i = 0; i < v5; ++i )
    {
      for ( j = 0; j < FrameTypeArraySize; ++j )
      {
        if ( v2->FrameTypeArray[j] == a1->FrameTypeRecord.Entry[i].Type )
          goto LABEL_10;
      }
    }
    do
    {
      NumEntries = a1->FrameTypeRecord.NumEntries;
      FrameTypeArraySize = v2->FrameTypeArray[v6];
      v10 = &a1->FrameTypeRecord.Entry[NumEntries];
      if ( (_WORD)FrameTypeArraySize == 8 && (_DWORD)NumEntries )
      {
        v10->Type = a1->FrameTypeRecord.Entry[0].Type;
        v10->Open = a1->FrameTypeRecord.Entry[0].Open;
        a1->FrameTypeRecord.Entry[0].Type = 8;
        a1->FrameTypeRecord.Entry[0].Open = v2;
      }
      else
      {
        v10->Type = FrameTypeArraySize;
        v10->Open = v2;
      }
      ++a1->FrameTypeRecord.NumEntries;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v2->FrameTypeArraySize );
    v2->FilterNextOpen = a1->FTypeOpenList;
    a1->FTypeOpenList = v2;
  }
  else
  {
LABEL_10:
    v2->FilterNextOpen = a1->NoFTypeOpenList;
    ++a1->NumNoETypeOpens;
    a1->NoFTypeOpenList = v2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(FrameTypeArraySize) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      FrameTypeArraySize,
      6,
      12,
      (struct _GUID *)&WPP_cfb1d228556e31bb75c9aaa9887f5d27_Traceguids,
      (char)v2);
  }
}
