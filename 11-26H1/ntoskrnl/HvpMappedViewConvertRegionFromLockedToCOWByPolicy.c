/*
 * XREFs of HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140AD65B8
 * Callers:
 *     HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x140AD6514 (HvpMappedViewConvertLockedPagesToCOWByPolicy.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1404A2CD4 (CmSiProtectViewOfSection.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x1408B95E4 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 *     HvpViewMapTouchPages @ 0x1408B98D0 (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpMappedViewConvertRegionFromLockedToCOWByPolicy(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  _BYTE *v6; // r14
  __int64 v8; // rsi
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2[7] - a2[3];
  v5 = a4 - a3;
  v15 = 0;
  v6 = (_BYTE *)(a3 + v4);
  v8 = a3;
  v11 = CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), (__int64)v6, a4 - a3, 8u, (__int64)&v15);
  if ( v11 >= 0 )
  {
    HvpViewMapTouchPages(v6, v5, 1);
    v11 = CmSiProtectViewOfSection(v12, *(__int64 **)(a1 + 24), (__int64)v6, v5, 2u, (__int64)&v15);
    HvpViewMapReleaseChargesAndUnlockViewPages(v13, *(__int64 **)(a1 + 24), (__int64)v6, v5);
    while ( v8 < a4 )
    {
      *((_BYTE *)a2 + ((unsigned __int64)(v8 - a2[3]) >> 12) + 72) = *((_BYTE *)a2
                                                                     + ((unsigned __int64)(v8 - a2[3]) >> 12)
                                                                     + 72) & 0xEB | 4;
      v8 += 4096LL;
    }
    a2[8] -= v5 >> 12;
  }
  return (unsigned int)v11;
}
