/*
 * XREFs of ?GetLastSetEffectPack@CEndpointCharacteristics@@AEBAXAEAU_LAST_SET_EFFECTPACK_METADATA@@@Z @ 0x180139E78
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180091814 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004EB10 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointCharacteristics::GetLastSetEffectPack(
        CEndpointCharacteristics *this,
        struct _LAST_SET_EFFECTPACK_METADATA *a2)
{
  _OWORD *v4; // rax
  _DWORD *v5; // rcx
  int v6; // [rsp+30h] [rbp-49h] BYREF
  int v7; // [rsp+34h] [rbp-45h] BYREF
  int v8; // [rsp+38h] [rbp-41h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-39h] BYREF
  _OWORD *v10; // [rsp+50h] [rbp-29h]
  _BYTE v11[32]; // [rsp+60h] [rbp-19h] BYREF
  struct _LAST_SET_EFFECTPACK_METADATA *v12; // [rsp+80h] [rbp+7h]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  int *v14; // [rsp+90h] [rbp+17h]
  __int64 v15; // [rsp+98h] [rbp+1Fh]
  int *v16; // [rsp+A0h] [rbp+27h]
  __int64 v17; // [rsp+A8h] [rbp+2Fh]
  int *v18; // [rsp+B0h] [rbp+37h]
  __int64 v19; // [rsp+B8h] [rbp+3Fh]

  v10 = 0LL;
  *(_OWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = v10;
  *((_DWORD *)a2 + 6) = 0;
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &PKEY_AudioEndpoint_LastSetEffectPack,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && LODWORD(pvar[1]) == 28 )
  {
    v4 = v10;
    *(_OWORD *)a2 = *v10;
    *((_QWORD *)a2 + 2) = *((_QWORD *)v4 + 2);
    *((_DWORD *)a2 + 6) = *((_DWORD *)v4 + 6);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 1036);
  if ( *v5 > 5u )
  {
    v6 = *((_DWORD *)a2 + 6);
    v7 = *((_DWORD *)a2 + 5);
    v8 = *((_DWORD *)a2 + 4);
    v18 = &v6;
    v19 = 4LL;
    v16 = &v7;
    v17 = 4LL;
    v14 = &v8;
    v15 = 4LL;
    v12 = a2;
    v13 = 16LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v5, byte_1801ABB8A, 0LL, 0LL, 6, (__int64)v11);
  }
  PropVariantClear(pvar);
}
