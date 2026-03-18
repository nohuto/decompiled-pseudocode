/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800D8470
 * Callers:
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@0@Z @ 0x1800D89B4 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedSh.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1800D898C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProje.c)
 */

_QWORD *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>::_Extract(
        __int64 **a1,
        _QWORD *a2)
{
  _QWORD *v2; // r10
  _QWORD *v3; // rsi
  __int64 **v4; // r9
  _QWORD **v5; // r11
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  char v9; // di
  _QWORD *i; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  __int64 *v13; // r11
  __int64 v14; // rax
  _QWORD *j; // rcx
  _BYTE *v16; // r11
  __int64 *v17; // rcx
  _QWORD *result; // rax
  _QWORD *v19; // rdi
  __int64 *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // rdx
  __int64 **v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax

  v2 = (_QWORD *)a2[2];
  v3 = a2 + 2;
  v4 = a1;
  v5 = (_QWORD **)(a2 + 1);
  v6 = a2;
  v7 = a2;
  v8 = a2;
  v9 = *((_BYTE *)v2 + 25);
  if ( v9 )
  {
    for ( i = *v5; !*((_BYTE *)i + 25); i = (_QWORD *)i[1] )
    {
      if ( a2 != (_QWORD *)i[2] )
        break;
      a2 = i;
    }
  }
  else
  {
    i = (_QWORD *)std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>::_Min(
                    a2[2],
                    a2,
                    a2);
  }
  if ( !*(_BYTE *)(*v6 + 25LL) )
  {
    if ( v9 )
    {
      v2 = (_QWORD *)*v6;
    }
    else
    {
      v2 = (_QWORD *)i[2];
      if ( i != v7 )
      {
        *(_QWORD *)(*v6 + 8LL) = i;
        *i = *v6;
        if ( i == (_QWORD *)*v3 )
        {
          v11 = i;
        }
        else
        {
          v11 = (_QWORD *)i[1];
          if ( !*((_BYTE *)v2 + 25) )
            v2[1] = v11;
          *v11 = v2;
          i[2] = *v3;
          *(_QWORD *)(*v3 + 8LL) = i;
        }
        if ( (_QWORD *)(*v4)[1] == v7 )
        {
          (*v4)[1] = (__int64)i;
        }
        else
        {
          v12 = *v5;
          if ( (_QWORD *)**v5 == v7 )
            *v12 = i;
          else
            v12[2] = i;
        }
        v26 = *v5;
        v16 = v7 + 3;
        i[1] = v26;
        v27 = *((_BYTE *)i + 24);
        *((_BYTE *)i + 24) = *((_BYTE *)v7 + 24);
        *((_BYTE *)v7 + 24) = v27;
        goto LABEL_25;
      }
    }
  }
  v11 = *v5;
  if ( !*((_BYTE *)v2 + 25) )
    v2[1] = v11;
  if ( (_QWORD *)(*v4)[1] == v7 )
  {
    (*v4)[1] = (__int64)v2;
  }
  else if ( (_QWORD *)*v11 == v7 )
  {
    *v11 = v2;
  }
  else
  {
    v11[2] = v2;
  }
  v13 = *v4;
  if ( (_QWORD *)**v4 == v7 )
  {
    if ( *((_BYTE *)v2 + 25) )
      v14 = (__int64)v11;
    else
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>::_Min(
              v2,
              a2,
              v11);
    *v13 = v14;
  }
  if ( (_QWORD *)(*v4)[2] == v7 )
  {
    if ( *((_BYTE *)v2 + 25) )
    {
      j = v11;
    }
    else
    {
      v28 = v2[2];
      for ( j = v2; !*(_BYTE *)(v28 + 25); v28 = *(_QWORD *)(v28 + 16) )
        j = (_QWORD *)v28;
    }
    (*v4)[2] = (__int64)j;
  }
  v16 = v8 + 3;
LABEL_25:
  if ( *v16 != 1 )
    goto LABEL_26;
  while ( 1 )
  {
    v19 = v11;
    if ( v2 == (_QWORD *)(*v4)[1] || *((_BYTE *)v2 + 24) != 1 )
      goto LABEL_93;
    v20 = (__int64 *)*v11;
    if ( v2 == (_QWORD *)*v11 )
      break;
    if ( !*((_BYTE *)v20 + 24) )
    {
      *((_BYTE *)v20 + 24) = 1;
      v23 = (__int64 *)*v11;
      *((_BYTE *)v11 + 24) = 0;
      *v11 = v23[2];
      v24 = v23[2];
      if ( !*(_BYTE *)(v24 + 25) )
        *(_QWORD *)(v24 + 8) = v11;
      v23[1] = v11[1];
      if ( v11 == (_QWORD *)(*v4)[1] )
      {
        (*v4)[1] = (__int64)v23;
      }
      else
      {
        v25 = (_QWORD *)v11[1];
        if ( v11 == (_QWORD *)v25[2] )
          v25[2] = v23;
        else
          *v25 = v23;
      }
      v23[2] = (__int64)v11;
      v11[1] = v23;
      v20 = (__int64 *)*v11;
    }
    if ( !*((_BYTE *)v20 + 25) )
    {
      v32 = v20[2];
      if ( *(_BYTE *)(v32 + 24) != 1 || *(_BYTE *)(*v20 + 24) != 1 )
      {
        if ( *(_BYTE *)(*v20 + 24) == 1 )
        {
          *(_BYTE *)(v32 + 24) = 1;
          v33 = (__int64 *)v20[2];
          *((_BYTE *)v20 + 24) = 0;
          v20[2] = *v33;
          if ( !*(_BYTE *)(*v33 + 25) )
            *(_QWORD *)(*v33 + 8) = v20;
          v33[1] = v20[1];
          if ( v20 == (__int64 *)(*v4)[1] )
          {
            (*v4)[1] = (__int64)v33;
          }
          else
          {
            v34 = (__int64 **)v20[1];
            if ( v20 == *v34 )
              *v34 = v33;
            else
              v34[2] = v33;
          }
          *v33 = (__int64)v20;
          v20[1] = (__int64)v33;
          v20 = (__int64 *)*v11;
        }
        *((_BYTE *)v20 + 24) = *((_BYTE *)v11 + 24);
        *((_BYTE *)v11 + 24) = 1;
        *(_BYTE *)(*v20 + 24) = 1;
        v35 = (_QWORD *)*v11;
        *v11 = *(_QWORD *)(*v11 + 16LL);
        v36 = v35[2];
        if ( !*(_BYTE *)(v36 + 25) )
          *(_QWORD *)(v36 + 8) = v11;
        v35[1] = v11[1];
        if ( v11 == (_QWORD *)(*v4)[1] )
        {
          (*v4)[1] = (__int64)v35;
          v35[2] = v11;
        }
        else
        {
          v37 = (_QWORD *)v11[1];
          if ( v11 == (_QWORD *)v37[2] )
            v37[2] = v35;
          else
            *v37 = v35;
          v35[2] = v11;
        }
        goto LABEL_92;
      }
      goto LABEL_42;
    }
LABEL_43:
    v11 = (_QWORD *)v11[1];
    v2 = v19;
  }
  v20 = (__int64 *)v11[2];
  if ( !*((_BYTE *)v20 + 24) )
  {
    *((_BYTE *)v20 + 24) = 1;
    v21 = (_QWORD *)v11[2];
    *((_BYTE *)v11 + 24) = 0;
    v11[2] = *v21;
    if ( !*(_BYTE *)(*v21 + 25LL) )
      *(_QWORD *)(*v21 + 8LL) = v11;
    v21[1] = v11[1];
    if ( v11 == (_QWORD *)(*v4)[1] )
    {
      (*v4)[1] = (__int64)v21;
    }
    else
    {
      v22 = (_QWORD *)v11[1];
      if ( v11 == (_QWORD *)*v22 )
        *v22 = v21;
      else
        v22[2] = v21;
    }
    *v21 = v11;
    v11[1] = v21;
    v20 = (__int64 *)v11[2];
  }
  if ( *((_BYTE *)v20 + 25) )
    goto LABEL_43;
  if ( *(_BYTE *)(*v20 + 24) == 1 && *(_BYTE *)(v20[2] + 24) == 1 )
  {
LABEL_42:
    *((_BYTE *)v20 + 24) = 0;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v20[2] + 24) == 1 )
  {
    *(_BYTE *)(*v20 + 24) = 1;
    v29 = *v20;
    *((_BYTE *)v20 + 24) = 0;
    *v20 = *(_QWORD *)(v29 + 16);
    v30 = *(_QWORD *)(v29 + 16);
    if ( !*(_BYTE *)(v30 + 25) )
      *(_QWORD *)(v30 + 8) = v20;
    *(_QWORD *)(v29 + 8) = v20[1];
    if ( v20 == (__int64 *)(*v4)[1] )
    {
      (*v4)[1] = v29;
    }
    else
    {
      v31 = (__int64 *)v20[1];
      if ( v20 == (__int64 *)v31[2] )
        v31[2] = v29;
      else
        *v31 = v29;
    }
    *(_QWORD *)(v29 + 16) = v20;
    v20[1] = v29;
    v20 = (__int64 *)v11[2];
  }
  *((_BYTE *)v20 + 24) = *((_BYTE *)v11 + 24);
  *((_BYTE *)v11 + 24) = 1;
  *(_BYTE *)(v20[2] + 24) = 1;
  v35 = (_QWORD *)v11[2];
  v11[2] = *v35;
  if ( !*(_BYTE *)(*v35 + 25LL) )
    *(_QWORD *)(*v35 + 8LL) = v11;
  v35[1] = v11[1];
  if ( v11 != (_QWORD *)(*v4)[1] )
  {
    v38 = (_QWORD *)v11[1];
    if ( v11 == (_QWORD *)*v38 )
      *v38 = v35;
    else
      v38[2] = v35;
    *v35 = v11;
LABEL_92:
    v11[1] = v35;
LABEL_93:
    *((_BYTE *)v2 + 24) = 1;
    goto LABEL_26;
  }
  (*v4)[1] = (__int64)v35;
  *v35 = v11;
  v11[1] = v35;
  *((_BYTE *)v2 + 24) = 1;
LABEL_26:
  v17 = v4[1];
  result = v7;
  if ( v17 )
    v4[1] = (__int64 *)((char *)v17 - 1);
  return result;
}
