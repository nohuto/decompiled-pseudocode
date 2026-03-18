/*
 * XREFs of ?ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z @ 0x14018A7EC
 * Callers:
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x140158B00 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 * Callees:
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x14018AA6C (Feature_YieldInputQueue2__private_GetVariant.c)
 *     ?StrugglingInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z @ 0x14018AAA8 (-StrugglingInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z.c)
 */

char __fastcall ShouldYieldInputQueue(struct tagTHREADINFO *a1)
{
  __int64 v2; // rcx
  char v3; // bp
  __int64 v4; // rax
  char v5; // dl
  __int64 *v6; // rcx
  int v7; // eax
  int v8; // edx
  __int64 *v10; // rdi
  char v11; // r13
  int v12; // eax
  bool v13; // zf
  int Variant; // eax
  __int64 v15; // r8
  int v16; // edx
  __int16 v17; // cx
  unsigned int v18; // edx

  v2 = *((_QWORD *)a1 + 58);
  v3 = 0;
  if ( (*(_DWORD *)(v2 + 436) & 0x1000) != 0 )
  {
    v10 = *(__int64 **)(v2 + 24);
    v11 = 0;
    while ( v10 )
    {
      if ( (*((_DWORD *)v10 + 25) & 0x10000000) != 0 )
        return 0;
      v12 = *((_DWORD *)v10 + 6);
      if ( v12 == 512 )
      {
        v13 = (*(_DWORD *)(*((_QWORD *)a1 + 58) + 544LL) & 1) == 0;
      }
      else
      {
        if ( v12 != 255 )
        {
LABEL_36:
          v3 = 0;
          *(_DWORD *)(*((_QWORD *)a1 + 58) + 436LL) &= ~0x1000u;
          return v3;
        }
        v13 = (*(_DWORD *)(*((_QWORD *)a1 + 58) + 544LL) & 2) == 0;
      }
      if ( v13 )
        goto LABEL_36;
      if ( !v11 )
      {
        v11 = 1;
        Variant = Feature_YieldInputQueue2__private_GetVariant();
        v15 = *((_QWORD *)a1 + 58);
        if ( Variant == 2 )
        {
          v16 = *(_DWORD *)(v15 + 436);
          v17 = v16;
          if ( (v16 & 0x2000) != 0 )
            v3 = 1;
          v18 = v16 | 0x2000;
          if ( (v17 & 0x2000) != 0 )
            v18 = *(_DWORD *)(v15 + 436) & 0xFFFFEFFF;
          *(_DWORD *)(v15 + 436) = v18;
        }
        else
        {
          if ( !*(_WORD *)(v15 + 548) )
            *(LARGE_INTEGER *)(*((_QWORD *)a1 + 58) + 552LL) = KeQueryPerformanceCounter(0LL);
          ++*(_WORD *)(*((_QWORD *)a1 + 58) + 548LL);
          InputTraceLogging::Mouse::StrugglingInputQueue(*((const struct tagQ **)a1 + 58));
        }
      }
      if ( !v3 )
      {
        *((_DWORD *)v10 + 25) |= 0x10000000u;
        if ( *((_DWORD *)v10 + 6) == 512 )
          *(_DWORD *)(*((_QWORD *)a1 + 58) + 544LL) |= 1u;
        if ( *((_DWORD *)v10 + 6) == 255 )
          *(_DWORD *)(*((_QWORD *)a1 + 58) + 544LL) |= 2u;
      }
      v10 = (__int64 *)*v10;
    }
  }
  else
  {
    v4 = *((_QWORD *)a1 + 170);
    if ( (v4 & 0x2000) == 0 && (v4 & 0x2000000000LL) == 0 )
    {
      *(_DWORD *)(v2 + 544) = 0;
      v5 = 0;
      *(_DWORD *)(*((_QWORD *)a1 + 58) + 436LL) &= ~0x2000u;
      *(_WORD *)(*((_QWORD *)a1 + 58) + 548LL) = 0;
      *(_WORD *)(*((_QWORD *)a1 + 58) + 550LL) = 0;
      *(_QWORD *)(*((_QWORD *)a1 + 58) + 552LL) = 0LL;
      v6 = *(__int64 **)(v2 + 24);
      while ( v6 )
      {
        v7 = *((_DWORD *)v6 + 25);
        if ( (v7 & 0x10000000) != 0 )
          return v3;
        v8 = *((_DWORD *)v6 + 6);
        if ( v8 != 512 && v8 != 255 )
          return v3;
        *((_DWORD *)v6 + 25) = v7 | 0x10000000;
        if ( v8 == 512 )
          *(_DWORD *)(*((_QWORD *)a1 + 58) + 544LL) |= 1u;
        if ( *((_DWORD *)v6 + 6) == 255 )
          *(_DWORD *)(*((_QWORD *)a1 + 58) + 544LL) |= 2u;
        v6 = (__int64 *)*v6;
        v5 = 1;
      }
      if ( v5 )
        *(_DWORD *)(*((_QWORD *)a1 + 58) + 436LL) |= 0x1000u;
    }
  }
  return v3;
}
