/*
 * XREFs of ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045B40
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045A94 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?RmpSystemSetActivityHostQoS@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180045CE4 (-RmpSystemSetActivityHostQoS@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18004630C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 */

__int64 __fastcall RmpQoSSetForHost(struct _RM_QOS_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2, int a3)
{
  unsigned int v5; // edx
  int v6; // eax
  DWORD v7; // r15d
  int v8; // esi
  _QWORD *Value; // rdi
  __int64 *v10; // rax
  __int64 v11; // r8
  int v13; // r8d
  int v14; // r9d
  int v16; // [rsp+78h] [rbp+10h] BYREF
  bool v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  if ( a3 )
    v5 = *((unsigned __int8 *)a1 + 32);
  else
    v5 = 0;
  v6 = RmpSystemSetActivityHostQoS(a2, v5);
  v7 = HampLockTrackerId;
  v8 = v6;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive((__int64)a2 + 56);
  if ( v8 < 0 )
  {
    if ( !a3 )
      *((_BYTE *)a2 + 1204) &= ~4u;
  }
  else
  {
    *((_BYTE *)a2 + 1204) ^= (*((_BYTE *)a2 + 1204) ^ (4 * a3)) & 4;
    v8 = 0;
  }
  if ( HampLockTrackerId != -1 )
  {
    v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v11 = *v10;
    if ( (*v10 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v10[2]-- == 1 )
      *v10 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a2 + 16) = 0;
  RtlReleaseSRWLockExclusive((char *)a2 + 56);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 0x11) != 0 && (qword_1800E1290 & 0x11) == qword_1800E1290 )
  {
    v18 = *((_QWORD *)a2 + 4);
    v16 = v8;
    v17 = a3 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (unsigned int)&dword_1800E1278,
      (unsigned int)&unk_1800D41AE,
      v13,
      v14,
      (__int64)&v16,
      (__int64)&v18,
      (__int64)&v17);
  }
  return (unsigned int)v8;
}
