/*
 * XREFs of sub_1400D1354 @ 0x1400D1354
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401A8AEC @ 0x1401A8AEC (sub_1401A8AEC.c)
 */

__int64 __fastcall sub_1400D1354(__int64 *a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  v2 = 0;
  v3 = (void *)sub_1400143E0(64LL, 168LL, 1179541842LL, a1[1]);
  a1[74] = (__int64)v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0xA8uLL);
    v4 = (_QWORD *)a1[74];
    v4[1] = v4;
    *v4 = v4;
    ExInitializeResourceLite((PERESOURCE)(a1[74] + 24));
    v5 = (_QWORD *)(a1[74] + 136);
    v5[1] = v5;
    *v5 = v5;
    KeInitializeSpinLock((PKSPIN_LOCK)(a1[74] + 128));
    *(_DWORD *)(a1[74] + 160) = -1;
    sub_1401A8AEC(a1[2] + 40, a1[74] + 160);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
