/*
 * XREFs of sub_1400534CC @ 0x1400534CC
 * Callers:
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400535EC @ 0x1400535EC (sub_1400535EC.c)
 */

__int64 __fastcall sub_1400534CC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // r8d
  int v7; // eax
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int v10; // ebp
  __int64 v11; // r14
  __int64 v12; // rbx

  v4 = 1;
  if ( (unsigned __int8)sub_1400535EC(a1, a2, a3) )
  {
    v6 = dword_1401688A4;
    v7 = dword_1401688B0 - 1;
    *(_DWORD *)(v5 + 976) = dword_1401688A4;
    v4 = v6 * ((v6 + v7) / v6) / v6;
  }
  v8 = sub_1400143E0(72LL, 320LL * v4, 1095197010LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 960) = v8;
  if ( !v8 )
    return 3221225626LL;
  v10 = 0;
  if ( v4 )
  {
    v11 = 0LL;
    do
    {
      v12 = v11 + *(_QWORD *)(a1 + 960);
      *(_DWORD *)(v12 + 28) = 1000;
      *(_DWORD *)(v12 + 32) = 1000;
      KeInitializeSpinLock((PKSPIN_LOCK)v12);
      v11 += 320LL;
      *(_QWORD *)(v12 + 16) = v12 + 8;
      *(_QWORD *)(v12 + 8) = v12 + 8;
      *(_QWORD *)(v12 + 272) = v12 + 264;
      *(_QWORD *)(v12 + 264) = v12 + 264;
      *(_DWORD *)(v12 + 128) = 0;
      *(_DWORD *)(v12 + 284) = v10++;
      *(_QWORD *)(v12 + 48) = a1;
    }
    while ( v10 < v4 );
  }
  *(_DWORD *)(a1 + 984) = 1000;
  result = 0LL;
  *(_DWORD *)(a1 + 972) = v4;
  return result;
}
