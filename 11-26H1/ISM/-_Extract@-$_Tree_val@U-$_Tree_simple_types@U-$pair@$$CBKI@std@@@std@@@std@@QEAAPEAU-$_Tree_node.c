/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800CB2D0
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1800CB150 (-_Erase@-$_Tree@V-$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U-$less@K@std@@V-$allocat.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1800CB210 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@KU.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E3D7C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180109C34 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180109C88 (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@2@@Z @ 0x180023304 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180057428 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@Z @ 0x1800576D0 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAX.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18008EC2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned int>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // r11
  _QWORD *v4; // r9
  __int64 v5; // rax
  _QWORD *v6; // r10
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rcx
  char v12; // dl
  bool i; // zf
  _BYTE *v14; // rdx
  _BYTE *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v20; // [rsp+38h] [rbp+10h] BYREF

  v20 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
    &v20,
    a2);
  v4 = *(_QWORD **)(v3 + 16);
  if ( !*(_BYTE *)(*(_QWORD *)v3 + 25LL) )
  {
    if ( *((_BYTE *)v4 + 25) )
    {
      v4 = *(_QWORD **)v3;
    }
    else
    {
      v5 = v20;
      v4 = *(_QWORD **)(v20 + 16);
      if ( v20 != v3 )
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8LL) = v20;
        *(_QWORD *)v5 = *(_QWORD *)v3;
        if ( v5 == *(_QWORD *)(v3 + 16) )
        {
          v6 = (_QWORD *)v5;
        }
        else
        {
          v6 = *(_QWORD **)(v5 + 8);
          if ( !*((_BYTE *)v4 + 25) )
            v4[1] = v6;
          *v6 = v4;
          *(_QWORD *)(v5 + 16) = *(_QWORD *)(v3 + 16);
          *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL) = v5;
        }
        if ( *(_QWORD *)(*a1 + 8LL) == v3 )
        {
          *(_QWORD *)(*a1 + 8LL) = v5;
        }
        else
        {
          v11 = *(__int64 **)(v3 + 8);
          if ( *v11 == v3 )
            *v11 = v5;
          else
            v11[2] = v5;
        }
        v12 = *(_BYTE *)(v5 + 24);
        *(_QWORD *)(v5 + 8) = *(_QWORD *)(v3 + 8);
        *(_BYTE *)(v5 + 24) = *(_BYTE *)(v3 + 24);
        *(_BYTE *)(v3 + 24) = v12;
        goto LABEL_35;
      }
    }
  }
  v6 = *(_QWORD **)(v3 + 8);
  if ( !*((_BYTE *)v4 + 25) )
    v4[1] = v6;
  if ( *(_QWORD *)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v4;
  }
  else if ( *v6 == v3 )
  {
    *v6 = v4;
  }
  else
  {
    v6[2] = v4;
  }
  v7 = (_QWORD *)*a1;
  if ( *(_QWORD *)*a1 == v3 )
  {
    if ( *((_BYTE *)v4 + 25) )
      v8 = v6;
    else
      v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min(v4);
    *v7 = v8;
  }
  if ( *(_QWORD *)(*a1 + 16LL) == v3 )
  {
    if ( *((_BYTE *)v4 + 25) )
    {
      v9 = v6;
    }
    else
    {
      v10 = v4[2];
      v9 = v4;
      while ( !*(_BYTE *)(v10 + 25) )
      {
        v9 = (_QWORD *)v10;
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v9;
  }
LABEL_35:
  if ( *(_BYTE *)(v3 + 24) != 1 )
    goto LABEL_60;
  for ( i = v4 == *(_QWORD **)(*a1 + 8LL); !i; i = v17 == *(_QWORD **)(*a1 + 8LL) )
  {
    v17 = v6;
    if ( *((_BYTE *)v4 + 24) != 1 )
      break;
    v14 = (_BYTE *)*v6;
    v15 = v6 + 3;
    if ( v4 == (_QWORD *)*v6 )
    {
      v14 = (_BYTE *)v6[2];
      if ( !v14[24] )
      {
        v14[24] = 1;
        *v15 = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<enum GazeProperty const,unsigned short>>>::_Lrotate(
          (__int64)a1,
          (__int64)v6);
        v14 = (_BYTE *)v6[2];
      }
      if ( !v14[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            v14[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>>::_Rrotate(
              (__int64)a1,
              v14);
            v14 = (_BYTE *)v6[2];
          }
          v14[24] = *v15;
          *v15 = 1;
          *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<enum GazeProperty const,unsigned short>>>::_Lrotate(
            (__int64)a1,
            (__int64)v6);
          break;
        }
LABEL_51:
        v14[24] = 0;
      }
    }
    else
    {
      if ( !v14[24] )
      {
        v14[24] = 1;
        *v15 = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>>::_Rrotate(
          (__int64)a1,
          v6);
        v14 = (_BYTE *)*v6;
      }
      if ( !v14[25] )
      {
        v16 = *((_QWORD *)v14 + 2);
        if ( *(_BYTE *)(v16 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) == 1 )
          {
            *(_BYTE *)(v16 + 24) = 1;
            v14[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<enum GazeProperty const,unsigned short>>>::_Lrotate(
              (__int64)a1,
              (__int64)v14);
            v14 = (_BYTE *)*v6;
          }
          v14[24] = *v15;
          *v15 = 1;
          *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>>::_Rrotate(
            (__int64)a1,
            v6);
          break;
        }
        goto LABEL_51;
      }
    }
    v4 = v17;
    v6 = (_QWORD *)v6[1];
  }
  *((_BYTE *)v4 + 24) = 1;
LABEL_60:
  v18 = a1[1];
  if ( v18 )
    a1[1] = v18 - 1;
  return v3;
}
