/*
 * XREFs of ?_Do_rep@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x18013F300
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013F81C (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??0?$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z @ 0x180134E58 (--0-$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$_Tgt_state_t@PEBG@std@@QEAA@XZ @ 0x1801351B0 (--1-$_Tgt_state_t@PEBG@std@@QEAA@XZ.c)
 *     ??4?$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z @ 0x180135504 (--4-$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Do_rep0@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x18013F178 (-_Do_rep0@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013F81C (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Do_rep(
        __int64 *a1,
        __int64 a2,
        char a3,
        int a4)
{
  __int64 v6; // rbx
  char matched; // r14
  __int64 v10; // rsi
  __int64 v11; // rbp
  int v12; // edx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  bool v15; // r12
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+28h] [rbp-80h] BYREF
  _QWORD *v19; // [rsp+30h] [rbp-78h]
  _QWORD v20[8]; // [rsp+40h] [rbp-68h] BYREF

  v6 = a2;
  if ( *(_DWORD *)(a2 + 52) == 1 )
    return std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Do_rep0(
             a1,
             a2,
             a3);
  matched = 0;
  std::_Tgt_state_t<unsigned short const *>::_Tgt_state_t<unsigned short const *>(v20, a1);
  v10 = 2LL * *(unsigned int *)(v6 + 48);
  v11 = a1[16];
  v12 = *(_DWORD *)(v11 + 16LL * *(unsigned int *)(v6 + 48));
  v17 = v12;
  v13 = *(_QWORD **)(v11 + 16LL * *(unsigned int *)(v6 + 48) + 8);
  v19 = v13;
  v14 = *a1;
  v18 = *a1;
  v15 = !a4 || *v13 != v14;
  if ( *(int *)(v6 + 36) < 0 || *(_DWORD *)(v6 + 36) > a4 )
  {
    if ( a4 < *(_DWORD *)(v6 + 32) )
    {
      if ( !v15 )
      {
        v6 = *(_QWORD *)(v6 + 40);
LABEL_13:
        v16 = *(_QWORD *)(v6 + 16);
        goto LABEL_24;
      }
LABEL_12:
      *(_DWORD *)(v11 + 8 * v10) = a4 + 1;
      *(_QWORD *)(v11 + 8 * v10 + 8) = &v18;
      goto LABEL_13;
    }
    if ( !a3 )
    {
      matched = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                  a1,
                  *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL));
      if ( matched )
        goto LABEL_26;
      if ( v15 )
      {
        std::_Tgt_state_t<unsigned short const *>::operator=((__int64)a1, (__int64)v20);
        goto LABEL_12;
      }
LABEL_25:
      std::_Tgt_state_t<unsigned short const *>::operator=((__int64)a1, (__int64)v20);
      goto LABEL_26;
    }
    if ( v15 )
    {
      *(_DWORD *)(v11 + 8 * v10) = a4 + 1;
      *(_QWORD *)(v11 + 8 * v10 + 8) = &v18;
      matched = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
                  a1,
                  *(_QWORD *)(v6 + 16));
      v13 = v19;
      v12 = v17;
    }
    else if ( a4 > 1 )
    {
      goto LABEL_25;
    }
    if ( matched )
      goto LABEL_26;
    *(_DWORD *)(v11 + 8 * v10) = v12;
    *(_QWORD *)(v11 + 8 * v10 + 8) = v13;
    std::_Tgt_state_t<unsigned short const *>::operator=((__int64)a1, (__int64)v20);
  }
  v16 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 16LL);
LABEL_24:
  matched = std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Match_pat(
              a1,
              v16);
  if ( !matched )
    goto LABEL_25;
LABEL_26:
  *(_DWORD *)(v11 + 8 * v10) = v17;
  *(_QWORD *)(v11 + 8 * v10 + 8) = v19;
  std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>((__int64)v20);
  return matched;
}
