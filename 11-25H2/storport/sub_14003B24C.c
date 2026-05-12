/*
 * XREFs of sub_14003B24C @ 0x14003B24C
 * Callers:
 *     sub_14009D244 @ 0x14009D244 (sub_14009D244.c)
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 * Callees:
 *     sub_14005853C @ 0x14005853C (sub_14005853C.c)
 *     sub_140090144 @ 0x140090144 (sub_140090144.c)
 *     sub_140090250 @ 0x140090250 (sub_140090250.c)
 */

PSLIST_ENTRY __fastcall sub_14003B24C(__int64 a1, char *a2)
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
      if ( (byte_1401694F3 & 0x40) != 0 )
        sub_14005853C(
          (_DWORD)a2 + 242,
          (_DWORD)a2 + 177,
          (_DWORD)a2 + 168,
          *(_DWORD *)(a1 + 56),
          a2[104],
          a2[105],
          a2[106],
          (__int64)(a2 + 2104),
          a1 + 5064,
          *(_QWORD *)(a1 + 4720),
          (__int64)(a2 + 168),
          (__int64)(a2 + 177),
          (__int64)(a2 + 242),
          *(_QWORD *)(a1 + 5080),
          *((_QWORD *)&result[1].Next + 1),
          (char)result[2].Next);
    }
    else if ( (byte_1401694F3 & 0x40) != 0 )
    {
      sub_14005853C(
        a1 + 5064,
        v7,
        v8,
        *(_DWORD *)(a1 + 56),
        0,
        0,
        0,
        0LL,
        a1 + 5064,
        *(_QWORD *)(a1 + 4720),
        0LL,
        0LL,
        0LL,
        *(_QWORD *)(a1 + 5080),
        *((_QWORD *)&result[1].Next + 1),
        (char)result[2].Next);
    }
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 5u )
    {
      sub_140090250(
        off_140168120->AttachedDevice,
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
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
  {
    result = (PSLIST_ENTRY)HIDWORD(off_140168120->Timer);
    if ( ((unsigned __int8)result & 1) != 0 && BYTE1(off_140168120->Timer) >= 4u )
      return (PSLIST_ENTRY)sub_140090144(off_140168120->AttachedDevice, v7, v8, v4, v2);
  }
  return result;
}
