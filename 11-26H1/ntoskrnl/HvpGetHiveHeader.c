/*
 * XREFs of HvpGetHiveHeader @ 0x140ADBCE8
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1408632D4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvpGetHiveHeader(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v4; // r15
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  int v12; // eax
  int v14; // eax

  v4 = a2;
  *a2 = 0LL;
  LOBYTE(a2) = 1;
  v6 = (void *)guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 132), (__int64)a2);
  v7 = (__int64)v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x1000uLL);
    if ( (int)guard_dispatch_icall_no_overrides(a1, 0LL) >= 0 )
    {
      if ( *(_DWORD *)v7 == 1718052210 && *(_DWORD *)(v7 + 508) == (unsigned int)HvpHeaderCheckSum(v7) )
      {
        v8 = *(_DWORD *)(v7 + 40);
        if ( v8 )
        {
          if ( v8 <= 0x7FFFE000 && (v8 & 0xFFF) == 0 )
          {
            if ( !*(_DWORD *)(v7 + 28) )
            {
              v9 = *(_DWORD *)(v7 + 20);
              if ( v9 <= 1 )
              {
                v10 = *(_DWORD *)(v7 + 24);
                v11 = 3;
                if ( v10 >= 3 && (v10 <= 6 || v9 != 1) && *(_DWORD *)(v7 + 32) == 1 )
                {
                  *a3 = *(_QWORD *)(v7 + 12);
                  v12 = *(_DWORD *)(v7 + 8);
                  *v4 = v7;
                  if ( *(_DWORD *)(v7 + 4) == v12 )
                    *(_DWORD *)(v7 + 44) = 1;
                  else
                    return 5;
                  return v11;
                }
              }
            }
            goto LABEL_21;
          }
        }
      }
      v14 = guard_dispatch_icall_no_overrides(a1, 0LL);
      if ( v14 == -1073741807 )
      {
LABEL_21:
        v11 = 0;
        goto LABEL_18;
      }
      if ( v14 >= 0 )
      {
        if ( *(_DWORD *)v7 == 1852400232 && !*(_DWORD *)(v7 + 4) )
        {
          v11 = 4;
          *a3 = *(_QWORD *)(v7 + 20);
          goto LABEL_18;
        }
        goto LABEL_21;
      }
    }
    v11 = 7;
LABEL_18:
    guard_dispatch_icall_no_overrides(v7, *(unsigned int *)(a1 + 132));
    return v11;
  }
  return 2LL;
}
