/*
 * XREFs of ?CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z @ 0x14008B580
 * Callers:
 *     DxgkDisplayMuxSwitchPrepare @ 0x1400913C4 (DxgkDisplayMuxSwitchPrepare.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x14006A7FC (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x14006E5C8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _lambda_a565eb4f19e28a5292d2c438ee0d1898_::_lambda_a565eb4f19e28a5292d2c438ee0d1898_ @ 0x140081474 (_lambda_a565eb4f19e28a5292d2c438ee0d1898_--_lambda_a565eb4f19e28a5292d2c438ee0d1898_.c)
 *     ??0DISPLAY_MUX_SWITCH_OPERATION@@QEAA@PEBU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@PEBU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140089EC8 (--0DISPLAY_MUX_SWITCH_OPERATION@@QEAA@PEBU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@PEBU_DISPLAYCONFIG_.c)
 *     _DXGKCALLONEXIT__lambda_a565eb4f19e28a5292d2c438ee0d1898____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A2E0 (_DXGKCALLONEXIT__lambda_a565eb4f19e28a5292d2c438ee0d1898____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x14008A910 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x14008CDA8 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z @ 0x14008CE10 (-IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_SWITCH_OPERATION@@@Z @ 0x140090258 (-reset@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATI.c)
 *     ?swap@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x14009029C (-swap@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATIO.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall DISPLAY_MUX_MGR::CreateSwitchOperation(
        DISPLAY_MUX_MGR *this,
        struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *a2)
{
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v3; // rcx
  int v4; // edi
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 *v13; // rax
  __int128 v14; // xmm1
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // r9d
  DISPLAY_MUX_PAIRING *v18; // rcx
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v19; // r8
  struct _LUID v20; // rdx
  unsigned int v21; // r8d
  DISPLAY_MUX_PAIRING *v22; // rcx
  __int64 v23; // rbx
  int v24; // esi
  _QWORD *v25; // rcx
  int v26; // edx
  __int64 v27; // rax
  DISPLAY_MUX_SWITCH_OPERATION *v28; // rax
  DISPLAY_MUX_SWITCH_OPERATION *v29; // rax
  NTSTATUS v30; // eax
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r9
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v34; // rcx
  PVOID v35; // rdx
  void *v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+68h] [rbp-98h]
  _BYTE v43[16]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v45[40]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v46[31]; // [rsp+C8h] [rbp-38h] BYREF
  PVOID Object; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *v48; // [rsp+1D8h] [rbp+D8h] BYREF
  NTSTATUS IsTargetPartOfMux; // [rsp+1E0h] [rbp+E0h] BYREF
  void *Handle; // [rsp+1E8h] [rbp+E8h] BYREF

  v48 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v43, (DISPLAY_MUX_MGR *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
  memset(&v46[5], 0, 0xA0uLL);
  v3 = v48;
  v4 = -1073741823;
  v5 = *(_OWORD *)&v46[7];
  *((_OWORD *)v48 + 5) = *(_OWORD *)&v46[5];
  v6 = *(_OWORD *)&v46[9];
  *((_OWORD *)v3 + 6) = v5;
  v7 = *(_OWORD *)&v46[11];
  *((_OWORD *)v3 + 7) = v6;
  v8 = *(_OWORD *)&v46[13];
  *((_OWORD *)v3 + 8) = v7;
  v9 = *(_OWORD *)&v46[15];
  *((_OWORD *)v3 + 9) = v8;
  v10 = *(_OWORD *)&v46[17];
  *((_OWORD *)v3 + 10) = v9;
  v11 = *(_OWORD *)&v46[21];
  *((_OWORD *)v3 + 11) = v10;
  *((_OWORD *)v3 + 12) = *(_OWORD *)&v46[19];
  v12 = *(_OWORD *)&v46[23];
  *((_OWORD *)v3 + 13) = v11;
  *((_OWORD *)v3 + 14) = v12;
  IsTargetPartOfMux = -1073741823;
  v39 = 0LL;
  v13 = (__int128 *)lambda_a565eb4f19e28a5292d2c438ee0d1898_::_lambda_a565eb4f19e28a5292d2c438ee0d1898_(
                      v46,
                      (__int64)&v48,
                      (__int64)&IsTargetPartOfMux,
                      (__int64)this,
                      (__int64)&v39);
  v14 = v13[1];
  v44[0] = *v13;
  v44[1] = v14;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v45, v44);
  if ( *((_DWORD *)this + 20) != 1 )
  {
    v15 = 769;
    v16 = -1073741762;
    v17 = 3118;
LABEL_29:
    v19 = v48;
    goto LABEL_30;
  }
  v18 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)this + 9);
  if ( !v18 || *(_DWORD *)v18 != 2 )
  {
    v15 = 770;
    v16 = -1073740718;
    v17 = 3125;
    goto LABEL_29;
  }
  v19 = v48;
  if ( *((_BYTE *)this + 84) )
  {
    v15 = 768;
    v16 = -1073740682;
    v17 = 3132;
LABEL_30:
    CheckFailed(v16, v15, (__int64)v19 + 24, v17);
    goto LABEL_31;
  }
  v20 = *(struct _LUID *)v48;
  v21 = *((_DWORD *)v48 + 2);
  LOBYTE(Object) = 0;
  IsTargetPartOfMux = DISPLAY_MUX_PAIRING::IsTargetPartOfMux(v18, v20, v21, (unsigned __int8 *)&Object, 0LL);
  if ( !CheckFailed(IsTargetPartOfMux, 773, (__int64)v48 + 24, 0xC43u) )
  {
    if ( (_BYTE)Object )
    {
      v15 = 771;
      v16 = -1073741791;
      v17 = 3147;
      goto LABEL_29;
    }
    v22 = (DISPLAY_MUX_PAIRING *)*((_QWORD *)this + 9);
    v23 = 0LL;
    v41 = 0LL;
    v24 = 0;
    v42 = 0;
    if ( !DISPLAY_MUX_PAIRING::IsOperational(v22) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1841;
      v4 = -1073741762;
      goto LABEL_17;
    }
    v26 = *(_DWORD *)(v25[1] + 72LL);
    if ( v26 == 1 )
    {
      v27 = v25[2];
    }
    else
    {
      if ( v26 != 2 )
        goto LABEL_17;
      v27 = v25[3];
    }
    v23 = *(_QWORD *)(v27 + 16);
    v4 = 0;
    v24 = *(_DWORD *)(v27 + 356);
    v41 = v23;
    v42 = v24;
LABEL_17:
    IsTargetPartOfMux = v4;
    if ( !CheckFailed(v4, 772, (__int64)v48 + 24, 0xC52u) )
    {
      *((_QWORD *)v48 + 28) = v23;
      *((_DWORD *)v48 + 58) = v24;
      v28 = (DISPLAY_MUX_SWITCH_OPERATION *)operator new(0x134uLL, 0x4B677844u, 256LL);
      if ( v28 )
        v29 = DISPLAY_MUX_SWITCH_OPERATION::DISPLAY_MUX_SWITCH_OPERATION(
                v28,
                v48,
                (const struct _DISPLAYCONFIG_DISPLAYMUX_TARGET *)&v41);
      else
        v29 = 0LL;
      wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::reset(
        &v39,
        v29);
      if ( !v39 )
      {
        v15 = 774;
        v16 = -1073741801;
        v17 = 3165;
        goto LABEL_29;
      }
      wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        (DxgkCompositionObject **)this + 11,
        0LL);
      Object = 0LL;
      v30 = ObReferenceObjectByHandle(*((HANDLE *)v48 + 2), 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v31 = v48;
      *((_QWORD *)this + 11) = Object;
      IsTargetPartOfMux = v30;
      if ( !CheckFailed(v30, 777, (__int64)v31 + 24, 0xC68u) )
      {
        LOBYTE(v33) = 1;
        LOBYTE(v32) = 1;
        v40 = 0LL;
        IsTargetPartOfMux = ObCreateObject(v32, g_pDpDisplayMuxSwitchNtObject, 0LL, v33, 0LL, 8, 316, 0, &v40);
        if ( !CheckFailed(IsTargetPartOfMux, 775, (__int64)v48 + 24, 0xC79u) )
        {
          Handle = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
            &Handle,
            0LL);
          IsTargetPartOfMux = ObInsertObject(v40, 0LL, 0x20000u, 0, 0LL, &Handle);
          if ( !CheckFailed(IsTargetPartOfMux, 776, (__int64)v48 + 24, 0xC86u) )
          {
            v34 = v48;
            v35 = v40;
            *((_QWORD *)this + 12) = *(_QWORD *)v48;
            *((_DWORD *)this + 26) = *((_DWORD *)v34 + 2);
            wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::swap(
              &v39,
              v35);
            v36 = Handle;
            Handle = 0LL;
            *((_QWORD *)v48 + 30) = v36;
            v37 = (__int64 *)v40;
            *((_BYTE *)this + 84) = 1;
            v38 = *v37;
            *((_QWORD *)&xmmword_1401694F8 + 1) = KeGetCurrentThread();
            *(_QWORD *)&xmmword_1401694F8 = v38;
          }
          wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
        }
      }
    }
  }
LABEL_31:
  DXGKCALLONEXIT__lambda_a565eb4f19e28a5292d2c438ee0d1898____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v45);
  wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::reset(&v39, 0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
}
