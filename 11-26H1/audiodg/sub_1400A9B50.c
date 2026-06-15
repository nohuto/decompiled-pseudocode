/*
 * XREFs of sub_1400A9B50 @ 0x1400A9B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14009D620 @ 0x14009D620 (sub_14009D620.c)
 *     sub_1400A9518 @ 0x1400A9518 (sub_1400A9518.c)
 *     sub_1400A95C8 @ 0x1400A95C8 (sub_1400A95C8.c)
 */

__int64 __fastcall sub_1400A9B50(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v9; // r14d
  signed __int32 v10; // eax
  char v11; // si
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF

  v9 = -2005139387;
  v10 = _InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1368) + 1344LL) + 64LL),
          0,
          0);
  v11 = v10;
  if ( (v10 & 0xFFFFFF81) == 1 )
  {
    sub_1400A95C8(*(_QWORD *)(a1 + 760), (__int64)v15);
    v12 = v15[0];
    if ( v15[0] )
    {
      *(_OWORD *)a2 = *(_OWORD *)(v15[0] + 40LL);
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(v12 + 56);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(v12 + 72);
      if ( *(_BYTE *)(a1 + 1328) && (unsigned int)sub_14009D620((__int64 *)(a2 + 24)) )
        *(_BYTE *)(a1 + 1328) = 0;
      *(_OWORD *)a3 = *(_OWORD *)v12;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v12 + 16);
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(v12 + 32);
      if ( *(_BYTE *)(a1 + 1328) && (unsigned int)sub_14009D620((__int64 *)(a3 + 24)) )
        *(_BYTE *)(a1 + 1328) = 0;
      if ( (v11 & 0x10) != 0 )
      {
        *a4 = 0LL;
        v13 = 0LL;
      }
      else
      {
        *a4 = *(_QWORD *)(v12 + 88);
        v13 = *(_QWORD *)(v12 + 80);
      }
      v9 = 0;
      *a5 = v13;
    }
    sub_1400A9518((__int64)v15);
  }
  return v9;
}
