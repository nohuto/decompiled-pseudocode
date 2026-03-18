/*
 * XREFs of ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401C9224
 * Callers:
 *     _bDynamicModeChange_::_64_::_lambda_1_::operator() @ 0x140115ED0 (_bDynamicModeChange_--_64_--_lambda_1_--operator().c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x14001C960 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001EEB0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x14008E750 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6A80 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400D7EE0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400EBB0C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     vMatchAPal @ 0x1401C5BD0 (vMatchAPal.c)
 */

void __fastcall vDynamicSwitchPalettes(struct SURFACE *a1, struct PDEV *a2, struct PDEV *a3)
{
  struct PDEV *v3; // rdi
  __int64 SessionState; // rax
  __int64 v7; // r15
  __int64 **v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r12d
  struct _BASEOBJECT *v13; // rdi
  const unsigned int *v14; // r9
  __int64 *v15; // rbx
  __int64 *v16; // rdx
  _QWORD *v17; // rbx
  int v18; // eax
  __int64 *v19; // [rsp+50h] [rbp-18h] BYREF
  int v20; // [rsp+58h] [rbp-10h]
  char v21; // [rsp+B0h] [rbp+48h] BYREF
  char v22; // [rsp+B8h] [rbp+50h] BYREF
  struct _BASEOBJECT *v23; // [rsp+C0h] [rbp+58h] BYREF
  struct _BASEOBJECT *v24; // [rsp+C8h] [rbp+60h] BYREF

  v23 = a3;
  v3 = a3;
  SessionState = W32GetSessionState(a1);
  v7 = *((_QWORD *)a2 + 224);
  v8 = (__int64 **)((char *)a1 + 128);
  v9 = *(_QWORD *)(SessionState + 88);
  v10 = *((_QWORD *)a1 + 16);
  if ( v10 )
  {
    v17 = (_QWORD *)((char *)a1 + 128);
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
      v11 = *((_QWORD *)a1 + 22);
      v12 = 0;
      if ( !v11 )
        goto LABEL_12;
      EPALOBJ::EPALOBJ((EPALOBJ *)&v24, v11);
      v13 = v24;
      if ( v24
        && (*((_DWORD *)v24 + 6) & 0x100) != 0
        && !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v24)
        && *((_QWORD *)v13 + 9) )
      {
        v14 = *(const unsigned int **)(v7 + 112);
        v20 = 0;
        v19 = 0LL;
        if ( (unsigned int)PALMEMOBJ::bCreatePalette((struct OBJECT **)&v19, 1, 0x100u, v14, 0, 0, 0, 0x400u) )
        {
          v15 = v19;
          v16 = v19;
          v12 = 1;
          *((_DWORD *)v19 + 15) = *(_DWORD *)(v7 + 60);
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
        HmgIncrementShareReferenceCount(*(struct _BASEOBJECT **)(v9 + 3784));
        *v8 = *(__int64 **)(v9 + 3784);
      }
      v3 = v23;
      v17 = (_QWORD *)((char *)a1 + 128);
    }
    else
    {
      HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v7);
      *v8 = (__int64 *)v7;
      v17 = (_QWORD *)((char *)a1 + 128);
    }
  }
  if ( (*((_DWORD *)v3 + 539) & 0x100) != 0 && (*((_DWORD *)a1 + 28) & 0x20000000) != 0 )
  {
    v23 = (struct _BASEOBJECT *)*v8;
    XEPALOBJ::vUnrefPalette(&v23);
    *((_DWORD *)a1 + 28) &= ~0x20000000u;
    *v17 = 0LL;
  }
}
