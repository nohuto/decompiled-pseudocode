/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180067B70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@34@Z @ 0x180002FAC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _DWORD *a4)
{
  __int64 v4; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+A8h] [rbp+28h] BYREF
  unsigned int v20; // [rsp+B8h] [rbp+38h] BYREF

  v4 = *(_QWORD *)a4;
  v17[1] = a2;
  v17[3] = v4;
  LODWORD(v4) = a4[4];
  v17[0] = 40LL;
  v18 = 0LL;
  v17[2] = v4 & 2 | ((unsigned int)v4 >> 1) & 1;
  v8 = D3DKMTTrimProcessCommitment(v17);
  v12 = v18;
  v13 = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)a4 + 1) += v18;
    v13 = 0;
  }
  if ( (unsigned int)dword_1800E1278 > 5 && (byte_1800E1288 & 0x11) != 0 && (qword_1800E1290 & 0x11) == qword_1800E1290 )
  {
    v16 = *((_QWORD *)a1 + 4);
    v15 = v12;
    v19 = a3;
    v20 = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v9,
      (__int64)&unk_1800D20BF,
      v10,
      v11,
      (__int64)&v20,
      (__int64)&v16,
      (__int64)&v19,
      (__int64)&v15);
  }
  return v13;
}
