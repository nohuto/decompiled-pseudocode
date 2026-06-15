/*
 * XREFs of sub_14007C98C @ 0x14007C98C
 * Callers:
 *     sub_14007CA54 @ 0x14007CA54 (sub_14007CA54.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_14007CB44 @ 0x14007CB44 (sub_14007CB44.c)
 *     sub_14007CB7C @ 0x14007CB7C (sub_14007CB7C.c)
 *     sub_14007CBB4 @ 0x14007CBB4 (sub_14007CBB4.c)
 */

char __fastcall sub_14007C98C(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v9; // eax
  char v10; // bl
  RTL_SRWLOCK *v11; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 == 254 )
  {
    sub_14007CBB4((PSRWLOCK)a1);
    return 1;
  }
  else if ( a3 < 0xC8 || (int)a3 >= 256 && a3 < 0x200 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)a1);
    v11 = (RTL_SRWLOCK *)a1;
    if ( a3 <= 7 && (v9 = 204, _bittest(&v9, a3)) || a3 - 256 <= 0x7F )
    {
      sub_14007CB7C(a1 + 8, a3, a2);
      v10 = *(_BYTE *)(a1 + 64);
    }
    else
    {
      v10 = sub_14007CB44(a1 + 72, a3, a2, a4, v11);
    }
    sub_14003A998(&v11);
    return v10;
  }
  else
  {
    return 0;
  }
}
