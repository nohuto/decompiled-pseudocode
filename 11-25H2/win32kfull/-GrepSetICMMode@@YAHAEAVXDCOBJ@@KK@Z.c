/*
 * XREFs of ?GrepSetICMMode@@YAHAEAVXDCOBJ@@KK@Z @ 0x14008C430
 * Callers:
 *     NtGdiSetIcmMode @ 0x14008C9F0 (NtGdiSetIcmMode.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrepSetICMMode(struct XDCOBJ *a1, int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r14
  int v8; // r8d
  __int64 v9; // rax
  unsigned int v10; // r10d
  int v11; // edx
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rsi
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  __int64 v19; // [rsp+28h] [rbp-69h] BYREF
  __int128 v20; // [rsp+38h] [rbp-59h] BYREF
  __int64 v21; // [rsp+48h] [rbp-49h]
  int v22; // [rsp+50h] [rbp-41h]
  _QWORD v23[14]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v24; // [rsp+110h] [rbp+7Fh] BYREF

  v6 = 1;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
  v21 = 0LL;
  v20 = 0LL;
  v22 = 0;
  v23[0] = 0LL;
  memset(&v23[10], 0, 24);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v20, a1, 0) )
    goto LABEL_15;
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
        goto LABEL_22;
      v12 = a3;
      v18 = (a3 >> 8) & 0xF;
      if ( (a3 & 0x200) != 0 )
      {
        if ( !v9 )
          goto LABEL_22;
        if ( (*(_DWORD *)(v9 + 1808) & 0x2000000) == 0 || *(_DWORD *)(v7 + 32) == 1 )
          v18 = 1;
      }
      v11 = v8 & 0xF0 | v18;
      goto LABEL_7;
    }
    v12 = 0;
    v11 = v8 & 0xF0;
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
        if ( a3 == 32 || a3 == 773 )
        {
          if ( v9 )
          {
            v10 = 0x10000000;
            if ( (*(_DWORD *)(v9 + 1808) & 0x4000000) != 0 )
            {
              v16 = *(_DWORD *)(v7 + 32);
              if ( v16 == 1 )
                v11 = (unsigned __int8)v8 | 0x10;
              v17 = 0x20000000;
              if ( v16 != 1 )
                v17 = 0x10000000;
              v10 = v17;
LABEL_8:
              if ( a2 == 4 )
                goto LABEL_15;
              goto LABEL_9;
            }
          }
          v6 = 0;
LABEL_7:
          if ( !v6 )
            goto LABEL_15;
          goto LABEL_8;
        }
      }
LABEL_22:
      v6 = 0;
      goto LABEL_15;
    }
    v11 = (unsigned __int8)v8 | 0x20;
    if ( !a3 )
      v11 = v8 & 0xDF;
  }
LABEL_9:
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 0xF0000000) != v10
    || (unsigned __int8)v8 != v11
    || (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 0xF00) != v12 )
  {
    *(_DWORD *)(v7 + 120) = v12 | v11 | v10;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 240LL) = v12 | v11 | v10 | *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL)
                                                                                          + 240LL) & 0xF000;
    if ( (unsigned __int8)v8 != v11 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      v14 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      v24 = v13;
      if ( v13 )
      {
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v24);
        if ( v14 )
        {
          v19 = *(_QWORD *)(v14 + 128);
          if ( v19 )
            XEPALOBJ::vUpdateTime((XEPALOBJ *)&v19);
        }
      }
    }
  }
LABEL_15:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v20);
  return v6;
}
