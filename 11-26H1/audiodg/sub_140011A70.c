/*
 * XREFs of sub_140011A70 @ 0x140011A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140011C10 @ 0x140011C10 (sub_140011C10.c)
 *     sub_140011C48 @ 0x140011C48 (sub_140011C48.c)
 *     sub_140036EB4 @ 0x140036EB4 (sub_140036EB4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140011A70(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r15
  __int64 v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // r14d
  __int64 i; // rdi
  ATL::CAtlException *v12; // rbx
  __int64 v13; // [rsp+20h] [rbp-88h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+40h] [rbp-68h]
  ATL::CAtlException *v16; // [rsp+48h] [rbp-60h] BYREF
  __int128 v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+60h] [rbp-48h]
  __int64 v21; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v5 = a1;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v14 = v6;
  v7 = sub_140011C10(a2);
  v15 = v5 + 200;
  v8 = *(_QWORD *)(v5 + 200);
  if ( v8 )
  {
    for ( i = *(_QWORD *)(v8 + 8LL * ((unsigned int)v7 % *(_DWORD *)(v5 + 216)));
          i && (*(_DWORD *)(i + 40) != (_DWORD)v7 || *(_QWORD *)i != v7);
          i = *(_QWORD *)(i + 32) )
    {
      ;
    }
    if ( i )
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 8));
      goto LABEL_15;
    }
  }
  try
  {
    v17 = 0LL;
    v18 = 0LL;
    LODWORD(v17) = 1;
    v21 = v7;
    i = sub_140011C48(v5 + 200, &v21, &v17);
    v13 = i;
  }
  catch ( ATL::CAtlException *v16 )
  {
    v12 = v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      o__resetstkoflw();
    LODWORD(v21) = *(_DWORD *)v12;
    v9 = v21;
    i = v13;
    v6 = v14;
    if ( (int)v21 < 0 )
      goto LABEL_4;
    v5 = a1;
    v3 = a3;
  }
  v9 = sub_1400B6010(v5 - 8);
  if ( v9 >= 0 )
  {
LABEL_15:
    *v3 = i;
    v9 = 0;
    goto LABEL_6;
  }
LABEL_4:
  if ( i )
    sub_140036EB4(v15, i);
LABEL_6:
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( v7 )
    sub_1400B6010(v7);
  return (unsigned int)v9;
}
