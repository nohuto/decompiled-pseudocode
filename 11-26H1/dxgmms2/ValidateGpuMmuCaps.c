/*
 * XREFs of ValidateGpuMmuCaps @ 0x1400B4474
 * Callers:
 *     InitializeGpuVaState @ 0x1400B3BBC (InitializeGpuVaState.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

char __fastcall ValidateGpuMmuCaps(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // r10d
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int i; // r8d
  unsigned int v16; // r9d

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 548);
  while ( v4 <= v5 )
  {
    v6 = a2[5 * v4 + 10];
    if ( ((v6 - 1) & v6) != 0 )
    {
      WdLogSingleEntry2(1LL, v4, (unsigned int)a2[5 * v4 + 10]);
      WdLogGlobalForLineNumber = 156;
      goto LABEL_42;
    }
    ++v4;
  }
  if ( (*a2 & 0x80u) == 0 || (v8 = a2[3]) != 0 && (v8 & 0xFFF) == 0 )
  {
    if ( a2[9] )
    {
      v9 = *(_DWORD *)(a1 + 140);
      if ( a2[7] <= v9 )
      {
        if ( a2[12] <= v9 )
        {
          if ( a2[8] <= v9 )
          {
            if ( a2[13] <= v9 )
            {
              v10 = *(_QWORD *)(a1 + 56);
              if ( *(_DWORD *)(v10 + 40) >= 0x10002u && (*a2 & 0x1000) != 0 && a2[1] )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 219;
              }
              else
              {
                v11 = a2[6];
                v12 = *(_DWORD *)(v10 + 41056) - 12;
                if ( v11 && v11 < v12 )
                {
                  v13 = (int)a2[1];
                  if ( (_DWORD)v13 && (unsigned int)(v13 - 1) > 1 )
                  {
                    WdLogSingleEntry1(1LL, v13);
                    WdLogGlobalForLineNumber = 242;
                  }
                  else
                  {
                    if ( v5 <= 1 )
                      return 1;
                    v14 = *(unsigned int *)(a1 + 212);
                    for ( i = 1; i <= v5; ++i )
                    {
                      v16 = a2[5 * i + 6];
                      if ( !v16 || v16 > v12 - (unsigned int)v14 )
                      {
                        WdLogSingleEntry1(1LL, (unsigned int)a2[5 * i + 6]);
                        WdLogGlobalForLineNumber = 261;
                        goto LABEL_42;
                      }
                      v14 = v16 + (unsigned int)v14;
                      if ( !*(_DWORD *)(a1 + 48LL * i + 216) )
                      {
                        WdLogSingleEntry1(1LL, 0LL);
                        WdLogGlobalForLineNumber = 271;
                        goto LABEL_42;
                      }
                    }
                    if ( (_DWORD)v14 == v12 )
                      return 1;
                    WdLogSingleEntry2(1LL, v14, v12);
                    WdLogGlobalForLineNumber = 281;
                  }
                }
                else
                {
                  WdLogSingleEntry2(1LL, (unsigned int)a2[6], v12);
                  WdLogGlobalForLineNumber = 232;
                }
              }
            }
            else
            {
              WdLogSingleEntry1(1LL, *(unsigned int *)(a1 + 176));
              WdLogGlobalForLineNumber = 209;
            }
          }
          else
          {
            WdLogSingleEntry1(1LL, *(unsigned int *)(a1 + 160));
            WdLogGlobalForLineNumber = 201;
          }
        }
        else
        {
          WdLogSingleEntry1(1LL, *(unsigned int *)(a1 + 168));
          WdLogGlobalForLineNumber = 193;
        }
      }
      else
      {
        WdLogSingleEntry1(1LL, *(unsigned int *)(a1 + 152));
        WdLogGlobalForLineNumber = 185;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 0LL);
      WdLogGlobalForLineNumber = 177;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, (unsigned int)a2[3]);
    WdLogGlobalForLineNumber = 168;
  }
LABEL_42:
  DxgkLogInternalTriageEvent(v7, 0x40000LL);
  return 0;
}
