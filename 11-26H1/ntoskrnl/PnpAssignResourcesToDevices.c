/*
 * XREFs of PnpAssignResourcesToDevices @ 0x140AA03DC
 * Callers:
 *     PnpProcessAssignResources @ 0x1409AD81C (PnpProcessAssignResources.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 */

__int64 __fastcall PnpAssignResourcesToDevices(unsigned int a1, _DWORD *a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v8; // rdx
  _DWORD v9[4]; // [rsp+60h] [rbp-28h] BYREF
  char v10; // [rsp+90h] [rbp+8h] BYREF
  int v11; // [rsp+A8h] [rbp+20h] BYREF

  if ( a1 )
  {
    v4 = a2;
    v5 = a1;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 312LL) + 40LL);
      if ( (*(_DWORD *)(v6 + 396) & 1) != 0 )
      {
        v8 = *(_QWORD *)(v6 + 48);
        v9[0] = 0;
        v11 = 0;
        v10 = 0;
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    v8,
                    1,
                    0LL,
                    0LL,
                    (__int64)&DEVPKEY_Device_Reported,
                    &v11,
                    (__int64)&v10,
                    1u,
                    (__int64)v9,
                    0) >= 0
          && v11 == 17
          && v9[0] == 1
          && v10 == -1 )
        {
          v4[3] = 0;
        }
      }
      v4 += 16;
      --v5;
    }
    while ( v5 );
  }
  return PnpAllocateResources(a1, a2, 0LL);
}
