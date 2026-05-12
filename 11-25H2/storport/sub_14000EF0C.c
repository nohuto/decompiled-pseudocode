/*
 * XREFs of sub_14000EF0C @ 0x14000EF0C
 * Callers:
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 * Callees:
 *     sub_14000B358 @ 0x14000B358 (sub_14000B358.c)
 *     sub_14000EB00 @ 0x14000EB00 (sub_14000EB00.c)
 *     sub_14000F5A8 @ 0x14000F5A8 (sub_14000F5A8.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_140021810 @ 0x140021810 (sub_140021810.c)
 *     sub_140028D00 @ 0x140028D00 (sub_140028D00.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 */

void __fastcall sub_14000EF0C(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  KIRQL v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // r9
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v15; // [rsp+88h] [rbp+10h]

  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x20) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_140067F28(off_140168120->AttachedDevice, 11LL, &unk_14014B9D8, a2, a3);
  }
  if ( a2 && a3 )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    if ( *(int *)(a1 + 24) > 0 || (LOBYTE(v9) = sub_14000EB00(a1), v9 == 1) )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v8);
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x20) != 0
        && BYTE1(off_140168120->Timer) >= 4u )
      {
        sub_140067F28(off_140168120->AttachedDevice, 12LL, &unk_14014B9D8, a2, a3);
      }
    }
    else
    {
      if ( a2 == 1 )
      {
        v11 = *(_QWORD *)(a4 + 24);
        if ( v11 )
          v15 = *(_BYTE *)(v11 + 56);
        else
          v15 = -1;
        v12 = *(_DWORD *)(a4 + 104);
        sub_14000F5A8(a1);
        sub_140021810(a4, 4LL);
        if ( (qword_140168458 & 0x200) != 0 )
          sub_14000FB90(
            *(_QWORD *)(a4 + 24),
            4,
            (_DWORD)retaddr,
            BYTE2(v12) | ((BYTE1(v12) | (((unsigned __int8)v12 | (v15 << 8)) << 8)) << 8),
            *(int *)(a4 + 744),
            0LL,
            0LL);
      }
      else if ( a2 == 2 )
      {
        LOBYTE(v10) = 1;
        sub_140028D00(a1, v10);
        if ( (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) != 0 )
        {
          v13 = (unsigned __int64)(a3 * (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF)) / 0x64;
          if ( !(_DWORD)v13 )
            v13 = 1LL;
          *(_DWORD *)(a1 + 28) = v13;
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
            && (HIDWORD(off_140168120->Timer) & 0x20) != 0
            && BYTE1(off_140168120->Timer) >= 3u )
          {
            sub_140055BD4(off_140168120->AttachedDevice, 13LL, &unk_14014B9D8, v13);
          }
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v8);
      if ( a2 == 1 )
      {
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x20) != 0
          && BYTE1(off_140168120->Timer) >= 3u )
        {
          sub_140055BD4(off_140168120->AttachedDevice, 14LL, &unk_14014B9D8, a3);
        }
        sub_14000B358(a4, a3);
      }
    }
  }
}
