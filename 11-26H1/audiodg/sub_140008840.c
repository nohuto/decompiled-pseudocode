/*
 * XREFs of sub_140008840 @ 0x140008840
 * Callers:
 *     sub_140031EE0 @ 0x140031EE0 (sub_140031EE0.c)
 *     sub_1400350A0 @ 0x1400350A0 (sub_1400350A0.c)
 * Callees:
 *     sub_140008AB0 @ 0x140008AB0 (sub_140008AB0.c)
 *     sub_14000A628 @ 0x14000A628 (sub_14000A628.c)
 *     sub_14000A808 @ 0x14000A808 (sub_14000A808.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C428 @ 0x14000C428 (sub_14000C428.c)
 *     sub_14000EAC8 @ 0x14000EAC8 (sub_14000EAC8.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140008840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v9; // rax
  _QWORD *v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v29; // rdx
  ATL::CAtlException *v30; // rbx
  __int64 v31; // [rsp+20h] [rbp-38h]
  ATL::CAtlException *v32; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v34; // [rsp+60h] [rbp+8h] BYREF

  v9 = *(_QWORD *)(a1 + 768);
  v10 = *(_QWORD **)(*(_QWORD *)v9 + 48LL);
  v11 = 0;
  do
  {
    if ( !v10 )
      goto LABEL_5;
    v12 = v10[2];
    v10 = (_QWORD *)*v10;
  }
  while ( *(_QWORD *)(v12 + 120) != a3 );
  if ( v12 )
    goto LABEL_32;
LABEL_5:
  v13 = *(_QWORD **)(*(_QWORD *)v9 + 96LL);
  do
  {
    if ( !v13 )
      goto LABEL_9;
    v14 = v13[2];
    v13 = (_QWORD *)*v13;
  }
  while ( *(_QWORD *)(v14 + 120) != a3 );
  if ( v14 )
  {
LABEL_32:
    v29 = 2826LL;
LABEL_33:
    v11 = -2005139416;
LABEL_34:
    sub_14000C2A8(retaddr, v29, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v11);
    return v11;
  }
LABEL_9:
  v15 = sub_14000A808(a1, a2);
  v16 = v15;
  if ( !v15 )
  {
    v11 = -2005139430;
    v29 = 2830LL;
    goto LABEL_34;
  }
  v17 = *(_QWORD *)(v15 + 16);
  v18 = *(_QWORD *)(a1 + 768);
  v19 = *(_QWORD **)(*(_QWORD *)v18 + 48LL);
  do
  {
    if ( !v19 )
      goto LABEL_14;
    v20 = v19[2];
    v19 = (_QWORD *)*v19;
  }
  while ( *(_QWORD *)(v20 + 16) != v17 );
  if ( v20 )
  {
LABEL_36:
    v29 = 2834LL;
    goto LABEL_33;
  }
LABEL_14:
  v21 = *(_QWORD **)(*(_QWORD *)v18 + 96LL);
  while ( v21 )
  {
    v22 = v21[2];
    v21 = (_QWORD *)*v21;
    if ( *(_QWORD *)(v22 + 16) == v17 )
    {
      if ( v22 )
        goto LABEL_36;
      break;
    }
  }
  v23 = sub_140008AB0(v21, v16, a3, v17);
  v24 = v23;
  if ( v23 >= 0 )
  {
    v25 = sub_14000C428();
    v34 = v25;
    if ( v25 )
      v26 = sub_14000A628(v25, v16);
    else
      v26 = 0LL;
    v31 = v26;
    if ( v26 )
    {
      if ( *(_QWORD *)(v26 + 120) != a3 )
        sub_1400115FC(v26 + 120, a3);
      v27 = 0LL;
      v34 = 0LL;
      if ( a3 )
      {
        sub_1400B6010(a3);
        v27 = v34;
      }
      v34 = 0LL;
      *(_QWORD *)(v26 + 144) = v27;
      if ( v34 )
        sub_1400B6010(v34);
      try
      {
        v34 = v26;
        sub_14000EAC8(a4, &v34);
      }
      catch ( ATL::CAtlException *v32 )
      {
        v30 = v32;
        if ( *(_DWORD *)v32 == -1073741571 )
          o__resetstkoflw();
        LODWORD(v34) = *(_DWORD *)v30;
        v24 = v34;
        v11 = 0;
        if ( (int)v34 < 0 )
        {
          sub_14000C2A8(
            retaddr,
            2857LL,
            "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
            (unsigned int)v34);
          sub_1400B6010(v31);
          return v24;
        }
        v26 = v31;
      }
      *a5 = v26;
      return v11;
    }
    v11 = -2147024882;
    sub_14000C2A8(retaddr, 2843LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2147942414LL);
    return v11;
  }
  sub_14000C2A8(retaddr, 2837LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", (unsigned int)v23);
  return v24;
}
