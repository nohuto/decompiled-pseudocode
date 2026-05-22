/*
 * XREFs of ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x18004EDB0
 * Callers:
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x18004E5F8 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z.c)
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x18004E69C (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x18017F8D4 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800292A0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180079E44 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_ceilf_0 @ 0x18009AB30 (_o_ceilf_0.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x180109D98 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x180109E08 (-IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180180F9C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_com.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall ControllerProcessor::SetVirtualKeyState(
        ControllerProcessor *this,
        unsigned __int16 a2,
        char a3,
        char a4)
{
  char v5; // si
  int v6; // r14d
  unsigned __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r12
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _WORD *v20; // rsi
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  __int64 v26; // rcx
  float v27; // xmm0_4
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  _QWORD *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  _QWORD *v34; // r9
  _QWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // r8
  char v39; // di
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // rdx
  GamepadInterceptionHelper *v44; // rbx
  GamepadInterceptionHelper *v45; // rax
  GamepadInterceptionHelper *v46; // rdi
  __int64 v47; // r9
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  unsigned int v50; // edx
  int v51; // eax
  GamepadInterceptionHelper *v52; // [rsp+20h] [rbp-E0h]
  _DWORD v53[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int16 v57; // [rsp+8Ch] [rbp-74h]
  __int16 v58; // [rsp+AEh] [rbp-52h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]
  char v60; // [rsp+200h] [rbp+100h]
  unsigned __int8 v61; // [rsp+209h] [rbp+109h]

  v61 = HIBYTE(a2);
  v5 = a3;
  v6 = a2;
  _mm_lfence();
  v8 = 0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL);
  v9 = *((_QWORD *)this + 17);
  v10 = 2 * (v9 & (0x100000001B3LL * (v8 ^ ((unsigned __int64)a2 >> 8))));
  v11 = *((_QWORD *)this + 14);
  v12 = *(_QWORD **)(v11 + 8 * v10 + 8);
  v13 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v12 == v13 )
  {
LABEL_6:
    v12 = 0LL;
  }
  else
  {
    v14 = *(_QWORD **)(v11 + 8 * v10);
    while ( (_WORD)v6 != *((_WORD *)v12 + 8) )
    {
      if ( v12 == v14 )
        goto LABEL_6;
      v12 = (_QWORD *)v12[1];
    }
  }
  if ( !v12 )
    v12 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    if ( v12 != v13 )
      return;
    v60 = a4 ^ 1;
    _mm_lfence();
    v15 = 0x100000001B3LL * (v8 ^ v61);
    v16 = 2 * (v15 & v9);
    v17 = *((_QWORD *)this + 14);
    v18 = *(_QWORD *)(v17 + 8 * v16 + 8);
    if ( (_QWORD *)v18 != v13 )
    {
      v19 = *(_QWORD *)(v17 + 8 * v16);
      while ( (_WORD)v6 != *(_WORD *)(v18 + 16) )
      {
        if ( v18 == v19 )
        {
          v13 = (_QWORD *)v18;
          goto LABEL_17;
        }
        v18 = *(_QWORD *)(v18 + 8);
      }
      *(_BYTE *)(v18 + 18) = a4;
      v39 = a4 ^ 1;
      goto LABEL_59;
    }
LABEL_17:
    if ( *((_QWORD *)this + 13) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v20 = operator new(0x18uLL);
    v20[8] = v6;
    *((_BYTE *)v20 + 18) = a4;
    v21 = *((_QWORD *)this + 18);
    v22 = *((_QWORD *)this + 13) + 1LL;
    if ( v22 < 0 )
      v23 = (float)(v22 & 1 | (unsigned int)((unsigned __int64)v22 >> 1))
          + (float)(v22 & 1 | (unsigned int)((unsigned __int64)v22 >> 1));
    else
      v23 = (float)(int)v22;
    v24 = *((float *)this + 22);
    if ( (v21 & 0x8000000000000000uLL) != 0LL )
    {
      v26 = *((_QWORD *)this + 18) & 1LL | (v21 >> 1);
      v25 = (float)(int)v26 + (float)(int)v26;
    }
    else
    {
      v25 = (float)(int)v21;
    }
    if ( (float)(v23 / v25) <= v24 )
    {
      v34 = (_QWORD *)((char *)this + 96);
      v31 = (_QWORD *)((char *)this + 136);
    }
    else
    {
      v27 = o_ceilf_0(v23 / v24);
      v28 = 0LL;
      if ( v27 >= 9.223372e18 )
      {
        v27 = v27 - 9.223372e18;
        if ( v27 < 9.223372e18 )
          v28 = 0x8000000000000000uLL;
      }
      v29 = v28 + (unsigned int)(int)v27;
      v30 = 8LL;
      if ( v29 > 8 )
        v30 = v29;
      if ( v21 < v30 )
      {
        if ( v21 >= 0x200 || (v21 *= 8LL, v21 < v30) )
          v21 = v30;
      }
      std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Forced_rehash(
        (char *)this + 88,
        v21);
      v31 = (_QWORD *)((char *)this + 136);
      v32 = *((_QWORD *)this + 14);
      v33 = *(_QWORD *)(v32 + 16 * (v15 & *((_QWORD *)this + 17)) + 8);
      v34 = (_QWORD *)((char *)this + 96);
      v13 = (_QWORD *)*((_QWORD *)this + 12);
      if ( (_QWORD *)v33 != v13 )
      {
        while ( v20[8] != *(_WORD *)(v33 + 16) )
        {
          if ( v33 == *(_QWORD *)(v32 + 16 * (v15 & *((_QWORD *)this + 17))) )
          {
            v13 = (_QWORD *)v33;
            goto LABEL_42;
          }
          v33 = *(_QWORD *)(v33 + 8);
        }
        v13 = *(_QWORD **)v33;
      }
    }
LABEL_42:
    v35 = (_QWORD *)v13[1];
    ++*((_QWORD *)this + 13);
    *(_QWORD *)v20 = v13;
    *((_QWORD *)v20 + 1) = v35;
    *v35 = v20;
    v13[1] = v20;
    v36 = 2 * (v15 & *v31);
    v37 = *((_QWORD *)this + 14);
    v38 = *(_QWORD **)(v37 + 16 * (v15 & *v31));
    if ( v38 == (_QWORD *)*v34 )
    {
      *(_QWORD *)(v37 + 8 * v36) = v20;
LABEL_47:
      *(_QWORD *)(v37 + 8 * v36 + 8) = v20;
      goto LABEL_48;
    }
    if ( v38 == v13 )
    {
      *(_QWORD *)(v37 + 8 * v36) = v20;
    }
    else if ( *(_QWORD **)(v37 + 8 * v36 + 8) == v35 )
    {
      goto LABEL_47;
    }
LABEL_48:
    v5 = a3;
    v39 = v60;
    goto LABEL_59;
  }
  if ( v12 == v13 )
    return;
  v39 = *((_BYTE *)v12 + 18) == 0;
  _mm_lfence();
  v40 = 2
      * (v9 & (0x100000001B3LL
             * (*((unsigned __int8 *)v12 + 17) ^ (0x100000001B3LL
                                                * (*((unsigned __int8 *)v12 + 16) ^ 0xCBF29CE484222325uLL)))));
  v41 = *((_QWORD *)this + 14);
  v42 = *(_QWORD **)(v41 + 8 * v40);
  if ( *(_QWORD **)(v41 + 8 * v40 + 8) == v12 )
  {
    if ( v42 == v12 )
      *(_QWORD *)(v41 + 8 * v40) = v13;
    else
      v13 = (_QWORD *)v12[1];
    *(_QWORD *)(v41 + 8 * v40 + 8) = v13;
  }
  else if ( v42 == v12 )
  {
    *(_QWORD *)(v41 + 8 * v40) = *v12;
  }
  v43 = *v12;
  --*((_QWORD *)this + 13);
  *(_QWORD *)v12[1] = v43;
  *(_QWORD *)(v43 + 8) = v12[1];
  operator delete(v12, (const struct std::nothrow_t *)0x18);
LABEL_59:
  if ( v39 )
  {
    v44 = ISMStatics::s_gamepadInterceptionHelper;
    if ( !ISMStatics::s_gamepadInterceptionHelper )
    {
      v52 = 0LL;
      v45 = (GamepadInterceptionHelper *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v46 = v45;
      if ( v45 )
      {
        *((_DWORD *)v45 + 3) = 1;
        *(_QWORD *)v45 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v46 = &GamepadInterceptionHelper::`vftable';
        *((_QWORD *)v46 + 2) = 0LL;
        *((_QWORD *)v46 + 3) = 0LL;
        *((_QWORD *)v46 + 4) = 0LL;
        *((_QWORD *)v46 + 5) = 0LL;
        *((_QWORD *)v46 + 6) = 0LL;
        *((_QWORD *)v46 + 7) = 0LL;
        *((_QWORD *)v46 + 8) = 0LL;
        *((_QWORD *)v46 + 9) = 0LL;
        *((_QWORD *)v46 + 10) = 0LL;
        v48 = operator new(0x28uLL);
        *v48 = v48;
        v48[1] = v48;
        v48[2] = v48;
        *((_WORD *)v48 + 12) = 257;
        *((_QWORD *)v46 + 9) = v48;
        *((_QWORD *)v46 + 11) = 0LL;
        *((_QWORD *)v46 + 12) = 0LL;
        v49 = operator new(0x20uLL);
        *v49 = v49;
        v49[1] = v49;
        v49[2] = v49;
        *((_WORD *)v49 + 12) = 257;
        *((_QWORD *)v46 + 11) = v49;
        (*(void (__fastcall **)(GamepadInterceptionHelper *))(*(_QWORD *)v46 + 8LL))(v46);
        v52 = v46;
        (*(void (__fastcall **)(GamepadInterceptionHelper *))(*(_QWORD *)v46 + 16LL))(v46);
        v47 = 0LL;
      }
      else
      {
        v47 = 2147942414LL;
      }
      if ( (int)v47 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
          (const char *)v47,
          (int)v52);
      v44 = v52;
      ISMStatics::s_gamepadInterceptionHelper = v52;
    }
    if ( *((_QWORD *)v44 + 2) )
    {
      GamepadInterceptionHelper::InterceptGamepadInput(v44, v6, v5 != 1);
    }
    else
    {
      memset_0(v53, 0, 0x170uLL);
      v55 = 368;
      v53[0] = 4;
      v53[2] = *((_DWORD *)this + 39);
      v54 = *((_QWORD *)this + 20);
      v56 = *((_QWORD *)this + 21);
      v58 = 64;
      v57 = v6;
      if ( !v5 )
        v58 = 65;
      if ( v6 == 7
        || IsEdition(253345LL)
        || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228)
        || (v50 = *((_DWORD *)this + 1953)) != 0
        && GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(v44, v50) )
      {
        v51 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v53);
        if ( v51 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA31,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v51,
            0);
      }
    }
  }
}
