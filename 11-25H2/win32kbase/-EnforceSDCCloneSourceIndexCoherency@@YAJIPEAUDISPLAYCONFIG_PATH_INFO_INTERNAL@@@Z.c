/*
 * XREFs of ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14017C180
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1401CE890 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1400E2640 (DrvDxgkLogCodePointPacket.c)
 */

__int64 __fastcall EnforceSDCCloneSourceIndexCoherency(unsigned int a1, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2)
{
  char v2; // r13
  unsigned int v3; // esi
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *i; // rdi
  unsigned int v7; // ebp
  char *v8; // rbx
  int v9; // ecx
  char v10; // r15
  int v11; // r8d
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx

  v2 = 0;
  v3 = 0;
  if ( !a1 )
    return 0LL;
  for ( i = a2; ; i = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)i + 216) )
  {
    if ( *(__int64 *)i < 0 )
    {
      v7 = v3;
      if ( v3 < a1 )
        break;
    }
LABEL_30:
    if ( ++v3 >= a1 )
      return 0LL;
  }
  v8 = (char *)a2 + 216 * v3 + 16;
  while ( 1 )
  {
    if ( v7 != v3 )
    {
      v9 = *((_DWORD *)v8 + 2);
      v10 = 0;
      v11 = *((_DWORD *)i + 6);
      if ( v9 == v11 && *(_DWORD *)v8 == *((_DWORD *)i + 4) && *((_DWORD *)v8 + 1) == *((_DWORD *)i + 5) && v9 != -2 )
      {
        v10 = 1;
        if ( *((_DWORD *)v8 + 35) != *((_DWORD *)i + 39) )
        {
          WdLogSingleEntry2(2LL, v3, v7);
          WdLogGlobalForLineNumber = 12921;
          return 3221225485LL;
        }
        goto LABEL_21;
      }
      if ( *((_DWORD *)v8 + 35) == *((_DWORD *)i + 39) )
        break;
    }
LABEL_29:
    ++v7;
    v8 += 216;
    if ( v7 >= a1 )
      goto LABEL_30;
  }
  if ( *(_DWORD *)v8 != *((_DWORD *)i + 4)
    || *((_DWORD *)v8 + 1) != *((_DWORD *)i + 5)
    || v9 != -2 && v11 != -2
    || v8[85]
    || (v10 = 1, v9 == v11) )
  {
LABEL_21:
    v13 = (-(__int64)(v10 != 0) & 0x8000000100LL) + 0x4000000020800LL;
    v14 = *(_QWORD *)i & v13;
    if ( (v13 & *((_QWORD *)v8 - 2)) != v14 )
    {
      v15 = *((_QWORD *)v8 - 1) & ~v13;
      *((_QWORD *)v8 - 2) = v14 | ~v13 & *((_QWORD *)v8 - 2);
      *((_QWORD *)v8 - 1) = v15 | v13 & *((_QWORD *)i + 1);
      if ( !v2 )
      {
        v2 = 1;
        DrvDxgkLogCodePointPacket(57LL, v3, v7, 0);
      }
    }
    *(_QWORD *)(v8 + 108) = *(_QWORD *)((char *)i + 124);
    *(_QWORD *)(v8 + 116) = *(_QWORD *)((char *)i + 132);
    *((_DWORD *)v8 + 35) = *((_DWORD *)i + 39);
    *(_QWORD *)(v8 + 100) = *(_QWORD *)((char *)i + 116);
    if ( v10 )
    {
      if ( *((_DWORD *)v8 + 18) != *((_DWORD *)i + 22) || *((_DWORD *)v8 + 19) != *((_DWORD *)i + 23) )
      {
        *((_QWORD *)v8 - 2) &= ~0x800000uLL;
        *((_QWORD *)v8 - 1) &= ~0x800000uLL;
      }
      *((_QWORD *)v8 + 9) = *((_QWORD *)i + 11);
      *((_DWORD *)v8 + 20) = *((_DWORD *)i + 24);
    }
    goto LABEL_29;
  }
  WdLogSingleEntry2(2LL, v3, v7);
  WdLogGlobalForLineNumber = 12937;
  return 3221225485LL;
}
