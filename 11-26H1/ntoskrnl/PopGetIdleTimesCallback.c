/*
 * XREFs of PopGetIdleTimesCallback @ 0x140428440
 * Callers:
 *     PoGetIdleTimes @ 0x1404280E0 (PoGetIdleTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1403ECDB0 (PpmContinueActiveTimeAccumulation.c)
 *     PpmConvertTimeTo @ 0x140429470 (PpmConvertTimeTo.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  BOOL v6; // ecx
  unsigned int v7; // eax
  char v8; // bl
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // r8
  unsigned int v13; // ebp
  unsigned __int64 v14; // r14
  unsigned int v15; // r12d
  unsigned __int64 QuadPart; // r13
  BOOL v17; // eax
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  unsigned int v20; // edi
  int v21; // eax
  unsigned int i; // r13d
  unsigned int v25; // ecx
  __int64 v26; // rax
  bool v27; // zf
  _DWORD *v28; // rdx
  _QWORD *v29; // r15
  unsigned __int64 v30; // r8
  __int64 v31; // rbx
  BOOL v32; // [rsp+20h] [rbp-A8h]
  unsigned int v33; // [rsp+24h] [rbp-A4h]
  unsigned int v34; // [rsp+28h] [rbp-A0h]
  unsigned int v35; // [rsp+2Ch] [rbp-9Ch]
  unsigned int v36; // [rsp+30h] [rbp-98h]
  unsigned int *v37; // [rsp+38h] [rbp-90h]
  __int64 v38; // [rsp+40h] [rbp-88h]
  signed __int64 v39; // [rsp+48h] [rbp-80h]
  __int64 v40; // [rsp+50h] [rbp-78h]
  unsigned __int64 v41; // [rsp+58h] [rbp-70h]
  _QWORD *v42; // [rsp+60h] [rbp-68h]
  _DWORD *v43; // [rsp+68h] [rbp-60h]
  __int64 v44; // [rsp+70h] [rbp-58h]
  LARGE_INTEGER v45; // [rsp+80h] [rbp-48h]
  char v48; // [rsp+E8h] [rbp+20h]

  v3 = (__int64)a1;
  v5 = a3;
  v6 = KeGetCurrentPrcb() != a1;
  v7 = 0;
  v32 = v6;
  v8 = 0;
  v39 = 0LL;
  v48 = 0;
  v40 = 0LL;
  while ( 1 )
  {
    do
    {
      if ( v7 >= 5 )
        return (unsigned int)-1073741823;
      v33 = v7 + 1;
      v41 = 0LL;
      v43 = 0LL;
      v42 = 0LL;
      if ( v6 )
      {
        v40 = *(_QWORD *)(v3 + 34920);
        _m_prefetchw((const void *)(v3 + 34928));
        v9 = *(_QWORD *)(v3 + 34928);
        do
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 34928), v9, v9);
        }
        while ( v10 != v9 );
        v8 = v9 & 1;
        v39 = v9;
        v48 = v9 & 1;
        v41 = *(_QWORD *)(v3 + 34936);
      }
      v37 = *(unsigned int **)(v3 + 34888);
      v38 = *(_QWORD *)(v3 + 34880);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v13 = *(_DWORD *)(v3 + 34912);
      v14 = 0LL;
      v15 = *(_DWORD *)(v3 + 34916);
      QuadPart = PerformanceCounter.QuadPart;
      v45 = PerformanceCounter;
      v17 = v32;
      v35 = v15;
      v34 = *(_DWORD *)(v3 + 34372);
      v36 = *(_DWORD *)(*(_QWORD *)(v3 + 24) + 652LL);
      if ( !v32 || v8 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)(v3 + 24) + 652LL);
        v15 = *(_DWORD *)(v3 + 34372);
      }
      v44 = *(_QWORD *)(v3 + 34904);
      if ( a2 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_OWORD *)(a2 + 16) = 0LL;
        *(_OWORD *)(a2 + 32) = 0LL;
        if ( v37 )
        {
          if ( v38 )
          {
            for ( i = 0; ; ++i )
            {
              v25 = *v37;
              if ( *v37 >= *(_DWORD *)(v38 + 40) )
                v25 = *(_DWORD *)(v38 + 40);
              if ( i >= v25 )
              {
                v3 = (__int64)a1;
                v14 = 0LL;
                v8 = v48;
                v5 = a3;
                QuadPart = v45.QuadPart;
                *(_QWORD *)a2 = PpmConvertTimeTo(*((_QWORD *)v37 + 3), 10000000LL);
                v17 = v32;
                break;
              }
              v26 = 352LL * i;
              if ( *(_BYTE *)(v26 + v38 + 1392) )
              {
                if ( *(_BYTE *)(v26 + v38 + 1392) == 1 )
                  goto LABEL_58;
                v27 = *(_BYTE *)(v26 + v38 + 1392) == 2;
              }
              else
              {
                if ( !i )
                {
LABEL_58:
                  v28 = (_DWORD *)(a2 + 32);
                  v29 = (_QWORD *)(a2 + 8);
                  goto LABEL_59;
                }
                v27 = i == 1;
              }
              if ( v27 )
              {
                v28 = (_DWORD *)(a2 + 36);
                v29 = (_QWORD *)(a2 + 16);
              }
              else
              {
                v28 = (_DWORD *)(a2 + 40);
                v29 = (_QWORD *)(a2 + 24);
              }
LABEL_59:
              if ( i == *(_DWORD *)(v38 + 28) )
              {
                v42 = v29;
                v43 = v28;
              }
              v30 = (unsigned __int64)i << 10;
              if ( v28 && v29 )
              {
                *v28 += *(unsigned int *)((char *)v37 + v30 + 52) + *(unsigned int *)((char *)v37 + v30 + 56);
                v31 = *v29;
                *v29 = v31 + PpmConvertTimeTo(*(_QWORD *)((char *)v37 + v30 + 40), 10000000LL);
              }
            }
          }
        }
      }
      if ( v5 )
      {
        if ( !v17 )
          PpmContinueActiveTimeAccumulation(v3, QuadPart, v12.QuadPart);
        *(_QWORD *)(v5 + 8) = PpmConvertTimeTo(*(_QWORD *)(v3 + 35104), 10000000LL);
      }
      if ( !v32 )
        goto LABEL_23;
      _m_prefetchw((const void *)(v3 + 34928));
      v18 = *(_QWORD *)(v3 + 34928);
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 34928), v18, v18);
      }
      while ( v19 != v18 );
      v6 = v32;
      v27 = v39 == v18;
      v7 = v33;
    }
    while ( !v27 );
    if ( v8 )
      break;
    v6 = v32;
    if ( v40 == v39 )
    {
      v20 = v34;
      v14 = PpmConvertTimeTo(v44, 10000000LL);
      goto LABEL_20;
    }
  }
  if ( QuadPart > v41 )
  {
    v14 = PpmConvertTimeTo(QuadPart - v41, 10000000LL);
    if ( v42 )
    {
      if ( v43 )
      {
        ++*v43;
        *v42 += v14;
      }
    }
  }
  v20 = v34;
  if ( v35 == v34 )
    v14 += PpmConvertTimeTo(v44, 10000000LL);
LABEL_20:
  if ( v14 > (unsigned int)KeMaximumIncrement )
  {
    v21 = v14 / (unsigned int)KeMaximumIncrement - 1;
    v13 += v21;
    v15 += v21;
  }
  if ( !v8 && v20 > v15 )
  {
    v15 = v20;
    if ( v13 <= v36 )
      v13 = v36;
  }
LABEL_23:
  if ( a2 )
  {
    if ( v37 && v38 )
      *(_QWORD *)a2 += *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24);
    else
      *(_QWORD *)a2 = v13 * (unsigned __int64)(unsigned int)KeMaximumIncrement;
  }
  if ( v5 )
  {
    *(_DWORD *)v5 = v13;
    *(_DWORD *)(v5 + 4) = v15;
  }
  return 0;
}
