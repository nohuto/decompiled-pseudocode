/*
 * XREFs of ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003ECF0
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000A750 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18003EE3C (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18003EE98 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x18003EF08 (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003F124 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpPowerBoostStartTimedBoost(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  int v5; // r8d
  int v6; // r9d
  unsigned __int64 UnbiasedInterruptTimeMs64; // rax
  unsigned __int64 v8; // rcx
  int v9; // edx
  int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = (__int64)a1;
  v2 = RmSvcGlobals;
  v3 = a2;
  v4 = (char *)RmSvcGlobals + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 104));
  if ( (*((_BYTE *)v2 + 3536) & 1) != 0 )
  {
    v10 = -1073741585;
    goto LABEL_9;
  }
  if ( (v4[64] & 4) == 0 )
  {
    v10 = RmpSystemApplyAppLaunchPowerBoost(1u);
    if ( v10 < 0 )
      goto LABEL_9;
    *((_DWORD *)v4 + 16) |= 4u;
  }
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  v8 = *((_QWORD *)v4 + 6);
  v5 = UnbiasedInterruptTimeMs64;
  if ( v8 <= UnbiasedInterruptTimeMs64 + v3 )
    v8 = UnbiasedInterruptTimeMs64 + v3;
  v9 = *((_DWORD *)v4 + 16);
  *((_QWORD *)v4 + 6) = v8;
  if ( (v9 & 8) == 0 )
  {
    if ( UnbiasedInterruptTimeMs64 >= v8 )
    {
      *((_DWORD *)v4 + 16) = v9 & 0xFFFFFFF7;
    }
    else
    {
      *((_DWORD *)v4 + 16) = v9 | 8;
      v12 = -10000LL * (unsigned int)(v8 - UnbiasedInterruptTimeMs64);
      TpSetTimer(*((_QWORD *)v4 + 7), &v12, 0LL, 0LL);
    }
  }
  v10 = 0;
LABEL_9:
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
  {
    v13 = *((_QWORD *)v4 + 6);
    LODWORD(v12) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E12B0,
      (unsigned int)&unk_1800D2501,
      v5,
      v6,
      (__int64)&v12,
      (__int64)&v13);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v4);
  return (unsigned int)v10;
}
