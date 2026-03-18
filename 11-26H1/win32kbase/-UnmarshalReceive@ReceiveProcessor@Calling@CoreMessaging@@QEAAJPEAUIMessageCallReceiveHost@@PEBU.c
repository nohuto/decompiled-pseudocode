/*
 * XREFs of ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x1401538FC
 * Callers:
 *     CoreUICallReceive @ 0x140153830 (CoreUICallReceive.c)
 * Callees:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x140153C68 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x14024BAF4 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
        CoreMessaging::Calling::ReceiveProcessor *this,
        struct IMessageCallReceiveHost *a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        bool a5,
        unsigned int a6,
        char *a7,
        unsigned int a8)
{
  __int64 v9; // rsi
  char *v10; // rcx
  __int64 v11; // r8
  char *v12; // rdx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // eax
  __int64 i; // rcx
  char *v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rdx
  int v22; // r9d
  unsigned __int8 *v23; // rcx
  int v24; // eax
  unsigned __int8 *v25; // rcx
  __int64 v26; // rdi
  int v27; // edx
  unsigned int v28; // eax
  unsigned int *v29; // rax
  _DWORD *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  const unsigned __int8 *v35; // [rsp+48h] [rbp+20h] BYREF

  v35 = a4;
  if ( !a2 )
    return 2147942487LL;
  v9 = a8;
  if ( !a8 )
    return 0LL;
  v10 = a7;
  if ( !a7 )
    return 2147942487LL;
  v11 = 0LL;
  *((_QWORD *)this + 17) = a2;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = -1;
  if ( (((_DWORD)v9 + 3) & 0xFFFFFFFC) != (_DWORD)v9 )
    goto LABEL_40;
  v12 = &v10[v9];
  *((_BYTE *)this + 112) = 1;
  *((_QWORD *)this + 11) = v10;
  *((_QWORD *)this + 12) = v10;
  if ( &v10[v9] < v10 )
  {
    *((_QWORD *)this + 13) = -1LL;
    goto LABEL_40;
  }
  *((_QWORD *)this + 13) = v12;
  if ( (unsigned int)v9 < 8 )
    goto LABEL_40;
  if ( (unsigned int)((_DWORD)v12 - *((_DWORD *)this + 24)) < 8
    || (v13 = *((_QWORD *)this + 12), *((_QWORD *)this + 12) = v13 + 8, !v13) )
  {
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x86uLL);
  }
  v14 = *((_DWORD *)this + 32);
  if ( *(_DWORD *)v13 >> v14 )
  {
    *((_DWORD *)this + 30) = 8;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)v13 & (unsigned int)((1 << v14) - 1)) << *((_DWORD *)this + 33) > (unsigned int)v9 )
  {
LABEL_40:
    *((_DWORD *)this + 30) = 2;
    goto LABEL_37;
  }
  v15 = 0;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( v15 >= 1 )
      goto LABEL_36;
    if ( *(_WORD *)((char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
                  + i) == *(_WORD *)(v13 + 4) )
      break;
    ++v15;
  }
  v17 = (char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
      + 16 * v15;
  if ( !v17 )
  {
LABEL_36:
    *((_DWORD *)this + 30) = 3;
    goto LABEL_37;
  }
  v18 = *(unsigned __int16 *)(v13 + 6);
  if ( (unsigned __int16)v18 >= *((_WORD *)v17 + 1) )
  {
    *((_DWORD *)this + 30) = 5;
  }
  else
  {
    *((_QWORD *)this + 18) = v17;
    v19 = 16LL * v18;
    v20 = *((_QWORD *)v17 + 1) + v19 == 0;
    v21 = *((_QWORD *)v17 + 1) + v19;
    *((_QWORD *)this + 19) = v21;
    if ( v20 )
    {
      *((_DWORD *)this + 30) = 201;
    }
    else
    {
      v22 = *(unsigned __int8 *)(v21 + 10);
      *((_DWORD *)this + 20) = v22;
      if ( !v22 )
      {
LABEL_41:
        if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) == (_DWORD)v9 )
          v11 = 0LL;
        else
LABEL_43:
          *((_DWORD *)this + 30) = 7;
        goto LABEL_37;
      }
      *(_QWORD *)this = Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar;
      v23 = &Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar[*(unsigned __int16 *)(v21 + 8)];
      *(_QWORD *)this = v23;
      if ( v23 >= byte_140271164
        || v23 < Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar )
      {
        *((_DWORD *)this + 30) = 202;
      }
      else
      {
        v24 = *v23;
        v25 = v23 + 1;
        *(_QWORD *)this = v25;
        if ( v24 == v22 )
        {
          v26 = 0LL;
          *((_QWORD *)this + 1) = v25;
          for ( *((_DWORD *)this + 31) = 0; *((_DWORD *)this + 31) < *((_DWORD *)this + 20); ++*((_DWORD *)this + 31) )
          {
            v27 = *((_DWORD *)this + 26);
            v28 = v27 - *((_DWORD *)this + 24);
            a6 = 0;
            LODWORD(v35) = 0;
            a5 = 0;
            if ( v28 < 4 )
              goto LABEL_50;
            v29 = (unsigned int *)*((_QWORD *)this + 12);
            v30 = v29 + 1;
            *((_QWORD *)this + 12) = v29 + 1;
            if ( !v29 )
              goto LABEL_50;
            v31 = *v29;
            *((_DWORD *)this + 21) = v31;
            if ( v31 > 0xFFFFFFFC )
              goto LABEL_43;
            if ( v31 )
            {
              v32 = (v31 + 3) & 0xFFFFFFFC;
              if ( v27 - *((_DWORD *)this + 24) < (unsigned int)v32 )
                v30 = 0LL;
              else
                *((_QWORD *)this + 12) = (char *)v30 + v32;
              *((_QWORD *)this + 52) = v30;
              if ( !v30 )
                goto LABEL_40;
            }
            else
            {
              *((_QWORD *)this + 52) = 0LL;
            }
            v33 = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
                    this,
                    &a6,
                    &a5,
                    (unsigned int *)&v35);
            v11 = (unsigned int)v33;
            if ( v33 < 0 )
              goto LABEL_37;
            if ( a6 != *((_DWORD *)this + 21) && a6 )
              goto LABEL_43;
            *((_QWORD *)this + v26 + 20) = *((_QWORD *)this + 52);
            v26 = (unsigned int)(v26 + 1);
            if ( a5 )
            {
              *((_QWORD *)this + v26 + 20) = (unsigned int)v35;
              v26 = (unsigned int)(v26 + 1);
            }
          }
          goto LABEL_41;
        }
LABEL_50:
        *((_DWORD *)this + 30) = 6;
      }
    }
  }
LABEL_37:
  if ( *((_DWORD *)this + 30) )
  {
    LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 17) + 32LL))(
                     *((_QWORD *)this + 17),
                     (char *)this + 120,
                     v11);
    if ( (int)v11 >= 0 )
      LODWORD(v11) = -2018375668;
  }
  return (unsigned int)v11;
}
