/*
 * XREFs of ?GetInteresting@TwoFingerGestureRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1801BA770
 * Callers:
 *     <none>
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801B8BC8 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 *     ?GetDragInfo@TwoFingerDragRecognizer@@QEAA_NPEAUGestureData@@@Z @ 0x1801BB000 (-GetDragInfo@TwoFingerDragRecognizer@@QEAA_NPEAUGestureData@@@Z.c)
 *     ?GetTapInfo@TwoFingerClickRecognizer@@QEAA_NPEAUGestureData@@@Z @ 0x1801BB5B8 (-GetTapInfo@TwoFingerClickRecognizer@@QEAA_NPEAUGestureData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TwoFingerGestureRecognizer::GetInteresting(__int64 a1)
{
  TwoFingerClickRecognizer *v1; // rsi
  __int64 v3; // r14
  int v4; // edi
  unsigned int v5; // edi
  char v6; // r10
  GestureRecognizer *v7; // rcx
  unsigned int v8; // r8d
  char v9; // r10
  struct tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (TwoFingerClickRecognizer *)(a1 + 16);
  v3 = a1 + 88;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 16LL))(a1 + 16);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) | v4;
  v6 = 0;
  if ( (v5 & 0x1800) != 0x800 )
    goto LABEL_5;
  if ( !*(_BYTE *)(a1 + 176) )
  {
    if ( TwoFingerClickRecognizer::GetTapInfo(v1, (struct GestureData *)(a1 + 180)) )
      *(_BYTE *)(a1 + 176) = 1;
LABEL_5:
    if ( *(_BYTE *)(a1 + 176) == v6 )
      return v5;
  }
  if ( (v5 & 0x2000) != 0
    && TwoFingerDragRecognizer::GetDragInfo((TwoFingerDragRecognizer *)(a1 + 88), (struct GestureData *)(a1 + 192)) )
  {
    v8 = *(unsigned __int16 *)(a1 + 84);
    v11.x = *(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 196);
    v11.y = *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 200);
    if ( GestureRecognizer::MeetsThreshold(v7, &v11, v8) )
      *(_BYTE *)(a1 + 176) = v9;
    else
      v5 |= 0x4000u;
  }
  return v5;
}
