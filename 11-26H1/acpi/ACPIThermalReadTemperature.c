/*
 * XREFs of ACPIThermalReadTemperature @ 0x1400D0330
 * Callers:
 *     ACPIThermalWorker @ 0x1400C6DC0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalUpdateTemperature @ 0x14002A484 (ACPIThermalUpdateTemperature.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 */

__int64 __fastcall ACPIThermalReadTemperature(__int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r8d
  unsigned int v6; // edx
  int *v7; // rsi
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int *v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // eax
  IRP *v17; // rcx
  __int64 v18; // rcx
  struct _DEVICE_OBJECT *v19; // rdi
  __int64 v20; // rdx
  __int64 result; // rax
  int v22; // edx
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  v23 = 0LL;
  v4 = 0;
  v6 = -1;
  v7 = (int *)(v2 + 224);
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_DWORD *)(v2 + 232) = 0;
  if ( a2 )
    goto LABEL_40;
  v8 = *(_DWORD *)(v2 + 104);
  *v7 = -1;
  if ( v8 )
  {
    v9 = *(_DWORD *)(v2 + 108);
    v4 = v8 < v9 ? v9 - v8 : 0;
    if ( ~v9 > v8 )
      v6 = v8 + v9;
  }
  v10 = *(_DWORD *)(v2 + 20);
  if ( v10 )
  {
    if ( v10 > *(_DWORD *)(v2 + 16) )
    {
      if ( v10 < v6 )
        v6 = v10 + 1;
    }
    else if ( v10 > v4 )
    {
      v4 = v10 - 1;
    }
  }
  v11 = *(_DWORD *)(v2 + 24);
  if ( v11 )
  {
    if ( v11 > *(_DWORD *)(v2 + 16) )
    {
      if ( v11 < v6 )
        v6 = v11 + 1;
    }
    else if ( v11 > v4 )
    {
      v4 = v11 - 1;
    }
  }
  v12 = *(_DWORD *)(v2 + 28);
  if ( v12 )
  {
    if ( v12 > *(_DWORD *)(v2 + 16) )
    {
      if ( v12 < v6 )
        v6 = v12 + 1;
    }
    else if ( v12 > v4 )
    {
      v4 = v12 - 1;
    }
  }
  v13 = *(_DWORD *)(v2 + 76);
  if ( v13 )
  {
    if ( v13 > *(_DWORD *)(v2 + 16) )
    {
      if ( v13 < v6 )
        v6 = v13 + 1;
    }
    else if ( v13 > v4 )
    {
      v4 = v13 - 1;
    }
  }
  if ( *(_BYTE *)(v2 + 32) )
  {
    v14 = (unsigned int *)(v2 + 36);
    v15 = *(unsigned __int8 *)(v2 + 32);
    do
    {
      v16 = *v14;
      if ( *v14 )
      {
        if ( v16 > *(_DWORD *)(v2 + 16) )
        {
          if ( v16 < v6 )
            v6 = v16 + 1;
        }
        else if ( v16 > v4 )
        {
          v4 = v16 - 1;
        }
      }
      ++v14;
      --v15;
    }
    while ( v15 );
  }
  if ( v4 || v6 != -1 )
  {
LABEL_40:
    v17 = *(IRP **)(v2 + 208);
    *(_DWORD *)(v2 + 232) = v6;
    *(_DWORD *)(v2 + 228) = v4;
    IoReuseIrp(v17, -1073741637);
    v18 = *(_QWORD *)(*(_QWORD *)(v2 + 208) + 184LL);
    *(_BYTE *)(v18 - 72) = 14;
    *(_DWORD *)(v18 - 48) = 2703504;
    *(_DWORD *)(v18 - 56) = 12;
    *(_DWORD *)(v18 - 64) = 4;
    *(_QWORD *)(*(_QWORD *)(v2 + 208) + 24LL) = v7;
    v19 = *(struct _DEVICE_OBJECT **)(v2 + 216);
    if ( a2 )
    {
      result = IoSynchronousCallDriver(*(_QWORD *)(v2 + 216), *(_QWORD *)(v2 + 208));
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v2 + 272) = 1;
        return result;
      }
      v22 = *v7;
      *(_BYTE *)(v2 + 272) = 0;
      ACPIThermalUpdateTemperature(a1, v22);
    }
    else
    {
      KeClearEvent((PRKEVENT)(v2 + 248));
      AcpiGetDriverProxyWrappedEndpoint(&v23, (__int64)ACPIThermalReadTemperatureComplete);
      v20 = *(_QWORD *)(*(_QWORD *)(v2 + 208) + 184LL);
      *(_QWORD *)(v20 - 16) = v23;
      *(_QWORD *)(v20 - 8) = a1;
      *(_BYTE *)(v20 - 69) = -32;
      IofCallDriver(v19, *(PIRP *)(v2 + 208));
    }
  }
  return 0LL;
}
