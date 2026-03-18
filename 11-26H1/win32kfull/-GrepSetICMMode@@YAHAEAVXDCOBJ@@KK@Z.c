/*
 * XREFs of ?GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z @ 0x14006D194
 * Callers:
 *     NtGdiSetIcmMode @ 0x1400AEDA0 (NtGdiSetIcmMode.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14006D0E4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrepSetICMMode(struct XDCOBJ *a1, int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r15
  int v8; // r9d
  __int64 v9; // rax
  unsigned int v10; // r8d
  int v11; // edx
  int v12; // r10d
  __int64 v13; // rdi
  int v15; // edx
  __int64 v16; // [rsp+28h] [rbp-79h] BYREF
  __int128 v17; // [rsp+38h] [rbp-69h] BYREF
  __int64 v18; // [rsp+48h] [rbp-59h]
  int v19; // [rsp+50h] [rbp-51h]
  _QWORD v20[16]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v21; // [rsp+120h] [rbp+7Fh] BYREF

  v6 = 1;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v20);
  v18 = 0LL;
  v17 = 0LL;
  v19 = 0;
  v20[0] = 0LL;
  memset(&v20[13], 0, 24);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v17, a1, 0) )
    goto LABEL_14;
  v7 = *(_QWORD *)a1;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 120LL);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v10 = v8 & 0xF0000000;
  v11 = (unsigned __int8)v8;
  v12 = v8 & 0xF00;
  if ( a2 == 1 )
  {
    if ( a3 )
    {
      if ( a3 != 256 && a3 != 512 && a3 != 1024 )
        goto LABEL_21;
      v12 = a3;
      v15 = (a3 >> 8) & 0xF;
      if ( (a3 & 0x200) != 0 )
      {
        if ( !v9 )
          goto LABEL_21;
        if ( (*(_DWORD *)(v9 + 1808) & 0x2000000) == 0 || *(_DWORD *)(v7 + 32) == 1 )
          v15 = 1;
      }
      v11 = v8 & 0xF0 | v15;
    }
    else
    {
      v12 = 0;
      v11 = v8 & 0xF0;
    }
  }
  else
  {
    if ( a2 != 2 )
    {
      if ( (unsigned int)(a2 - 3) <= 1 )
      {
        if ( a3 == 16 || a3 == 8 )
        {
          v10 = 0x20000000;
          goto LABEL_7;
        }
        if ( (a3 == 32 || a3 == 773) && v9 && (*(_DWORD *)(v9 + 1808) & 0x4000000) != 0 )
        {
          v11 = (unsigned __int8)v8 | 0x10;
          v10 = 0x20000000;
          if ( *(_DWORD *)(v7 + 32) != 1 )
          {
            v11 = (unsigned __int8)v8;
            v10 = 0x10000000;
          }
LABEL_7:
          if ( a2 == 4 )
            goto LABEL_14;
          goto LABEL_8;
        }
      }
LABEL_21:
      v6 = 0;
      goto LABEL_14;
    }
    v11 = (unsigned __int8)v8 | 0x20;
    if ( !a3 )
      v11 = v8 & 0xDF;
  }
LABEL_8:
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 0xF0000000) != v10
    || (unsigned __int8)v8 != v11
    || (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 0xF00) != v12 )
  {
    *(_DWORD *)(v7 + 120) = v12 | v11 | v10;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 240LL) = v12 | v11 | v10 | *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL)
                                                                                          + 240LL) & 0xF000;
    if ( (unsigned __int8)v8 != v11 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      v21 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      if ( v21 )
      {
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v21);
        if ( v13 )
        {
          v16 = *(_QWORD *)(v13 + 128);
          if ( v16 )
            XEPALOBJ::vUpdateTime((XEPALOBJ *)&v16);
        }
      }
    }
  }
LABEL_14:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v17);
  return v6;
}
