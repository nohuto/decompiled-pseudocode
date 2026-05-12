/*
 * XREFs of sub_14013C334 @ 0x14013C334
 * Callers:
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 *     sub_14013A45C @ 0x14013A45C (sub_14013A45C.c)
 *     sub_14013AAA4 @ 0x14013AAA4 (sub_14013AAA4.c)
 * Callees:
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 */

__int64 __fastcall sub_14013C334(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // [rsp+20h] [rbp-10h]
  unsigned int v14; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 >= (unsigned __int64)a4 + 56 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    LOWORD(v14) = *(_WORD *)(a3 + 24);
    sub_1401352EC((char *)&v14, 2u);
    *(_WORD *)(a1 + 4) = v14;
    v14 = (a4 + 39) & 0xFFFFFFFC;
    sub_1401352EC((char *)&v14, 4u);
    v9 = a5;
    *(_DWORD *)(a1 + 16) = v14;
    *(_DWORD *)(a1 + 20) = v9;
    sub_1401352EC((char *)(a1 + 20), 4u);
    *(_DWORD *)(a1 + 24) = a6;
    sub_1401352EC((char *)(a1 + 24), v10);
    v14 = ((a4 + 39) & 0xFFFFFFFC) - 24;
    sub_1401352EC((char *)&v14, v11);
    *(_DWORD *)(a1 + 40) = v14;
    v14 = a4;
    sub_1401352EC((char *)&v14, v12);
    result = 0LL;
    *(_DWORD *)(a1 + 52) = v14;
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
    {
      v13 = a4 + 56;
      sub_140067F28((__int64)off_140168120->AttachedDevice, 0x10u, (__int64)&unk_1401552D8, a2, v13);
    }
    return 3221225507LL;
  }
  return result;
}
