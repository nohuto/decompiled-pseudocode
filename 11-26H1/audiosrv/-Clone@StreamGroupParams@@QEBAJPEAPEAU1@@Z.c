/*
 * XREFs of ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x18002B264
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x18002AD50 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x18002B5C0 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x18002B63C (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180053E38 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E8C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180063624 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180067534 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAX_K@Z @ 0x1800A9CC0 (-_Clear_and_reserve_geometric@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator.c)
 *     ??$_Copy_memmove_n@PEAUAudioEffectState@CProcessingModeParameters@@PEAU12@@std@@YAPEAUAudioEffectState@CProcessingModeParameters@@PEAU12@_K0@Z @ 0x1800AE254 (--$_Copy_memmove_n@PEAUAudioEffectState@CProcessingModeParameters@@PEAU12@@std@@YAPEAUAudioEffec.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall StreamGroupParams::Clone(StreamGroupParams *this, struct StreamGroupParams **a2)
{
  struct StreamGroupParams **v2; // r12
  void *v4; // rsi
  __int64 v5; // rdi
  void *v6; // rax
  void *v7; // rbx
  __int64 *v9; // rsi
  char *v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  char *v14; // rcx
  void *v15; // rbx
  char *v16; // rax
  char *v17; // rdi
  int v18[2]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LPVOID pv; // [rsp+70h] [rbp+8h] BYREF
  struct StreamGroupParams **v21; // [rsp+78h] [rbp+10h]
  void *v22; // [rsp+80h] [rbp+18h] BYREF
  LPVOID v23; // [rsp+88h] [rbp+20h] BYREF

  v21 = a2;
  v2 = a2;
  wil::make_cotaskmem_string_nothrow((wil *)&pv, *(const unsigned __int16 **)this, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = pv;
  if ( pv )
  {
    v5 = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 16LL);
    v6 = CoTaskMemAlloc(v5 + 18);
    v7 = v6;
    v22 = v6;
    if ( v6 )
    {
      memcpy_0(v6, *((const void **)this + 2), v5 + 18);
      v16 = (char *)operator new[](0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = v16;
      v23 = v16;
      if ( v16 )
      {
        memset_0(v16, 0, 0x60uLL);
        *(_QWORD *)v17 = 0LL;
        *((_QWORD *)v17 + 2) = 0LL;
        *((_QWORD *)v17 + 7) = 0LL;
        *((_QWORD *)v17 + 8) = 0LL;
        *((_QWORD *)v17 + 9) = 0LL;
        *((_QWORD *)v17 + 10) = 0LL;
        v17[88] = 0;
      }
      else
      {
        v17 = 0LL;
      }
      *(_QWORD *)v18 = v17;
      if ( v17 )
      {
        pv = 0LL;
        CoTaskMemFree(*(LPVOID *)v17);
        *(_QWORD *)v17 = v4;
        v17[49] = *((_BYTE *)this + 49);
        v22 = 0LL;
        CoTaskMemFree(*((LPVOID *)v17 + 2));
        *((_QWORD *)v17 + 2) = v7;
        *((_QWORD *)v17 + 3) = *((_QWORD *)this + 3);
        *((_OWORD *)v17 + 2) = *((_OWORD *)this + 2);
        v17[48] = *((_BYTE *)this + 48);
        v17[50] = *((_BYTE *)this + 50);
        *((_DWORD *)v17 + 2) = *((_DWORD *)this + 2);
        v9 = (__int64 *)(v17 + 56);
        if ( v17 + 56 != (char *)this + 56 )
        {
          v10 = (char *)*((_QWORD *)this + 7);
          v11 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 8) - (_QWORD)v10) >> 2);
          v12 = *v9;
          if ( v11 > 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v17 + 9) - *((_QWORD *)v17 + 7)) >> 2) )
          {
            std::vector<CProcessingModeParameters::AudioEffectState>::_Clear_and_reserve_geometric(v17 + 56, v11);
            v12 = *v9;
            std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(v10);
          }
          else
          {
            v13 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)v17 + 8) - v12) >> 2);
            v14 = (char *)*((_QWORD *)this + 7);
            if ( v11 > v13 )
            {
              std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(v10);
              v12 = *((_QWORD *)v17 + 8);
              v11 -= v13;
              v14 = &v10[20 * v13];
            }
            std::_Copy_memmove_n<CProcessingModeParameters::AudioEffectState *,CProcessingModeParameters::AudioEffectState *>(v14);
            v2 = v21;
          }
          *((_QWORD *)v17 + 8) = v12 + 20 * v11;
        }
        v17[88] = *((_BYTE *)this + 88);
        if ( *((_QWORD *)this + 10) )
        {
          wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&v23);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
            v17 + 80,
            &v23);
          if ( v23 )
            CoTaskMemFree(v23);
        }
        else
        {
          v15 = (void *)*((_QWORD *)v17 + 10);
          if ( v15 )
          {
            wil::last_error_context::last_error_context((wil::last_error_context *)&pv);
            CoTaskMemFree(v15);
            wil::last_error_context::~last_error_context((wil::last_error_context *)&pv);
          }
          *((_QWORD *)v17 + 10) = 0LL;
        }
        *v2 = (struct StreamGroupParams *)v17;
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBE,
          (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\CoreAudioInterfacesP.h",
          (const char *)0x8007000ELL);
        std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(v18);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v22,
          0LL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
        return 2147942414LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA,
        (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\CoreAudioInterfacesP.h",
        (const char *)0x8007000ELL);
      CoTaskMemFree(v4);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (int)"avcore\\audiocore\\server\\AudioSrv\\inc\\CoreAudioInterfacesP.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
