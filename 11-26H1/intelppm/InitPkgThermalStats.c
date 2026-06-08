/*
 * XREFs of InitPkgThermalStats @ 0x14002BA80
 * Callers:
 *     InitMeasRegisters @ 0x14002B710 (InitMeasRegisters.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     GetPkgThermalRegisterDefinition @ 0x14002B9B4 (GetPkgThermalRegisterDefinition.c)
 */

__int64 InitPkgThermalStats()
{
  _DWORD *v0; // rdi
  int PkgThermalRegisterDefinition; // ebx
  __int64 Pool2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned int v6; // eax
  int v7; // ecx
  _DWORD *v8; // rdx
  __int64 v9; // r8
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned int i; // edx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edx
  _DWORD *v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  void *v25; // rcx
  void *v26; // rcx
  __int64 v27; // r9
  unsigned int j; // edx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rax
  _DWORD *v34; // [rsp+60h] [rbp+18h] BYREF
  __int64 v35; // [rsp+68h] [rbp+20h] BYREF

  v0 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  PkgThermalRegisterDefinition = 0;
  if ( (qword_140019AF8 & 0x200000000LL) != 0 )
    return (unsigned int)PkgThermalRegisterDefinition;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1919119952LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = 2;
    PkgThermalRegisterDefinition = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2520))(
                                     WdfDriverGlobals,
                                     0LL,
                                     Pool2 + 16);
    if ( PkgThermalRegisterDefinition >= 0 )
    {
      PkgThermalRegisterDefinition = GetPkgThermalRegisterDefinition((__int64 *)&v34);
      if ( PkgThermalRegisterDefinition < 0 )
      {
        v0 = v34;
      }
      else
      {
        v4 = ExAllocatePool2(64LL, 48LL, 1919119952LL);
        v0 = v34;
        v5 = v4;
        *(_QWORD *)(v3 + 48) = v4;
        if ( v4 )
        {
          v6 = v0[2];
          v7 = 0;
          if ( v6 )
          {
            v8 = v0 + 10;
            v9 = v6;
            do
            {
              v10 = (*v8 & 0xF00000) == 0;
              v11 = v7 + 1;
              v8 += 8;
              if ( !v10 )
                v11 = v7;
              v7 = v11;
              --v9;
            }
            while ( v9 );
          }
          *(_DWORD *)(v5 + 16) = v7;
          v12 = ExAllocatePool2(64LL, (unsigned int)(40 * v7), 1919119952LL);
          *(_QWORD *)(v5 + 24) = v12;
          if ( v12 )
          {
            v13 = v0[2];
            v14 = 0LL;
            for ( i = 0; i < v13; ++i )
            {
              v16 = 8LL * i;
              if ( (v0[v16 + 10] & 0xF00000) == 0 )
              {
                v17 = *(_QWORD *)(v5 + 24);
                v18 = 5 * v14;
                v14 = (unsigned int)(v14 + 1);
                *(_OWORD *)(v17 + 8 * v18) = *(_OWORD *)&v0[v16 + 4];
                *(_OWORD *)(v17 + 8 * v18 + 16) = *(_OWORD *)&v0[v16 + 8];
              }
              v13 = v0[2];
            }
            v19 = 0;
            if ( v13 )
            {
              v20 = v0 + 10;
              v21 = v13;
              do
              {
                v22 = v19 + 1;
                v23 = *v20 & 0xF00000;
                v20 += 8;
                if ( v23 != 0x100000 )
                  v22 = v19;
                v19 = v22;
                --v21;
              }
              while ( v21 );
            }
            *(_DWORD *)(v5 + 32) = v19;
            v24 = ExAllocatePool2(64LL, (unsigned int)(40 * v19), 1919119952LL);
            *(_QWORD *)(v5 + 40) = v24;
            if ( v24 )
            {
              v27 = 0LL;
              for ( j = 0; j < v0[2]; ++j )
              {
                v29 = 8LL * j;
                if ( (v0[v29 + 10] & 0xF00000) == 0x100000 )
                {
                  v30 = *(_QWORD *)(v5 + 40);
                  v31 = 5 * v27;
                  v27 = (unsigned int)(v27 + 1);
                  *(_OWORD *)(v30 + 8 * v31) = *(_OWORD *)&v0[v29 + 4];
                  *(_OWORD *)(v30 + 8 * v31 + 16) = *(_OWORD *)&v0[v29 + 8];
                }
              }
              *(_QWORD *)v5 = KeQueryInterruptTimePrecise(&v35);
              *(_QWORD *)(v3 + 32) = RefreshPkgThermalMSRValues;
              *(_QWORD *)(v3 + 40) = QueryPkgThermalMSRValues;
              v32 = (__int64 *)qword_140019B08;
              if ( *(__int64 **)qword_140019B08 != &qword_140019B00 )
                __fastfail(3u);
              *(_QWORD *)v3 = &qword_140019B00;
              *(_QWORD *)(v3 + 8) = v32;
              *v32 = v3;
              HIDWORD(qword_140019AF8) |= 1u;
              PkgThermalRegisterDefinition = 0;
              qword_140019B08 = v3;
              goto LABEL_38;
            }
          }
          v25 = *(void **)(v5 + 24);
          PkgThermalRegisterDefinition = -1073741670;
          if ( v25 )
            ExFreePoolWithTag(v25, (ULONG)1919119952);
          v26 = *(void **)(v5 + 40);
          if ( v26 )
            ExFreePoolWithTag(v26, (ULONG)1919119952);
          ExFreePoolWithTag(*(PVOID *)(v3 + 48), (ULONG)1919119952);
        }
        else
        {
          PkgThermalRegisterDefinition = -1073741670;
        }
      }
    }
    ExFreePoolWithTag((PVOID)v3, (ULONG)1919119952);
  }
  else
  {
    PkgThermalRegisterDefinition = -1073741670;
  }
LABEL_38:
  if ( v0 )
    ExFreePoolWithTag(v0, (ULONG)1919119952);
  return (unsigned int)PkgThermalRegisterDefinition;
}
