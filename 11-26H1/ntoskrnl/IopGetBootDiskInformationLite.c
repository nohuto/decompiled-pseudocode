/*
 * XREFs of IopGetBootDiskInformationLite @ 0x140CC4C00
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x140798F80 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     IopAddBootDiskInformation @ 0x1405CDE80 (IopAddBootDiskInformation.c)
 *     IopCheckDiskName @ 0x1405CDF18 (IopCheckDiskName.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     VhdiGetDiskParameters @ 0x140D08F30 (VhdiGetDiskParameters.c)
 *     CimfsGetDiskParameters @ 0x140D09660 (CimfsGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  int DiskParameters; // edi
  int v3; // edx
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  bool v6; // zf
  int v7; // ecx
  unsigned int *Pool2; // r15
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  unsigned int v11; // r14d
  __int16 *v12; // rsi
  int *v13; // r12
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rcx
  _BYTE v18[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h]
  _OWORD *v20; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v21[4]; // [rsp+58h] [rbp-A8h] BYREF
  STRING v22; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[8]; // [rsp+78h] [rbp-88h] BYREF
  STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  STRING v25; // [rsp+90h] [rbp-70h] BYREF
  STRING v26; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v27[48]; // [rsp+B0h] [rbp-50h] BYREF
  char v28; // [rsp+188h] [rbp+88h] BYREF
  __int16 v29; // [rsp+190h] [rbp+90h] BYREF
  char v30; // [rsp+192h] [rbp+92h]
  ULONG v31; // [rsp+198h] [rbp+98h] BYREF

  v21[0] = 536871168;
  v29 = 0;
  v30 = 0;
  v19 = 0;
  v21[1] = 538968064;
  memset(v18, 0, sizeof(v18));
  v21[2] = 0x20000000;
  v22 = 0LL;
  memset_0(v27, 0, 0x90uLL);
  v31 = 0;
  DiskParameters = 0;
  v28 = 0;
  v20 = 0LL;
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(KeLoaderBlock_0 + 184));
  RtlInitAnsiString(&v25, *(PCSZ *)(KeLoaderBlock_0 + 192));
  RtlInitAnsiString(&v26, *(PCSZ *)(KeLoaderBlock_0 + 336));
  v3 = 3;
  v4 = *(_QWORD **)(KeLoaderBlock_0 + 232);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v6 = v5[7] == 0LL;
    v7 = v3 + 1;
    v5 = (_QWORD *)*v5;
    if ( v6 )
      v7 = v3;
    v3 = v7;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, (unsigned int)(28 * v3 + 4), 0x20206F49u);
  if ( Pool2 )
  {
    v9 = *(_QWORD **)(KeLoaderBlock_0 + 232);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 != v9 )
    {
      do
      {
        RtlInitAnsiString(&v22, (PCSZ)v10[3]);
        v11 = 0;
        v12 = &v29;
        v13 = v21;
        do
        {
          if ( !*(_BYTE *)v12 && IopCheckDiskName(&v22, &DestinationString + v11, &v31) )
          {
            v6 = *((_BYTE *)v10 + 38) == 0;
            *(_DWORD *)&v18[4] = v31;
            v19 = *v13;
            *(_BYTE *)v12 = 1;
            if ( v6 )
            {
              v15 = *((_DWORD *)v10 + 4);
              *(_OWORD *)&v18[8] = 0LL;
              *(_DWORD *)&v18[8] = v15;
              *(_DWORD *)v18 = 0;
            }
            else
            {
              v14 = *(_OWORD *)(v10 + 5);
              *(_DWORD *)v18 = 1;
              *(_OWORD *)&v18[8] = v14;
            }
            IopAddBootDiskInformation(Pool2, (__int64)v18);
          }
          ++v11;
          v12 = (__int16 *)((char *)v12 + 1);
          ++v13;
        }
        while ( v11 < 3 );
        v16 = v10[7];
        if ( v16 )
        {
          DiskParameters = VhdiGetDiskParameters(v16, v27, &v20, &v28, v23);
          if ( DiskParameters >= 0 || (DiskParameters = CimfsGetDiskParameters(v10[7], v27, &v20), DiskParameters >= 0) )
          {
            if ( !v28 )
            {
              *(_DWORD *)v18 = v27[0];
              *(_DWORD *)&v18[4] = v27[6];
              v19 = 0x400000;
              if ( v27[0] )
              {
                if ( v27[0] == 1 )
                  *(_OWORD *)&v18[8] = *v20;
              }
              else
              {
                *(_OWORD *)&v18[8] = 0LL;
                *(_DWORD *)&v18[8] = *(_DWORD *)v20;
              }
              IopAddBootDiskInformation(Pool2, (__int64)v18);
            }
          }
          else
          {
            DiskParameters = 0;
          }
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != *(_QWORD **)(KeLoaderBlock_0 + 232) );
    }
    *a1 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DiskParameters;
}
