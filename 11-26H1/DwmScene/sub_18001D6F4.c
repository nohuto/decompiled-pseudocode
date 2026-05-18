/*
 * XREFs of sub_18001D6F4 @ 0x18001D6F4
 * Callers:
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 *     sub_1800286EC @ 0x1800286EC (sub_1800286EC.c)
 *     sub_1800287AC @ 0x1800287AC (sub_1800287AC.c)
 *     sub_18002932C @ 0x18002932C (sub_18002932C.c)
 *     sub_18002C03C @ 0x18002C03C (sub_18002C03C.c)
 *     sub_18002D578 @ 0x18002D578 (sub_18002D578.c)
 *     sub_18002E884 @ 0x18002E884 (sub_18002E884.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180037D10 @ 0x180037D10 (sub_180037D10.c)
 *     sub_1800401E4 @ 0x1800401E4 (sub_1800401E4.c)
 *     sub_18004048C @ 0x18004048C (sub_18004048C.c)
 *     sub_1800414D4 @ 0x1800414D4 (sub_1800414D4.c)
 *     sub_18004E014 @ 0x18004E014 (sub_18004E014.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_18004E988 @ 0x18004E988 (sub_18004E988.c)
 *     sub_18004EB3C @ 0x18004EB3C (sub_18004EB3C.c)
 *     sub_18004EE08 @ 0x18004EE08 (sub_18004EE08.c)
 *     sub_180052774 @ 0x180052774 (sub_180052774.c)
 *     sub_18005434C @ 0x18005434C (sub_18005434C.c)
 *     sub_180055BDC @ 0x180055BDC (sub_180055BDC.c)
 *     sub_180055E5C @ 0x180055E5C (sub_180055E5C.c)
 *     sub_18005921C @ 0x18005921C (sub_18005921C.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18005D6DC @ 0x18005D6DC (sub_18005D6DC.c)
 *     sub_18005DEB0 @ 0x18005DEB0 (sub_18005DEB0.c)
 *     sub_18005E3D0 @ 0x18005E3D0 (sub_18005E3D0.c)
 *     sub_18007F4E4 @ 0x18007F4E4 (sub_18007F4E4.c)
 *     sub_180098BB8 @ 0x180098BB8 (sub_180098BB8.c)
 *     sub_1800990DC @ 0x1800990DC (sub_1800990DC.c)
 *     sub_1800BC30C @ 0x1800BC30C (sub_1800BC30C.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800BF1A8 @ 0x1800BF1A8 (sub_1800BF1A8.c)
 *     sub_1800C0664 @ 0x1800C0664 (sub_1800C0664.c)
 *     sub_1800C0B9C @ 0x1800C0B9C (sub_1800C0B9C.c)
 *     sub_1800C18B8 @ 0x1800C18B8 (sub_1800C18B8.c)
 *     sub_1800C195C @ 0x1800C195C (sub_1800C195C.c)
 *     sub_1800CE4B0 @ 0x1800CE4B0 (sub_1800CE4B0.c)
 *     sub_1800CE5E0 @ 0x1800CE5E0 (sub_1800CE5E0.c)
 *     sub_1800CE920 @ 0x1800CE920 (sub_1800CE920.c)
 *     sub_1800D37C0 @ 0x1800D37C0 (sub_1800D37C0.c)
 *     sub_1800D39C8 @ 0x1800D39C8 (sub_1800D39C8.c)
 *     sub_1800D47E0 @ 0x1800D47E0 (sub_1800D47E0.c)
 * Callees:
 *     sub_18001DEF0 @ 0x18001DEF0 (sub_18001DEF0.c)
 */

__int64 *__fastcall sub_18001D6F4(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 v3; // rcx
  __int64 i; // rax

  v2 = a1;
  v3 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v3 + 8); !*(_BYTE *)(i + 25) && v3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v2 = i;
      v3 = i;
    }
  }
  else
  {
    i = sub_18001DEF0(*(_QWORD *)(v3 + 16), a2, v2);
  }
  *v2 = i;
  return v2;
}
