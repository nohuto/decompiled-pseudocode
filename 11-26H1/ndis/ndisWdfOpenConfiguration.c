/*
 * XREFs of ndisWdfOpenConfiguration @ 0x1401396AC
 * Callers:
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14000AC20 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x14005C970 (NdisConvertNtStatusToNdisStatus.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14008E040 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ndisWdfOpenConfigurationKey @ 0x14015DF30 (ndisWdfOpenConfigurationKey.c)
 */

__int64 __fastcall ndisWdfOpenConfiguration(__int64 a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  char *v5; // rbx
  _DWORD *v7; // rdi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  _OWORD v17[9]; // [rsp+50h] [rbp-A8h] BYREF
  PVOID P; // [rsp+110h] [rbp+18h] BYREF

  Pool2 = ExAllocatePool2(64LL, 176LL, 1751336014LL);
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      (__int64)&P,
      Pool2);
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(&P);
  }
  v5 = (char *)P;
  if ( !P )
    return 3221225626LL;
  v7 = (char *)P + 40;
  memset(v17, 0, 0x88uLL);
  v8 = v17[1];
  *(_OWORD *)((char *)P + 40) = v17[0];
  v9 = v17[2];
  *(_OWORD *)(v5 + 56) = v8;
  v10 = v17[3];
  *(_OWORD *)(v5 + 72) = v9;
  v11 = v17[4];
  *(_OWORD *)(v5 + 88) = v10;
  v12 = v17[5];
  *(_OWORD *)(v5 + 104) = v11;
  v13 = v17[6];
  *(_OWORD *)(v5 + 120) = v12;
  *(_OWORD *)(v5 + 136) = v13;
  v14 = *(_QWORD *)&v17[8];
  *(_OWORD *)(v5 + 152) = v17[7];
  *((_QWORD *)v5 + 21) = v14;
  *((_QWORD *)v5 + 8) = ndisSaveParameters;
  *v7 = 8913162;
  *((_QWORD *)v5 + 6) = a1;
  *((_DWORD *)v5 + 18) = 20;
  *((_DWORD *)v5 + 24) = 0;
  *((_QWORD *)v5 + 15) = 0LL;
  *((_DWORD *)v5 + 32) = 0;
  *((_QWORD *)v5 + 17) = 0LL;
  *(_OWORD *)v5 = 0LL;
  *((_OWORD *)v5 + 1) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *(_DWORD *)v5 = 2621707;
  *((_QWORD *)v5 + 2) = v7;
  v15 = ndisWdfOpenConfigurationKey(a1);
  if ( v15 )
  {
    v16 = NdisConvertNtStatusToNdisStatus(v15);
    ExFreePoolWithTag(v5, 0);
    return v16;
  }
  else
  {
    *a2 = v5;
    return 0LL;
  }
}
