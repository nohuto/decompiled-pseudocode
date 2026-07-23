/*
 * XREFs of EtwpTraceIo @ 0x140216700
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x140216AD0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     EtwpDiskProvTraceDisk @ 0x140259018 (EtwpDiskProvTraceDisk.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_DWORD *__fastcall EtwpTraceIo(int a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  char *v4; // rsi
  __int64 ThreadServerSilo; // r13
  char v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned __int16 v12; // dx
  int v13; // eax
  __int64 v14; // rcx
  __int128 *v15; // rax
  unsigned __int16 v16; // r12
  unsigned int v17; // ebx
  bool i; // zf
  __int64 v19; // rcx
  _DWORD *v20; // rax
  _DWORD *result; // rax
  __int64 v22; // rsi
  unsigned int v23; // ebx
  __int64 v24; // rcx
  _DWORD *v25; // rax
  int v26; // ebx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r8d
  __int64 *v30; // rsi
  int v31; // eax
  __int64 v32; // rax
  __int128 *v33; // r9
  __int128 v34; // [rsp+38h] [rbp-59h] BYREF
  __int128 v35; // [rsp+48h] [rbp-49h]
  __int128 v36; // [rsp+58h] [rbp-39h]
  __int64 v37; // [rsp+68h] [rbp-29h]
  __int128 v38; // [rsp+78h] [rbp-19h] BYREF
  __int128 v39; // [rsp+88h] [rbp-9h]
  __int128 *v40; // [rsp+98h] [rbp+7h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+Fh]
  __int128 v42; // [rsp+A8h] [rbp+17h] BYREF

  v3 = *(_QWORD *)(a3 + 152);
  v4 = *(char **)(a3 + 184);
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( v3 )
    ThreadServerSilo = PsGetThreadServerSilo(v3);
  else
    ThreadServerSilo = 0LL;
  v9 = *v4;
  v10 = *(_DWORD *)(a3 + 16);
  if ( *v4 != 9 )
  {
    v11 = *(_DWORD *)(a3 + 56);
    *(_QWORD *)&v34 = __PAIR64__(v10, a2);
    *(_QWORD *)&v36 = a3;
    v12 = (v9 != 3) + 266;
    *((_QWORD *)&v34 + 1) = v11;
    *(_QWORD *)&v35 = *((_QWORD *)v4 + 3);
    *((_QWORD *)&v36 + 1) = *((_QWORD *)v4 + 1);
    if ( v3 )
      v13 = *(_DWORD *)(v3 + 1296);
    else
      v13 = -1;
    LODWORD(v37) = v13;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      HIDWORD(v34) = 1;
    }
    else
    {
      v26 = a1 & 0xFFFFFF;
      if ( v26 == 5460546 || v26 == 5467492 )
        HIDWORD(v34) = 2;
    }
    if ( (v10 & 8) != 0 )
    {
      v14 = *(_QWORD *)(a3 + 24);
      if ( v14 )
      {
        v27 = *(_QWORD *)(v14 + 192);
        if ( v27 )
          goto LABEL_32;
        v27 = *(_QWORD *)(*(_QWORD *)(v14 + 184) + 48LL);
        if ( v27 )
          goto LABEL_32;
      }
    }
    else
    {
      v27 = *(_QWORD *)(a3 + 192);
      if ( v27 )
      {
LABEL_32:
        *((_QWORD *)&v35 + 1) = *(_QWORD *)(v27 + 24);
        goto LABEL_11;
      }
      v28 = *(unsigned __int8 *)(a3 + 67);
      v29 = *(char *)(a3 + 66);
      if ( v28 <= v29 )
      {
        v30 = (__int64 *)(v4 + 48);
        do
        {
          v27 = *v30;
          if ( *v30 )
            goto LABEL_32;
          LOBYTE(v28) = v28 + 1;
          v30 += 9;
        }
        while ( (unsigned __int8)v28 <= v29 );
      }
    }
    *((_QWORD *)&v35 + 1) = 0LL;
LABEL_11:
    v15 = &v34;
    v41 = 52LL;
    v16 = v12;
    goto LABEL_12;
  }
  *(_QWORD *)&v38 = __PAIR64__(v10, a2);
  v16 = 270;
  *((_QWORD *)&v38 + 1) = *((_QWORD *)v4 + 1);
  *(_QWORD *)&v39 = a3;
  if ( v3 )
    v31 = *(_DWORD *)(v3 + 1296);
  else
    v31 = -1;
  DWORD2(v39) = v31;
  v15 = &v38;
  v41 = 28LL;
LABEL_12:
  v40 = v15;
  v17 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v19, v17); !i; i = !_BitScanForward((unsigned int *)&v19, v17) )
  {
    v17 &= v17 - 1;
    v20 = (_DWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v19 + 4556);
    if ( v20 && (*v20 & 0x100) != 0 )
      EtwpLogKernelEvent(
        (unsigned int)&v40,
        EtwpHostSiloState,
        *(unsigned __int8 *)(EtwpHostSiloState + 2 * v19 + 4504),
        1,
        v16,
        5249027);
  }
  if ( ThreadServerSilo )
  {
    v22 = *(_QWORD *)(PsGetServerSiloGlobals(ThreadServerSilo) + 832);
    if ( v22 )
    {
      v23 = *(_DWORD *)(v22 + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v24, v23); !i; i = !_BitScanForward((unsigned int *)&v24, v23) )
      {
        v23 &= v23 - 1;
        v25 = (_DWORD *)(v22 + 32LL * (unsigned int)v24 + 4556);
        if ( v25 && (*v25 & 0x100) != 0 )
          EtwpLogKernelEvent((unsigned int)&v40, v22, *(unsigned __int8 *)(v22 + 2 * v24 + 4504), 1, v16, 5249027);
      }
    }
  }
  result = (_DWORD *)(EtwpHostSiloState + 4812);
  if ( EtwpHostSiloState != -4812 && (*result & 0x100) != 0 )
  {
    v32 = *(_QWORD *)(a3 + 200);
    v42 = 0LL;
    if ( *(char *)(a3 + 71) >= 0 && v32 && (*(_BYTE *)(v32 + 2) & 1) != 0 )
    {
      v33 = &v42;
      v42 = *(_OWORD *)(*(_QWORD *)(a3 + 200) + 24LL);
    }
    else
    {
      v33 = 0LL;
    }
    return (_DWORD *)EtwpDiskProvTraceDisk(v16, &v40, v3, v33);
  }
  return result;
}
