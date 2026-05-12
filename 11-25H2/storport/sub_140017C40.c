/*
 * XREFs of sub_140017C40 @ 0x140017C40
 * Callers:
 *     sub_140007BD8 @ 0x140007BD8 (sub_140007BD8.c)
 *     sub_1400160C0 @ 0x1400160C0 (sub_1400160C0.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_1400281F4 @ 0x1400281F4 (sub_1400281F4.c)
 *     sub_14002B140 @ 0x14002B140 (sub_14002B140.c)
 *     sub_140051260 @ 0x140051260 (sub_140051260.c)
 *     sub_140051870 @ 0x140051870 (sub_140051870.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_1400537EC @ 0x1400537EC (sub_1400537EC.c)
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
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void *__fastcall sub_140017C40(__int64 a1, __int64 a2, unsigned int a3, void *a4)
{
  __int64 v4; // rdi
  void *result; // rax

  *(_BYTE *)(a1 + 16) &= 0x9Cu;
  v4 = *(_QWORD *)(a1 + 792);
  *(_DWORD *)a1 = 523124044;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)(a1 + 20) = -1;
  *(_BYTE *)(a1 + 22) = -1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 696) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_DWORD *)(a1 + 744) = a3;
  *(_QWORD *)(a1 + 760) = a4;
  if ( a4 )
    result = memset_0(a4, 0, a3);
  *(_BYTE *)(a1 + 16) &= ~0x80u;
  *(_BYTE *)(a1 + 17) &= 0x70u;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_DWORD *)(a1 + 748) = 0;
  *(_DWORD *)(a1 + 776) = 0;
  *(_WORD *)(a1 + 780) = -1;
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_DWORD *)(a1 + 808) = 0;
  *(_DWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 824) = 0LL;
  *(_QWORD *)(a1 + 792) = v4;
  *(_DWORD *)(a1 + 800) = -1;
  *(_OWORD *)(a1 + 832) = 0LL;
  *(_QWORD *)(a1 + 848) = 0LL;
  *(_QWORD *)(a1 + 856) = 0LL;
  *(_QWORD *)(a1 + 864) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  return result;
}
