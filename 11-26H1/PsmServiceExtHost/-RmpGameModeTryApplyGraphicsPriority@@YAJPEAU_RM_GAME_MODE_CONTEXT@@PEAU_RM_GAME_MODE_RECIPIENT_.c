/*
 * XREFs of ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180065C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18002E8C4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?RmpSystemSetGpuMemoryBudget@@YAJKK@Z @ 0x180065D4C (-RmpSystemSetGpuMemoryBudget@@YAJKK@Z.c)
 *     ?RmpSystemSetGpuYieldPercentage@@YAJKPEAU_D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS@@@Z @ 0x180065D9C (-RmpSystemSetGpuYieldPercentage@@YAJKPEAU_D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeTryApplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  int *v4; // rdi
  int v7; // ebx
  int v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+44h] [rbp-2Ch] BYREF
  int v11; // [rsp+48h] [rbp-28h] BYREF
  int v12; // [rsp+4Ch] [rbp-24h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  v4 = (int *)((char *)a2 + 128);
  if ( (*((_BYTE *)a1 + 149) & 1) != 0 )
  {
    v7 = -1073741637;
  }
  else
  {
    v15 = *v4;
    v13 = 16LL;
    v14 = 0;
    v7 = D3DKMTSetYieldPercentage(&v13);
    if ( v7 >= 0 )
    {
      v7 = RmpSystemSetGpuMemoryBudget(*((_DWORD *)a2 + 33), *((_DWORD *)a2 + 34));
      if ( v7 < 0 )
        RmpSystemSetGpuYieldPercentage(*((_DWORD *)a1 + 12), (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 60));
      else
        v7 = 0;
    }
  }
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v9 = *((_DWORD *)a2 + 34);
    v10 = *((_DWORD *)a2 + 33);
    v11 = *v4;
    v12 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E1278,
      byte_1800D2B35,
      a3,
      a4,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  return (unsigned int)v7;
}
