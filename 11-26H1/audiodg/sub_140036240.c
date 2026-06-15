/*
 * XREFs of sub_140036240 @ 0x140036240
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400103B0 @ 0x1400103B0 (sub_1400103B0.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140036400 @ 0x140036400 (sub_140036400.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140036240(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  ATL::CAtlException *v13; // rbx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-38h]
  ATL::CAtlException *v15; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  v14 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v20 = v4;
  if ( (unsigned __int8)sub_1400B6010(a2) )
  {
    v6 = -2147418113;
    sub_14000C2A8((int)retaddr, 1022, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", -2147418113);
    goto LABEL_4;
  }
  v18 = 0LL;
  v5 = sub_140036400(&v18, a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8((int)retaddr, 1026, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v5);
    j_j__o_free(v18, 16LL);
LABEL_4:
    if ( v4 )
      LeaveCriticalSection(v4);
    return v6;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  try
  {
    v19 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
    v17 = v18;
    v10 = sub_1400103B0(a1 + 120, &v17, v9, *(_QWORD *)(a1 + 120));
  }
  catch ( ATL::CAtlException *v15 )
  {
    v13 = v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      o__resetstkoflw();
    LODWORD(v17) = *(_DWORD *)v13;
    v12 = v17;
    if ( (int)v17 < 0 )
    {
      sub_14000C2A8((int)retaddr, 1032, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v17);
      sub_140018FF0(&v19);
      j_j__o_free(v18, 16LL);
      sub_140018FF0(&v20);
      return v12;
    }
    v4 = v14;
    v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
    goto LABEL_12;
  }
  v11 = *(_QWORD *)(a1 + 120);
  if ( v11 )
    *(_QWORD *)(v11 + 8) = v10;
  else
    *(_QWORD *)(a1 + 128) = v10;
  *(_QWORD *)(a1 + 120) = v10;
LABEL_12:
  if ( v8 )
    LeaveCriticalSection(v8);
  j_j__o_free(0LL, 16LL);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
