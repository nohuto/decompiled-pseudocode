/*
 * XREFs of PspHardenMitigationOptions @ 0x140AFECC0
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

char __fastcall PspHardenMitigationOptions(__int128 *a1)
{
  int v2; // eax
  unsigned __int8 v3; // dl
  unsigned __int64 v4; // rcx
  __int64 v5; // xmm1_8
  __int128 Buf1; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h]
  __int128 v9; // [rsp+38h] [rbp-18h]

  v9 = *a1;
  Buf1 = v9;
  v8 = *((_QWORD *)a1 + 2);
  v2 = memcmp(&Buf1, &PspHardenedMitigationOptionsMap, 0x18uLL);
  if ( v2 )
  {
    v3 = v9;
    v4 = Buf1;
    if ( (v9 & 3) != 1 )
    {
      v4 = Buf1 & 0xFFFFFFFFFFFFFFFCuLL | 1;
      *(_QWORD *)&Buf1 = v4;
      v3 = v4;
    }
    if ( (BYTE1(v4) & 3) != 3 )
    {
      v4 |= 0x300uLL;
      *(_QWORD *)&Buf1 = v4;
      v3 = v4;
    }
    if ( ((v4 >> 12) & 3) != 1 )
    {
      v4 = v4 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
      *(_QWORD *)&Buf1 = v4;
      v3 = v4;
    }
    if ( ((v3 >> 4) & 3) != 1 )
    {
      v4 = v4 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
      *(_QWORD *)&Buf1 = v4;
    }
    if ( (BYTE2(v4) & 3) != 1 )
    {
      v4 = v4 & 0xFFFFFFFFFFFCFFFFuLL | 0x10000;
      *(_QWORD *)&Buf1 = v4;
    }
    LOBYTE(v2) = (v4 >> 20) & 3;
    if ( (_BYTE)v2 != 1 && (_BYTE)v2 != 2 )
    {
      LOBYTE(v2) = ((unsigned __int64)stru_140FC11F0.KernelStack >> 20) & 3;
      if ( (_BYTE)v2 != 2 )
        *(_QWORD *)&Buf1 = v4 & 0xFFFFFFFFFFCFFFFFuLL | 0x100000;
    }
    v5 = v8;
    *a1 = Buf1;
    *((_QWORD *)a1 + 2) = v5;
  }
  return v2;
}
