/*
 * XREFs of RaidTranslateResourceListAddress @ 0x140082A44
 * Callers:
 *     NvmeGetDeviceBaseEx @ 0x140079BE8 (NvmeGetDeviceBaseEx.c)
 *     StorPortGetDeviceBase @ 0x14007B6E0 (StorPortGetDeviceBase.c)
 *     StorpGetDeviceBase2 @ 0x14007CD04 (StorpGetDeviceBase2.c)
 * Callees:
 *     RaidGetResourceListElement @ 0x1400828B8 (RaidGetResourceListElement.c)
 */

__int64 __fastcall RaidTranslateResourceListAddress(
        _QWORD *a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  char v8; // di
  __int64 v9; // r14
  int v12; // r12d
  _QWORD *v13; // rax
  unsigned int v14; // r14d
  unsigned int i; // esi
  unsigned __int64 v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  int v21; // [rsp+88h] [rbp+48h] BYREF

  v7 = a7;
  v8 = 0;
  v9 = *a1;
  a6 = 0;
  v21 = 0;
  v12 = 15;
  v18 = 0LL;
  if ( a2 != 17 )
    v12 = a2;
  v19 = 0LL;
  *a7 = 0LL;
  v13 = a1;
  if ( v9 )
    v14 = *(_DWORD *)(v9 + 16);
  else
    v14 = 0;
  for ( i = 0; i < v14; ++i )
  {
    RaidGetResourceListElement(v13, i, &a6, &v21, &v18, &v19);
    if ( a6 == v12 && v21 == a3 )
    {
      v16 = *(_QWORD *)(v18 + 4);
      if ( v16 <= a4 && v16 + *(unsigned int *)(v18 + 12) >= a4 + a5 )
      {
        v8 = 1;
        *v7 = a4 + *(_QWORD *)(v19 + 4) - v16;
        return v8 == 0 ? 0xC0000001 : 0;
      }
    }
    v13 = a1;
  }
  return v8 == 0 ? 0xC0000001 : 0;
}
