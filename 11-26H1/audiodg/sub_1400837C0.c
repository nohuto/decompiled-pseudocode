/*
 * XREFs of sub_1400837C0 @ 0x1400837C0
 * Callers:
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 * Callees:
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_14000C3C4 @ 0x14000C3C4 (sub_14000C3C4.c)
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 *     sub_14002C694 @ 0x14002C694 (sub_14002C694.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140083D0C @ 0x140083D0C (sub_140083D0C.c)
 *     sub_1400859F0 @ 0x1400859F0 (sub_1400859F0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400837C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  __int64 v10; // rcx
  _QWORD *v11; // r12
  int v12; // edx
  __int64 **v13; // r14
  __int64 *v14; // r15
  __int64 *v15; // rax
  __int64 **v16; // r10
  ATL::CAtlException *v18; // rbx
  ATL::CAtlException *v19; // rbx
  _QWORD *v20; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-60h]
  __int64 *v22; // [rsp+40h] [rbp-58h]
  __int64 **v23; // [rsp+48h] [rbp-50h]
  ATL::CAtlException *v24; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v25; // [rsp+58h] [rbp-40h] BYREF
  _BYTE v26[56]; // [rsp+60h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v29; // [rsp+B0h] [rbp+18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp+20h]

  v5 = a1;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1445;
LABEL_32:
    sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v6);
    return v6;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = -2147024890;
    v7 = 1446;
    goto LABEL_32;
  }
  sub_14000C2D0((__int64)v26, a1 + 96);
  v8 = sub_1400859F0(v5, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    sub_14000C2A8((int)retaddr, 1452, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v8);
LABEL_30:
    sub_140030124((__int64)v26);
    return (unsigned int)v9;
  }
  v21 = 0LL;
  sub_1400B6010(*(_QWORD *)(v5 + 800));
  v29 = 0LL;
  v11 = (_QWORD *)sub_140083D0C(v10, **(_QWORD **)(v5 + 776), a3, &v29);
  v20 = v11;
  if ( !v11 )
  {
    v9 = -2005139430;
    v12 = 1460;
    goto LABEL_28;
  }
  v13 = (__int64 **)(v5 + 136);
  v23 = (__int64 **)(v5 + 136);
  v14 = (__int64 *)sub_14002C694((__int64 ***)(v5 + 136), &v20);
  v22 = v14;
  if ( v14 )
  {
    do
    {
      try
      {
        v9 = 0;
        sub_14000DD04(v21, &v20);
      }
      catch ( ATL::CAtlException *v24 )
      {
        v18 = v24;
        if ( *(_DWORD *)v24 == -1073741571 )
          o__resetstkoflw();
        LODWORD(v29) = *(_DWORD *)v18;
        v5 = a1;
        v11 = v20;
        v14 = v22;
        v9 = v29;
        v13 = v23;
      }
      if ( !*(_BYTE *)(v5 + 787) )
        break;
      if ( v9 < 0 )
        Sleep(1u);
    }
    while ( *(_BYTE *)(v5 + 787) && v9 < 0 );
    if ( v9 < 0 )
    {
      v12 = 1472;
      goto LABEL_28;
    }
    sub_14000C3C4(v13, v14);
    sub_140006C48((__int64)v11);
  }
  else
  {
    do
    {
      try
      {
        v9 = 0;
        sub_14000DD04((_QWORD *)(v5 + 184), &v20);
      }
      catch ( ATL::CAtlException *v25 )
      {
        v19 = v25;
        if ( *(_DWORD *)v25 == -1073741571 )
          o__resetstkoflw();
        LODWORD(v29) = *(_DWORD *)v19;
        v5 = a1;
        v9 = v29;
      }
      if ( !*(_BYTE *)(v5 + 787) )
        break;
      if ( v9 < 0 )
        Sleep(1u);
    }
    while ( *(_BYTE *)(v5 + 787) && v9 < 0 );
    if ( v9 < 0 )
    {
      v12 = 1485;
LABEL_28:
      sub_14000C2A8((int)retaddr, v12, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v9);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      goto LABEL_30;
    }
  }
  v15 = (__int64 *)sub_14002C694(**(__int64 *****)(v5 + 776), &v20);
  sub_14000C3C4(v16, v15);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  sub_140030124((__int64)v26);
  return 0LL;
}
