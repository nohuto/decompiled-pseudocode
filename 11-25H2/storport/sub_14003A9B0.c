/*
 * XREFs of sub_14003A9B0 @ 0x14003A9B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

void __fastcall sub_14003A9B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *(_QWORD *)(a2 + 56) >= 0x20uLL && *(int *)(a2 + 48) >= 0 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    if ( v2 )
    {
      *(_WORD *)(v2 + 30) = 0;
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x10) != 0
        && BYTE1(off_140168120->Timer) >= 4u )
      {
        sub_140055930(off_140168120->AttachedDevice, 17LL, &unk_14014EF40);
      }
    }
  }
}
