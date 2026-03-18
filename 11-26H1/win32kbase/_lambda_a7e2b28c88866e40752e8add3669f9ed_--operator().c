/*
 * XREFs of _lambda_a7e2b28c88866e40752e8add3669f9ed_::operator() @ 0x140213588
 * Callers:
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x140215150 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_DWORD *__fastcall lambda_a7e2b28c88866e40752e8add3669f9ed_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  _DWORD *result; // rax
  __int64 v5; // r8
  _DWORD *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int64 v13; // r11
  __int64 v14; // r10
  _OWORD *v15; // rcx
  __int128 v16; // xmm1
  int v17; // eax
  unsigned int v18; // eax

  v3 = 192 * *(_DWORD *)(a2 + 48) + 240;
  result = (_DWORD *)Win32AllocPoolZInitImpl(256LL, v3, 0x66637352u);
  v6 = result;
  if ( result )
  {
    v7 = 0LL;
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 256) + 16LL);
    *result = v3;
    v9 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a2 + 256) + 368LL), 4);
    result[48] = v9;
    v10 = *(_QWORD *)((v9 != 0 ? 8 : 0) + v8 + 16);
    v11 = 0LL;
    *((_QWORD *)v6 + 4) = v10;
    *((_OWORD *)v6 + 3) = *(_OWORD *)(a2 + 72);
    *((_OWORD *)v6 + 4) = *(_OWORD *)(a2 + 88);
    *((_OWORD *)v6 + 5) = *(_OWORD *)(a2 + 104);
    *((_OWORD *)v6 + 6) = *(_OWORD *)(a2 + 120);
    *((_OWORD *)v6 + 7) = *(_OWORD *)(a2 + 136);
    *((_OWORD *)v6 + 8) = *(_OWORD *)(a2 + 152);
    *((_OWORD *)v6 + 9) = *(_OWORD *)(a2 + 168);
    *((_OWORD *)v6 + 10) = *(_OWORD *)(a2 + 184);
    v12 = *(_OWORD *)(a2 + 200);
    *((_QWORD *)v6 + 29) = v6 + 60;
    for ( *((_OWORD *)v6 + 11) = v12; (unsigned int)v7 < *(_DWORD *)(a2 + 48); v7 = (unsigned int)(v7 + 1) )
    {
      v5 = 480LL * (unsigned int)v7 + *(_QWORD *)(a2 + 240) + 160LL;
      if ( (*(_DWORD *)(v5 + 20) & 2) != 0 )
      {
        v13 = *((_QWORD *)v6 + 29);
        v14 = 192LL * (unsigned int)v11;
        v15 = (_OWORD *)(v14 + v13 + 8);
        *v15 = *(_OWORD *)v5;
        v15[1] = *(_OWORD *)(v5 + 16);
        v15[2] = *(_OWORD *)(v5 + 32);
        v15[3] = *(_OWORD *)(v5 + 48);
        v15[4] = *(_OWORD *)(v5 + 64);
        v15[5] = *(_OWORD *)(v5 + 80);
        v15[6] = *(_OWORD *)(v5 + 96);
        v15 += 8;
        v16 = *(_OWORD *)(v5 + 112);
        v5 += 128LL;
        *(v15 - 1) = v16;
        *v15 = *(_OWORD *)v5;
        v15[1] = *(_OWORD *)(v5 + 16);
        v15[2] = *(_OWORD *)(v5 + 32);
        *((_QWORD *)v15 + 6) = *(_QWORD *)(v5 + 48);
        *(_QWORD *)(v14 + v13 + 32) = *((_QWORD *)v6 + 4);
        v17 = *(_DWORD *)(v14 + v13 + 28);
        if ( (v17 & 4) != 0 )
          v18 = v17 & 0xFFF8FFFF | 0x40000;
        else
          v18 = v17 & 0xFFF9FFFF | 0x20000;
        *(_DWORD *)(v14 + v13 + 28) = v18 & 0xFFFF3FE8 | 0x8000;
        v11 = (unsigned int)(v11 + 1);
      }
    }
    v6[6] = v11;
    if ( !(_DWORD)v11 )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 16464);
    if ( !v6[6] )
    {
      GreDeleteFastMutex((char *)v6, v11, v5, v7);
      return 0LL;
    }
    return v6;
  }
  return result;
}
