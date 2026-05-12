/*
 * XREFs of NvmeAdapterPerfStateCallback @ 0x140123E70
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14003B978 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterReleasePoFx @ 0x14003BAD0 (NvmeAdapterReleasePoFx.c)
 *     NvmeControllerPowerSetPState @ 0x140127118 (NvmeControllerPowerSetPState.c)
 */

void __fastcall NvmeAdapterPerfStateCallback(_QWORD *a1, int a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  _DWORD v9[3]; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+2Ch] [rbp-1Ch]
  __int16 v11; // [rsp+2Dh] [rbp-1Bh]
  char v12; // [rsp+2Fh] [rbp-19h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v11 = 0;
  v12 = 0;
  if ( NvmeAdapterCheckAndAcquirePoFx((__int64)a1) )
  {
    if ( (*(_DWORD *)(a1[50] + 184LL) & 0x40000000) != 0 )
    {
      v8 = a1[144];
      v9[0] = 1;
      v9[1] = 24;
      v9[2] = a2;
      v10 = a3;
      v13 = a4;
      NvmeControllerPowerSetPState(v8, v9);
    }
    _interlockedbittestandreset((volatile signed __int32 *)(a1[20] + 212LL), 0);
    NvmeAdapterReleasePoFx((__int64)a1);
  }
}
