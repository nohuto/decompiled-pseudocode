/*
 * XREFs of ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x140185084
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1401F81D4 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall EnforceSDCCloneSourceIndexCoherency(unsigned int a1, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2)
{
  char v2; // r13
  unsigned int i; // ebp
  __int64 v6; // rsi
  unsigned int j; // r14d
  int v8; // edx
  char v9; // r15
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx

  v2 = 0;
  for ( i = 0; i < a1; ++i )
  {
    v6 = 216LL * i;
    if ( *(__int64 *)((char *)a2 + v6) < 0 )
    {
      for ( j = i; j < a1; ++j )
      {
        if ( j != i )
        {
          v8 = *(_DWORD *)((char *)a2 + v6 + 24);
          v9 = 0;
          v10 = 216LL * j;
          v11 = *(_DWORD *)((char *)a2 + v10 + 24);
          if ( v11 == v8
            && *(_DWORD *)((char *)a2 + v10 + 16) == *(_DWORD *)((char *)a2 + v6 + 16)
            && *(_DWORD *)((char *)a2 + v10 + 20) == *(_DWORD *)((char *)a2 + v6 + 20)
            && v11 != -2 )
          {
            v9 = 1;
            if ( *(_DWORD *)((char *)a2 + v10 + 156) != *(_DWORD *)((char *)a2 + v6 + 156) )
            {
              WdLogSingleEntry2(2LL, i, j);
              WdLogGlobalForLineNumber = 12777;
              return 3221225485LL;
            }
          }
          else
          {
            if ( *(_DWORD *)((char *)a2 + v10 + 156) != *(_DWORD *)((char *)a2 + v6 + 156) )
              continue;
            if ( *(_DWORD *)((char *)a2 + v10 + 16) == *(_DWORD *)((char *)a2 + v6 + 16)
              && *(_DWORD *)((char *)a2 + v10 + 20) == *(_DWORD *)((char *)a2 + v6 + 20)
              && (v11 == -2 || v8 == -2)
              && !*((_BYTE *)a2 + v10 + 101) )
            {
              v9 = 1;
              if ( v11 != v8 )
              {
                WdLogSingleEntry2(2LL, i, j);
                WdLogGlobalForLineNumber = 12793;
                return 3221225485LL;
              }
            }
          }
          v13 = (-(__int64)(v9 != 0) & 0x8000000100LL) + 0x4000000020800LL;
          v14 = *(_QWORD *)((_BYTE *)a2 + v6) & v13;
          if ( (v13 & *(_QWORD *)((_BYTE *)a2 + v10)) != v14 )
          {
            v15 = *(_QWORD *)((_BYTE *)a2 + v10 + 8) & ~v13;
            *(_QWORD *)((char *)a2 + v10) = v14 | *(_QWORD *)((_BYTE *)a2 + v10) & ~v13;
            *(_QWORD *)((char *)a2 + v10 + 8) = v15 | v13 & *(_QWORD *)((_BYTE *)a2 + v6 + 8);
            if ( !v2 )
            {
              v2 = 1;
              DrvDxgkLogCodePointPacket(57LL, i, j, 0);
            }
          }
          *(_QWORD *)((char *)a2 + v10 + 124) = *(_QWORD *)((char *)a2 + v6 + 124);
          *(_QWORD *)((char *)a2 + v10 + 132) = *(_QWORD *)((char *)a2 + v6 + 132);
          *(_DWORD *)((char *)a2 + v10 + 156) = *(_DWORD *)((char *)a2 + v6 + 156);
          *(_QWORD *)((char *)a2 + v10 + 116) = *(_QWORD *)((char *)a2 + v6 + 116);
          if ( v9 )
          {
            if ( *(_DWORD *)((char *)a2 + v10 + 88) != *(_DWORD *)((char *)a2 + v6 + 88)
              || *(_DWORD *)((char *)a2 + v10 + 92) != *(_DWORD *)((char *)a2 + v6 + 92) )
            {
              *(_QWORD *)((char *)a2 + v10) &= ~0x800000uLL;
              *(_QWORD *)((char *)a2 + v10 + 8) &= ~0x800000uLL;
            }
            *(_QWORD *)((char *)a2 + v10 + 88) = *(_QWORD *)((char *)a2 + v6 + 88);
            *(_DWORD *)((char *)a2 + v10 + 96) = *(_DWORD *)((char *)a2 + v6 + 96);
          }
        }
      }
    }
  }
  return 0LL;
}
