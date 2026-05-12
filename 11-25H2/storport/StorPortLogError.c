/*
 * XREFs of StorPortLogError @ 0x1400742C0
 * Callers:
 *     sub_1401B7450 @ 0x1401B7450 (sub_1401B7450.c)
 * Callees:
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_1400273F0 @ 0x1400273F0 (sub_1400273F0.c)
 *     sub_14005B15C @ 0x14005B15C (sub_14005B15C.c)
 *     sub_14006B1AC @ 0x14006B1AC (sub_14006B1AC.c)
 */

void __fastcall StorPortLogError(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5, unsigned int a6, int a7)
{
  union _SLIST_HEADER *v9; // rbx
  PSLIST_ENTRY v10; // rax
  union _SLIST_HEADER *v11; // [rsp+20h] [rbp-18h] BYREF
  int *v12; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  sub_1400273F0(a1, (int **)&v11, &v12);
  v9 = v11;
  if ( v11 )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      v10 = sub_14006B1AC(v9 + 63);
      if ( v10 )
      {
        LODWORD(v10[2].Next) = 2;
        BYTE4(v10[2].Next) = a3;
        BYTE5(v10[2].Next) = a4;
        BYTE6(v10[2].Next) = a5;
        LODWORD(v10[3].Next) = a6;
        HIDWORD(v10[3].Next) = a7;
        sub_14000F5E0((char *)&v9[63], v10);
      }
      else
      {
        _InterlockedIncrement(&dword_1401688B8);
      }
    }
    else
    {
      LODWORD(v11) = a3;
      BYTE1(v11) = a4;
      sub_14005B15C((__int64)v9, (int)v11, a6, a7);
    }
  }
}
