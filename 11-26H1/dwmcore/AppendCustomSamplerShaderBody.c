/*
 * XREFs of AppendCustomSamplerShaderBody @ 0x1801452A0
 * Callers:
 *     AppendShaderBody @ 0x1801469E8 (AppendShaderBody.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800BFB7C (--1-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180144FCC (-clear_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?reserve_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAD_K0@Z @ 0x1801450A8 (-reserve_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180146EBC (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     AppendColorModifications @ 0x1801485B0 (AppendColorModifications.c)
 *     GetExtendModeDecoration @ 0x1801DE0F8 (GetExtendModeDecoration.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall AppendCustomSamplerShaderBody(
        __int64 a1,
        unsigned __int16 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  _BYTE *v13; // rax
  _BYTE *v14; // rdi
  int appended; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  char v19; // al
  void *v20; // rcx
  unsigned __int8 ExtendModeDecoration; // al
  __int128 v22; // [rsp+30h] [rbp-81h] BYREF
  __int64 v23; // [rsp+40h] [rbp-71h]
  __int64 v24; // [rsp+48h] [rbp-69h]
  void *v25[3]; // [rsp+50h] [rbp-61h] BYREF
  _BYTE v26[48]; // [rsp+68h] [rbp-49h] BYREF
  char v27; // [rsp+98h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  v24 = a5;
  v10 = -1LL;
  v23 = a6;
  v25[0] = v26;
  v25[1] = v26;
  v25[2] = &v27;
  v11 = *((_QWORD *)a3 + 4);
  *(_QWORD *)&v22 = a4;
  do
    ++v10;
  while ( *(_BYTE *)(v11 + v10) );
  v12 = v10 + 3;
  if ( v10 == -3 )
  {
    detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)v25,
      0LL,
      -(__int64)v12);
  }
  else
  {
    v13 = detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::reserve_region(
            (unsigned __int64 *)v25,
            0LL,
            v12);
    memset_0(v13, 0, v10 + 3);
  }
  memcpy_0(v25[0], *((const void **)a3 + 4), v10 + 1);
  v14 = (_BYTE *)(v22 + 32LL * (unsigned __int8)*((_WORD *)a3 + 22));
  if ( v14[18] && v14[16] )
  {
    v19 = ((__int64 (*)(void))GetExtendModeDecoration)();
    v20 = v25[0];
    *((_BYTE *)v25[0] + v10) = v19;
    LOBYTE(v20) = v14[17];
    ExtendModeDecoration = GetExtendModeDecoration(v20);
    *(_WORD *)((char *)v25[0] + v10 + 1) = ExtendModeDecoration;
  }
  v22 = *a3;
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, a2, v24, v23, (__int64)v25[0], (__int64)&v22);
  v16 = appended;
  if ( appended >= 0 )
  {
    appended = AppendColorModifications(a1, v14, a2, a7);
    v16 = appended;
    if ( appended >= 0 )
    {
      v16 = 0;
      goto LABEL_9;
    }
    v17 = 1125LL;
  }
  else
  {
    v17 = 1116LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shaderlinking.cpp",
    (const char *)(unsigned int)appended);
LABEL_9:
  detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::~vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>((__int64 *)v25);
  return v16;
}
