/*
 * XREFs of ?CalculateUniformSpaceMapping@@YAXPEAU_MDEV@@@Z @ 0x14013EF98
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x14013F164 (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1401CC508 (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
 */

void __fastcall CalculateUniformSpaceMapping(struct _MDEV *a1)
{
  __int64 v2; // r15
  char *v3; // r14
  unsigned int v4; // eax
  __int64 i; // rdx
  int v6; // r8d
  int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // r10d
  unsigned int j; // edx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rbx
  unsigned int *v20; // rbx
  unsigned int v21; // [rsp+20h] [rbp-28h]
  unsigned int v22; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( (unsigned int)bUniformSpaceDpiMode() )
  {
    v3 = (char *)PALLOCNOZ((unsigned int)(4 * *((_DWORD *)a1 + 5)), 1936876615LL);
    if ( v3 )
    {
      v4 = *((_DWORD *)a1 + 5);
      for ( i = 0LL; (unsigned int)i < v4; v4 = *((_DWORD *)a1 + 5) )
      {
        *(_DWORD *)&v3[4 * i] = i;
        i = (unsigned int)(i + 1);
      }
      do
      {
        v6 = 0;
        v7 = 0;
        v8 = v4;
        if ( v4 != 1 )
        {
          do
          {
            v9 = (unsigned int)(v7 + 1);
            v10 = *(unsigned int *)&v3[4 * v9];
            v11 = *(unsigned int *)&v3[4 * v7];
            if ( *((_DWORD *)a1 + 14 * v11 + 14) > *((_DWORD *)a1 + 14 * v10 + 14) )
            {
              *(_DWORD *)&v3[4 * v7] = v10;
              v6 = 1;
              *(_DWORD *)&v3[4 * v9] = v11;
            }
            v8 = *((_DWORD *)a1 + 5);
            ++v7;
          }
          while ( (unsigned int)v9 < v8 - 1 );
        }
        v4 = v8;
      }
      while ( v6 );
      LODWORD(v12) = 0;
      v13 = v8 - 1;
      for ( j = 0; j < v13; ++j )
      {
        v15 = 56 * (*(unsigned int *)&v3[4 * j] + 1LL);
        v16 = 56 * (*(unsigned int *)&v3[4 * j + 4] + 1LL);
        v17 = *(_DWORD *)((char *)a1 + v16);
        if ( *(_DWORD *)((char *)a1 + v15 + 8) != v17 )
          goto LABEL_26;
        if ( *(_DWORD *)((char *)a1 + v15) || *(_DWORD *)((char *)a1 + v15 + 4) )
        {
          if ( !v17 && !*(_DWORD *)((char *)a1 + v16 + 4) )
            LODWORD(v12) = j + 1;
        }
        else
        {
          LODWORD(v12) = j;
        }
      }
      MapMonitorToUnifromSpaceInStripe(a1, *(_DWORD *)&v3[4 * (unsigned int)v12], 0xFFFFFFFF, 0, v21);
      v18 = (unsigned int)v12;
      if ( (unsigned int)v12 < *((_DWORD *)a1 + 5) - 1 )
      {
        do
        {
          v19 = (unsigned int)(v18 + 1);
          MapMonitorToUnifromSpaceInStripe(a1, *(_DWORD *)&v3[4 * v19], *(_DWORD *)&v3[4 * v18], 1, v22);
          v18 = (unsigned int)v19;
        }
        while ( (unsigned int)v19 < *((_DWORD *)a1 + 5) - 1 );
      }
      if ( (_DWORD)v12 )
      {
        v20 = (unsigned int *)&v3[4 * (unsigned int)v12];
        do
        {
          v12 = (unsigned int)(v12 - 1);
          MapMonitorToUnifromSpaceInStripe(a1, *(_DWORD *)&v3[4 * v12], *v20--, 0, v22);
        }
        while ( (_DWORD)v12 );
      }
      *((_DWORD *)a1 + 4) |= 2u;
      *((_DWORD *)a1 + 8) = 96;
      *(_DWORD *)(v2 + 1160) = 1;
LABEL_26:
      GreDeleteFastMutex(v3);
    }
  }
  else
  {
    *(_DWORD *)(v2 + 1160) = 0;
  }
}
