/*
 * XREFs of ??$_Move_unchecked@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@00@Z @ 0x18022FF90
 * Callers:
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x18020B638 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Move_unchecked<CSuperWetInkManager::SuperWetStroke *,CSuperWetInkManager::SuperWetStroke *>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // al

  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    do
    {
      *(_QWORD *)a3 = *(v5 - 1);
      v6 = *v5;
      *v5 = 0LL;
      v7 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 1);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(v5 + 3);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(v5 + 5);
      *(_QWORD *)(a3 + 64) = v5[7];
      *(_OWORD *)(a3 + 72) = *((_OWORD *)v5 + 4);
      *(_QWORD *)(a3 + 88) = v5[10];
      v8 = *((_BYTE *)v5 + 88);
      v5 += 13;
      *(_BYTE *)(a3 + 96) = v8;
      a3 += 104LL;
    }
    while ( v5 - 1 != a2 );
  }
  return a3;
}
