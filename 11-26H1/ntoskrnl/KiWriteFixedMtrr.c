/*
 * XREFs of KiWriteFixedMtrr @ 0x140BFB354
 * Callers:
 *     KeLoadMTRR @ 0x140C0CF60 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiWriteFixedMtrr(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v1 = 0LL;
  if ( byte_140F15091 == 1 )
  {
    v1 = __readmsr(0xC0010010) & 0xFFFFFFFFFFF3FFFFuLL | 0x80000;
  }
  else
  {
    if ( KeGetCurrentPrcb()->CpuVendor != 1 )
      goto LABEL_8;
    v2 = __readmsr(0xC0010010);
    v1 = v2;
    if ( (v2 & 0xC0000) == 0 || (v2 & 0x1000000) != 0 )
      goto LABEL_8;
    v1 = v2 & 0xFFFFFFFFFFF3FFFFuLL;
  }
  __writemsr(0xC0010010, v1);
LABEL_8:
  __writemsr(0x250u, *a1);
  __writemsr(0x258u, a1[1]);
  __writemsr(0x259u, a1[2]);
  __writemsr(0x268u, a1[3]);
  __writemsr(0x269u, a1[4]);
  __writemsr(0x26Au, a1[5]);
  __writemsr(0x26Bu, a1[6]);
  __writemsr(0x26Cu, a1[7]);
  __writemsr(0x26Du, a1[8]);
  __writemsr(0x26Eu, a1[9]);
  result = a1[10];
  __writemsr(0x26Fu, result);
  if ( byte_140F15091 == 1 )
  {
    result = v1 & 0xFFFFFFFFFFF3FFFFuLL | 0x40000;
    __writemsr(0xC0010010, result);
  }
  return result;
}
