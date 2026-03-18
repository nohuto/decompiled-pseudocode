/*
 * XREFs of bInitPALOBJ @ 0x1402F0008
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1400C2CFC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C4690 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline @ 0x1400C49B4 (Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1400C9BF0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1401794C0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 __fastcall bInitPALOBJ(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  unsigned int v3; // r8d
  unsigned __int64 v4; // rbx
  unsigned int *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 *v9; // r10
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  int IsEnabledNoReportingNoInline; // eax
  unsigned __int64 v14; // rcx
  __int64 *v15; // rax
  unsigned __int64 *v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+58h] [rbp-18h]
  __int64 *v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+68h] [rbp-8h]
  unsigned int *v20; // [rsp+90h] [rbp+20h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_WORD *)(v2 + 3780) != 768 )
    goto LABEL_5;
  v3 = *(unsigned __int16 *)(v2 + 3782);
  if ( !*(_WORD *)(v2 + 3782) )
    goto LABEL_5;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette(
                        (struct OBJECT **)&v16,
                        1,
                        v3,
                        (const unsigned int *)(v2 + 3784),
                        0,
                        0,
                        0,
                        0x500u,
                        0) )
  {
    PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
LABEL_5:
    v4 = 0LL;
    goto LABEL_6;
  }
  v17 = 1;
  v4 = *v16;
  PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
LABEL_6:
  if ( !(unsigned int)bSetStockObject(v4, 15, 0) )
    return 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, *(HPALETTE *)(*(_QWORD *)(v2 + 3088) + 120LL));
  v6 = v20;
  HmgSetOwner(*(_QWORD *)v20, 0, 8);
  v7 = *(_QWORD *)(v2 + 3088);
  LODWORD(v8) = 256;
  *(_QWORD *)(v2 + 3872) = v6;
  *(_QWORD *)(v2 + 672) = *(_QWORD *)(v7 + 120);
  *(_QWORD *)(v2 + 680) = v6;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((struct OBJECT **)&v16, 1, 0x100u, 0LL, 0, 0, 0, 0x400u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
    EPALOBJ::~EPALOBJ(&v20);
    return 0LL;
  }
  v9 = v16;
  *(_QWORD *)(v2 + 3888) = v16;
  v10 = v6[7] >> 1;
  if ( (_DWORD)v10 )
  {
    v11 = 0LL;
    v12 = (unsigned int)v10;
    do
    {
      *(_DWORD *)(v11 + v9[14]) = *(_DWORD *)(v11 + *((_QWORD *)v6 + 14));
      v11 += 4LL;
      --v12;
    }
    while ( v12 );
    do
    {
      v8 = (unsigned int)(v8 - 1);
      *(_DWORD *)(v9[14] + 4 * v8) = *(_DWORD *)(*((_QWORD *)v6 + 14) + 4LL * (unsigned int)(v8 - 236));
      --v10;
    }
    while ( v10 );
  }
  v16 = 0LL;
  PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
  EPALOBJ::~EPALOBJ(&v20);
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((struct OBJECT **)&v16, 1, 2u, &dword_140278DD0, 0, 0, 0, 0x2200u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
    return 0LL;
  }
  IsEnabledNoReportingNoInline = Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline();
  v14 = *v16;
  *(_QWORD *)(v2 + 3904) = v16;
  if ( IsEnabledNoReportingNoInline )
    v16 = 0LL;
  else
    v17 = 1;
  *(_QWORD *)(v2 + 3896) = v14;
  v19 = 0;
  v18 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette((struct OBJECT **)&v18, 8, 0, 0LL, 0, 0, 0, 0x200u, 1) )
  {
    v15 = v18;
    v18 = 0LL;
    v1 = 1;
    *(_QWORD *)(v2 + 3880) = v15;
  }
  PALMEMOBJ::~PALMEMOBJ(&v18);
  PALMEMOBJ::~PALMEMOBJ((__int64 **)&v16);
  return v1;
}
