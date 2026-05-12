/*
 * XREFs of RaidUnlockContiguousPhysicalPagesList @ 0x1400465C4
 * Callers:
 *     RaUnitUnlockContiguousPhysicalPagesIoctl @ 0x1400A5FE4 (RaUnitUnlockContiguousPhysicalPagesIoctl.c)
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 * Callees:
 *     McTemplateK0quuujjzssszpq_EtwWriteTransfer @ 0x14005F168 (McTemplateK0quuujjzssszpq_EtwWriteTransfer.c)
 *     WPP_SF_Lq @ 0x140097DC8 (WPP_SF_Lq.c)
 *     WPP_SF_qqdqqL @ 0x140097ED4 (WPP_SF_qqdqqL.c)
 */

PSLIST_ENTRY __fastcall RaidUnlockContiguousPhysicalPagesList(__int64 a1, char *a2)
{
  union _SLIST_HEADER *v2; // rsi
  unsigned int v4; // ebp
  PSLIST_ENTRY result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  PSLIST_ENTRY v9; // rbx

  v2 = (union _SLIST_HEADER *)(a1 + 288);
  v4 = 0;
  for ( result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 288)); ; result = ExpInterlockedPopEntrySList(v2) )
  {
    v9 = result;
    if ( !result )
      break;
    ++v4;
    if ( a2 )
    {
      if ( (byte_140173443 & 0x40) != 0 )
        McTemplateK0quuujjzssszpq_EtwWriteTransfer(
          (_DWORD)a2 + 242,
          (_DWORD)a2 + 177,
          (_DWORD)a2 + 168,
          *(_DWORD *)(a1 + 56),
          a2[104],
          a2[105],
          a2[106],
          (__int64)(a2 + 2104),
          a1 + 5128,
          *(_QWORD *)(a1 + 4784),
          (__int64)(a2 + 168),
          (__int64)(a2 + 177),
          (__int64)(a2 + 242),
          *(_QWORD *)(a1 + 5144),
          *((_QWORD *)&result[1].Next + 1),
          (char)result[2].Next);
    }
    else if ( (byte_140173443 & 0x40) != 0 )
    {
      McTemplateK0quuujjzssszpq_EtwWriteTransfer(
        a1 + 5128,
        v7,
        v8,
        *(_DWORD *)(a1 + 56),
        0,
        0,
        0,
        0LL,
        a1 + 5128,
        *(_QWORD *)(a1 + 4784),
        0LL,
        0LL,
        0LL,
        *(_QWORD *)(a1 + 5144),
        *((_QWORD *)&result[1].Next + 1),
        (char)result[2].Next);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    {
      WPP_SF_qqdqqL(
        WPP_GLOBAL_Control->AttachedDevice,
        (unsigned int)*((__int16 *)&v9[1].Next->Next + 5),
        v9[1].Next,
        v9,
        v9[1].Next,
        *((__int16 *)&v9[1].Next->Next + 5),
        v2,
        *((_QWORD *)&v9[1].Next + 1),
        v9[2].Next);
    }
    MmUnlockPages((PMDL)v9[1].Next);
    IoFreeMdl((PMDL)v9[1].Next);
    MmUnmapIoSpace(*((PVOID *)&v9[1].Next + 1), LODWORD(v9[2].Next));
    ExFreePoolWithTag(v9, 0x504C6152u);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = (PSLIST_ENTRY)HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( ((unsigned __int8)result & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      return (PSLIST_ENTRY)WPP_SF_Lq(WPP_GLOBAL_Control->AttachedDevice, v7, v8, v4, v2);
  }
  return result;
}
