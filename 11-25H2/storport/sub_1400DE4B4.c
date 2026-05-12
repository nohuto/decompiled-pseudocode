/*
 * XREFs of sub_1400DE4B4 @ 0x1400DE4B4
 * Callers:
 *     sub_1400E22C0 @ 0x1400E22C0 (sub_1400E22C0.c)
 *     sub_1400E5FA4 @ 0x1400E5FA4 (sub_1400E5FA4.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400DE17C @ 0x1400DE17C (sub_1400DE17C.c)
 */

int __fastcall sub_1400DE4B4(__int64 a1)
{
  unsigned __int16 v2; // cx
  __int16 v3; // bx
  unsigned __int16 i; // si
  __int64 v5; // rcx
  int v6; // eax

  v2 = *(_WORD *)(a1 + 20);
  v3 = 0;
  for ( i = 0; i < v2; ++i )
  {
    v5 = *(_QWORD *)(a1 + 728) + 192LL * i;
    v6 = *(_DWORD *)(v5 + 120);
    if ( v6 == 5 || !v6 && (int)sub_1400DE17C(v5) >= 0 )
      ++v3;
    v2 = *(_WORD *)(a1 + 20);
  }
  *(_WORD *)(a1 + 22) = v3;
  if ( v3 == v2 )
    *(_QWORD *)(a1 + 136) &= 0xFFFFFFFFFFFFCFFFuLL;
  return sub_1400A870C(
           a1,
           1,
           4,
           (__int64)L"CreateIoQueues",
           L"MaxIoQueueCount",
           v2,
           L"IoQueueCount",
           v3,
           &dword_140149108,
           0,
           &dword_140149108,
           0,
           (void *)&dword_140149108,
           0,
           (void *)&dword_140149108,
           0,
           (void *)&dword_140149108,
           0,
           (void *)&dword_140149108,
           0);
}
