/*
 * XREFs of PspSetEffectiveJobLimits @ 0x140ABD918
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407FDE6C (PspEstablishJobHierarchy.c)
 *     PspSetJobLimitsJobPreCallback @ 0x140ABD8A0 (PspSetJobLimitsJobPreCallback.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspSetEffectiveLimit @ 0x140ABDC50 (PspSetEffectiveLimit.c)
 */

__int64 __fastcall PspSetEffectiveJobLimits(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // al
  int v6; // ecx
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned __int8 v19; // dl
  struct _KAFFINITY_EX *v20; // rcx
  struct _KAFFINITY_EX *v21; // r8
  unsigned __int16 i; // cx
  unsigned int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int16 v26; // r9
  __int64 *v27; // r8
  unsigned __int16 j; // dx
  unsigned __int16 k; // cx
  __int64 v30; // [rsp+20h] [rbp-158h] BYREF
  _QWORD v31[33]; // [rsp+28h] [rbp-150h] BYREF

  memset_0(&v30, 0, 0x108uLL);
  v4 = *(_QWORD *)(a1 + 1304);
  v5 = PspSetEffectiveLimit(16LL, a2);
  v7 = v6 - 15;
  v8 = v6 + 16;
  if ( v5 )
  {
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v6) != 0 )
    {
      if ( v4 )
      {
        for ( i = 0; i < *(_WORD *)(v4 + 728); i += v7 )
        {
          if ( *(_QWORD *)(v4 + 728 + 8LL * i + 8) )
          {
            v30 = 2097153LL;
            memset_0(v31, 0, 0x100uLL);
            RtlAndAffinityEx((unsigned __int16 *)(v4 + 728), (unsigned __int16 *)(a1 + 264), (__int64)&v30);
            v26 = *(_WORD *)(a1 + 264);
            if ( v26 >= (unsigned __int16)v30 )
            {
              v27 = (__int64 *)(a1 + 264);
              v26 = v30;
            }
            else
            {
              v27 = &v30;
            }
            for ( j = 0; j < v26; j += v7 )
            {
              if ( *(_QWORD *)(a1 + 264 + 8LL * j + 8) != v31[j] )
                goto LABEL_74;
            }
            while ( j < *(_WORD *)v27 )
            {
              if ( v27[j + 1] )
                goto LABEL_74;
              j += v7;
            }
            for ( k = 0; k < (unsigned __int16)v30; k += v7 )
            {
              if ( v31[k] )
              {
                v20 = (struct _KAFFINITY_EX *)(a1 + 728);
                v21 = (struct _KAFFINITY_EX *)&v30;
                goto LABEL_37;
              }
            }
LABEL_74:
            v20 = (struct _KAFFINITY_EX *)(a1 + 728);
            v21 = (struct _KAFFINITY_EX *)(v4 + 728);
            goto LABEL_37;
          }
        }
      }
      v20 = (struct _KAFFINITY_EX *)(a1 + 728);
      v21 = (struct _KAFFINITY_EX *)(a1 + 264);
    }
    else
    {
      v20 = (struct _KAFFINITY_EX *)(a1 + 728);
      if ( !v4 )
      {
        *(_QWORD *)&v20->Count = 2097153LL;
        memset_0((void *)(a1 + 736), 0, 0x100uLL);
        goto LABEL_2;
      }
      v21 = (struct _KAFFINITY_EX *)(v4 + 728);
    }
LABEL_37:
    RtlpCopyAffinityEx(v20, v20->Size, v21);
  }
LABEL_2:
  if ( (unsigned __int8)PspSetEffectiveLimit(v8, a2) )
  {
    if ( v4 )
      v19 = *(_BYTE *)(v4 + 1100);
    else
      v19 = 0;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v8) != 0
      && *((_BYTE *)&PspPriorityClassRank + v19) >= *((_BYTE *)&PspPriorityClassRank + *(unsigned __int8 *)(a1 + 1101)) )
    {
      v19 = *(_BYTE *)(a1 + 1101);
    }
    *(_BYTE *)(a1 + 1100) = v19;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(128LL, a2) )
  {
    if ( v4 )
      v18 = *(_DWORD *)(v4 + 1060);
    else
      v18 = 10;
    if ( (*(_DWORD *)(a1 + 256) & 0x80u) == 0 || (v23 = *(_DWORD *)(a1 + 580), v23 >= v18) )
      *(_DWORD *)(a1 + 1060) = v18;
    else
      *(_DWORD *)(a1 + 1060) = v23;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(v7, v9) )
  {
    if ( v4 )
    {
      v14 = *(_QWORD *)(v4 + 1000);
      v15 = *(_QWORD *)(v4 + 1008);
    }
    else
    {
      v14 = 0LL;
      v15 = 0LL;
    }
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v7) == 0
      || (v24 = *(_QWORD *)(a1 + 248), v24 >= v15) && v15 )
    {
      *(_QWORD *)(a1 + 1008) = v15;
      *(_QWORD *)(a1 + 1000) = v14;
    }
    else
    {
      *(_QWORD *)(a1 + 1008) = v24;
      *(_QWORD *)(a1 + 1000) = *(_QWORD *)(a1 + 240);
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(256LL, a2) )
  {
    if ( v4 )
    {
      v10 = *(_QWORD *)(v4 + 1016);
      v11 = *(_QWORD *)(v4 + 1024);
    }
    else
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 0x100) == 0 || (v12 = *(_QWORD *)(a1 + 688), v12 >= v10) && v10 )
    {
      *(_QWORD *)(a1 + 1016) = v10;
      *(_QWORD *)(a1 + 1024) = v11;
    }
    else
    {
      *(_QWORD *)(a1 + 1016) = v12;
      *(_QWORD *)(a1 + 1024) = a1;
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(2LL, a2) )
  {
    if ( v4 )
    {
      v16 = *(_QWORD *)(v4 + 992);
      v17 = *(_QWORD *)(v4 + 1032);
    }
    else
    {
      v16 = 0LL;
      v17 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 2) == 0 || (v25 = *(_QWORD *)(a1 + 224), v25 >= v16) && v16 )
    {
      *(_QWORD *)(a1 + 992) = v16;
      *(_QWORD *)(a1 + 1032) = v17;
    }
    else
    {
      *(_QWORD *)(a1 + 992) = v25;
      *(_QWORD *)(a1 + 1032) = a1;
    }
  }
  result = *(unsigned int *)(a1 + 256);
  *(_DWORD *)(a1 + 1056) = result;
  if ( v4 )
  {
    result = *(_DWORD *)(v4 + 1056) | (unsigned int)result;
    *(_DWORD *)(a1 + 1056) = result;
  }
  return result;
}
