/*
 * XREFs of ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1801B2AB8
 * Callers:
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x1801B2A00 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1801B2A3C (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800E4F30 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionContextWrapper::ConfigureInteractionContext(
        CInteractionContextWrapper *this,
        struct HINTERACTIONCONTEXT__ *a2,
        unsigned __int64 a3)
{
  unsigned int v3; // eax
  unsigned __int64 v5; // rbx
  _BYTE *v6; // rdx
  char v8; // r13
  char v9; // r14
  char v10; // di
  int v11; // esi
  _BYTE *v13; // rcx
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // [rsp+50h] [rbp-19h]
  char v24; // [rsp+51h] [rbp-18h]
  int v25; // [rsp+54h] [rbp-15h] BYREF
  int v26; // [rsp+58h] [rbp-11h] BYREF
  int v27; // [rsp+5Ch] [rbp-Dh] BYREF
  unsigned int v28; // [rsp+60h] [rbp-9h] BYREF
  CInteractionContextWrapper *v29; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v30[6]; // [rsp+70h] [rbp+7h] BYREF

  v3 = *(_DWORD *)a3;
  v5 = a3;
  v6 = (_BYTE *)(a3 + 4);
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (*v6 & 0x40) != 0 )
    {
LABEL_3:
      v23 = 1;
      goto LABEL_4;
    }
    a3 = 2LL;
    goto LABEL_47;
  }
  a3 = v3;
  if ( v3 == 3 )
  {
    v3 = 3;
    if ( (*v6 & 0x40) != 0 )
      goto LABEL_3;
    v13 = v6;
  }
  else
  {
    if ( v3 != 4 )
    {
LABEL_47:
      v13 = v6;
      if ( v3 == 6 && (*v6 & 0x40) != 0 )
        goto LABEL_3;
      goto LABEL_30;
    }
    v3 = 4;
    if ( (*v6 & 0x40) != 0 )
      goto LABEL_3;
    v13 = (_BYTE *)(v5 + 4);
  }
LABEL_30:
  v23 = 0;
  v3 = a3;
  v6 = v13;
LABEL_4:
  if ( v3 == 2 )
  {
    v6 = (_BYTE *)(v5 + 4);
    if ( (*(_BYTE *)(v5 + 4) & 0x80) != 0 )
    {
LABEL_6:
      v8 = 1;
      goto LABEL_7;
    }
  }
  else if ( v3 == 3 )
  {
    if ( (*v6 & 0x80) != 0 )
      goto LABEL_6;
LABEL_51:
    if ( v3 != 6 )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( v3 != 4 )
    goto LABEL_51;
LABEL_38:
  if ( (*v6 & 0x80) != 0 )
    goto LABEL_6;
LABEL_39:
  v8 = 0;
LABEL_7:
  if ( v3 == 2 )
  {
    if ( (*(_BYTE *)(v5 + 4) & 3) != 0 )
    {
LABEL_9:
      v24 = 1;
      goto LABEL_10;
    }
  }
  else if ( v3 == 3 )
  {
    if ( (*(_BYTE *)(v5 + 4) & 3) != 0 )
      goto LABEL_9;
LABEL_33:
    if ( v3 != 6 )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( v3 != 4 )
    goto LABEL_33;
LABEL_34:
  if ( (*(_BYTE *)(v5 + 4) & 3) != 0 )
    goto LABEL_9;
LABEL_35:
  v24 = 0;
LABEL_10:
  if ( v3 == 2 )
  {
    if ( (*(_BYTE *)(v5 + 4) & 0xC) != 0 )
    {
LABEL_12:
      v9 = 1;
      goto LABEL_13;
    }
  }
  else if ( v3 == 3 )
  {
    if ( (*(_BYTE *)(v5 + 4) & 0xC) != 0 )
      goto LABEL_12;
LABEL_45:
    if ( v3 != 6 )
      goto LABEL_46;
    goto LABEL_42;
  }
  if ( v3 != 4 )
    goto LABEL_45;
LABEL_42:
  if ( (*(_BYTE *)(v5 + 4) & 0xC) != 0 )
    goto LABEL_12;
LABEL_46:
  v9 = 0;
LABEL_13:
  if ( v3 != 2 )
  {
    if ( v3 == 3 )
    {
      if ( (*(_BYTE *)(v5 + 4) & 0x30) != 0 )
        goto LABEL_15;
      goto LABEL_23;
    }
LABEL_22:
    if ( v3 == 4 )
    {
LABEL_24:
      if ( (*(_BYTE *)(v5 + 4) & 0x30) != 0 )
        goto LABEL_15;
LABEL_25:
      v10 = 0;
      goto LABEL_16;
    }
LABEL_23:
    if ( v3 != 6 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(v5 + 4) & 0x30) == 0 )
    goto LABEL_22;
LABEL_15:
  v10 = 1;
LABEL_16:
  v11 = ResetInteractionContext(a2, v6, a3, 3LL);
  if ( v11 >= 0 )
  {
    v11 = SetPropertyInteractionContext(a2, 1LL);
    if ( v11 >= 0 )
    {
      v11 = SetPropertyInteractionContext(a2, 3LL);
      if ( v11 >= 0 )
      {
        v11 = SetPropertyInteractionContext(a2, 2LL);
        if ( v11 >= 0 )
        {
          v14 = ((~*(_BYTE *)(v5 + 16) & 2) << 10) | 1;
          if ( *(float *)(v5 + 8) != 0.0 )
            v14 = ((~*(_BYTE *)(v5 + 16) & 2) << 10) | 0x101;
          if ( *(float *)(v5 + 12) != 0.0 )
            v14 |= 0x200u;
          v15 = v14 | 2;
          if ( !v24 )
            v15 = v14;
          v16 = v15 | 4;
          if ( !v9 )
            v16 = v15;
          v17 = v16 | 0x10;
          if ( !v10 )
            v17 = v16;
          v18 = v17 | 0x10000000;
          if ( *(_DWORD *)v5 != 3 )
            v18 = v17;
          v19 = v18 | 0x40000000;
          if ( (*(_BYTE *)(v5 + 16) & 1) == 0 )
            v19 = v18;
          if ( *(_DWORD *)(v5 + 20) == 1 )
          {
            v19 = v19 & 0x7FFFFCFF | 0x80000100;
          }
          else if ( *(_DWORD *)(v5 + 20) == 2 )
          {
            v19 = v19 & 0x7FFFFCFF | 0x80000200;
          }
          v30[0] = 1;
          v30[1] = v19;
          v30[2] = 2;
          v30[4] = 4;
          v30[3] = v23 != 0 ? 5 : 0;
          v30[5] = v8 != 0 ? 5 : 0;
          v11 = SetInteractionConfigurationInteractionContext(a2, 3LL, v30);
          if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
          {
            v25 = v11;
            v26 = v8 != 0 ? 5 : 0;
            v27 = v23 != 0 ? 5 : 0;
            v28 = v19;
            v29 = this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v20,
              byte_1803B6789,
              v21,
              v22,
              (__int64)&v29,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v25);
          }
          if ( v11 >= 0 )
          {
            v11 = RegisterOutputCallbackInteractionContext(
                    a2,
                    CInteractionContextWrapper::s_InteractionContextCallback,
                    this);
            if ( v11 >= 0 && (!v23 && *((_DWORD *)this + 6) == 2 || !v8 && *((_DWORD *)this + 6) == 4) )
              *((_QWORD *)this + 3) = 0LL;
          }
        }
      }
    }
  }
  return (unsigned int)v11;
}
