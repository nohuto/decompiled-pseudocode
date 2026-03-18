/*
 * XREFs of GreDCSelectPen @ 0x140090080
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1401C70C0 (-GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x14001C8C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     GreSetSolidBrushLight @ 0x140071A70 (GreSetSolidBrushLight.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x14008F050 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x140091EDC (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 */

__int64 __fastcall GreDCSelectPen(DC *this, __int64 a2)
{
  __int64 v3; // r12
  int v4; // r13d
  struct BRUSH **v5; // r15
  struct BRUSH *v6; // rsi
  __int64 v7; // rax
  int v8; // r14d
  _DWORD *v9; // r15
  char *v10; // rcx
  struct MATRIX *inited; // rdx
  __int64 v12; // rsi
  int *v13; // rcx
  int v14; // ecx
  __int64 v15; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  char *v20; // [rsp+40h] [rbp-48h]
  DC *v21; // [rsp+90h] [rbp+8h] BYREF
  __int64 v22; // [rsp+98h] [rbp+10h]
  int v23; // [rsp+A0h] [rbp+18h]
  char *v24; // [rsp+A8h] [rbp+20h]

  v22 = a2;
  v21 = this;
  v3 = 0LL;
  W32GetSessionState(this);
  if ( !this )
    return v3;
  v4 = 0;
  v23 = 0;
  v5 = (struct BRUSH **)((char *)this + 144);
  v20 = (char *)this + 144;
  v6 = (struct BRUSH *)*((_QWORD *)this + 18);
  v24 = (char *)this + 976;
  v3 = *(_QWORD *)(*((_QWORD *)this + 122) + 168LL);
  if ( v22 != *(_QWORD *)v6 )
  {
    v7 = HmgShareLockCheck(v22, 16);
    v6 = (struct BRUSH *)v7;
    if ( v7 && (*(_DWORD *)(v7 + 40) & 0x400) != 0 )
    {
      DEC_SHARE_REF_CNT_LAZY0(*v5);
      *(_DWORD *)(*((_QWORD *)this + 122) + 152LL) |= 2u;
      *v5 = v6;
      v8 = 1;
      v4 = 1;
      v23 = 1;
      goto LABEL_6;
    }
    if ( v7 )
    {
      HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v7, 0LL);
      v6 = 0LL;
    }
    v3 = 0LL;
  }
  v8 = 1;
LABEL_6:
  if ( v6 )
  {
    if ( v3 )
    {
      v9 = (_DWORD *)*((_QWORD *)v6 + 6);
      if ( v9 == (_DWORD *)((char *)v6 + 72) || (*v9 & 4) == 0 )
      {
        v10 = v24;
      }
      else
      {
        GreSetSolidBrushLight((__int64)v6, v9[1], 1);
        v10 = v24;
        *(_DWORD *)(*(_QWORD *)v24 + 152LL) |= 2u;
        *v9 &= ~4u;
        v4 = 1;
      }
      if ( v4 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)v10 + 340LL) & 0x1E000) != 0 )
          inited = DC::InitXform(this, 516);
        else
          inited = (DC *)((char *)this + 320);
        v21 = inited;
        v12 = *(_QWORD *)v20;
        if ( (*(_DWORD *)(*(_QWORD *)v20 + 40LL) & 0x800) != 0 )
        {
          v13 = (int *)(v12 + 168);
          if ( (*((_BYTE *)inited + 32) & 0x43) == 0x43 && *v13 <= 1
            || !*v13
            || (unsigned int)DC::bOldPenNominal(this, (struct EXFORMOBJ *)&v21, *v13) )
          {
            *((_DWORD *)this + 55) = 1;
            if ( *(_QWORD *)(v12 + 152) )
            {
              *((_DWORD *)this + 57) = *(_DWORD *)(v12 + 180);
              v14 = 8;
              v15 = *(_QWORD *)(v12 + 152);
            }
            else
            {
              *((_DWORD *)this + 57) = 0;
              v14 = 0;
              v15 = 0LL;
            }
            *((_QWORD *)this + 29) = v15;
            *((_DWORD *)this + 52) = v14;
          }
          else
          {
            *((_DWORD *)this + 52) = 1;
            *((_DWORD *)this + 55) = *(_DWORD *)(v12 + 172);
            *((_DWORD *)this + 57) = 0;
            *((_QWORD *)this + 29) = 0LL;
          }
          *((_DWORD *)this + 60) = 0;
        }
        else
        {
          v17 = *(_DWORD *)(v12 + 176);
          if ( (v17 & 0xF0000) != 0 )
          {
            *((_DWORD *)this + 52) = 1;
            v18 = *(_DWORD *)(v12 + 172);
          }
          else
          {
            v8 = 0;
            if ( (v17 & 0xF) == 8 )
              v8 = 2;
            *((_DWORD *)this + 52) = v8;
            v18 = *(_DWORD *)(v12 + 168);
          }
          *((_DWORD *)this + 60) = 0;
          *((_DWORD *)this + 55) = v18;
          *((_DWORD *)this + 57) = *(_DWORD *)(v12 + 180);
          v19 = *(_QWORD *)(v12 + 152);
          *((_QWORD *)this + 29) = v19;
          if ( v19 )
            *((_DWORD *)this + 52) = v8 | 8;
        }
        *((_DWORD *)this + 53) = *(unsigned __int8 *)(v12 + 184);
        *((_DWORD *)this + 54) = *(unsigned __int8 *)(v12 + 185);
      }
    }
    *(_QWORD *)(*((_QWORD *)this + 122) + 168LL) = v22;
    *(_DWORD *)(*((_QWORD *)this + 122) + 152LL) &= ~0x2000u;
  }
  return v3;
}
