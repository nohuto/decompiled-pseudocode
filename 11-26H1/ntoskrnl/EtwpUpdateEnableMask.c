/*
 * XREFs of EtwpUpdateEnableMask @ 0x14097A288
 * Callers:
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 */

char __fastcall EtwpUpdateEnableMask(__int64 a1, char a2, char a3, char a4, _WORD *a5)
{
  _DWORD *v5; // r14
  char result; // al
  unsigned int i; // ebp
  __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // r15
  unsigned int *v13; // rbx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v14; // rcx
  char v15; // [rsp+68h] [rbp+10h]

  v15 = a2;
  v5 = (_DWORD *)(a1 + 136);
  result = a3;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( !*(v5 - 2) )
      goto LABEL_3;
    if ( !result || (*v5 & 0x400) != 0 )
    {
      v9 = *((unsigned __int16 *)v5 - 1);
      v10 = 0;
      if ( !a2 || (_DWORD)v9 == *(unsigned __int16 *)(a1 + 88) )
      {
        v11 = *(_QWORD *)(a1 + 648);
        v12 = *((unsigned __int16 *)v5 - 1);
        if ( (unsigned int)v9 < *(_DWORD *)(v11 + 16) && (*(_BYTE *)(*(_QWORD *)(v11 + 712) + 8 * v9) & 1) == 0 )
        {
          if ( ExAcquireRundownProtectionCacheAwareEx(
                 *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v11 + 704) + 8 * v9),
                 1u) )
          {
            if ( (unsigned int)v9 >= *(_DWORD *)(v11 + 16)
              || (_mm_lfence(),
                  v13 = *(unsigned int **)(*(_QWORD *)(v11 + 712) + 8 * v9),
                  ((unsigned __int8)v13 & 1) != 0) )
            {
              v14 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(v11 + 704) + 8 * v12);
            }
            else
            {
              if ( v13[80] )
              {
                if ( v13 )
                {
                  if ( !a4 || v15 )
                  {
                    if ( (v13[3] & 0x1000000) != 0 )
                      v10 = -1073741790;
                  }
                  else if ( (v13[3] & 0x80u) != 0 )
                  {
                    v10 = EtwpCheckLoggerControlAccess(0x200u);
                  }
                  ExReleaseRundownProtectionCacheAwareEx(
                    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v13 + 170) + 704LL) + 8LL * *v13),
                    1u);
                  a2 = v15;
                  if ( !v10 )
                    *a5 |= 1 << (i & 0xF);
                  goto LABEL_23;
                }
                goto LABEL_15;
              }
              v14 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(*((_QWORD *)v13 + 170) + 704LL) + 8LL * *v13);
            }
            ExReleaseRundownProtectionCacheAwareEx(v14, 1u);
          }
LABEL_15:
          a2 = v15;
        }
      }
    }
LABEL_23:
    result = a3;
LABEL_3:
    v5 += 8;
  }
  return result;
}
