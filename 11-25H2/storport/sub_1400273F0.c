/*
 * XREFs of sub_1400273F0 @ 0x1400273F0
 * Callers:
 *     sub_14003FC30 @ 0x14003FC30 (sub_14003FC30.c)
 *     sub_140044660 @ 0x140044660 (sub_140044660.c)
 *     sub_140044848 @ 0x140044848 (sub_140044848.c)
 *     sub_140053E9C @ 0x140053E9C (sub_140053E9C.c)
 *     sub_1400544B8 @ 0x1400544B8 (sub_1400544B8.c)
 *     sub_140073230 @ 0x140073230 (sub_140073230.c)
 *     sub_1400733F0 @ 0x1400733F0 (sub_1400733F0.c)
 *     sub_1400737C0 @ 0x1400737C0 (sub_1400737C0.c)
 *     sub_140073890 @ 0x140073890 (sub_140073890.c)
 *     StorPortAllocateRegistryBuffer @ 0x1400738F0 (StorPortAllocateRegistryBuffer.c)
 *     StorPortDeviceReady @ 0x140073B60 (StorPortDeviceReady.c)
 *     StorPortFreeRegistryBuffer @ 0x140073D20 (StorPortFreeRegistryBuffer.c)
 *     StorPortGetBusData @ 0x140073D90 (StorPortGetBusData.c)
 *     StorPortLogError @ 0x1400742C0 (StorPortLogError.c)
 *     StorPortPause @ 0x1400745D0 (StorPortPause.c)
 *     StorPortRegistryWrite @ 0x140074A60 (StorPortRegistryWrite.c)
 *     StorPortResume @ 0x140074C10 (StorPortResume.c)
 *     StorPortSetBusDataByOffset @ 0x140074D60 (StorPortSetBusDataByOffset.c)
 *     sub_140075DA4 @ 0x140075DA4 (sub_140075DA4.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1400273F0(__int64 a1, int **a2, int **a3)
{
  __int64 v3; // rcx
  int *result; // rax
  int v6; // r8d

  v3 = *(_QWORD *)(a1 - 16);
  result = 0LL;
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v3 )
  {
    result = *(int **)v3;
    if ( *(_QWORD *)v3 )
    {
      v6 = *result;
      if ( (*(_BYTE *)(v3 + 248) & 1) != 0 )
      {
        if ( v6 == 1314275652 )
          *a3 = result;
      }
      else if ( v6 == 1094997074 )
      {
        *a2 = result;
      }
    }
  }
  return result;
}
