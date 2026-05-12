/*
 * XREFs of sub_140035D1C @ 0x140035D1C
 * Callers:
 *     sub_140035C34 @ 0x140035C34 (sub_140035C34.c)
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140035D1C(_QWORD *P)
{
  void *v2; // rcx
  unsigned int v3; // edi
  char v4; // si
  void *v5; // r8
  unsigned int v6; // r10d
  unsigned int *v7; // r11
  __int64 v8; // rax
  unsigned __int64 v9; // r9

  if ( *((_BYTE *)P + 2) != 40 )
  {
    v2 = (void *)P[4];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x69506C50u);
      P[4] = 0LL;
    }
    goto LABEL_4;
  }
  v3 = *((_DWORD *)P + 14);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( !v3 )
    goto LABEL_4;
  v7 = (unsigned int *)(P + 15);
  while ( 1 )
  {
    v8 = *v7;
    if ( (unsigned int)v8 >= 0x80 )
    {
      v9 = *((unsigned int *)P + 4);
      if ( (unsigned int)v8 <= (unsigned int)v9 )
        break;
    }
LABEL_17:
    ++v6;
    ++v7;
    if ( v6 >= v3 )
      goto LABEL_18;
  }
  if ( *(_DWORD *)((char *)P + v8) != 64 )
  {
    if ( *(_DWORD *)((char *)P + v8) == 65 )
    {
      if ( v8 + 56 <= v9 )
      {
        v5 = *(void **)((char *)P + v8 + 16);
        v4 = 1;
      }
    }
    else if ( *(_DWORD *)((char *)P + v8) == 66 && v8 + 40 <= v9 )
    {
      v5 = *(void **)((char *)P + v8 + 24);
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  if ( v8 + 40 > v9 )
  {
LABEL_16:
    if ( v4 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v5 = *(void **)((char *)P + v8 + 16);
LABEL_18:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x69506C50u);
LABEL_4:
  ExFreePoolWithTag(P, 0x69506C50u);
}
