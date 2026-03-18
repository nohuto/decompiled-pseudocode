/*
 * XREFs of ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401F1028
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400C38C0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     vMatchAPal @ 0x1401EDF40 (vMatchAPal.c)
 */

void __fastcall vDynamicSwitchPalettes(HPALETTE *a1, struct PDEV *a2, struct PDEV *a3)
{
  struct PDEV *v3; // rdi
  __int64 SessionState; // rax
  HPALETTE v7; // r15
  __int64 **v8; // r14
  __int64 v9; // r13
  HPALETTE v10; // rax
  HPALETTE v11; // rdx
  int v12; // r12d
  unsigned int *v13; // rdi
  const unsigned int *v14; // r9
  __int64 *v15; // rbx
  __int64 *v16; // rdx
  _QWORD *v17; // rbx
  int v18; // eax
  __int64 *v19; // [rsp+50h] [rbp-18h] BYREF
  int v20; // [rsp+58h] [rbp-10h]
  char v21; // [rsp+B0h] [rbp+48h] BYREF
  char v22; // [rsp+B8h] [rbp+50h] BYREF
  struct PDEV *v23; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int *v24; // [rsp+C8h] [rbp+60h] BYREF

  v23 = a3;
  v3 = a3;
  SessionState = W32GetSessionState(a1);
  v7 = (HPALETTE)*((_QWORD *)a2 + 224);
  v8 = (__int64 **)(a1 + 16);
  v9 = *(_QWORD *)(SessionState + 88);
  v10 = a1[16];
  if ( v10 )
  {
    v17 = a1 + 16;
    if ( v10 == v7 )
    {
      v18 = *((_DWORD *)a1 + 28);
      if ( (v18 & 0x8000000) != 0 )
        *((_DWORD *)a1 + 28) = v18 & 0xF7FFFFFF;
    }
  }
  else
  {
    *((_DWORD *)a1 + 28) |= 0x20000000u;
    if ( (*((_DWORD *)a2 + 539) & 0x100) != 0 )
    {
      v11 = a1[22];
      v12 = 0;
      if ( !v11 )
        goto LABEL_12;
      EPALOBJ::EPALOBJ((EPALOBJ *)&v24, v11);
      v13 = v24;
      if ( v24 && (v24[6] & 0x100) != 0 && !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v24) && *((_QWORD *)v13 + 9) )
      {
        v14 = (const unsigned int *)*((_QWORD *)v7 + 14);
        v20 = 0;
        v19 = 0LL;
        if ( (unsigned int)PALMEMOBJ::bCreatePalette((struct OBJECT **)&v19, 1, 0x100u, v14, 0, 0, 0, 0x400u, 1) )
        {
          v15 = v19;
          v16 = v19;
          v12 = 1;
          *(_DWORD *)((struct HPALETTE__ *)v19 + 15) = v7[15];
          vMatchAPal(0LL, v16, v13, &v22, &v21);
          *v8 = v15;
          v19 = 0LL;
          v20 = 1;
        }
        PALMEMOBJ::~PALMEMOBJ(&v19);
      }
      EPALOBJ::~EPALOBJ(&v24);
      if ( !v12 )
      {
LABEL_12:
        HmgIncrementShareReferenceCount(v9, *(unsigned int **)(v9 + 3888));
        *v8 = *(__int64 **)(v9 + 3888);
      }
      v3 = v23;
      v17 = a1 + 16;
    }
    else
    {
      HmgIncrementShareReferenceCount(v9, (unsigned int *)v7);
      *v8 = (__int64 *)v7;
      v17 = a1 + 16;
    }
  }
  if ( (*((_DWORD *)v3 + 539) & 0x100) != 0 && ((_DWORD)a1[14] & 0x20000000) != 0 )
  {
    v23 = (struct PDEV *)*v8;
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v23);
    *((_DWORD *)a1 + 28) &= ~0x20000000u;
    *v17 = 0LL;
  }
}
