/*
 * XREFs of ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x180089CB4
 * Callers:
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180089BC4 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18000338C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpActivityHostIsGpuInterfering(struct _RM_ACTIVITY_HOST *a1, unsigned __int8 *a2)
{
  char v2; // al
  __int64 result; // rax
  __int64 v6; // r8
  unsigned __int8 v7; // di
  __int64 v8; // rcx
  __int64 v9; // r9
  struct _RM_ACTIVITY_HOST *v10; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v2 = *((_BYTE *)a1 + 648);
  v11 = 0LL;
  result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, unsigned __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 88LL))(
             (char *)a1 + 544,
             *((unsigned int *)a1 + 153),
             (char *)a1 + 80,
             *((unsigned int *)a1 + 154),
             *((_QWORD *)a1 + 4),
             v2 != 0 ? 4 : 0,
             &v11);
  if ( (int)result >= 0 )
  {
    v6 = v11;
    if ( v11 <= *((_QWORD *)a1 + 153) )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
      {
        v12 = v6;
        v13 = v9;
        v10 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v8,
          (__int64)&unk_1800D36D2,
          v6,
          v9,
          (__int64)&v10,
          (__int64)&v13,
          (__int64)&v12);
        v6 = v11;
      }
      *((_QWORD *)a1 + 153) = v6;
    }
    *a2 = v7;
    return 0LL;
  }
  return result;
}
