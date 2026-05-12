/*
 * XREFs of RaidGetStartIoPerfParams @ 0x1400014C0
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidGetStartIoPerfParams(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // ebx
  unsigned int v9; // r8d
  int v10; // edx
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rdx

  if ( !a1 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v13 = 19LL;
    goto LABEL_34;
  }
  if ( !a2 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v13 = 20LL;
    goto LABEL_34;
  }
  if ( !a3 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v13 = 21LL;
    goto LABEL_34;
  }
  v5 = a3[1];
  if ( v5 < 0x10 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v13 = 22LL;
LABEL_34:
    WPP_SF_(v12->AttachedDevice, v13, &WPP_fc235f9cd02a3c4256abef97e62f1829_Traceguids);
    return 3238002694LL;
  }
  v6 = 96LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v6 = 48LL;
  v7 = *(_QWORD *)(v6 + a2);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 20);
    memset_0(a3 + 2, 0, v5 - 8);
    if ( a3[1] >= 0x14u && *a3 == 2 )
      a3[4] = v8;
    else
      *a3 = 1;
    a3[3] = *(_DWORD *)(v7 + 24);
    if ( *(_DWORD *)a1 == 1094997074 )
    {
      v9 = 0;
      if ( (*(_BYTE *)(a1 + 4724) & 2) == 0
        || (unsigned __int16)v8 >= *(_WORD *)(a1 + 4726)
        || (v10 = *(unsigned __int8 *)(BYTE2(v8) + ((unsigned __int16)v8 << 6) + *(_QWORD *)(a1 + 4744)),
            a3[2] = v10,
            v10 == 255) )
      {
        a3[2] = 0;
      }
    }
    else
    {
      return (unsigned int)-1056964602;
    }
    return v9;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_fc235f9cd02a3c4256abef97e62f1829_Traceguids);
    }
    return 3238002694LL;
  }
}
