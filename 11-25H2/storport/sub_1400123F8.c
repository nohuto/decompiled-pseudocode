/*
 * XREFs of sub_1400123F8 @ 0x1400123F8
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x140011CCC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1400657EC @ 0x1400657EC (sub_1400657EC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_1400123F8(__int64 a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  __int64 v4; // r14
  int v5; // edi
  _DWORD *v6; // r15
  __int64 v7; // r10
  unsigned int v8; // esi
  unsigned __int8 v9; // bp
  int v10; // r13d
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v17; // eax
  int v18; // [rsp+70h] [rbp+8h]
  __int64 v19; // [rsp+78h] [rbp+10h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_DWORD **)(a2 + 24);
  v7 = 0LL;
  v8 = 0;
  if ( *(_DWORD *)v4 == 1431193940 )
    v19 = *(_QWORD *)(v4 + 24);
  else
    v19 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  if ( *v6 == 49 || *v6 == 50 )
  {
    v9 = 0;
  }
  else
  {
    if ( (unsigned int)(*v6 - 67) >= 2 )
    {
      v13 = -1073741585;
      goto LABEL_19;
    }
    v9 = 1;
  }
  v10 = v6[2 * v9 + 6];
  v11 = v9 != 0 ? 104 : 80;
  v18 = v6[2 * v9 + 7];
  v12 = v18 + v11;
  if ( !v10 )
  {
    if ( v12 >= v11 )
    {
      v8 = v18 + v11;
      goto LABEL_11;
    }
    goto LABEL_21;
  }
  v17 = v10 - (v9 != 0 ? 64 : 40);
  if ( v12 < v11 )
    goto LABEL_22;
  v8 = v12 + v17;
  if ( v12 + v17 < v17 )
  {
LABEL_21:
    v8 = -1;
LABEL_22:
    v13 = -1073741675;
    goto LABEL_19;
  }
LABEL_11:
  v13 = 0;
  v14 = sub_1400143E0(64LL, v8, 1918067026LL, a1);
  v7 = v14;
  if ( v14 )
  {
    *(_DWORD *)v14 = 28;
    *(_DWORD *)(v14 + 16) = 2954240;
    *(_QWORD *)(v14 + 4) = 0x4C4F434F544F5250LL;
    if ( v4 )
      v15 = *(_DWORD *)(v4 + 1392);
    else
      v15 = *(_DWORD *)(v19 + 4124);
    *(_DWORD *)(v7 + 12) = v15;
    *(_DWORD *)(v7 + 24) = v8 - 28;
    *(_DWORD *)(v7 + 28) = v9 != 0 ? 1 : 48;
    *(_DWORD *)(v7 + 32) = v9 != 0 ? 72 : 48;
    *(_DWORD *)(v7 + 36) = v6[2 * v9 + 2];
    *(_DWORD *)(v7 + 40) = v6[2 * v9 + 3];
    *(_DWORD *)(v7 + 44) = v6[2 * v9 + 4];
    *(_DWORD *)(v7 + 48) = v6[2 * v9 + 5];
    *(_DWORD *)(v7 + 64) = v6[2 * v9 + 9];
    *(_DWORD *)(v7 + 68) = v6[2 * v9 + 10];
    *(_DWORD *)(v7 + 72) = v6[2 * v9 + 11];
    if ( v9 )
    {
      *(_DWORD *)(v7 + 76) = v6[2 * v9 + 12];
      *(_DWORD *)(v7 + 80) = v6[2 * v9 + 13];
      *(_OWORD *)(v7 + 84) = 0LL;
    }
    if ( v10 )
      v5 = v9 != 0 ? 68 : 44;
    *(_DWORD *)(v7 + 52) = v5;
    *(_DWORD *)(v7 + 56) = v18;
  }
  else
  {
    v13 = -1073741670;
  }
LABEL_19:
  *a3 = v7;
  *a4 = v8;
  return v13;
}
