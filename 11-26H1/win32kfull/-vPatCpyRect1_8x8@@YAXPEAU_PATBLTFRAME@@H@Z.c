/*
 * XREFs of ?vPatCpyRect1_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x140338DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJPEBK3@Z @ 0x1403398F0 (-vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJPEBK3@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall vPatCpyRect1_8x8(struct _PATBLTFRAME *a1, int a2)
{
  struct _RECTL *v3; // rsi
  LONG left; // r8d
  unsigned int v5; // ebx
  int right; // r9d
  unsigned int v7; // r13d
  unsigned int v8; // r10d
  int v9; // ecx
  int v10; // r9d
  int v11; // ecx
  unsigned int *v12; // r11
  unsigned int *v13; // rsi
  char v14; // bp
  unsigned int *i; // r14
  unsigned int v16; // eax
  int v17; // r8d
  bool v18; // zf
  int v20; // [rsp+78h] [rbp-70h]
  struct _RECTL *v21; // [rsp+80h] [rbp-68h]
  int v22; // [rsp+88h] [rbp-60h]
  unsigned int *v23; // [rsp+90h] [rbp-58h]
  unsigned int v24[8]; // [rsp+98h] [rbp-50h] BYREF
  unsigned int v25[2]; // [rsp+B8h] [rbp-30h] BYREF

  v3 = (struct _RECTL *)*((_QWORD *)a1 + 3);
  v20 = *((_DWORD *)a1 + 4);
  v21 = v3;
  do
  {
    left = v3->left;
    v5 = 0;
    right = v3->right;
    v7 = *((_DWORD *)&aulMsk + (v3->left & 0x1F));
    v8 = ~v7;
    if ( *((_DWORD *)&aulMsk + (right & 0x1F)) != -1 )
      v5 = *((_DWORD *)&aulMsk + (v3->right & 0x1F));
    v23 = (unsigned int *)(*(_QWORD *)a1 + *((_DWORD *)a1 + 4) * v3->top + 4 * ((__int64)v3->left >> 5));
    v22 = (right >> 5) - ((left + 31) >> 5);
    if ( v22 + 1 > 5 )
    {
      if ( v22 == 5 )
        goto LABEL_19;
      v9 = v22 - 6;
      if ( v22 == 6 )
        goto LABEL_19;
    }
    else
    {
      if ( v22 == 4 )
        goto LABEL_19;
      if ( v22 == -1 )
        goto LABEL_11;
      v9 = (right >> 5) - ((left + 31) >> 5);
      if ( !v22 )
      {
        if ( *((_DWORD *)&aulMsk + (v3->left & 0x1F)) != -1 && v5 )
        {
          v10 = 8;
          goto LABEL_22;
        }
LABEL_11:
        v7 &= ~v5;
        v10 = 9;
        v8 = ~v7;
        goto LABEL_22;
      }
    }
    v11 = v9 - 1;
    if ( v11 && (unsigned int)(v11 - 1) >= 2 )
    {
      if ( *((_DWORD *)&aulMsk + (v3->left & 0x1F)) == -1 )
        v10 = 3 - (v5 != 0);
      else
        v10 = v5 == 0;
      goto LABEL_22;
    }
LABEL_19:
    if ( *((_DWORD *)&aulMsk + (v3->left & 0x1F)) == -1 )
      v10 = 7 - (v5 != 0);
    else
      v10 = 5 - (v5 != 0);
LABEL_22:
    v12 = (unsigned int *)*((_QWORD *)a1 + 1);
    v13 = v24;
    v14 = *((_BYTE *)a1 + 32);
    for ( i = v12 + 8; v12 < i; ++v13 )
    {
      v16 = *v12++;
      v17 = HIBYTE(v16) | (HIBYTE(v16) << 8) | ((HIBYTE(v16) | (HIBYTE(v16) << 8)) << 16);
      if ( v14 )
        v17 = __ROR4__(v17, v14);
      *v13 = v17;
    }
    vPatternCopyLoop(v21, v23, a1, v10, ~v5, v7, v5, v8, v22, v20, 8 * v20, v24, v25);
    v3 = v21 + 1;
    v18 = a2-- == 1;
    ++v21;
  }
  while ( !v18 );
}
