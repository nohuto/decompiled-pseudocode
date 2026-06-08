/*
 * XREFs of GetHwDebugRegisters @ 0x14002B1D0
 * Callers:
 *     <none>
 * Callees:
 *     __report_rangecheckfailure @ 0x140006010 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x140010330 (GetCpuIdInfo.c)
 *     IsPackageThermStatusSupported @ 0x140029F34 (IsPackageThermStatusSupported.c)
 *     IsOverclockingStatusSupported @ 0x14002B444 (IsOverclockingStatusSupported.c)
 *     GetCPUFamilyAndModel @ 0x140049008 (GetCPUFamilyAndModel.c)
 */

__int64 __fastcall GetHwDebugRegisters(__int64 a1)
{
  unsigned int v1; // ebx
  bool v3; // bp
  bool v4; // r15
  char v5; // r12
  __int16 v6; // r13
  __int64 v7; // rsi
  char v8; // di
  int v9; // r10d
  unsigned int i; // r8d
  __int64 v11; // rax
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // cx
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  __int64 Pool2; // rdx
  unsigned int v18; // r8d
  _BYTE *v19; // r10
  wchar_t **v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  _BYTE v29[4]; // [rsp+20h] [rbp-48h] BYREF
  _WORD v30[2]; // [rsp+24h] [rbp-44h] BYREF
  __int128 v31; // [rsp+28h] [rbp-40h] BYREF

  v1 = 0;
  *(_BYTE *)a1 = 0;
  v30[0] = 0;
  v29[0] = 0;
  v31 = 0LL;
  GetCpuIdInfo(1u, &v31);
  v3 = (HIDWORD(v31) & 0x400000) != 0;
  v4 = IsPackageThermStatusSupported();
  v5 = IsOverclockingStatusSupported();
  GetCPUFamilyAndModel(v30, v29);
  v6 = v30[0];
  v7 = 2LL;
  v8 = v29[0];
  v9 = 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( i >= 2uLL )
      _report_rangecheckfailure();
    v11 = 56LL * i;
    *((_BYTE *)v30 + i) = 0;
    if ( *(_WORD *)((char *)&IntelModelSpecificHwDebugRegisters + v11) == v6 )
    {
      v12 = *(_WORD *)((char *)&IntelModelSpecificHwDebugRegisters + v11 + 2);
      v13 = 0;
      if ( v12 )
      {
        while ( *(_BYTE *)(v13 + *(_QWORD *)((char *)&IntelModelSpecificHwDebugRegisters + v11 + 8)) != v8 )
        {
          if ( ++v13 >= v12 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        if ( v13 == v12 )
          continue;
      }
      *((_BYTE *)v30 + i) = 1;
      ++v9;
    }
  }
  v14 = v9 + 1;
  if ( !v3 )
    v14 = v9;
  v15 = v14 + 1;
  if ( !v4 )
    v15 = v14;
  v16 = v15 + 1;
  if ( !v5 )
    v16 = v15;
  if ( v16 )
  {
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(40 * v16), 1919119952LL);
    if ( Pool2 )
    {
      v18 = 0;
      v19 = v30;
      v20 = &off_1400180B0;
      do
      {
        if ( *v19 )
        {
          v21 = v18++;
          v22 = 5 * v21;
          *(_OWORD *)(Pool2 + 8 * v22) = *(_OWORD *)v20;
          *(_OWORD *)(Pool2 + 8 * v22 + 16) = *((_OWORD *)v20 + 1);
          *(_QWORD *)(Pool2 + 8 * v22 + 32) = v20[4];
        }
        ++v19;
        v20 += 7;
        --v7;
      }
      while ( v7 );
      if ( v3 )
      {
        v23 = v18++;
        v24 = 5 * v23;
        *(_OWORD *)(Pool2 + 8 * v24) = *(_OWORD *)&ThermStatusDebugRegister;
        *(_OWORD *)(Pool2 + 8 * v24 + 16) = unk_1400182D0;
        *(_QWORD *)(Pool2 + 8 * v24 + 32) = qword_1400182E0;
      }
      if ( v4 )
      {
        v25 = v18++;
        v26 = 5 * v25;
        *(_OWORD *)(Pool2 + 8 * v26) = *(_OWORD *)&PackageThermStatusDebugRegister;
        *(_OWORD *)(Pool2 + 8 * v26 + 16) = *(_OWORD *)&byte_140018010;
        *(_QWORD *)(Pool2 + 8 * v26 + 32) = off_140018020;
      }
      if ( v5 )
      {
        v27 = 5LL * v18;
        *(_OWORD *)(Pool2 + 8 * v27) = *(_OWORD *)&OverclockingStatusDebugRegister;
        *(_OWORD *)(Pool2 + 8 * v27 + 16) = unk_140018080;
        *(_QWORD *)(Pool2 + 8 * v27 + 32) = qword_140018090;
      }
      *(_BYTE *)a1 = v16;
      *(_QWORD *)(a1 + 8) = Pool2;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
