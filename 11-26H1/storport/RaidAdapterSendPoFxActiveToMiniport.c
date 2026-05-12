/*
 * XREFs of RaidAdapterSendPoFxActiveToMiniport @ 0x14002AE80
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1400553B0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x140055510 (StorPortAdapterIdleCondition.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterSendPoFxActiveToMiniport(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  int v10; // eax
  __int64 v12; // rcx
  _DWORD *v13; // r9
  __int64 v14; // rcx
  _DWORD *v15; // r9
  __int64 v16; // rcx
  _DWORD *v17; // r9
  __int64 v18; // rcx
  _DWORD *v19; // r9
  __int64 v20; // rcx
  _DWORD *v21; // r9
  __int64 v22; // rcx
  _DWORD *v23; // r9
  __int64 v24; // rcx
  _DWORD *v25; // r9
  __int64 v26; // rcx
  _DWORD *v27; // r9
  __int64 v28; // rcx
  _DWORD *v29; // r9
  _DWORD v30[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v31; // [rsp+28h] [rbp-30h]
  int v32; // [rsp+30h] [rbp-28h]
  char v33; // [rsp+34h] [rbp-24h]
  __int16 v34; // [rsp+35h] [rbp-23h]
  char v35; // [rsp+37h] [rbp-21h]

  v3 = a1 + 376;
  v7 = -1073741637;
  if ( (*(_DWORD *)(a1 + 624) & 0x20) != 0 )
  {
LABEL_2:
    if ( *(_BYTE *)(v3 + 300) )
    {
      v8 = *(_QWORD *)(a1 + 608);
      v34 = 0;
      v35 = 0;
      v30[0] = 1;
      v30[1] = 24;
      v31 = 0LL;
      v32 = a2;
      v33 = a3;
      v9 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v8 + 120);
      if ( v9 )
      {
        v10 = v9(*(_QWORD *)(a1 + 616) + 16LL, 8LL, v30);
        if ( v10 )
        {
          v7 = -1073741823;
          if ( v10 == 2 )
            return (unsigned int)-2147483631;
        }
        else
        {
          return 0;
        }
      }
    }
    return v7;
  }
  *(_QWORD *)(a1 + 668) = 0LL;
  *(_QWORD *)(a1 + 676) = 0LL;
  *(_QWORD *)(a1 + 684) = 0LL;
  *(_QWORD *)(a1 + 692) = 0LL;
  *(_DWORD *)(a1 + 664) = 19;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(a1 + 376, 2LL) )
    *v13 = 20;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v12, 3LL) )
    *v15 = 21;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v14, 5LL) )
    *v17 = 22;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v16, 6LL) )
    *v19 = 23;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v18, 7LL) )
    *v21 = 24;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v20, 8LL) )
    *v23 = 25;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v22, 9LL) )
    *v25 = 26;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v24, 10LL) )
    *v27 = 27;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v26, 12LL) )
    *v29 = 28;
  if ( (int)RaCallMiniportAdapterControl(v28) >= 0 )
  {
    *(_DWORD *)(v3 + 248) |= 0x20u;
    goto LABEL_2;
  }
  return v7;
}
