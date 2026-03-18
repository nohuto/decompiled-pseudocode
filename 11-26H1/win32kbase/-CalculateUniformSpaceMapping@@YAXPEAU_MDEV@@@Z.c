/*
 * XREFs of ?CalculateUniformSpaceMapping@@YAXPEAU_MDEV@@@Z @ 0x1401791B0
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x140179380 (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1401F5EC4 (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
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
  __int64 j; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r11
  int v17; // eax
  __int64 v18; // rbx
  unsigned int *v19; // rbx
  unsigned int v20; // [rsp+20h] [rbp-28h]
  unsigned int v21; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( (unsigned int)bUniformSpaceDpiMode() )
  {
    v3 = (char *)PALLOCNOZ(4 * *((_DWORD *)a1 + 5), 0x73726447u);
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
      for ( j = 0LL; (unsigned int)j < v8 - 1; j = (unsigned int)v14 )
      {
        v14 = (unsigned int)(j + 1);
        v15 = 56 * (*(unsigned int *)&v3[4 * (unsigned int)j] + 1LL);
        v16 = 56 * (*(unsigned int *)&v3[4 * v14] + 1LL);
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
      MapMonitorToUnifromSpaceInStripe(a1, *(_DWORD *)&v3[4 * (unsigned int)v12], 0xFFFFFFFF, 0, v20);
      v15 = (unsigned int)v12;
      if ( (unsigned int)v12 < *((_DWORD *)a1 + 5) - 1 )
      {
        do
        {
          v18 = (unsigned int)(v15 + 1);
          MapMonitorToUnifromSpaceInStripe(a1, *(_DWORD *)&v3[4 * v18], *(_DWORD *)&v3[4 * v15], 1, v21);
          v15 = (unsigned int)v18;
        }
        while ( (unsigned int)v18 < *((_DWORD *)a1 + 5) - 1 );
      }
      if ( (_DWORD)v12 )
      {
        v19 = (unsigned int *)&v3[4 * (unsigned int)v12];
        do
        {
          v12 = (unsigned int)(v12 - 1);
          MapMonitorToUnifromSpaceInStripe(a1, *(_DWORD *)&v3[4 * v12], *v19--, 0, v21);
        }
        while ( (_DWORD)v12 );
      }
      *((_DWORD *)a1 + 4) |= 2u;
      *((_DWORD *)a1 + 8) = 96;
      *(_DWORD *)(v2 + 1248) = 1;
LABEL_26:
      GreDeleteFastMutex(v3, j, v15, v14);
    }
  }
  else
  {
    *(_DWORD *)(v2 + 1248) = 0;
  }
}
