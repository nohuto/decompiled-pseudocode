/*
 * XREFs of sub_1400161E0 @ 0x1400161E0
 * Callers:
 *     sub_14000C348 @ 0x14000C348 (sub_14000C348.c)
 *     sub_1400160C0 @ 0x1400160C0 (sub_1400160C0.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_1400D1EB8 @ 0x1400D1EB8 (sub_1400D1EB8.c)
 *     sub_1400D9E8C @ 0x1400D9E8C (sub_1400D9E8C.c)
 *     sub_1400DA194 @ 0x1400DA194 (sub_1400DA194.c)
 *     sub_1400DE5E8 @ 0x1400DE5E8 (sub_1400DE5E8.c)
 *     sub_1400DEB08 @ 0x1400DEB08 (sub_1400DEB08.c)
 *     NaptrDnsRecordConvert @ 0x1400DF8C8 (NaptrDnsRecordConvert.c)
 *     sub_1400E3C30 @ 0x1400E3C30 (sub_1400E3C30.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 *     sub_1400E6EA4 @ 0x1400E6EA4 (sub_1400E6EA4.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400161E0(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // eax
  __int64 result; // rax

  v3 = 79LL;
  v4 = *a1;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    if ( v4 != 1314275652 )
      v3 = 131LL;
    result = (unsigned int)(a1[v3] + 7);
    if ( (result & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a2 + 104) = a3;
  }
  else
  {
    if ( v4 != 1314275652 )
      v3 = 131LL;
    result = (unsigned int)(a1[v3] + 7);
    if ( (result & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a2 + 56) = a3;
  }
  return result;
}
